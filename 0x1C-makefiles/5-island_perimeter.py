#!/usr/bin/python3
"""Defines a function that returns the perimeter of an island
    described in grid"""


def island_perimeter(grid):
    """This returns the perimiter of island
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for x in range(height):
        for x in range(width):
            if grid[x][y] == 1:
                size += 1
                if (y > 0 and grid[x][y - 1] == 1):
                    edges += 1
                if (x > 0 and grid[x - 1][x] == 1):
                    edges += 1
    return size * 4 - edges * 2
