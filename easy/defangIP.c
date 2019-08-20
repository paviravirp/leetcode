/*
Given a valid (IPv4) IP address, return a defanged version of that IP address.

A defanged IP address replaces every period "." with "[.]".
 */
int i;
char* result;

char* defangIPaddr(char* address){
    i = 0;
    result = malloc(30);
	
    while (*address) {
        if (*address == '.') {
            result[i++] = '[';
            result[i++] = *address++;
            result[i++] = ']';
        } else {
            result[i++] = *address++;
        }
    }
	
    result[i] = '\0';
    return result;
}