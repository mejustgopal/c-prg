#include<stdio.h>
void CheckCharacter();
void CheckCharacter1();
int main(){
    CheckCharacter1();    
    return 0;
}
void CheckCharacter()
{
    char ch;
    printf("Enter a character");
    scanf("%c",&ch);
    switch (ch)
    {
    case 'a' ... 'z':
        printf("\n Lowercase character");
        break;
    case 'A' ... 'Z':
        printf("\n Uppercase character");
        break;
    default:
        printf("\n Special Character");
        break;
    }
}

void CheckCharacter1()
{
    char ch;
    printf("Enter a character");
    scanf("%c",&ch);
    switch (ch)
    {
        case 'a': case 'e': case 'i': case 'o': case 'u': case 'A': case 'E': case 'I': case 'O': case 'U':
            printf("\n Vowel Character");
            break;
        case 'b' ... 'd' : case 'f' ... 'h' : case 'j' ... 'n' : case 'p' ... 't' : case 'v' ... 'z' :
        case 'B' ... 'D' : case 'F' ... 'H' : case 'J' ... 'N' : case 'P' ... 'T' : case 'V' ... 'Z' :
            printf("\n Constant Character");
            break;
        default:
            printf("Special Character");
    }
}