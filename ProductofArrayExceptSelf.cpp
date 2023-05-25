//two-pass approach
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       int n = nums.size();
        vector<int> leftProduct(n, 1), rightProduct(n, 1), output(n);

    for (int i = 1; i < n; i++) {
        leftProduct[i] = nums[i - 1] * leftProduct[i - 1];
    }

    for (int i = n - 2; i >= 0; i--) {
        rightProduct[i] = nums[i + 1] * rightProduct[i + 1];
    }

    for (int i = 0; i < n; i++) {
        output[i] = leftProduct[i] * rightProduct[i];
    }

    return output;
        }
     
};
