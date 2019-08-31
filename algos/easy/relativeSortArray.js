/*
Given two arrays arr1 and arr2, the elements of arr2 are distinct, and all elements in arr2 are also in arr1.

Sort the elements of arr1 such that the relative ordering of items in arr1 are the same as in arr2.  Elements that don't appear in arr2 should be placed at the end of arr1 in ascending order.

 

Example 1:

Input: arr1 = [2,3,1,3,2,4,6,7,9,2,19], arr2 = [2,1,4,3,9,6]
Output: [2,2,2,1,4,3,3,9,6,7,19]
 

Constraints:

arr1.length, arr2.length <= 1000
0 <= arr1[i], arr2[i] <= 1000
Each arr2[i] is distinct.
Each arr2[i] is in arr1.
*/
var relativeSortArray = function(arr1, arr2) {
    arr1.sort(function(a, b){return a-b});
    let count = {};
    let result = [];
    for(let i = 0; i < arr1.length; i++) {
        let cnt = (parseInt(count[arr1[i]]) + 1) || 1;
        count[arr1[i]] = cnt;
    }
    for(let i = 0; i < arr2.length; i++) {
        while(count[arr2[i]] > 0) {
            result.push(arr2[i]);
            count[arr2[i]]--;
        }
    }
    for(let i = 0; i < arr1.length; i++) {
        if(count[arr1[i]] > 0)
            result.push(arr1[i]);
    }
    return result;
};