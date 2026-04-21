class Solution:

    def encode(self, strs: List[str]) -> str:
        temp =""
        for s in strs: 
            temp += str(len(s))+ "#"+ s
        
        return temp

    def decode(self, s: str) -> List[str]:
        temp, i = [], 0

        while i < len(s):
            j = i
            while s[j] != "#":
                j = j + 1
            length = int(s[i:j])
            temp.append(s[j+1 : j + 1 + length])
            i = j + 1 + length

        return temp
