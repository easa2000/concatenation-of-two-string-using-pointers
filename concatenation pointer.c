// concatenation of two string using pointers
#include<stdio.h>
void main()
{
    char str1[100], str2[100], copy_str[100];
    char *pstr1, *pstr2, *pcopy_str;
    pstr1 = str1;
    pstr2 = str2;
    pcopy_str = copy_str;
    printf("\n Enter a first string: ");
    gets(str1);
    printf("\n Enter a second string: ");
    gets(str2);
    while(*pstr1 != '\0')
    {
        *pcopy_str = *pstr1;
        pcopy_str++;
        pstr1++;
    }
    while(*pstr2 != '\0')
    {
        *pcopy_str = *pstr2;
        pcopy_str++;
        pstr2++;
    }
    *pcopy_str = '\0';
    printf("\n The new text is: ");
    pcopy_str = copy_str;
    while(*pcopy_str != '\0')
    {
        printf("%c",*pcopy_str);
        pcopy_str++;
    }
}
