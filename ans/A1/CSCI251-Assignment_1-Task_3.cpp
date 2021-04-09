#include<iostream>
#include<fstream>
using namespace std;

int main(){
    char character;
    int a[256] = {0};
    int i = 65;
    ifstream myfile("CSCI251-Assignment_1-Task_3_passage.txt");
    ofstream outFile;
    outFile.open("result.txt");
    while (myfile >> character) {
        a[character]++;
    }

    while (i != 0) {
        character = i;
        outFile << character << ": " << a[i] << endl;
        i++;
        
        if (i == 91) {
            i = 97;
        }
        if (i == 123) {
            i = 0;
        }
        
    }
    outFile.close();
	return 0;
}