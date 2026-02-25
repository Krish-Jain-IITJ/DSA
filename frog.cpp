int f(int ind){
    if(ind == 0) return 0;
    if(d[ind]  != -1) return d[ind];
    int left = f(ind - 1) + abs(d[ind] - d[ind-1]);
    int right = f(ind-2) + abs(d[ind] - d[ind-2]);
    return d[ind] = min(left , right);
} //time4 complexity on
