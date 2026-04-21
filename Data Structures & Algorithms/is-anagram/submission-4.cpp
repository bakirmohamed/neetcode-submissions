class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        std::unordered_map<char, int> compteur;

        for (char c : s) compteur[c]++;
        for (char c : t) compteur[c]--;

        for (auto& [lettre, count] : compteur)
            if (count != 0) return false;

        return true;
    }
};
