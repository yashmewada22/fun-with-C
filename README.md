# fun-with-c
This repository includes various C/C++ project

1. Swapping first and last nibble -> C code for 8, 12, 16 bit numbers
2. Swapping and sorting of an odd length array -> swap the numbers first (swap first half and second half from middle) and then sort them as shown:
   Input array -> 2 1 3 5 4,
   After swapping -> 5 4 3 2 1, 
   After sorting -> 4 5 3 1 2 
3. Calculate the n-moving average of a given array.
   For example -> to calculate 5 - moving average ->
   Intial array 1 2 3 4 5 -> avg = 3
   Add new number 6 to the end of an array as 1 2 3 4 5 6 but for 5-moving avg calculation, only 2 3 4 5 6 will be consider and avg = 4
4. Arrays of structure -> It shows the basic example on how to use array of structure in C
5. twoSum in C -> 
   Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
   You may assume that each input would have exactly one solution, and you may not use the same element twice.
   You can return the answer in any order.
   Input: nums = [2,7,11,15], target = 9
   Output: [0,1]
   Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
   The algorithm has O(n2) time complexity.

