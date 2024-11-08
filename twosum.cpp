#include <vector>
#include <unordered_map>
#include <algorithm>  

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int, int> numsHash; //numsHash is a hash map of nums
        vector<int> ansVector;


        for (int i=0; i < nums.size(); i++) //Using a loop to put all the elements in nums into numsHash, where the element is the key and the index is the value
        {
            numsHash[nums[i]] = i;
        }

        for (int i=0; i < nums.size(); i++) 
        { 

            int ans = target-nums[i]; //mminus target from current number to get the answer that we are attempting to look for
            if (numsHash.find(ans) != numsHash.end() && i != numsHash[ans]) //try to find the answer in the hashmap, making sure that the indexes are not the same (so as to not add the same element into the answer vector)
            {
                ansVector.push_back(i);
                ansVector.push_back(numsHash[ans]);
                break;
            }

        }
    
        return ansVector;
    }
};
