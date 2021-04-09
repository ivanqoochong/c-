// lab05.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include<string>
#include "transportation.h"
using std::string;
using std::cin;
using std::cout;

Transportation* t;


void sea() {
    SeaTransport S;
    t = &S;
    t->printTransportInfo();
}

void land() {
    LandTransport L;
    t = &L;
    t->printTransportInfo();
}

void air() {
    AirTransport A;
    t = &A;
    t->printTransportInfo();
}

void canoe() {
    Canoe canoe;
    t = &canoe;
    t->printTransportInfo();
    sea();
}

void car() {
    Car car;
    t = &car;
    t->printTransportInfo();
    land();
}

void bicyle() {
    Bicyle bicyle;
    t = &bicyle;
    t->printTransportInfo();
    land();
}

void glider() {
    Glider glider;
    t = &glider;
    t->printTransportInfo();
    air();
}

void hover() {
    HoverCraft hover;
    hover.printTransportInfo();
    land();
    sea();
}

int main()
{
    
    cout << "How many object u wanna create?" << endl;
    int n;
    cin >> n;
    srand(time(NULL));
    
    for (int i = 0; i < n; i++)
    {
        int ran = rand() % 4 + 1;
        switch (ran)
        {
        case 1:
            canoe();
            break;
        case 2:
            bicyle();
            break;
        case 3:
            car();
            break;
        case 4:
            hover();
            break;
        default:
            glider();
        }
    }
    

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
