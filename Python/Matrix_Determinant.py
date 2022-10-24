import numpy as np

def smaller_matrix(original_matrix, row, column):
    
    for ii in range(len(original_matrix)):
        
        new_matrix = np.delete(original_matrix, ii, 0)
        new_matrix = np.delete(new_matrix, column, 1)
        return new_matrix

def determinant(matrix):
    
    matrix = np.array(matrix)
    
    r, c = matrix.shape
    
    if r == 2:
        
        simple_determinant = matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0]
        return simple_determinant
    
    elif r == 1:
        
        return matrix[0][0]
    
    else:
        
        answer = 0
        for j in range(r):
            
            cofactor = (-1)**(0+j) * matrix[0][j] * determinant(smaller_matrix(matrix, 0, j))
            answer += cofactor
            
        return answer

"Tests"

import codewars_test as test
from solution import determinant

@test.it("Basic tests")
def _():
    m1 = [[4, 6], [3,8]]
    m5 = [[2,4,2],[3,1,1],[1,2,0]]
    
    test.assert_equals(determinant([[5]]), 5, "Determinant of a 1 x 1 matrix yields the value of the one element")
    test.assert_equals(determinant(m1), 14, "Should return 4*8 - 3*6, i.e. 14")
    test.assert_equals(determinant(m5), 10, "Should return the determinant of [[2,4,2],[3,1,1],[1,2,0]], i.e. 10")

"Instructions"

"""Write a function that accepts a square matrix (N x N 2D array) and returns the determinant of the matrix.

How to take the determinant of a matrix -- it is simplest to start with the smallest cases:

A 1x1 matrix |a| has determinant a.

A 2x2 matrix [ [a, b], [c, d] ] or

|a  b|
|c  d|
has determinant: a*d - b*c.

The determinant of an n x n sized matrix is calculated by reducing the problem to the calculation of the determinants of n matrices ofn-1 x n-1 size.

For the 3x3 case, [ [a, b, c], [d, e, f], [g, h, i] ] or

|a b c|  
|d e f|  
|g h i|  
the determinant is: a * det(a_minor) - b * det(b_minor) + c * det(c_minor) where det(a_minor) refers to taking the determinant of the 2x2 matrix created by crossing out the row and column in which the element a occurs:

|- - -|
|- e f|
|- h i|  
Note the alternation of signs.

The determinant of larger matrices are calculated analogously, e.g. if M is a 4x4 matrix with first row [a, b, c, d], then:

det(M) = a * det(a_minor) - b * det(b_minor) + c * det(c_minor) - d * det(d_minor)"""