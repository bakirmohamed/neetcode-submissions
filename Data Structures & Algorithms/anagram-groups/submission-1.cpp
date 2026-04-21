class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> temp;
        for(int i = 0; i<strs.size(); i++)
        {   
            string value = strs[i];
            std::sort(value.begin(), value.end());
           
            temp[value].push_back(strs[i]);
            
            
        }   
        vector<vector<string>> result;

        for (auto& pair : temp) {
            result.push_back(pair.second);
        }
        return result;
}};
