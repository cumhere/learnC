#include <stdio.h>
#define NAME "wm"
#define PI 3.14

int main() {

    /*
    int age1 = 99;
    float assert;
    char pet[10];

//    如果scanf带多个转换说明，C规定在第一个错误处停止读取输入，所以下面的scanf在输入A回车后程序退出
    scanf("%d   %s%f", &age1, pet, &assert);
//    如果有多个scanf第一个scanf如果不能接受，则直接给下一个scanf接收
    scanf("%d", &age1);
    scanf("%s", pet);
    scanf("%f", &assert);
    printf("%s is %d years old, worth $%.2f.\n", pet, age1, assert);


    scanf("%x", &age);
    scanf("%s", pet);
    printf("%s is %x years old.\n", pet, age);
    int age2, items;
    printf("Enter 2 ages>\n");
    scanf("%d,%d", &age1, &age2);
    printf("age1=%d, age2=%d.\n", age1,age2);

    //%c前面的空格>=1个时候，该scanf会读取输入中第一个非空白字符（空格，制表，回车）
    char c;
    scanf("     %c", &c);
    printf("%c\n", c);
     */
    /*
    //修饰符*在printf的应用:动态指定宽度或者精度
    int num = 256;
    int width;
    scanf("%d", &width);
    printf("*%*d*\n", width, num);

    int precision;
    float weight = 242.5;
    scanf("%d %d", &width, &precision);
    printf("*%*.*f*\n", width, precision, weight);
    //修饰符*在scanf上的应用：跳过该值,取特定的列
    int age;
    scanf("%*d %*d %d", &age);
    printf("%d\n", age);
    */

    return 0;
}