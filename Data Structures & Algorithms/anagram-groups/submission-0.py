class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        anagram_map = defaultdict(list)

        for i, mot in enumerate(strs):
            cle = ''.join(sorted(mot))
            anagram_map[cle].append(mot)
        
        return list(anagram_map.values())