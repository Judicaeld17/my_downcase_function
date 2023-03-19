// Description
// Create a my_downcase function that takes a string as a parameter and returns the lowercase version of it.
#include<ctype.h>
char* my_downcase(char* str){
    char* temp=str;
    while(*temp!='\0'){
        if(*temp>='A' && *temp<='Z'){
           *temp=*temp-'A'+'a';
        }
        temp++;
    }
    return str;
}
