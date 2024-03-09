vector<int> alternateNumbers(vector<int>&a) {
    // Write your code here.
    int poscnt = 0, negcnt = 0, n =a.size(), cnt = 0, pos = 0, neg = 1;
    for(auto &i : a)poscnt += (i>=0);
    negcnt = n - poscnt;
    int equalcnt = min(poscnt, negcnt);
    if(poscnt == 0)neg = 0;
    poscnt = 0, negcnt = 0;

    vector<int> res(n);

    for(auto &i : a){
        if(i>=0){
            res[pos] = i;
            poscnt++;
            if(poscnt >= equalcnt)pos++;
            else pos += 2;
        }
        else{
            res[neg] = i;
            negcnt++;
            if(negcnt >= equalcnt)neg++;
            else neg += 2;
        }
    }

    return res; 

}
