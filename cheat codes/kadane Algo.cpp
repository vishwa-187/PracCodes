long long sum = 0;
        long long ref = INT_MIN;
        int i,j;
        
        for(i =0;i<n;i++){
            sum = sum + arr[i];
            if(sum > ref)
            ref = sum;
            if(sum < 0)
            sum = 0;
        }
        
        
        
        return ref;
