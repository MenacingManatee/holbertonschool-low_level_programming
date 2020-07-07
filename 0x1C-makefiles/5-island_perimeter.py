#!/usr/bin/python3
'''Defines a function that takes a matrix and returns the perimiter'''


def island_perimeter(grid):
    '''Usage: island_perimeter(grid)
    where grid is a 2D array of 1's and 0's, representing
    land and water respectively
    '''
    x = len(grid)
    y = len(grid[0])
    per = 0

    for xi in range(x):
        for yi in range(y):
            if grid[xi][yi] == 0:
                per += per_count(x, y, xi, yi, grid)
    return per


def per_count(x, y, x_ind, y_ind, grid):
    '''Counts the 'land' around the 'water' in a grid'''
    count = 0
    if x_ind != 0:
        count += grid[x_ind - 1][y_ind]
    if x_ind < x - 1:
        count += grid[x_ind + 1][y_ind]
    if y_ind != 0:
        count += grid[x_ind][y_ind - 1]
    if y_ind < y - 1:
        count += grid[x_ind][y_ind - 1]
    return count
