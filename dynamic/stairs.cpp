int f(int ind){
    if(ind == 0) return 1;
    if(ind == 1) return 0;
    return f(ind - 1) + f(ind - 2);
}