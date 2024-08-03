#include <stdio.h>
#include <string.h>
int countSubstringOccurrences(const char *str, const char *substr){
    int count = 0;
    const char *ptr = str;
    
    while((ptr = strstr(ptr, substr)) != '\0'){
        count++;
        ptr++;
    }
    
    return count;

}

int main(){
    const char *mainString = "hello hello  how are you today?";
    const char *subString = "hello";
    
    int occurrences = countSubstringOccurrences(mainString, subString);
    
    printf("The substring '%s' occurred %d times in the main string.\n", subString, occurrences);
    
    return 0;
}
