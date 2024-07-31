#include <string>
#include <unordered_map>

//242 valid anagram
class Solution {
public:
    bool isAnagram(std::string s, std::string t) {

        std::unordered_map<char, int> compare;

        for (auto e : s)
        {
            compare[e]++;
        }

        for (auto f : t)
        {
            compare[f]--;
        }

        for (auto g : compare)
        {
            if (g.second != 0)
                return false;
        }

        return true;
        
    }
};
