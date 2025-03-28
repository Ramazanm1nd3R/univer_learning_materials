# Find Words That Can Be Formed by Characters
from typing import List

class Solution:
    def countCharacters(self, words: List[str], chars: str) -> int:
        counter = 0

        freq = {}
        for char in chars:
            if char in freq:
                freq[char] += 1
            else:
                freq[char] = 1
        
        for word in words:
            local_freq = freq.copy()
            check = True
            for lett in word:
                if lett in local_freq and local_freq[lett] > 0:
                    local_freq[lett] -= 1
                else:
                    check = False
                    break
            if check:
                counter += len(word)

        
        return counter

print(Solution.countCharacters(["cat","bt","hat","tree"], "atach"))