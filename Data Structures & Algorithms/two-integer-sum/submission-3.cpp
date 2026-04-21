class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    std::unordered_map<int, int> vu;  // valeur → index

    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];

        if (vu.count(complement)) {
            return {vu[complement], i};  // trouvé !
        }

        vu[nums[i]] = i;  // on mémorise pour la suite
    }
    return {};
}
};