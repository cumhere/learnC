//
// Created by 王盟 on 2017/9/12.
//
#include <stdio.h>

int n1(void)
{
    char firstName[10];
    char lastName[10];
    printf("Enter 1st and last name seperated by \',\'\n");
    printf(">");
    scanf("%s ,%s", firstName, lastName);
    printf("Hi, %s,%s\n", firstName, lastName);
}
