#include <stdio.h>
#include <stdlib.h>

int isPalindrome(int x)
{
    int temp,rvrs=0,lastDigit,i,count=0;
    temp=x;
    while(temp!=0)
    {
        lastDigit=temp%10;
        rvrs=rvrs*10+lastDigit;
        temp=temp/10;
    }
    if (rvrs==x)
        printf("Your Number Is Palindrome\n");
    if(rvrs!=x)
        printf("Your Number Is not Palindrome\n");

}

int main()
{
    int num;
    printf("enter yout number\n");
    scanf("%d",&num);
    isPalindrome(num)
    ;


}