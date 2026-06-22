# Compilation & Execution
To test this program, open your terminal and navigate to the `cash` directory.

  1. Compile the source code:
  make cash

  2. Execute the binary:
  ./cash

*(Note: If you input a negative number, the program will trap you in a loop and prompt you again until a valid amount is entered.)*

# Problem to Solve
Suppose you work at a store and a customer gives you $1.00 (100 cents) for candy that costs $0.50 (50 cents). You’ll need to pay them their “change,” the amount leftover after paying for the cost of the candy. When making change, odds are you want to minimize the number of coins you’re dispensing for each customer, lest you run out (or annoy the customer!). In a file called cash.c in a folder called cash, implement a program in C that prints the minimum coins needed to make the given amount of change, in cents

# How it is Solved
It can be solved using one of the very important algorithm known as greedy algorithm which is best for this types of problems.

# What is the Greedy algorithm
Fortunately, computer science has given cashiers everywhere ways to minimize numbers of coins due: greedy algorithms.

According to the National Institute of Standards and Technology (NIST), a greedy algorithm is one “that always takes the best immediate, or local, solution while finding an answer. Greedy algorithms find the overall, or globally, optimal solution for some optimization problems, but may find less-than-optimal solutions for some instances of other problems.”

What’s all that mean? Well, suppose that a cashier owes a customer some change and in that cashier’s drawer are quarters (25¢), dimes (10¢), nickels (5¢), and pennies (1¢). The problem to be solved is to decide which coins and how many of each to hand to the customer. Think of a “greedy” cashier as one who wants to take the biggest bite out of this problem as possible with each coin they take out of the drawer. For instance, if some customer is owed 41¢, the biggest first (i.e., best immediate, or local) bite that can be taken is 25¢. (That bite is “best” inasmuch as it gets us closer to 0¢ faster than any other coin would.) Note that a bite of this size would whittle what was a 41¢ problem down to a 16¢ problem, since 41 - 25 = 16. That is, the remainder is a similar but smaller problem. Needless to say, another 25¢ bite would be too big (assuming the cashier prefers not to lose money), and so our greedy cashier would move on to a bite of size 10¢, leaving him or her with a 6¢ problem. At that point, greed calls for one 5¢ bite followed by one 1¢ bite, at which point the problem is solved. The customer receives one quarter, one dime, one nickel, and one penny: four coins in total.

It turns out that this greedy approach (i.e., algorithm) is not only locally optimal but also globally so for America’s currency (and also the European Union’s). That is, so long as a cashier has enough of each coin, this largest-to-smallest approach will yield the fewest coins possible. How few? Well, you tell us!

# Technical Approach
This program implements a Greedy Algorithm using sequential while loops to dispense the minimum number of coins.
Input Validation: The program prompts the user for the change owed. A do-while loop traps the user until they provide a valid, non-negative integer.
Quarters (25¢): A while loop checks if the remaining change is >= $25. If true, it subtracts 25 from the total and increments the coin counter by 1. This repeats until the condition is false.
Dimes (10¢): The program moves to the next while loop, checking for values >= $10, subtracting, and incrementing the counter.
Nickels (5¢) & Pennies (1¢): The exact same sequential logic is applied for 5-cent and 1-cent denominations.
Termination: Once the change owed hits exactly 0, the program prints the final tally of the coin counter.