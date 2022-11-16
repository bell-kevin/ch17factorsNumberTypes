# ch17factorsNumberTypes

Numbers have factors, values which, when multiplied together, equal the number. For example, the number 12 has factors of 1 and 12, 2 and 6, 3 and 4. The "type" of a number is determined based on the total or sum of its factors (excluding the number itself), so the vector to determine the type of number for 12 is "1, 2, 3, 4, 6". The total of those numbers determines the number type for 12.

Definitions: These number types are determined by adding all the factors of an integer, including 1 and excluding the number itself.

abundant: the total of the factors is greater than the number (example: 12, factors are 1, 2, 3, 4, 6, total is 16)

deficient: the total of the factors is less than the number (example: 16, factors are 1, 2, 4, 8, total is 15)

perfect: the total of the factors is the same as the number (example: 28, factors are 1, 2, 4, 7, 14, total is 28)

prime: the total of the factors is 1 (example: 31, factors are 1, total is 1)

The project for this assignment asks the user to input an integer, looks for factors of that number to put into a vector, displays them, then determines the "type" of the user-input number. Use a vector to hold the integers up to (but not including) the user-input number that are factors of the user-input number. Use a function object, described with a lambda expression, to determine if a n integer is a factor of the number. If the lambda expression returns true, the integer is a factor and needs to be added to the vector. Once the vector is complete, iterate through it to display each factor and to add it to the total. Use another function object described with a lambda expression that looks at the total and the user-input number to determine the type of number, and display that.

Your project needs to display all the factors, the total, and the number type of the input number. Here are examples of the output showing all 4 types of numbers:     

![ch17-numType-abundant.PNG](https://github.com/bell-kevin/ch17factorsNumberTypes/blob/main/factorsNumberTypes/abundant.PNG)

![ch17-numType-deficient.PNG](https://github.com/bell-kevin/ch17factorsNumberTypes/blob/main/factorsNumberTypes/deficient.PNG)

![ch17-numType-perfect.PNG](https://github.com/bell-kevin/ch17factorsNumberTypes/blob/main/factorsNumberTypes/perfect.PNG)

![ch17-numType-prime.PNG](https://github.com/bell-kevin/ch17factorsNumberTypes/blob/main/factorsNumberTypes/prime.PNG)

Note: In the book, it explains that the square brackets at the beginning of a lambda expression can optionally include a capture list for variables in the surrounding scope of the lambda expression that can be accessed in the lambda's function body (page 1115). In this project, the user-input number is needed for determine the factors and to check the total to determine the number type. This would be an excellent use of the capture list -- put the user-input number inside the square brackets at the beginning of the lambda expression to make it accessible to the expression, rather than passing that number as a parameter into the expression.

 

Run the project with all 4 types of numbers and take screenshots of each, as shown above.

 

NOTE: Remember the requirements for a header and a pause at the end of the program, discussed in the reading "Console Applications". These are required in every console application project.

Submission: Submit a single zipped folder containing all of the specified screenshots AND the root folder for the project.

== We're Using GitHub Under Protest ==

This project is currently hosted on GitHub.  This is not ideal; GitHub is a
proprietary, trade-secret system that is not Free and Open Souce Software
(FOSS).  We are deeply concerned about using a proprietary system like GitHub
to develop our FOSS project. I have a [website](https://bellKevin.me) where the
project contributors are actively discussing how we can move away from GitHub
in the long term.  We urge you to read about the [Give up GitHub](https://GiveUpGitHub.org) campaign 
from [the Software Freedom Conservancy](https://sfconservancy.org) to understand some of the reasons why GitHub is not 
a good place to host FOSS projects.

If you are a contributor who personally has already quit using GitHub, please
email me at **bellKevin@pm.me** for how to send us contributions without
using GitHub directly.

Any use of this project's code by GitHub Copilot, past or present, is done
without our permission.  We do not consent to GitHub's use of this project's
code in Copilot.

![Logo of the GiveUpGitHub campaign](https://sfconservancy.org/img/GiveUpGitHub.png)
