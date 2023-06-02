class Solution {
public:
    int findMin(vector<int>& nums) {
       int Left = 0;
       int  Right = nums.size()-1;
       
       while(Left < Right)
       {
        int mid = Left + (Right- Left) /2 ;
        if (nums[mid]> nums[Right])
        {
        Left = mid +1 ;

       }else {
       Right =mid;
       }
    }
    
    return {nums[Left]};
     }
   
};
