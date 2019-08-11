## HackerRank

### [Compare the Triplets](/task-2/HackerRank/compare-the-triplets.cpp)

1. Three arrays are created,to store the ratings of Alice and Bob in the first two and the final score of both in the third array.
2. Ratings of both Alice and Bob is input by the user.
3. A function is used to compare the ratings of Alice and Bob and increment the score of the person the higher rating.
4. The score of Alice and Bob is printed.

### [Diagonal Difference](/task-2/HackerRank/diagonal-difference.cpp)

1. The user inputs the number of rows and columns of the square and  its elements.
2. A function is used to calculate the sum of primary and secondary array. Let __x__ be first index and __y__ be the second. Then:
   - for Primary diagonal **y == x**
   - for secondary diagonal **y == n-x-1**
3. Then their difference is calculated and printed.

### [Staircase](/task-2/HackerRank/staircase.cpp)

1. The user input a single integer **n**.
2. A function is used which prints the required staircase pattern.
3. A nested loop is used in which the outer loop and inner loop executes **n** times but "#" is printed only when inner loop variable is greater than **a** else prints " ", where  **a** is equal to **n-1** and is decremented after each outer loop execution.
4. This prints the required pattern.

### [Birthday Cake Candles](/task-2/HackerRank/birthday-cake-candles.cpp)

1. The user inputs the number of Candles and then the all the heights of the candles.
2. A function is used to find the number of tallest candles.
3. A **for** loop is used to find the tallest candle from an array.
4. Another function is used to count the number of tallest candles which would be equal to the height found earlier.
5. This count is displayed which is the required output.

### [Time Conversion](/task-2/HackerRank/time-conversion.py)

1. The user inputs time in 12 Hour format.
2. A function is used to convert the time in **12-hour format** to **24-hour format**.
3. The whole string containing the time is copied into a new string except the AM-PM part.
4. But if the time is **AM** and the hour is **12** then the new time is assingned with two zero and the remaining minutes and seconds part.
5. On the other hand, if time is **PM** and the hour is **less than 12** then the hours is added to 12 and assigned along with the minutes and seconds part.


