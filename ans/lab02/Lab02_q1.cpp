#include <stdio.h> 
#include <string.h> 


void reverseString(char* str)
{
    int len, i;
    char* f_ptr, * l_ptr, temp;

    // get length
    len = strlen(str);

    // There is 2 pointers which represet the first char and last char
    f_ptr = str;
    l_ptr = str;

    // l_ptr will point to the last char 
    for (i = 0; i < len - 1; i++)
        l_ptr++;

    // swap the first char and last char
    // then f_ptr will point to the second char and lptr will point to the second last
    for (i = 0; i < len / 2; i++) {

        // swap character 
        temp = *l_ptr;
        *l_ptr = *f_ptr;
        *f_ptr = temp;

        // point to next char
        f_ptr++;
        l_ptr--;
    }

}
 
int main()
{

    // get string
    char str[50] = "CSCI251 AP";
    printf("Input a string: %s\n", str);

    // call function
    reverseString(str);

    // print out the output 
    printf("Reverse of the string is: %s\n", str);

    return 0;
}

// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的提示: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案
