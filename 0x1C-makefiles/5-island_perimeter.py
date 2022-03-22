#!/usr/bin/python3
"""
Perimeter of island module
"""


def island_perimeter(grid):
    """
    Function that calculates the perimeter of an island
    """

    sum = 0
    for c in range(len(grid)):
        for r in range(len(grid[c])):
            if grid[c][-1] == 0 and grid[c][0] == 0:
                if grid[0][r] == 0 and grid[0][r]:
                    if grid[c][r] == 1:
                        if grid[c + 1][r] == 0:
                            sum += 1
                        if grid[c - 1][r] == 0:
                            sum += 1
                        if grid[c][r + 1] == 0:
                            sum += 1
                        if grid[c][r - 1] == 0:
                            sum += 1
    return sum
