class Solution {
public:
    int reverse(int x) {
        int temp = 0; 
        long num =0;
        
        if(x< 0){
            x= (long)x*(-1);
            while( x>0){
                temp = x%10;
                num = num*10 + temp;
                x=x/10;     
        }
            num = num * (-1);
        }
        else if(x==0){
            num =0;
        }
        else{
            while( x>0){
                temp = x%10;
                num = num*10 + temp;
                x=x/10;     
        }
            
        }
        
        if(num>INT_MAX||num<INT_MIN){
                return 0;
        }
        
       
     return num;
    }
};
