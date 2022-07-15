#!/usr/bin/python3
"""module containing perimeter calculating function"""


def island_perimeter(grid):
    """function that calculates island perimeter"""
    for row in grid:
        row.insert(0, 0)
        row.append(0)
    pad = [0]*len(grid[0])
    grid.insert(0, pad)
    grid.append(pad)

    height = len(grid)
    length = len(grid[0])
    sur = [length * [0] for i in range(height)]
    for i in range(height):
        for j in range(length):
            if grid[i][j] == 1:
                sur[i][j] = grid[i-1][j] + grid[i][j-1] \
                    + grid[i+1][j] + grid[i][j+1]

    sub = 0
    plots = 0
    for row in sur:
        sub = sub + sum(row)
    for row in grid:
        plots = plots + sum(row)

    perimeter = plots * 4 - sub

    return perimeter