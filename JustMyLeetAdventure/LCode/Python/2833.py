# Furthest Point From Origin
class Solution:
    def furthestDistanceFromOrigin(self, moves: str) -> int:
        freq = {}

        for el in moves:
            if el != '_':
                if el in freq:
                    freq[el] += 1
                else:
                    freq[el] = 1
        
        maxVal = None
        mostCommonMove = None

        for key, val in freq.items():
            if maxVal is None or maxVal < val:
                maxVal = val
                mostCommonMove = key

        if mostCommonMove is None:
            return len(moves)
        moves = moves.replace('_', mostCommonMove)

        pos = 0
        for move in moves:
            if move == 'R':
                pos += 1
            elif move == 'L':
                pos -= 1

        return abs(pos)


print(Solution().furthestDistanceFromOrigin('L_RL__R'))
