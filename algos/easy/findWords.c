/*
You are given an array of strings words and a string chars.

A string is good if it can be formed by characters from chars (each character can only be used once).

Return the sum of lengths of all good strings in words.

 

Example 1:

Input: words = ["cat","bt","hat","tree"], chars = "atach"
Output: 6
Explanation: 
The strings that can be formed are "cat" and "hat" so the answer is 3 + 3 = 6.
Example 2:

Input: words = ["hello","world","leetcode"], chars = "welldonehoneyr"
Output: 10
Explanation: 
The strings that can be formed are "hello" and "world" so the answer is 5 + 5 = 10.
 

Note:

1 <= words.length <= 1000
1 <= words[i].length, chars.length <= 100
All strings contain lowercase English letters only.

*/
int countCharacters(char ** words, int wordsSize, char * chars){
    int alphabets[26] = { 0 };
    int tempAlpha[26];
    int i, j;
    int count = 0;
    while(*chars) {
        alphabets[*chars - 'a']++;
        *chars++;
    }
    for(i=0; i<wordsSize;i++) {
        for(j = 0; j < 26; j++) {
            tempAlpha[j] = alphabets[j];
        }
        char * temp = words[i];
        int flag = 1;
        while(*temp) {
            if(tempAlpha[*temp - 'a']-- <= 0) {
                flag = 0;
                break;
            }
            *temp++;
        }
        if(flag == 1) count += strlen(words[i]);
    }
    return count;
}