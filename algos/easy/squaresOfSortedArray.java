/*
Given an array of integers A sorted in non-decreasing order, return an array of the squares of each number, also in sorted non-decreasing order.

 

Example 1:

Input: [-4,-1,0,3,10]
Output: [0,1,9,16,100]
Example 2:

Input: [-7,-3,2,3,11]
Output: [4,9,9,49,121]
 

Note:

1 <= A.length <= 10000
-10000 <= A[i] <= 10000
A is sorted in non-decreasing order.

 */
class Solution {
    public int[] sortedSquares(int[] A) {
        int[] ans = new int[A.length];
        int index = 0;
        int i = 0, j = 0;
        while(A[i] < 0 && i < A.length - 1) {
            i++;
        }
        j = i - 1;
        while(j >= 0 && i < A.length) {
            if(A[j] * A[j] >= A[i]*A[i]) {
                ans[index++] = A[i]*A[i];
                 i++;
            }
            else {
              ans[index++] = A[j]*A[j];
                 j--;  
            }
        }
        while(i < A.length) {
            ans[index++] = A[i]*A[i];
                i++;
        }
        while(j >= 0) {
            ans[index++] = A[j]*A[j];
                j--; 
        }
        return ans;
    }
}