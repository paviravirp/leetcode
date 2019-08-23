/*
In a array A of size 2N, there are N+1 unique elements, and exactly one of these elements is repeated N times.

Return the element repeated N times.

 

Example 1:

Input: [1,2,3,3]
Output: 3
*/
class Solution {
    public int repeatedNTimes(int[] A) {
        int n = A.length;
        for(int i=0;i<A.length;i++) {
            if(A[i] == A[(i+1+n)%n] || A[i] == A[(i+2+n)%n]) {
                return A[i];
            }
        }
        return 0;
    }
}