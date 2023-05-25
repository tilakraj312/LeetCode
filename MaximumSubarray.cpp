/*Kadanes Algo
Pseudo:
int max_far = INT_MIN
max _end = 0
/Loop for each element of the array
  (a) max_ending_here = max_ending_here + a[i]
  (b) if(max_so_far < max_ending_here)
            max_so_far = max_ending_here
  (c) if(max_ending_here < 0)
            max_ending_here = 0
return max_so_far
*/
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_far = INT_MIN;
        int max_end = 0;
        for(int i = 0; i< nums.size(); i++){
           max_end = max_end + nums[i] ;
           if(max_far < max_end){
               max_far = max_end;
           }
           if(max_end < 0 ){
            max_end  = 0 ;
           }
        }
      return {max_far}  ;
    }
};

