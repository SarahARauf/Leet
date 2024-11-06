#include <vector>
#include <unordered_map>
#include <algorithm>  

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int, int> numsHash; //numsHash is a hash map of nums
        vector<int> ansVector;


        for (int i=0; i < nums.size(); i++)
        {
            numsHash[nums[i]] = i;
        }

        for (int i=0; i < nums.size(); i++)
        {

            int ans = target-nums[i];
            if (numsHash.find(ans) != numsHash.end() && i != numsHash[ans])
            {
                ansVector.push_back(i);
                ansVector.push_back(numsHash[ans]);
                break;
            }

        }
    
        return ansVector;
    }
};
