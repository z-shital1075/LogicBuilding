//check weather a character is vowel or not

#include<stdio.h>
#include<stdbool.h>
bool ChkVowel(char ch){
if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
{
return true;
}
else
{
    return false;
}
}
int main(){
    char ch=' ';
    bool bRet=false;
    printf("enter the character:\n");
    scanf("%c",&ch);

    bRet=ChkVowel(ch);
    if(bRet==true)
    {
        printf("it is vowel");
    }
    else
    {
        printf("it is not vowel");
    }
    
}