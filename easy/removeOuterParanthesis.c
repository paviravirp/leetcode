/*
A valid parentheses string is either empty (""), "(" + A + ")", or A + B, where A and B are valid parentheses strings, and + represents string concatenation.  For example, "", "()", "(())()", and "(()(()))" are all valid parentheses strings.

A valid parentheses string S is primitive if it is nonempty, and there does not exist a way to split it into S = A+B, with A and B nonempty valid parentheses strings.

Given a valid parentheses string S, consider its primitive decomposition: S = P_1 + P_2 + ... + P_k, where P_i are primitive valid parentheses strings.

Return S after removing the outermost parentheses of every primitive string in the primitive decomposition of S.
 */
char * removeOuterParentheses(char * S){
    char * result = S;
    int i = 0, j=0;
    while(*S) {
        if(*S == '(') {
            if(j > 0) {
                result[i++] = *S;
            }
            j++;
        } else {
            j--;
            if(j > 0) {
                result[i++] = *S;
            }
        }
        *S++;

    }
    result[i] = '\0';
    return result;
}