class Solution {
public:
    int removeDuplicates(vector<int>& v) {
        int count = 0;
        int n = v.size();
        
       
        vector<int>::iterator ip;
        ip = std::unique(v.begin(), v.begin() +n );
        v.resize(std::distance(v.begin(), ip));
        
        return v.size(); 
        
    }
};
