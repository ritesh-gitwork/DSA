class Solution {
public:
    bool check(vector<int>& num) {

        int count=0;
        int n = num.size();

        for(int i= 0;i<n;i++){
            if(num[i]>num[(i+1)%n]){
                count++;

            }
        
        
        }
        return count <=1;
        
    }
};