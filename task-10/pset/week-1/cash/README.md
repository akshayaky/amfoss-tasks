## Cash
Implement a program that calculates the minimum number of coins required to give a user change.

## Approach

1. Used a do-while loop which prompts the user to input again if the input is wrong.
2. The numer of dollars are converted into cents.
3. An array is used to store 25,10,5,1 in the same order which is the coin denominations used to give the change.
4. A while loop is used, which iterates until the cents is equal to zero.
5. Array elememts are used to reduce the cents and it starts from the first element and moves to the next if the current element is greater than the remaining cents.
6. A counter is used to calculate the number of loop executions which is the minimum number of coins required to give the user inputted change.
