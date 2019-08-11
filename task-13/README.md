## 13. Project Euler (for math freaks)
https://www.hackerrank.com/contests/projecteuler/challenges/euler001
https://www.hackerrank.com/contests/projecteuler/challenges/euler002
https://www.hackerrank.com/contests/projecteuler/challenges/euler003
https://www.hackerrank.com/contests/projecteuler/challenges/euler004
https://www.hackerrank.com/contests/projecteuler/challenges/euler005


### Solution
I did all the Euler problems, though two of the solutions don't satisfy all the the testcases.



### 1.Project Euler #1: Multiples of 3 and 5

Find the sum of all the multiples  of 3 or 5 below N.

#### Approach

1. Found the multiples of 3, 5 and 15 of the numbers less than user inputted N,using Arithmetic Progrssion.
2. Added sum of 3 and 5 and subtracted sum of 15 as it is already added in both sum of 3 and 5.

The Testcase failure for this solution is probably due to very large numbers which can't be stored even in unsigned long long int.
Can be solved using string as numbers. Trying to implement the same.


### 2.Project Euler #2: Even Fibonacci numbers

Find the sum of Even valued terms of the Fibonacci series less than N .

#### Approach

1. Calculeted the terms of the fibonacci series upto the specified constrain and stored them in a list.
2. Used a while loop to iterate over the terms less than user inputed N.
3. Incremented the list index by 3 after each loop iteration as the even numbers appear after every two of the fibonacci series.
4. Each sum of the even numbers were stored in a list to accomodate multiple testcases.

This solution worked for all the testcases in HackerRank.


### 3.Project Euler #3: Largest prime factor

Find the largest prime factor of a number N.

#### Approach

1. Checked if the number itself is a prime number,if it is , that number itself is the largest prime factor.
2. If the above condition is false,a loop will iterate over the numbers upto N.
3. But after each loop iteration, if a number y is divisible to N, then  the constraint of the loop N is reduced to N/y.This reduces the number of loop execution by a significant amount.
4. The largest prime factor is stored in an array to accommodate multiple testcases.



### 4.Project Euler #4: Largest palindrome product
Find the largest palindrome made from the product of two 3-digit numbers which is less than N.

#### Approach

1. A _for_ loop interates from N-1 to 101101,which is the largest pallindrome which is a product of two 3-digit numbers.
2. Inside the loop, there is another loop which iterates from 999,the largest 3-digit number to 100,smallest 3 digit number.
3. There is yet another loop inside the inner loop similar to it.
4. The two inner nested loops are only executed if the outer loop varible is a pallindrome.
5. The two inner loops are used to check whether multiplying the loop variables gets us the outer loop varible which is a pallindrome.If it does,then it is breaked out of all the loops.


### 5.Project Euler #5: Smallest multiple
Find the smallest number which is divisible by all the numbers divisible from 1 to N.

#### Approach

1. A _for_ loop iterates from 1 and increments it untill it finds a number divisible by all numbers from 1-N.
2. Inside this loop another loop iterates from 1 to N and checks if it is divisible all of them,else breaks from the inner loop.
3. If it is divisible by all the numbers then its stored in an array for all the testcases.
