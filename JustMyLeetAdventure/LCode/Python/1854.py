# Maximum Population Year
from typing import List

class Solution:
    def maximumPopulation(self, logs: List[List[int]]) -> int:
        yearFreq = {}

        for b, d in logs:
            for year in range(b, d):
                if year in yearFreq:
                    yearFreq[year] += 1
                else:
                    yearFreq[year] = 1
        
        maxPopulation = 0
        maxYear = None
        
        for year in sorted(yearFreq.keys()):
            if yearFreq[year] > maxPopulation:
                maxPopulation = yearFreq[year]
                maxYear = year
        
        return maxYear

print(Solution().maximumPopulation([[1993,1999],[2000,2010]]))