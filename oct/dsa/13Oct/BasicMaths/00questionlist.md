# DSA Mathematics — 50 Practice Problems

## Level 1: Basic Arithmetic and Number Properties

### 1. Sum of Two Integers
LeetCode: Custom practice
Problem: Given two integers a and b, return their sum.
Example 1: Input: a = 4, b = 7 | Output: 11
Example 2: Input: a = -5, b = 3 | Output: -2
Constraints: -10^9 <= a, b <= 10^9

### 2. Difference of Two Integers
LeetCode: Custom practice
Problem: Given two integers a and b, return a - b.
Example 1: Input: a = 12, b = 5 | Output: 7
Example 2: Input: a = 3, b = 8 | Output: -5
Constraints: -10^9 <= a, b <= 10^9

### 3. Check Whether a Number Is Even or Odd
LeetCode: Custom practice
Problem: Given an integer n, return "Even" if divisible by 2; otherwise, return "Odd".
Example 1: Input: n = 14 | Output: "Even"
Example 2: Input: n = 9 | Output: "Odd"
Constraints: -10^9 <= n <= 10^9

### 4. Find the Largest of Three Numbers
LeetCode: Custom practice
Problem: Given a, b, and c, return the largest number.
Example 1: Input: a = 4, b = 12, c = 8 | Output: 12
Example 2: Input: a = 7, b = 7, c = 3 | Output: 7
Constraints: -10^6 <= a, b, c <= 10^6

### 5. Check Divisibility
LeetCode: Custom practice
Problem: Given integers a and b, determine whether a is divisible by b. Assume b != 0.
Example 1: Input: a = 24, b = 6 | Output: true
Example 2: Input: a = 25, b = 4 | Output: false
Constraints: -10^9 <= a, b <= 10^9; b != 0

### 6. Count the Number of Digits
LeetCode: Custom practice
Problem: Given a non-negative integer n, return its number of digits. Zero has one digit.
Example 1: Input: n = 5831 | Output: 4
Example 2: Input: n = 0 | Output: 1
Constraints: 0 <= n <= 10^18

### 7. Sum of Digits
LeetCode: Custom practice
Problem: Given a non-negative integer n, return the sum of its digits.
Example 1: Input: n = 583 | Output: 16
Example 2: Input: n = 902 | Output: 11
Constraints: 0 <= n <= 10^18

### 8. Product of Digits
LeetCode: Custom practice
Problem: Given a positive integer n, return the product of its digits.
Example 1: Input: n = 234 | Output: 24
Example 2: Input: n = 105 | Output: 0
Constraints: 1 <= n <= 10^9

### 9. Reverse Integer
LeetCode: #7 — https://leetcode.com/problems/reverse-integer/
Problem: Reverse the digits of a signed 32-bit integer. Return 0 if the reversed number overflows the signed 32-bit range.
Example 1: Input: x = 123 | Output: 321
Example 2: Input: x = -120 | Output: -21
Example 3: Input: x = 1534236469 | Output: 0  // for this test case we no need to write long long, we just need to write a condition if num is revNum>int_max ans less than int min we need to return 0;
Constraints: -2^31 <= x <= 2^31 - 1

### 10. Palindrome Number
LeetCode: #9 — https://leetcode.com/problems/palindrome-number/
Problem: Return true if an integer reads the same forward and backward. Negative numbers are not palindromes.
Example 1: Input: x = 121 | Output: true
Example 2: Input: x = -121 | Output: false
Example 3: Input: x = 10 | Output: false
Constraints: -2^31 <= x <= 2^31 - 1

## Level 2: Factors, Primes and Divisibility

### 11. Find All Divisors of a Number
LeetCode: Custom practice
Problem: Given positive integer n, return all positive divisors in ascending order.
Example: Input: n = 12 | Output: [1, 2, 3, 4, 6, 12]
Constraints: 1 <= n <= 10^6

### 12. Count the Divisors of a Number
LeetCode: Custom practice
Problem: Given positive integer n, return the number of positive divisors.
Example 1: Input: n = 12 | Output: 6
Example 2: Input: n = 9 | Output: 3
Constraints: 1 <= n <= 10^9

### 13. Check Whether a Number Is Prime
LeetCode: Custom practice
Problem: Return true if n is prime; otherwise, return false. A prime has exactly two positive divisors.
Example 1: Input: n = 17 | Output: true
Example 2: Input: n = 21 | Output: false
Example 3: Input: n = 1 | Output: false
Constraints: 0 <= n <= 10^9

