#ifndef LAB01_H
#define LAB01_H
using std::string;
using std::cout;
using std::cin;
using std::endl;


//taking the number of chair
int takeNumOfChair(int& numOfChair) {
    cout << "Enter the number of chairs for the table : ";
    cin >> numOfChair;
    return numOfChair;
}
//taking the value of surface area
double takeSurfaceArea(double& surfaceArea) {
    cout << "Enter the surface area of the table: ";
    cin >> surfaceArea;
    return surfaceArea;
}

//taking the value of color
string takeColourOfSeats(string& colourOfSeats) {
    cout << "Enter the colour of the cushions: ";
    cin >> colourOfSeats;
    return colourOfSeats;
}


char takeTypeOfWood(char& typeOfWood) {
    cout << "Enter the type of wood - m for mahogany, o for oak, or p for pine: ";
    cin >> typeOfWood;
    //if user intert the wrong char it will loop back to the fuction and ask the user again.
    if ((typeOfWood != 'm') && (typeOfWood != 'o') && (typeOfWood != 'p')) {
        takeTypeOfWood(typeOfWood);
    }
    else {
        return typeOfWood;
    }
}


double computePrice(int& numOfChair, double& surfaceArea, char& typeOfWood, double& price) {
    int x;
    //The x will follow the type of wood to change the value.
    if (typeOfWood == 'm') {
        x = 200;
    }
    else if (typeOfWood == 'o') {
        x = 150;
    }
    else {
        x = 95;
    }
    //Calculate the price
    price = x * (surfaceArea + 0.5 * numOfChair);
    return price;
}

void displayTableDetails(int& numOfChair, double& surfaceArea, string& colourOfSeats, char& typeOfWood) {
    //square root of the surface area
    double root = sqrt(surfaceArea);
    cout << "You have chosen a oak table with dimensions " << root << " by " << root << " and " << numOfChair << " chairs with " << colourOfSeats << " cushions!" << endl;
}

//display the value of price
void displayTablePrice(double& price) {
    cout << "Price is $" << price << "." << endl;
}

#endif // !LAB01_H

