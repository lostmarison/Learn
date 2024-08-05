#include <iostream>
#include <string.h>
using namespace std;

/*
指针的每一次递增，它其实会指向下一个元素的存储单元。
指针的每一次递减，它都会指向前一个元素的存储单元。
指针在递增和递减时跳跃的字节数取决于指针所指向变量数据类型长度
*/

void deleteChar(char *str, const char c)
{
    if (!str)
        return;      // 如果str为空，则直接返回
    char *src = str; // 源指针(source)
    char *dst = str; // 目标指针(destination)，用于指向处理后字符串的起始位置
    while (*src)
    {
        if (*src != c)
        {
            *dst = *src; // 将当前字符复制到目标位置
            dst++;       // 目标指针后移
        }
        src++;       // 源指针后移
        *dst = '\0'; // 在处理后的字符串末尾添加字符串结束符(复制完最后字符后又执行了dst++)
    }
}

int main()
{
    char str[] = "level";
    char c = 'l';
    deleteChar(str, c);
    cout << str;
    return 0;
}