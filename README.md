# mergesrt
merge sort using ( basics of recursion, binary search and dynamic array)


steps to sort the array using merge sort


1. first of all find mid of the main array in which you have to sort(basics of binary search)
2. After Finding mid, Array will be divided into 2 parts Left array and Right array(assume).
3.  After the division, now start sorting the array jusing recursion(basics of recursion is required). and eventually the left and right part of the array will be sorted respectively.
4.  Now the final part is to merge the divided arrays, Now to merge the arrays here are some sub steps
   1. copy the values of main array into the left and right array
   2. Additionally , you have to create a array (name it as left and right array in which we gonna apply merge sort)
   3. Now Copy the values of main array into left and right array respectively.
   4. After that check if the left array element is smaller than right array element and vice versa, if yes then copy the values of left or right array into the final array .
   5. NOTE: There will be a case where one of the array either left or right array may become out of bound in that case if left or right array has become out of bound then copy the remaining elements into the final array.

5. After all this steps, the code is completed and merge sort has been  completed.
