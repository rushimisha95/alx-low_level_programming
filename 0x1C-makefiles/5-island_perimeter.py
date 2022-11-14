#!/usr/bin/python3
""" Module island_perimeter """


def island_perimeter(grid):
    """ Function that return the perimeter island """

    len_x = len(grid)
    len_y = len(grid[0])
    sum = 0
    for i in range(len_x):
        for a in range(len_y):
            if grid[i][a] == 1:
                sum = sum + 4
                if i > 0:
                    sum = sum - grid[i - 1][a]
                if i + 1 < len(grid):
                    sum = sum - grid[i + 1][a]
                if a > 0:
                    if grid[i][a - 1] == 1:
                        sum = sum - 1
                if a + 1 < len(grid[i]):
                    sum = sum - grid[i][a + 1]
    return sum
