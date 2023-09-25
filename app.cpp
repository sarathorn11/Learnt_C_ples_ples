#include <iostream>
using namespace std;

int main()
{
    int number; // declaration
    number = 3; // assignment
    //--------------------------------------data type
    //integer (whole numbers)
    int age = 10; 
    int year = 2000;
    int date = 4;

    //double (number including decimal)
    double price = 10.99;
    double gpa = 0.7;

    //Single character
    char character = 'A';

    // Boolean
    bool isEmpty = false;
    // string (object that represents a sequence of text)
    std::string name = "hello";


    cout << "Hello World!" << endl;
    cout << "Hello World!" << '\n';
    cout <<number << endl;
    cout << "Price: " << price << endl;
    cout << "date: " << date << endl;
    cout << character<< endl;
    cout << "isEmpty: " << isEmpty << endl;
    

    return 0;
}