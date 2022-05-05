// arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    /*
string name;//string type variable is declared
cout << "Enter your name: ";//prompting for input
cin >> name;// input statement
cout << "Welcome Back " << name <<" to Yoobee." << endl; // output statement
string person1 ="Ryuu";
string person2 = "Veni";
string person3 = "Darijan";
*/
//Array is a list of values stored under a common name
    string person[3] = { "Ryuu","Veni","Darijan" }; //declaring an array of string
    int age[3] = { 23, 25, 16 };//declaring an array of int
    float weight[3] = { 45.0, 30.0, 25.5 };
    char gender[3] = { 'M' , 'F', 'M' };

    //accessing the array element index starts at 0
   //cout << "The first element in the person array is: " << person[0]<<endl;//index or subscript refers the position of value in the array
   //cout << "The last element in the person array is: " << person[2]<<endl;
   //person[1] = "Nicki";
   //cout << "The second element in the person array is: " << person[1]<<endl;

    int i;
    /*for (i = 0; i < 3; i++) {
    cout << "Welcome back " << person[i] << " to Yoobee" << endl;
    }
    for (i = 0; i < 3; i++) {
    cout << "The age of " << person[i] << " is : " << age[i] <<endl;
    }
    for (i = 0; i < 3; i++) {
    cout << "The weight of " << person[i] << " is : " << weight[i] << endl;
    }*/

    for (i = 0; i < 3; i++) {
        if (gender[i] == 'M')
            cout << person[i] << " is " << age[i] << " years old and he weighs " << weight[i] << " kg." << endl;
        else
            cout << person[i] << " is " << age[i] << " years old and she weighs " << weight[i] << " kg." << endl;
    }

    for (i = 0; i < 3; i++){
        if (weight[i] == 45.0)
            cout << person[i] << " is the heaviest. " << endl;
    }

    for (i = 0; i < 3; i++) {
        if (age[i] == 16)
            cout << person[i] << " is the youngest. " << endl;
    }
    
    int maleCount = 0;
    int femaleCount = 0;

    for (int i = 0; i < 3; i++) {
        if (gender[i] == 'M') {
            maleCount++;
        }
        else {
            femaleCount++;
        }
    }
    cout << " There are " << maleCount << " male members " << endl;


    return 0;
    
}

