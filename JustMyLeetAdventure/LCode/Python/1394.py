# Find Lucky Integer in an Array
from typing import List

class Solution:
    def findLucky(self, arr: List[int]) -> int:
        freq = {}

        for el in arr:
            if el in freq:
                freq[el] += 1
            else:
                freq[el] = 1
            
        luckyLetters = []
        for key, val in freq.items():
            if key == val:
                luckyLetters.append(key)

        return max(luckyLetters) if luckyLetters else -1

print(Solution().findLucky([2,2,3,4]))