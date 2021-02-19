#!/usr/bin/python3
"""module island perimter"""


def island_perimeter(grid):
    """Function that returns the perimeter of the island described in grid"""
    perimeter = 0
    for columns in range(len(grid)):
        for rows in range(len(grid[columns])):
            if grid[columns][rows] == 1:
                if columns == 0 or grid[columns - 1][rows] == 0:
                    perimeter += 1
                if columns == rows - 1 or grid[columns + 1][rows] == 0:
                    perimeter += 1
                if rows == 0 or grid[columns][rows - 1] == 0:
                    perimeter += 1
                if rows == columns - 1 or grid[columns][rows + 1] == 0:
                    perimeter += 1
    return perimeter
