class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int sum = 0, smax = nums[0];
        for (int num : nums)
        {
            sum += num;
            smax = max(smax, sum);
            if (sum < 0)
            {
                sum = 0;
            }
        }
        return smax;
    }
};