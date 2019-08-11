## Caesar

Encrypt a string using [Caesar](https://lab.cs50.io/cs50/labs/2019/x/caesar/) encryption.

### Approach

1. The program first checks if the program was run with a single argument and if each character of the  argument is an integer.
2. Converts the string into an Integer k.If it is greater than 26 converts into k%26.
3. Asks the user for a string input.
4. Then a loop iterates over each charecter and increments by k  preserving its case or leaves it  as it is if not an alphabet.
5. The given string is encoded with Caesar cipher.
