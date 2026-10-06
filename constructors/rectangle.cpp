#include <bits/stdc++.h> 
using namespace std;

class Rectangle{
    private:
        double length;
        double width;
        double area;
    public:
        Rectangle(){
            this->length=1.0;
            this->width = 1.0;
        }
        Rectangle(double length,double width){
            this->length = length;
            this-> width = width;
        }
        void calculateArea(){
            this->area = length*width;
        }
        void displayDetails(){
            cout << fixed << setprecision(2);
            cout << "Length : "  <<  length << endl;
            cout << "Width : "  << width << endl;
            cout << "Area : "  << area << endl;
        }
};
