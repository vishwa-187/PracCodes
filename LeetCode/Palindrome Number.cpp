class Solution {
public:
    bool isPalindrome(int x) {
        long long int num=0;
        long long int num2 = x;
        if( x > 0){
            
            while(x>0)
            {
                num = num*10 + x%10;
                x = x/10 ;
            
            }
            if( num2 == num){
                
                return true;
            }
            else{
                return false;
            }
        }
        else if( x < 0){
            return false;
        }
        else if( x== 0){
            return true;
        }
        return true;
    }
};
