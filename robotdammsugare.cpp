// title: Mathproject
// author: Arwen Alexandra Book
// date: 2023-03-11
//Description: Calculates distance to object from measured time.

# include <iostream>
#include <cmath>

using namespace std; 

int main ()
{
const double SPEED_OF_LIGHT = 299792458; /* Speed of light*/
double time_to_distance;
double distance;

/*function that calculates the distance*/
distance = (time_to_distance * SPEED_OF_LIGHT) /2;


cout << "The measured distance is:" << distance << "meters"<<endl;


return 0;
}
