#Diagonal-Difference

##Description
I came across this interesting algorithm question. So I decided to implement it in C.

##Question
Given a square matrix of size **N**, calculate the absolute difference between the sums of its diagonals.

###Input Format
The first line contains a single integer, **N** . The next lines denote the matrix's rows, with each line containing space-separated integers describing the columns.
######Sample Input
3

11 2 4

4 5 6

10 8 -12
###Output Format
Print the absolute difference between the two sums of the matrix's diagonals as a single integer.
######Sample Output
15

###Explanation
Sum across the primary diagonal: 11 + 5 - 12 = 4
Sum across the secondary diagonal: 4 + 5 + 10 = 19 
Difference: |4 - 19| = 15
