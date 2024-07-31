#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>

//217 contains duplicate
class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        std::unordered_set<int> numbers;

        for (auto e : nums)
        {
            if (numbers.find(e) != numbers.end())
                return true;
            numbers.insert(e);

        }
        return false;
    }
};
