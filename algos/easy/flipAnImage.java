/* 
Given a binary matrix A, we want to flip the image horizontally, then invert it, and return the resulting image.

To flip an image horizontally means that each row of the image is reversed.  For example, flipping [1, 1, 0] horizontally results in [0, 1, 1].

To invert an image means that each 0 is replaced by 1, and each 1 is replaced by 0. For example, inverting [0, 1, 1] results in [1, 0, 0].
*/
class Solution {
    public int[][] flipAndInvertImage(int[][] A) {
        for(int i = 0; i<A.length;i++) {
            int length = A[i].length;
            int mid = (length % 2 == 0) ? length / 2 : (length/2) + 1;
            for(int j = 0; j < mid; j++) {
                int temp = 1 - A[i][j];
                A[i][j] = 1 - (A[i][length-1-j]);
                A[i][length-1-j] = temp;
            }
        }
        return A;
    }
}