##  8. Captcha Breaking:
We would like to know whether your a human or a robot? Download/Create a .png file which
contains a simple arithmetic expression like “2 + 2” . Write a python script which can interpret
the expression, evaluate it and return the calculated value.


###  Solution
1. I intstalled PIL and Pytesseract libraries through pip.

2. Pyttesseract was still not working and showing path error.So I to created a path variable for the tesseract-ocr.

3. Created a png file which contained a simple arithmetic expression.
4. Using pytesseract converted the expression in the image,opened with thw help of PIL, into a string.
5. Performed the operation on the numbers according to the operation symbol.
