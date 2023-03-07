#include<cs50.h>
#include<stdio.h>
int main(void)
{
    string first = get_string("what is your name? ");
    string last = get_string("what is your last name? ");
    printf("hello,   %s\n", first, last);
}