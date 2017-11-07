#include <iostream>

using namespace std;

int main()
{
    float weight, underweight, normal, overweight;
    int height;
    
    cout << "Please enter your height in cm : " << endl;
    cin >> height;
    cout << "Please enter your weight in kg : " << endl;
    cin >> weight;
    
    if (weight<height/2.5)
       cout << "Result : Underweight" << endl;
       else if (height/2.5 <= weight <= height/2.3)
            cout << "Result : Normal" << endl;
            else if (height/2.3 < weight)
                 cout << "Result : Overweight" << endl;
                 
                 
                 return 0;
    }
