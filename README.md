# Easy Problems on Array

* Array Reverse in C/C++/Java/Python/JavaScript
* Program to find the minimum (or maximum) element of an array
* Move all negative numbers to beginning and positive to end with constant extra space
* Find a peak element which is not smaller than its neighbours

* Sort an array of 0s, 1s and 2s | Dutch National Flag problem

* Count number of occurrences (or frequency) in a sorted array

* Union and Intersection of two sorted arrays

* Find Subarray with given sum | Set 1 (Non-negative Numbers)

* K’th Smallest/Largest Element in Unsorted Array

## Array Reverse

Initialize two char array (define the size of arrays). Initialize two int i and j (initially set
to n-1). In for loop i=0 and loop ends when i<n. Loop statement ```name2[j] = name[i];```
lets us put the elements of 1
st array in the 2nd array in reverse. Reversing a string
involves handling the null character properly. The time complexity for reversing a
string is also O(n), where n is the length of the string

To improve this code, we can avoid magic numbers. Instead of hardcoding the value
of n (which is 13 here), we can calculate it based on the length of the initial string. This
way, if we change the string, the code will still work correctly. We can combine the
two loops that print the original array and the reversed array into a single loop. This
reduces redundancy and makes the code cleaner.

In the worst-case scenario, we consider the maximum number of operations executed
by the program. The for loop iterates through the entire name array, which has a fixed
size of 13 (since n is defined as 13). Each iteration involves a constant-time operation
(assignment and decrement). Therefore, the worst-case time complexity of this
program is O(1) (constant time), as the size of the array is fixed and independent of
the input.

In the best-case scenario, we consider the minimum number of operations executed
by the program. The best-case occurs when the loop is not executed at all (i.e., the
array is empty or contains only one element). In this case, the program performs no
assignments or iterations. Therefore, the best-case time complexity is
also O(1) (constant time).

The program has a constant time complexity regardless of the input because the
array size is fixed. It efficiently reverses the given string without any dependence on
the input length.

## URL

https://www.geeksforgeeks.org/complete-guide-to-arrays-data-structure/
