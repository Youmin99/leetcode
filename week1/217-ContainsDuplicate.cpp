// first 세모  -->time complexcity o(n^2)
class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] == nums[j])
                    return true;
            }
        }
        return false;
    }
};

// second  --> time complexcity o( n* log n)

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {

        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] == nums[i + 1])
                return true;
        }
        return false;
    }
};