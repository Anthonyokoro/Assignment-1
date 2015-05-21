//

// OKORO ANTHONY CHUKWUEBUKA
//PDS/2013/6008

// COMPUTER SCIENCE

//ASSIGNMENT#2

//Assignment.cpp
//Define an integer with an odd or even display message

#include<iostream>
using namespace std;
int main()
{
int a;
int b;
cout << "Enter two (a & b) integer= ";
cin >>a >> b;

if ( a%b==0 )
cout<< a << " = a MULTIPLE of " << b <<endl ;
else
cout<< a << " = not a MULTIPLE of " << b<< endl;
return 0;
}
