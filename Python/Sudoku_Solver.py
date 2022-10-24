class SudokuSolver:
    
    def __init__(self, puzzle):
        self.puzzle = puzzle
        self.box_size = 3
        
    def find_possibilities(self, row_number, column_number):
        
        possibilities = set(range(1,10))
        row = self.get_row(row_number)
        column = self.get_column(column_number)
        box = self.get_box(row_number, column_number)
        for item in row + column + box:
            
            if not isinstance(item, list) and item in possibilities:
                
                possibilities.remove(item)
                
        return possibilities
    
    def get_row(self, row_number):
        
        return self.puzzle[row_number]
    
    def get_column(self, column_number):
        
        return [row[column_number] for row in self.puzzle]
    
    def get_box(self, row_number, column_number):
        
        start_y = column_number//3 * 3
        start_x = row_number//3 * 3
        if start_x < 0:
            start_x = 0
        if start_y < 0:
            start_y = 0
            
        box = []
        for i in range(start_x, self.box_size + start_x):
            box.extend(self.puzzle[i][start_y: start_y + self.box_size])
            
        return box
    
    def find_spot(self):
        
        unsolved = True
        while unsolved:
            unsolved = False
            for row_number, row in enumerate(self.puzzle):
                
                for column_number, item in enumerate(row):
                    
                    if item==0:
                        
                        unsolved = True
                        possibilities = self.find_possibilities(row_number, column_number)
                        if len(possibilities)==1:
                            self.puzzle[row_number][column_number] = list(possibilities)[0]
                            
        return self.puzzle
    
def sudoku(puzzle):
    sudoku = SudokuSolver(puzzle)
    return sudoku.find_spot()

"Difficulty: 3kyu(Medium++)"

"""Write a function that will solve a 9x9 Sudoku puzzle. The function will take one argument consisting of the 2D puzzle array, with the value 0 representing an unknown square.

The Sudokus tested against your function will be "easy" (i.e. determinable; there will be no need to assume and test possibilities on unknowns) and can be solved with a brute-force approach.

For Sudoku rules, see the Wikipedia article.

puzzle = [[5,3,0,0,7,0,0,0,0],
          [6,0,0,1,9,5,0,0,0],
          [0,9,8,0,0,0,0,6,0],
          [8,0,0,0,6,0,0,0,3],
          [4,0,0,8,0,3,0,0,1],
          [7,0,0,0,2,0,0,0,6],
          [0,6,0,0,0,0,2,8,0],
          [0,0,0,4,1,9,0,0,5],
          [0,0,0,0,8,0,0,7,9]]

sudoku(puzzle)
# Should return
 [[5,3,4,6,7,8,9,1,2],
  [6,7,2,1,9,5,3,4,8],
  [1,9,8,3,4,2,5,6,7],
  [8,5,9,7,6,1,4,2,3],
  [4,2,6,8,5,3,7,9,1],
  [7,1,3,9,2,4,8,5,6],
  [9,6,1,5,3,7,2,8,4],
  [2,8,7,4,1,9,6,3,5],
  [3,4,5,2,8,6,1,7,9]]"""