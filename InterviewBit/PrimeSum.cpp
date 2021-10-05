bool isPrime(int n)
{
    for(int i=2; i*i<=n; ++i)
    {
        if(n%i==0)
            return false;
    }
    return true;
}


vector<int> Solution::primesum(int A) {
    // vector<int> v;
    // bool b = true;
    // for(int i = 2 ;i<A;i++){
    //     for(int j = 2; j<A;j++){
    //         if(i%j==0){
    //             b = false;
    //             break;
                
    //         }
            
    //     }
    //     if(b==true)
    //     v.push_back(i);
    // }
    // vector<int> ans;
    // for(int i =0;i< v.size();i++){
    //     for(int j = i;j<v.size();j++){
    //         if(v[i]+v[j]==A){
    //             ans.push_back(i);
    //             ans.push_back(j);
    //         }
            
    //     }
    // }
    // return ans;
     vector<int> result;
    if(A<3)
        return result;
    vector<bool> arr(A+1, 0); //vector<int> causes judge memory overflow.
    
    for (int i=2; i<=A; ++i)
    {
        if(arr[i]==0)
        {
            //prime.emplace_back(i);
            if(isPrime(A-i))
            {
                result.emplace_back(i);
                result.emplace_back(A-i);
                break;
            }
            for(int j=i; i*j<=A; ++j)
                arr[i*j] = 1;
        }   
    }
    return result;
}
