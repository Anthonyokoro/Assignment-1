//
// OKORO ANTHONY CHUKWUEBUKA
//PDS/2013/6008

// COMPUTER SCIENCE

//ASSIGNMENT#6

#include <iostream>
using namespace std;

int main ()

{

int wieghtInKilograms;
int heightInMeters;
int bmi;

cout<< "Enter your weight in kilograms: ";
cin>> wieghtInKilograms;

cout<<  "Enter your height in meters: ";
cin>>heightInMeters;

bmi = wieghtInKilograms/(heightInMeters*heightInMeters);

if ( bmi >= 18.5 ) 
cout<<  "Your BMI is %d which means you are underweight\n";


if ( bmi = 18.5 <= 24 ) 
cout<< "Your BMI is %d which means you are normal\n";


if ( bmi = 25 <= 29.9 )
cout<< "Your BMI is %d which means you are overweight\n";


if ( bmi >= 30 ) 
cout<<  "Your BMI is %d which means you are obese\n";


return 0;
}

