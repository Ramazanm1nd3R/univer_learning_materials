#Take Gifts From the Richest Pile
from typing import List
import math

class Solution:
    def pickGifts(self, gifts: List[int], k: int) -> int:
        counter = 0
        while counter < k:
            max_el = None
            max_el_ind = None
            for i in range(len(gifts)):
                if max_el is None or max_el < gifts[i]:
                    max_el_ind = i
                    max_el = gifts[i]
            
            gifts[max_el_ind] = int(math.sqrt(gifts[max_el_ind]))
            counter += 1
        
        return sum(gifts)
    
print(Solution().pickGifts(gifts = [25,64,9,4,100], k = 4))