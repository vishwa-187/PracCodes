int sum = 0;
//here m is map 
//i is iterator
        for(auto i : m){
            if(i.second==1){
                sum = sum + i.first;
            }
        }
        return sum;
