int fibonacci(int n ,vector<int>&res){
    if(n<=1) return n;
    if(res[n]!= -1) return res[n];
    return res[n] = fibonacci(n-1,res) + fibonacci(n,res); 
}
int main(){
    int n;
    cin>>n;
    cout<<fibonacci(n);
}