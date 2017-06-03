/* auto-generated by genhelp.sh */
/* DO NOT EDIT! */
const char help_text[] = 
"#Chapter 11: Solo "
"\n"
"You have a square grid, which is divided into as many equally sized "
"sub-blocks as the grid has rows. Each square must be filled in with "
"a digit from 1 to the size of the grid, in such a way that "
"\n"
"- every row contains only one occurrence of each digit "
"\n"
"- every column contains only one occurrence of each digit "
"\n"
"- every block contains only one occurrence of each digit. "
"\n"
"- (optionally, by default off) each of the square's two main "
"diagonals contains only one occurrence of each digit. "
"\n"
"You are given some of the numbers as clues; your aim is to place the "
"rest of the numbers correctly. "
"\n"
"Under the default settings, the sub-blocks are square or "
"rectangular. The default puzzle size is 3x3 (a 9x9 actual grid, "
"divided into nine 3x3 blocks). You can also select sizes with "
"rectangular blocks instead of square ones, such as 2x3 (a 6x6 grid "
"divided into six 3x2 blocks). Alternatively, you can select `jigsaw' "
"mode, in which the sub-blocks are arbitrary shapes which differ "
"between individual puzzles. "
"\n"
"Another available mode is `killer'. In this mode, clues are not "
"given in the form of filled-in squares; instead, the grid is divided "
"into `cages' by coloured lines, and for each cage the game tells "
"you what the sum of all the digits in that cage should be. Also, "
"no digit may appear more than once within a cage, even if the cage "
"crosses the boundaries of existing regions. "
"\n"
"If you select a puzzle size which requires more than 9 digits, the "
"additional digits will be letters of the alphabet. For example, if "
"you select 3x4 then the digits which go in your grid will be 1 to 9, "
"plus `a', `b' and `c'. This cannot be selected for killer puzzles. "
"\n"
"I first saw this puzzle in Nikoli [5], although it's also been "
"popularised by various newspapers under the name `Sudoku' or `Su "
"Doku'. Howard Garns is considered the inventor of the modern form of "
"the puzzle, and it was first published in _Dell Pencil Puzzles and "
"Word Games_. A more elaborate treatment of the history of the puzzle "
"can be found on Wikipedia [6]. "
"\n"
"[5] http://www.nikoli.co.jp/en/puzzles/sudoku.html (beware of Flash) "
"\n"
"[6] http://en.wikipedia.org/wiki/Sudoku "
"\n"
"\n#11.1 Solo controls "
"\n"
"To play Solo, simply click the mouse in any empty square and then "
"type a digit or letter on the keyboard to fill that square. If you "
"make a mistake, click the mouse in the incorrect square and press "
"Space to clear it again (or use the Undo feature). "
"\n"
"If you _right_-click in a square and then type a number, that "
"number will be entered in the square as a `pencil mark'. You can "
"have pencil marks for multiple numbers in the same square. Squares "
"containing filled-in numbers cannot also contain pencil marks. "
"\n"
"The game pays no attention to pencil marks, so exactly what you "
"use them for is up to you: you can use them as reminders that a "
"particular square needs to be re-examined once you know more about "
"a particular number, or you can use them as lists of the possible "
"numbers in a given square, or anything else you feel like. "
"\n"
"To erase a single pencil mark, right-click in the square and type "
"the same number again. "
"\n"
"All pencil marks in a square are erased when you left-click and type "
"a number, or when you left-click and press space. Right-clicking and "
"pressing space will also erase pencil marks. "
"\n"
"Alternatively, use the cursor keys to move the mark around the grid. "
"Pressing the return key toggles the mark (from a normal mark to a "
"pencil mark), and typing a number in is entered in the square in the "
"appropriate way; typing in a 0 or using the space bar will clear a "
"filled square. "
"\n"
"(All the actions described in section 2.1 are also available.) "
"\n"
"\n#11.2 Solo parameters "
"\n"
"Solo allows you to configure two separate dimensions of the puzzle "
"grid on the `Type' menu: the number of columns, and the number of "
"rows, into which the main grid is divided. (The size of a block is "
"the inverse of this: for example, if you select 2 columns and 3 "
"rows, each actual block will have 3 columns and 2 rows.) "
"\n"
"If you tick the `X' checkbox, Solo will apply the optional extra "
"constraint that the two main diagonals of the grid also contain "
"one of every digit. (This is sometimes known as `Sudoku-X' in "
"newspapers.) In this mode, the squares on the two main diagonals "
"will be shaded slightly so that you know it's enabled. "
"\n"
"If you tick the `Jigsaw' checkbox, Solo will generate randomly "
"shaped sub-blocks. In this mode, the actual grid size will be taken "
"to be the product of the numbers entered in the `Columns' and `Rows' "
"boxes. There is no reason why you have to enter a number greater "
"than 1 in both boxes; Jigsaw mode has no constraint on the grid "
"size, and it can even be a prime number if you feel like it. "
"\n"
"If you tick the `Killer' checkbox, Solo will generate a set of "
"of cages, which are randomly shaped and drawn in an outline of a "
"different colour. Each of these regions contains a smaller clue "
"which shows the digit sum of all the squares in this region. "
"\n"
"You can also configure the type of symmetry shown in the generated "
"puzzles. More symmetry makes the puzzles look prettier but may also "
"make them easier, since the symmetry constraints can force more "
"clues than necessary to be present. Completely asymmetric puzzles "
"have the freedom to contain as few clues as possible. "
"\n"
"Finally, you can configure the difficulty of the generated puzzles. "
"Difficulty levels are judged by the complexity of the techniques "
"of deduction required to solve the puzzle: each level requires a "
"mode of reasoning which was not necessary in the previous one. In "
"particular, on difficulty levels `Trivial' and `Basic' there will be "
"a square you can fill in with a single number at all times, whereas "
"at `Intermediate' level and beyond you will have to make partial "
"deductions about the _set_ of squares a number could be in (or the "
"set of numbers that could be in a square). At `Unreasonable' level, "
"even this is not enough, and you will eventually have to make a "
"guess, and then backtrack if it turns out to be wrong. "
"\n"
"Generating difficult puzzles is itself difficult: if you select one "
"of the higher difficulty levels, Solo may have to make many attempts "
"at generating a puzzle before it finds one hard enough for you. Be "
"prepared to wait, especially if you have also configured a large "
"puzzle size. "
"\n"
;
const char quick_help_text[] = "Fill in the grid so that each row, column and square block contains one of every digit.";
