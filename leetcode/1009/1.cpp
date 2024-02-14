class Solution {
public:
    int bitwiseComplement(int n) {
        if (n == 0)
            return 1;
        int a = n, mask = 0;
        while (a != 0) {
            mask = (mask << 1) | 1;
            a >>= 1;
        }
        return mask & ~n;
    }
};
