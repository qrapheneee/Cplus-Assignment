/*
 * HealthProfile.h
 * HealthProfile class definition. This file represents HealthProfile's public
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

#include <string>           // uses C++ string class
using namespace std;

// HealthProfile class definition
class HealthProfile
{
    // public interface
public:
    HealthProfile( string firstName, string lastName, string gender, int month, int day, int year, int weight, double height, int currentMonth, int currentDay, int currentYear); // constructor that initializes patient information
    int getAge();                   // function to get patients age in years
    double getBMI();                // function to calculate and return BMI
    int getMaximumHeartRate();      // function to calculate and return maximum heart rate
    double getTargetHeartRate();    // function to calculate and return target heart rate
    void getInformation();          // function to print object information
    
    // TODO: Provide get and set function prototypes of each class attribute
void setFirstName ( string firstName);

void setLastName ( string lastName);

void setGender ( string gender );

void setMonth ( int month );

void setDay ( int day);

void setYear ( int year);

void setWeight ( int weight );

void setHeight ( double height);

int setAge (int currentMonth, int currentDay, int currentYear);



string getFirstName ();

string getLastName ();

string getGender ();

int getMonth ();

int getDay ();

int getYear ();

int getWeight ();

double getHeight ();

int getAge ();

double getBMI ();

int getMaximumHeartRate ();

double getTargetHeartRate ();

void getinformation ();

    // Function prototypes for the constructor, getAge(), getBMI(), getMaximumHeartRate()
    // getTargetHeartRate() and getInformation() has alrady been provided

    // private interface
private:
    string firstName;               // variable to hold firstname
    string lastName;                // variable to hold lastname
    string gender;                  // variable to hold gender
    int month;                      // variable to hold month
    int day;                        // variable to hold day
    int year;                       // variable to hold year
    double height;                  // variable to hold height
    int weight;                     // variable to hold weight
    int age;                        // variable to hold age
    
}; // end class HealthProfile