### 14. Count Primes
LeetCode: #204 — https://leetcode.com/problems/count-primes/
Problem: Return the number of prime numbers strictly less than n.
Example: Input: n = 10 | Output: 4
Constraints: 0 <= n <= 5 * 10^6

### 15. Greatest Common Divisor (GCD)
LeetCode: Custom practice
Problem: Given positive integers a and b, return their greatest common divisor.
Example 1: Input: a = 12, b = 18 | Output: 6
Example 2: Input: a = 7, b = 9 | Output: 1
Constraints: 1 <= a, b <= 10^9

### 16. Least Common Multiple (LCM)
LeetCode: Custom practice
Problem: Given positive integers a and b, return their least common multiple.
Example 1: Input: a = 4, b = 6 | Output: 12
Example 2: Input: a = 5, b = 7 | Output: 35
Constraints: 1 <= a, b <= 10^9; assume result fits return type.

### 17. Power of Two
LeetCode: #231 — https://leetcode.com/problems/power-of-two/
Problem: Return true if n = 2^k for a non-negative integer k.
Example 1: Input: n = 16 | Output: true
Example 2: Input: n = 18 | Output: false
Constraints: -2^31 <= n <= 2^31 - 1

### 18. Power of Three
LeetCode: #326 — https://leetcode.com/problems/power-of-three/
Problem: Return true if n is an exact power of three.
Example 1: Input: n = 27 | Output: true
Example 2: Input: n = 45 | Output: false
Constraints: -2^31 <= n <= 2^31 - 1

### 19. Power of Four
LeetCode: #342 — https://leetcode.com/problems/power-of-four/
Problem: Return true if n is an exact power of four.
Example 1: Input: n = 64 | Output: true
Example 2: Input: n = 8 | Output: false
Constraints: -2^31 <= n <= 2^31 - 1

### 20. Happy Number
LeetCode: #202 — https://leetcode.com/problems/happy-number/
Problem: Repeatedly replace n with the sum of the squares of its digits. Return true if it reaches 1; otherwise, return false if it enters a cycle.
Example 1: Input: n = 19 | Output: true
Example 2: Input: n = 2 | Output: false
Constraints: 1 <= n <= 2^31 - 1

## Level 3: Digit Manipulation and Number Conversion

### 21. Add Digits
LeetCode: #258 — https://leetcode.com/problems/add-digits/
Problem: Repeatedly add the digits of a non-negative integer until only one digit remains.
Example 1: Input: num = 38 | Output: 2
Example 2: Input: num = 0 | Output: 0
Constraints: 0 <= num <= 2^31 - 1

### 22. Subtract the Product and Sum of Digits
LeetCode: #1281 — https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/
Problem: Return the product of the digits minus their sum.
Example 1: Input: n = 234 | Output: 15
Example 2: Input: n = 4421 | Output: 21
Constraints: 1 <= n <= 10^5

### 23. Find Numbers With an Even Number of Digits
LeetCode: #1295 — https://leetcode.com/problems/find-numbers-with-even-number-of-digits/
Problem: Given an array of positive integers, count elements with an even number of digits.
Example 1: Input: nums = [12, 345, 2, 6, 7896] | Output: 2
Example 2: Input: nums = [555, 901, 482, 1771] | Output: 1
Constraints: 1 <= nums.length <= 500; 1 <= nums[i] <= 10^5

### 24. Self-Dividing Numbers
LeetCode: #728 — https://leetcode.com/problems/self-dividing-numbers/
Problem: Return all numbers in [left, right] divisible by every nonzero digit they contain.
Example: Input: left = 1, right = 22 | Output: [1,2,3,4,5,6,7,8,9,11,12,15,22]
Constraints: 1 <= left <= right <= 10^4

### 25. Armstrong Number
LeetCode: Custom practice
Problem: Return true if the sum of each digit raised to the number of digits equals n.
Example 1: Input: n = 153 | Output: true
Example 2: Input: n = 123 | Output: false
Constraints: 1 <= n <= 10^9

### 26. Missing Number
LeetCode: #268 — https://leetcode.com/problems/missing-number/
Problem: Given n distinct numbers from [0, n], return the missing number.
Example 1: Input: nums = [3, 0, 1] | Output: 2
Example 2: Input: nums = [0, 1] | Output: 2
Constraints: 1 <= nums.length <= 10^4; all elements distinct and between 0 and nums.length.

