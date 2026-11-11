// CSC 134
// M5LAB2
// Ian Fox
// 11/11/2026

#include <iostream>
using namespace std;

double getLength();
double getWidth();
double getArea(double length, double width);
void displayData(double length, double width, double area);


int main()
{
	// This program calculates the area of a rectangle.
	// TODO: fix any syntax errors
	
   double length, width, area;      
          
   // Get the rectangle's length.
   length = getLength();
   
   // Get the rectangle's width.
   width = getWidth();
   
   // Get the rectangle's area.
   area = getArea(length, width);
   
   // Display the rectangle's data.
   displayData(length, width, area);
          
   return 0;
}

double getLength(){
    double length;
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    return length;
}

double getWidth(){
    double width;
    cout << "Enter the width of the rectangle: ";
    cin >> width;
    return width;
}

double getArea(double length, double width){
    double area = length * width;
    return area;
}

void displayData(double length, double width, double area){
    cout << "" << endl;
    cout << "Length of rectangle: " << length << endl;
    cout << "Width of rectangle: " << width << endl;
    cout << "Area of rectangle: " << area << endl;
}

//***************************************************
// TODO: write the getLength, getWidth, getArea,    *
// and displayData functions below.                 *
//***************************************************
