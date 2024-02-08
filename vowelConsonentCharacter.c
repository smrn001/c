#include <stdio.h>
int main(){
    char ch;
    printf("Enter a character : ");
    scanf("%c",&ch);

    switch (ch)
    {
    case 'a':case 'e' :case 'i':case'o':case 'u':case'A':case 'E':case'I':case 'O':case'U':
        printf("You Entered vowel ");
        break;
    default:
        if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))
            printf("You Entered consonent ");
        else if(ch>='0'&&ch<='9')
            printf("You entered number ");
        else
            printf("You entered other character ");
    }
    return 0;
}