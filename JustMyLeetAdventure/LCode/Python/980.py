# Unique Paths III
from typing import List

class Solution:
    def uniquePathsIII(self, grid: List[List[int]]) -> int:
        m, n = len(grid), len(grid[0])
        empty = 0
        start_x = start_y = 0

        for i in range(m):
            for j in range(n):
                if grid[i][j] == 0:
                    empty += 1
                elif grid[i][j] == 1:
                    start_x, start_y = i, j

        def dfs(x, y, remain):
            if not (0 <= x < m and 0 <= y < n) or grid[x][y] == -1:
                return 0

            if grid[x][y] == 2:
                return 1 if remain == -1 else 0

            temp = grid[x][y]
            grid[x][y] = -1
            total = 0

            for dx, dy in [(-1,0), (1,0), (0,-1), (0,1)]:
                total += dfs(x + dx, y + dy, remain - 1)

            grid[x][y] = temp
            return total

        return dfs(start_x, start_y, empty)

print(Solution().uniquePathsIII([[1,0,0,0],[0,0,0,0],[0,0,2,-1]]))