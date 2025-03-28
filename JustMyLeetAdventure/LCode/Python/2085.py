# Count Common Words With One Occurrence
from typing import List

class Solution:
    def countWords(self, words1: List[str], words2: List[str]) -> int:
        def hashedList(lst):
            freq = {}

            for el in lst:
                if el in freq:
                    freq[el] += 1
                else:
                    freq[el] = 1
            
            return freq
        
        words1 = hashedList(words1)
        words2 = hashedList(words2)
        
        counter = 0
        for key, val in words1.items():
            if val == 1 and key in words2 and words2[key] == 1:
                counter += 1
        
        return counter

print(Solution().countWords(["leetcode","is","amazing","as","is"], words2 = ["amazing","leetcode","is"]))