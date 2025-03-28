# Top K Frequent Elements
from typing import List

class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        freq = {}

        for el in nums:
            if el in freq:
                freq[el] += 1
            else:
                freq[el] = 1

        freqList = []

        for key, val in freq.items():
            freqList.append([key, val])
        
        freqList.sort(key=lambda x : x[1], reverse=True)
        return [item[0] for item in freqList[:k]]

print(Solution().topKFrequent([1,1,1,2,2,3], 2))