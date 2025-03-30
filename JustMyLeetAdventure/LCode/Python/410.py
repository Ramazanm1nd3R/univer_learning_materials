# Split Array Largest Sum
from typing import List

class Solution:
    def splitArray(self, nums: List[int], k: int) -> int:
        def isPossible(maxSum):
            current_sum = 0
            parts = 1

            for num in nums:
                if current_sum + num > maxSum:
                    parts += 1
                    current_sum = num
                else:
                    current_sum += num

            return parts <= k
        
        left = max(nums)
        right = sum(nums)

        while left < right:
            mid = (left + right) // 2

            if isPossible(mid):
                right = mid
            else:
                left = mid + 1
        
        return left

print(Solution().splitArray([7,2,5,10,8], 2))