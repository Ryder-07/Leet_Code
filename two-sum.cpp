class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map; // create a hash map
        for (int i = 0; i < nums.size(); i++) { // loop through the array
            int complement = target - nums[i]; // calculate the complement
            if (map.count(complement)) { // check if the complement exists in the map
                return {map[complement], i}; // return the indices
            }
            map[nums[i]] = i; // store the element and its index in the map
        }
        return {}; // no solution found
    }
};
