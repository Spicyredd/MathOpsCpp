The code is terribly inefficient for now. This repository tracks my daily progress in improving performance, structure, and understanding.

Day 1: Baseline implementation.
Learned that std::vector in C++ behaves like Python’s list, offering dynamic resizing and contiguous memory storage. Implemented an algorithm to add two matrices with O(n²) time complexity.

Day 2: Matrix Transpose Implementation
Implemented a basic matrix transpose with vector data structure of C++.

Day 3: Matrix Multiplication Implementation
Implemented matrix multiplication for strictly square matrices for now with n cubed time complexity. Used a python program to help internalize the procedure better.

Day 4: Added a basic auto differentiation code in forward mode. It can correctly compute the function's value and its derivative simultaneously in a single pass taking O(1) complexity instead of O(n) when trying to use implementation of Numerical Differenciation while avoiding the truncation/rounding errors as well as the expression swell(memory explosion) of method like Symbolic Differenciation. A major help for the understanding of auto differentiation is a youtube video [text](https://www.youtube.com/watch?v=wG_nF1awSSY). Upcoming implemenations will try to adapt computation graphs to generate even the functions themselves automatically.