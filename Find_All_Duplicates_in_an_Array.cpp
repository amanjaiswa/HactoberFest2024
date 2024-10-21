Example 1:

Input: nums = [4,3,2,7,8,2,3,1]
Output: [2,3]
Example 2:

Input: nums = [1,1,2]
Output: [1]
Example 3:

Input: nums = [1]
Output: []


  //////////////////////////////////////////////



class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
        vector<int>ans;
        
        sort(nums.begin(), nums.end());
        
        for(int i =0; i<nums.size()-1; i++){
            if(nums[i]==nums[i+1])  {
                ans.push_back (nums[i]);
            }
        }
        
         
        return ans;
        
    }
};
