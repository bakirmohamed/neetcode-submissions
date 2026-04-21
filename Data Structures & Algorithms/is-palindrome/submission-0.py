class Solution:
    def isPalindrome(self, s: str) -> bool:
        result = ''.join(c.lower() for c in s if c.isalnum())
        return result[:(len(s)//2)]== result[-1:-(len(s)//2 + 1):-1]   