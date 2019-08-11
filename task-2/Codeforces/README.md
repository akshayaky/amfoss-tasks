## Codeforces

### 1. [Theatre Square](/task-2/Codeforces/theatre_square.cpp)

1. The **length** and **breadth** of the rectangle and the **side** of the square is inputed from the user.
2. A function is used to caculate the number of squares needed to completely cover the rectangle.
3. Two while loops are used, in each of the loops **length** and **breadth** of the rectangle is reduced by the **side** of the square until they become less than or equal to zero.
4. Multiplying the numeber of iterations of both the loops gives the number of squares which is the required output.

### 2. [Way Too Long Words](/task-2/Codeforces/WayTooLongWords.py)

1. The number of words and the words itself is input by the user.
2. Each of the string inputs is stored in a list.
3. Each of the strings is iterated through a **for** loop.
4. If the lenght of the string is **greater than 10** then the word is manipulated as the **the first character,string lenght-2, the last character**.
5. The manipulated strings are strings are displayed which is the required output.

### 3. [Next Round](/task-2/Codeforces/NextRound.cpp)

1. The number of teams, the position **k** and the scores of the teams in descending order is input by the user.
2. A loop is used to iterate over each of the scores stored in an array.
3. If the score is greater than or equal to the score of **k**th team and the if the score is postive(>0) then a variable **num**,which is the number of teams which will advance in the next round, is **incremented**.
4. **num** is displayed which is the required output.

### 4. [Bit++](/task-2/Codeforces/Bit++.py)

1. The number of statements and the statements are input by the user.
2. Each of the statements is stored in a list.
3. The value of the variable **x** is initialized as **0**.
4. If the statement contains a **'+'** the value of **x** is incremented and when it contains **'-'** it is decremented.
5. The final value of **x** is printed which is the required output.

### 5. [Football](/task-2/Codeforces/Football.cpp)

1. The string which contians **0**s and **1**s is input by the user.
2. A for loop is used to iterate over all the characters of the array.
3. The current element is stored in a variable **curr**.
4. The variable **curr** is changed if the loop encounters the other character.
5. If **curr** becomes 7 "Yes" is printed else "No" is printed.
