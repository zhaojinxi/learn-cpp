#include <iostream>
#include <vector>

int main()
{
    std::vector<int> nums{4, 2, 6, 8, 9, 0, 7};
    int target{12};
    bool found{false};
    for (int i {0}; i != nums.size(); i++)
    {
        for (int j{i + 1}; j != nums.size(); j++)
        {
            if (nums[i] + nums[j] == target)
            {
                std::cout << i << "," << j << " ";
                found = true;
            }
            if (found)
            {
                break;
            }
        }
        if (found)
        {
            break;
        }
    }
}