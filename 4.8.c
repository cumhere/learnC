//
// Created by 王盟 on 2017/9/12.
//
#include <stdio.h>
#include <string.h>
#define bits_per_byte 8

int n1(void)
{
    char firstName[10];
    char lastName[10];

    printf("Enter your first name and last name in sequence, seperated by 空白:\n>");
    scanf("%s%s", firstName, lastName);
    //scanf()括号中的空白没什么用，跟没有空白一样的效果，
    // 空白在scanf用户输入的时候表现的行为就是分隔符，多少个空白在scanf眼里都只是一个分隔符，
    // 用来分割输入，然后把值送入各个变量中。如果scanf(“%d%s”);
    // 是这样的话，当用户输入23dsf时，scanf会自动检测最后一个整型的位置，然后分割后面的字符串给字符数组变量，前面的数字给整形变量。
    printf("Hi, *%s* *%s*\n", firstName, lastName);

    return 0;
}

int n2(void)
{
    char name[10];

    printf(">");
    scanf("%s", name);
    printf("*%s*\n", name);
    printf("*%20s*\n", name);//只能输入"wm",带引号的输入名字才可以
    printf("*%-20s*\n", name);//只能输入"wm",带引号的输入名字才可以
    printf("*%*s*\n", strlen(name) + 3, name);

    return 0;
}

int n3(void)
{
    float f;
    printf(">");
    scanf("%f", &f);
    printf("This input is %.1f or %.1e.\n", f, f);
    printf(">");
    scanf("%f", &f);
    printf("This input is %+.3f or %.3e.\n", f, f);

    return 0;
}

int n4(void)
{
    char name[10];
    float height;

    printf("Name:");
    scanf("%s", name);
    printf("Height(in cm):");
    scanf("%f", &height);
    height = height / 100.0;
    printf("%s, you are %.2fm tall.", name, height);

    return 0;
}

int n5(void)
{
    float speed;
    float size;
    float time;

    printf("Enter download speed(Mb/s):");
    printf(">");
    scanf("%f", &speed);
    printf("Enter size of the file(MB):");
    printf(">");
    scanf("%f", &size);

    time = size / (speed / bits_per_byte);

    printf("At %.2f megabits per seconds, "
                   "a file of %.2f megabytes "
                   "downloads in %.2f seconds.", speed, size, time);

    return 0;
}

int n6(void)
{
    char firstName[10];
    char lastName[10];

    printf("Enter 1st and last name in this format:xx xx");
    printf(">");
    scanf("%s%s", firstName, lastName);
    printf("%s %s\n", firstName, lastName);
    printf("%*d %*d\n", strlen(firstName), strlen(firstName), strlen(lastName), strlen(lastName));
    printf("%-*d %-*d\n", strlen(firstName), strlen(firstName), strlen(lastName), strlen(lastName));

    return 0;
}