# Minimum Rounds to Complete All Tasks
from typing import List

class Solution:
    def minimumRounds(self, tasks: List[int]) -> int:
        freq = {}
        rounds = 0
        
        for el in tasks:
            if el in freq:
                freq[el] += 1
            else:
                freq[el] = 1
        
        for count in freq.values():
            if count == 1:
                return -1
            
            rounds += (count + 2) // 3
        
        return rounds
            

print(Solution().minimumRounds([2,2,3,3,2,4,4,4,4,4]))