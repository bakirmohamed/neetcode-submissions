class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
      unordered_set<int> uniqueValues;

      for(int num : nums)
      {
        if(uniqueValues.find(num) != uniqueValues.end())
            {
                return true;
            }
        else
            uniqueValues.insert(num);
      }  

      return false;
    }
};