/*
 AUTHOR: N.B. Cagomoc
 DATE: July 27, 2018
 PROGRAM: Measures of Cylinder
 DESCRIPTION: This program calculates the Volume, Lateral Area, Base Area and the Surface Area of Cylinder.
 */
 
#include <iostream>
#include <cmath>

using namespace std;
   
int main ()
{
  // Title of the Program
  
  cout << "Measures of Cylinder" << endl;
  
  // Initializing the variables 
  int h;  // height of the cylinder
  float r;  // radius of the cylinder
  double A, Ab,Al,V; 
  const double PI = 3.1416;
  
  // Prompt the user to enter the height and radius of cylinder
  
    cout << "\n" << "Enter the height :" ;
    cin >> h ;
    cout << "Enter the radius :" ;
    cin >> r ;
  
     V = (PI * r * r * h);
     Ab = (PI * r * r);
     Al = (PI * 2 * r * h);
     A = (Al + (2 * PI * r * r ));
     
   // The volume of the Cylinder  
     cout << "\n" << "  Volume is :" << V << endl; 
     
   // The Base Area of the Cylinder  
    cout << "\n" << "  Base Area is :" << Ab << endl;
    
   // The Lateral Area of the Cylinder   
    cout << "\n" << "  Lateral Area is :" << Al << endl;
    
   // The Surface Area of the Cylinder 
     cout << "\n" << "  Surface Area is :" << A << endl;
     
return 0;
  
}