### 27. Number Complement
LeetCode: #476 — https://leetcode.com/problems/number-complement/
Problem: Flip all significant bits in the binary representation of a positive integer.
Example 1: Input: num = 5 | Output: 2
Example 2: Input: num = 1 | Output: 0
Constraints: 1 <= num < 2^31

### 28. Convert a Number to Base 7
LeetCode: #504 — https://leetcode.com/problems/base-7/
Problem: Return the base-7 representation of an integer as a string.
Example 1: Input: num = 100 | Output: "202"
Example 2: Input: num = -7 | Output: "-10"
Constraints: -10^7 <= num <= 10^7

### 29. Add Binary
LeetCode: #67 — https://leetcode.com/problems/add-binary/
Problem: Given two binary strings a and b, return their binary sum.
Example 1: Input: a = "11", b = "1" | Output: "100"
Example 2: Input: a = "1010", b = "1011" | Output: "10101"
Constraints: 1 <= a.length, b.length <= 10^4; strings contain only 0 and 1.

### 30. Plus One
LeetCode: #66 — https://leetcode.com/problems/plus-one/
Problem: An integer is represented by an array of digits. Add one and return the updated array.
Example 1: Input: digits = [1, 2, 9] | Output: [1, 3, 0]
Example 2: Input: digits = [9, 9, 9] | Output: [1, 0, 0, 0]
Constraints: 1 <= digits.length <= 100; 0 <= digits[i] <= 9.

## Level 4: Sequences, Powers and Mathematical Patterns

### 31. Calculate Factorial
LeetCode: Custom practice
Problem: Given a non-negative integer n, return n!. By definition, 0! = 1.
Example 1: Input: n = 5 | Output: 120
Example 2: Input: n = 0 | Output: 1
Constraints: 0 <= n <= 20; return a 64-bit integer.

### 32. Factorial Trailing Zeroes
LeetCode: #172 — https://leetcode.com/problems/factorial-trailing-zeroes/
Problem: Return the number of trailing zeroes in n! without calculating the full factorial.
Example 1: Input: n = 5 | Output: 1
Example 2: Input: n = 10 | Output: 2
Constraints: 0 <= n <= 10^4

### 33. Sqrt(x)
LeetCode: #69 — https://leetcode.com/problems/sqrtx/
Problem: Return the square root of x rounded down. Do not use built-in square-root or exponent functions.
Example 1: Input: x = 4 | Output: 2
Example 2: Input: x = 8 | Output: 2
Constraints: 0 <= x <= 2^31 - 1

### 34. Valid Perfect Square
LeetCode: #367 — https://leetcode.com/problems/valid-perfect-square/
Problem: Determine whether a positive integer is a perfect square without using a built-in square-root function.
Example 1: Input: num = 16 | Output: true
Example 2: Input: num = 14 | Output: false
Constraints: 1 <= num <= 2^31 - 1

### 35. Pow(x, n)
LeetCode: #50 — https://leetcode.com/problems/powx-n/
Problem: Calculate x raised to the signed integer power n efficiently.
Example 1: Input: x = 2.0, n = 10 | Output: 1024.0
Example 2: Input: x = 2.0, n = -2 | Output: 0.25
Constraints: -100.0 < x < 100.0; -2^31 <= n <= 2^31 - 1.

### 36. Fibonacci Number
LeetCode: #509 — https://leetcode.com/problems/fibonacci-number/
Problem: Return the nth Fibonacci number, where F(0)=0, F(1)=1, and F(n)=F(n-1)+F(n-2).
Example 1: Input: n = 2 | Output: 1
Example 2: Input: n = 6 | Output: 8
Constraints: 0 <= n <= 30

### 37. N-th Tribonacci Number
LeetCode: #1137 — https://leetcode.com/problems/n-th-tribonacci-number/
Problem: Return T(n), where T(0)=0, T(1)=1, T(2)=1, and every later term is the sum of the previous three.
Example 1: Input: n = 4 | Output: 4
Example 2: Input: n = 25 | Output: 1389537
Constraints: 0 <= n <= 37

### 38. Arranging Coins
LeetCode: #441 — https://leetcode.com/problems/arranging-coins/
Problem: Given n coins, return the number of completely filled staircase rows.
Example 1: Input: n = 5 | Output: 2
Example 2: Input: n = 8 | Output: 3
Constraints: 1 <= n <= 2^31 - 1

### 39. Sum Multiples
LeetCode: #2652 — https://leetcode.com/problems/sum-multiples/
Problem: Return the sum of integers from 1 through n divisible by 3, 5, or 7. Count each integer once.
Example 1: Input: n = 7 | Output: 21
Example 2: Input: n = 10 | Output: 40
Constraints: 1 <= n <= 1000

