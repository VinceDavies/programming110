//Objective:  output assigned data values with labels.
//Name: Vinzent Davies
//Course: COMSC-110-5093
//Compiler: minGW
//Editor: Notepad

//libraries
#include <iostream>  
#include <string>
using namespace std; 
  

//Programmer defined data types
//NONE

//Special compiler dependent definitions
//NONE

//global constants/variables
//NONE

//Programmer defined functions
//NONE

//main program
int main()
{

  

  // output my name and objective and program information
  cout << "Objective: output assigned data values with labels.\n"; 
  cout << "Programmer: Vinzent\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 


//prompt user for input
int lucky;
cout << "please enter your lucky number" <<endl;
cin >> lucky;
cin.ignore (1000,10);

string movie;
cout << "please enter your favorite movie title" <<endl;
cin >> movie;
cin.ignore (1000,10);

string initial;
cout << "please enter your first initial" <<endl;
cin >> initial;
cin.ignore (1000,10);

  //variables
double coin = 0.05;



  
  //output results
  cout <<"My lucky number is " <<endl;
  cout <<lucky <<endl;
  cout <<"My favorite movie is "<<endl;
  cout <<movie <<endl;
  cout <<"My middle initial is " <<endl;
  cout <<initial <<endl;
  cout <<"My favorite coin is this fraction of a dollar: $"<<endl;
  cout <<coin <<endl;

} // main