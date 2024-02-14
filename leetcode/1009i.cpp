class Solution {
public:
    int bitwiseComplement(int n) {

        if (n == 0)
            return 1;
        int len = 0, a = n, res = 0;

        while (a != 0) {
            len++;
            a >>= 1;
        }

        for (int i = len - 1; i >= 0; i--) {
            res = (res << 1) | (!((n >> i) & 1));
        }

        return res;
    }
};
