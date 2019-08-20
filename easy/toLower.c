/*
Implement function ToLowerCase() that has a string parameter str, and returns the same string in lowercase.
 */
char * toLowerCase(char * str){
    char * result = str;
    while(*str) {
        int ascii = *str;
        if(ascii <= 90 && ascii >= 65) {
            *str = (char)(ascii + 32);
        }
        *str++;
    }
    return result;
}