// lab01.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//5974872_Chong Chi Ho lab01

#include <iostream>
#include "lab_1.h"




int main() {
    int numOfChair;
    double surfaceArea, price;
    string colourOfSeats;
    char typeOfWood;

    takeNumOfChair(numOfChair);
    takeColourOfSeats(colourOfSeats);
    takeSurfaceArea(surfaceArea);
    takeTypeOfWood(typeOfWood);
    computePrice(numOfChair, surfaceArea, typeOfWood, price);
    displayTableDetails(numOfChair, surfaceArea, colourOfSeats, typeOfWood);
    displayTablePrice(price);
   
    return 0;
}