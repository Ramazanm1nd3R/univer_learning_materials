# Subarrays with K Different Integers
from typing import List

class Solution:
    def subarraysWithKDistinct(self, nums: List[int], k: int) -> int:
        # subsWithDifferentIntegers = 0

        # for i in range(len(nums)):
        #     for j in range(1, len(nums) - i + 1):
        #         if len(set(nums[i:i+j])) == k:
        #             subsWithDifferentIntegers += 1
        # return subsWithDifferentIntegers

        def atMost(k):
            count = {}
            left = 0
            result = 0

            for right in range(len(nums)):
                num = nums[right]

                if num in count:
                    count[num] += 1
                else:
                    count[num] = 1
                    k -= 1
                
                while k < 0:
                    leftNum = nums[left]
                    count[leftNum] -= 1

                    if count[leftNum] == 0:
                        del count[leftNum]
                        k += 1
                    left += 1
                
                result += right - left + 1
            return result
        
        return atMost(k) - atMost(k - 1)
print(Solution().subarraysWithKDistinct([1,2,1,2,3], 2))