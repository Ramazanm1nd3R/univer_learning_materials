# Redistribute Characters to Make All Strings Equal
from typing import List

class Solution:
    def makeEqual(self, words: List[str]) -> bool:
        freq = {}

        for word in words:
            for letter in word:
                if letter in freq:
                    freq[letter] += 1
                else:
                    freq[letter] = 1
        n = len(words)
        for count in freq.values():
            if count % n != 0:
                return False
        
        return True

print(Solution().makeEqual(["abc","aabc","bc"]))