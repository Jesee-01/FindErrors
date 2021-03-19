// Lab 3 findErrors.cpp
// This program contains many syntax errors and will not compile.
// Fix the errors so that it correctly finds the average of the
// two integers the user enters. 
//Aramis Artiga

#include <iostream>
using namespace std;
int main()
{

   double num1, //This tracks the first integer
          num2, // This tracks the second integer
          average; //This tracks the formula using both the 1st and 2nd integer
   
   // Enter any two number which will then be put into num1 and num2
   cout << "Enter two integers separated by one or more spaces: "<< endl;
   cin  >> num1 >> num2;

   //This uses the average formula by inputing the user's two integers 
   //previously asked to be inputted 
  average = ( num1 + num2 ) / 2 ;
   
   cout << "The average of these 2 numbers is " << average << endl;
   
   return 0;
}
