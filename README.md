# C-program-to-maximum-sum-from-a-tree-with-adjacent-levels-not-allowed
C++ program to maximum sum from a tree with adjacent levels not allowed
Description:
This Program is to find the maximum sum from a tree with adjacent levels not allowed which means we need to take value from the alternate levels.Let's understand it with an example, if we start the calculation from level 1 then the 2nd which will be coming will be the level 3 then level 5 and so on i.e. the Odd no. or else if it start with level 2 then the coming level will be the level 4 then level 6 and so on i.e. Even no. and at the end we just need to check the greatest among the the two Odd level sum and Even level sum.

Input : Tree

                                                                                                1
                                                                                              /     \
                                                                                            2        3
                                                                                          /         /    \
                                                                                         4        5       6
                                                                                       /   \     /       /  
                                                                                     7      8   9      10 
                                                                                   /     /  \
                                                                                  11   12   13 
Output :52
Explanation: Total items we can take for Odd levels are: {2, 3, 7, 8, 9, 10} = 39
Total items we can take for Odd levels are:{1, 4, 5, 6, 11, 12, 13} = 52 
Therefor Odd Level < Even Level
Max sum is = 52.
