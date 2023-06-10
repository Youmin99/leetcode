class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> s;
        for(int i= 0; i<nums.size(); i++)
        {
            int m =target - nums[i];
             for(int j = i+1; j<nums.size(); j++){
                 if (m == nums[j])
                   {              
                       s.push_back(i);
                       s.push_back(j);    
                   } 
             }
        }
        return s;
    }
};