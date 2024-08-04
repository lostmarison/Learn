#include <iostream>
#include <string.h>
using namespace std;

bool isSymmetry(char *str)
{
    char *left = str;
    char *right = str + strlen(str) - 1;
    while (left < right)
    {
        if (*left != *right)
            return false;
        left++;
        right--;
    }
    return true;
}

int main(){
    char str[20];
    cin>>str;
    cout<<isSymmetry(str);
    return 0;
}