#!/usr/bin/python3
"""
Island Perimeter
"""


def island_perimeter(grid):
    """function that returns the perimeter of the island described in grid"""
    count = 0
    for i in range(0, len(grid)):
        for j in range(0, len(grid[i])):
            if grid[i][j] == 1:
                count += 4
                if i > 0 and grid[i - 1][j] == 1:
                    count -= 1
                if i < len(grid) - 1 and grid[i + 1][j] == 1:
                    count -= 1
                if j > 0 and grid[i][j - 1] == 1:
                    count -= 1
                if j < len(grid[i]) - 1 and grid[i][j + 1] == 1:
                    count -= 1
    return count
