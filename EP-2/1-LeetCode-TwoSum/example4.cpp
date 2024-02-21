#include <vector>
#include <iostream>

using namespace std;
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            int x = nums[i];
            for (int j = 0; j < nums.size(); j++)
            {
                int y = nums[j];

                if (i != j && x + y == target)
                {
                    return {i, j};
                }
            }
        }
        return {};
    }
};
