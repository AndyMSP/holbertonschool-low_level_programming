#!/usr/bin/python3
"""module containing perimeter calculating function"""


def island_perimeter(grid):
    """function that calculates island perimeter"""
    # add padding of 0's to grid
    for row in grid:
        row.insert(0, 0)
        row.append(0)
    pad = [0]*len(grid[0])
    grid.insert(0, pad)
    grid.append(pad)

    # create sur, each element represents number of neighbors that element has
    height = len(grid)
    length = len(grid[0])
    sur = [length * [0] for i in range(height)]
    for i in range(height):
        for j in range(length):
            if grid[i][j] == 1:
                sur[i][j] = grid[i-1][j] + grid[i][j-1] \
                    + grid[i+1][j] + grid[i][j+1]

    # calculate number of neighbors and plots of land
    sub = 0
    plots = 0
    for row in sur:
        sub = sub + sum(row)
    for row in grid:
        plots = plots + sum(row)

    # calculate perimeter
    perimeter = plots * 4 - sub

    return perimeter
