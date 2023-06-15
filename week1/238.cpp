// 238. Product of Array Except Self

class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        vector<int> s;

        for (int i = 0; i < nums.size(); i++)
        {
            int x = 1;
            for (int j = 0; j < nums.size(); j++)
            {
                if (i != j)
                {
                    x *= nums[j];
                }
            }
            s.push_back(x);
        }
        return s;
    }
};