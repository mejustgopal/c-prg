#include<stdio.h>
#include<string.h>
char last_character_of_string(char s[]);
int main()
{
    char ch, str[20];
    int i;
    printf("Enter Your Name");
    fgets(str,20,stdin);

    // for(i=0;str[i];i++);
    // str[i-1]='\0';

    str[strlen(str)-1]='\0';

    // for(i=0;str[i];i++);
    // printf("Length of %s is %d",str,i);

    ch=last_character_of_string(str);
    printf("Last Character of the string is %c",ch);

    return 0;
}
char last_character_of_string(char s[])
{
    return s[strlen(s)-1];
}