### 40. Find the Pivot Integer
LeetCode: #2485 — https://leetcode.com/problems/find-the-pivot-integer/
Problem: Find x such that the sum from 1 through x equals the sum from x through n. Return -1 if none exists.
Example 1: Input: n = 8 | Output: 6
Example 2: Input: n = 4 | Output: -1
Constraints: 1 <= n <= 1000

## Level 5: Mixed Mathematical Problem-Solving

### 41. Sum of Square Numbers
LeetCode: #633 — https://leetcode.com/problems/sum-of-square-numbers/
Problem: Determine whether non-negative integer c can be expressed as a^2 + b^2 for integers a and b.
Example 1: Input: c = 5 | Output: true
Example 2: Input: c = 3 | Output: false
Constraints: 0 <= c <= 2^31 - 1

### 42. Ugly Number
LeetCode: #263 — https://leetcode.com/problems/ugly-number/
Problem: Return true if n is positive and its prime factors are limited to 2, 3, and 5.
Example 1: Input: n = 6 | Output: true
Example 2: Input: n = 1 | Output: true
Example 3: Input: n = 14 | Output: false
Constraints: -2^31 <= n <= 2^31 - 1

### 43. The K-th Factor of n
LeetCode: #1492 — https://leetcode.com/problems/the-kth-factor-of-n/
Problem: Return the kth smallest positive factor of n, or -1 if fewer than k factors exist.
Example 1: Input: n = 12, k = 3 | Output: 3
Example 2: Input: n = 7, k = 2 | Output: 7
Constraints: 1 <= k <= n <= 1000

### 44. Number of Common Factors
LeetCode: #2427 — https://leetcode.com/problems/number-of-common-factors/
Problem: Return the number of positive integers that divide both a and b.
Example 1: Input: a = 12, b = 6 | Output: 4
Example 2: Input: a = 25, b = 30 | Output: 2
Constraints: 1 <= a, b <= 1000

### 45. Harshad Number
LeetCode: #3099 — https://leetcode.com/problems/harshad-number/
Problem: Return the digit sum of x if x is divisible by that sum; otherwise, return -1.
Example 1: Input: x = 18 | Output: 9
Example 2: Input: x = 23 | Output: -1
Constraints: 1 <= x <= 100

### 46. Find Greatest Common Divisor of Array
LeetCode: #1979 — https://leetcode.com/problems/find-greatest-common-divisor-of-array/
Problem: Return the GCD of the smallest and largest elements of nums.
Example 1: Input: nums = [2, 5, 6, 9, 10] | Output: 2
Example 2: Input: nums = [7, 5, 6, 8, 3] | Output: 1
Constraints: 2 <= nums.length <= 1000; 1 <= nums[i] <= 1000.

### 47. Number of Good Pairs
LeetCode: #1512 — https://leetcode.com/problems/number-of-good-pairs/
Problem: Count pairs of indices i < j for which nums[i] == nums[j].
Example 1: Input: nums = [1, 2, 3, 1, 1, 3] | Output: 4
Example 2: Input: nums = [1, 1, 1, 1] | Output: 6
Constraints: 1 <= nums.length <= 100; 1 <= nums[i] <= 100.

### 48. Single Number
LeetCode: #136 — https://leetcode.com/problems/single-number/
Problem: Every element in nums appears twice except one. Find the element that appears once. Aim for linear time and constant extra space.
Example 1: Input: nums = [2, 2, 1] | Output: 1
Example 2: Input: nums = [4, 1, 2, 1, 2] | Output: 4
Constraints: 1 <= nums.length <= 3 * 10^4.

### 49. Count Prime Numbers in a Range
LeetCode: Custom practice
Problem: Given left and right, count primes in the inclusive range [left, right].
Example 1: Input: left = 10, right = 20 | Output: 4
Example 2: Input: left = 1, right = 5 | Output: 3
Constraints: 1 <= left <= right <= 10^6; right - left <= 10^5.

### 50. Sum of Digits in Base K
LeetCode: #1837 — https://leetcode.com/problems/sum-of-digits-in-base-k/
Problem: Convert n to base k and return the sum of its digits in that base.
Example 1: Input: n = 34, k = 6 | Output: 9
Example 2: Input: n = 10, k = 10 | Output: 1
Constraints: 1 <= n <= 100; 2 <= k <= 10.
