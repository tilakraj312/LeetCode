class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int a = INT_MIN;
        int b = 1;
        for (int i = 0; i < nums.size(); i++){
            b = b *nums[i];
            if(a < b){
            a = b;
            
            }
            if(b < 1){
            b = 0;
            
            }
        }
        return {a};
    }    
};
