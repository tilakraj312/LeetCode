#include<iostream>
#include<vector>
#include<map>

class Solution{
public:
std::vector<int> twosum(std::vector<int> &nums, int target){
std::map<int,int> map;
for(int i = 0; i<nums.size(); i++){ //enum
    int c  = target - nums[i]; // c= complement
    if(map.find(c)!=map.end()) 
    {
        return{map[c],i};
    }
    map[nums[i]] = i;

}
return {};
}
};