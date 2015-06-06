/*
 * main.cpp
 * HealthProfile program . This file represents HealthProfile's public
 * interface without revealing implementations of HealthProfile's member
 * functions, which are defined in HealthProfile.cpp
 *
 * Stub file for Programming Assignment #2
 *
 * Name:        [ Inim Andrew Esiet ]
 * Matric No:   [ 47123818DC ]
 * Department:  [ computer Science ]
 *
 */

#include <iostream>
#include <string>           // uses C++ string class
#include "HealthProfile.h"  // include definition of class HealthProfile
using namespace std;

int main()
{
	
    // Variable declarations
    string firstName;
    string lastName;
    string gender;
    int month;
    int day;
    int year;
    double height;
    int weight;
    int currentDay;
    int currentMonth;
    int currentYear;
    
    // Prompt for patient information
    cout << "Welcome to our program to computerize healthcare records\n";
    cout << "please fill-in your information as requested. Thank you\n";
    cout << "\nKindly enter todays day, month and year using numeric representations only\n";
    cout << "e.g. 3, 5, 2015 indicating 3rd of May, 2015, else software would break\n";
    
    // TODO: Put your code to receve input from user here
    cout<<"input your first name";
    cin>>firstName;
    cout<<"input your second name";
    cin>>lastName;
    cout>>"input your Gender- male/ female";
    cin>>gender;
    cout<<"input your birthmonth";
    cin>>month;
    cout<<"input your birthday";
    cin>>day;
    cout<<"Input your birthyear";
    cin>>year;
    cout<<"input your weight";
    cin>>weight;
    cout<<"input your height";
    cin>>height;
    
    
    
    // Instantiate an object of class HealthProfile - passing relevant values to the constructor
    HealthProfile Patient1 ( firstName, lastName, gender, month, day, year, currentMonth, currentDay, CurrentYear);
    
    Patient1.getInformation()
    
    // Print information from the object - by calling getInformation() function
    

    
}
