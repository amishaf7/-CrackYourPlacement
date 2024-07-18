 long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    sort(a.begin(),a.end());
    long long dif=n-m;
    if(dif==0){
        return a[n-1]-a[0];
    }
  long long ans = LLONG_MAX;
   // int u=(n-1)-m-1;
    for(int i=0;i<=n-m;i++){
        ans=min(ans,a[i+m-1]-a[i]);
    }
    return ans;
    }   
