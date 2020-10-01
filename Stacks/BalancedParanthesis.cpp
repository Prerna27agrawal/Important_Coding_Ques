int Solution::solve(string A) {
    int n = A.size();
    int sum = 0;
    for(int i=0;i<n; i++){
        if(A[i] =='(')
            sum+=1;
        else
            sum-=1;
        if(sum<0)   return 0;
    }
    if(sum==0)  return 1;
    return 0;
}
