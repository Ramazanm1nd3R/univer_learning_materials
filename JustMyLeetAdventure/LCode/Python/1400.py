# Construct K Palindrome Strings
class Solution:
    def canConstruct(self, s: str, k: int) -> bool:
        freq = {}

        for el in s:
            if el in freq:
                freq[el] += 1
            else:
                freq[el] = 1
        
        oddFrequencyElementsCount = 0

        for key, val in freq.items():
            if val % 2 != 0:
                oddFrequencyElementsCount += 1
        
        if oddFrequencyElementsCount <= k and k <= len(s):
            return True
        
        return False
print(Solution().canConstruct("annabelle", 2))