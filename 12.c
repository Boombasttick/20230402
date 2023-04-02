#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <assert.h>

int main()
{
    //数组名是首元素地址
    //例外：1.sizeof(数组名)-数组名表示整个数组  2.&数组名-数组名表示整个数组
    // int a[] = {1,2,3,4};
    // printf("%d\n",sizeof(a));               //16
    // printf("%d\n",sizeof(a+0));             //4/8
    // printf("%d\n",sizeof(*a));              //4
    // printf("%d\n",sizeof(a+1));             //4/8
    // printf("%d\n",sizeof(a[1]));            //4
    // printf("%d\n",sizeof(&a));              //4/8
    // printf("%d\n",sizeof(*&a));             //16
    // printf("%d\n",sizeof(&a+1));            //4/8
    // printf("%d\n",sizeof(&a[0]));           //4/8
    // printf("%d\n",sizeof(&a[0]+1));         //4/8


    // char arr[] = {'a','b','c','d','e','f'};
    // printf("%d\n",sizeof(arr));             //6
    // printf("%d\n",sizeof(arr+0));           //4/8
    // printf("%d\n",sizeof(*arr));            //1
    // printf("%d\n",sizeof(arr[1]));          //1
    // printf("%d\n",sizeof(&arr));            //4/8
    // printf("%d\n",sizeof(&arr+1));          //4/8
    // printf("%d\n",sizeof(&arr[0]+1));       //4/8


    // //char arr[] = {'a','b','c','d','e','f'};
    // printf("%d\n",strlen(arr));             //随机值
    // printf("%d\n",strlen(arr+0));           //随机值
    // //printf("%d\n",strlen(*arr));          //err
    // //printf("%d\n",strlen(arr[1]));        //err
    // printf("%d\n",strlen(&arr));            //随机值
    // printf("%d\n",strlen(&arr+1));          //随机值
    // printf("%d\n",strlen(&arr[0]+1));        //随机值


    char arr[] = "abcdef" ;
    printf("%d\n",sizeof(arr));             //7
    printf("%d\n",sizeof(arr+0));           //4/8
    printf("%d\n",sizeof(*arr));            //1
    printf("%d\n",sizeof(arr[1]));          //1
    printf("%d\n",sizeof(&arr));            //4/8
    printf("%d\n",sizeof(&arr+1));          //4/8
    printf("%d\n",sizeof(&arr[0]+1));       //4/8

    printf("%d\n",strlen(arr));             //6
    printf("%d\n",strlen(arr+0));           //6
    //printf("%d\n",strlen(*arr));          //err
    //printf("%d\n",strlen(arr[1]));        //err
    printf("%d\n",strlen(&arr));            //6
    printf("%d\n",strlen(&arr+1));          //随机值
    printf("%d\n",strlen(&arr[0]+1));       //5


    char* p =  "abcdef" ;
    printf("%d\n",sizeof(p));             //4/8
    printf("%d\n",sizeof(p+1));           //4/8
    printf("%d\n",sizeof(*p));            //1
    printf("%d\n",sizeof(p[0]));          //1
    printf("%d\n",sizeof(&p));            //4/8
    printf("%d\n",sizeof(&p+1));          //4/8
    printf("%d\n",sizeof(&p[0]+1));       //4/8


    printf("%d\n",strlen(p));             //6
    printf("%d\n",strlen(p+1));           //5
    //printf("%d\n",strlen(*p));          //err
    //printf("%d\n",strlen(p[0]));        //err
    printf("%d\n",strlen(&p));            //随机值
    printf("%d\n",strlen(&p+1));          //随机值
    printf("%d\n",strlen(&p[0]+1));       //5
    

    int a[3][4] = {0};
    printf("%d\n",sizeof(a));             //48
    printf("%d\n",sizeof(a[0][0]));       //4
    printf("%d\n",sizeof(a[0]));          //16
    printf("%d\n",sizeof(a[0]+1));        //4/8
    printf("%d\n",sizeof(*(a[0]+1)));     //4
    printf("%d\n",sizeof(a+1));           //4/8
    printf("%d\n",sizeof(*(a+1)));        //16
    printf("%d\n",sizeof(&a[0]+1));       //4/8
    printf("%d\n",sizeof(*(&a[0]+1)));    //16
    printf("%d\n",sizeof(*a));            //16
    printf("%d\n",sizeof(a[3]));          //16






    return 0 ;
}