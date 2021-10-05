## Smallest range in K lists

Given K sorted lists of integers, KSortedArray[] of size N each. The task is to find the smallest range that includes at least one element from each of the K lists. If more than one such range's are found, return the first such range found.

Example 1:

![image](https://user-images.githubusercontent.com/58622363/135851608-c0bed917-1300-4626-81f1-01533365f4d7.png)


Explanation: K = 3
A:[1 3 5 7 9]
B:[0 2 4 6 8]
C:[2 3 5 7 11]
Smallest range is formed by number 1
present in first list and 2 is present
in both 2nd and 3rd list.

![image](https://user-images.githubusercontent.com/58622363/135851758-c977f5ed-7b17-42b6-9794-9499e68f8a3c.png)


Your Task :

Complete the function findSmallestRange() that receives array , array size n and k as parameters and returns the output range (as a pair in cpp and array of size 2 in java and python)

Expected Time Complexity : O(n * k *log k)
Expected Auxilliary Space  : O(k)

Constraints:

      1 <= K,N <= 500
      1 <= a[ i ] <= 105
