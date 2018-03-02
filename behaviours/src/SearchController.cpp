#include "SearchController.h"
#include <angles/angles.h>
#include<iostream> //Danny included
#include<string>
#include<stdlib>
#include<Danny.h> 
#include <RangeController.h> 

SearchController::SearchController() {
  rng = new random_numbers::RandomNumberGenerator();
  currentLocation.x = 0;
  currentLocation.y = 0;
  currentLocation.theta = 0;

  centerLocation.x = 0;
  centerLocation.y = 0;
  centerLocation.theta = 0;
  result.PIDMode = SLOW_PID; //originally fast

  result.fingerAngle = M_PI/2;
  result.wristAngle = M_PI/4; // Initial value was set at M_PI/4
}

void SearchController::Reset() {
  result.reset = false;
}

/**
 * This code implements a basic random walk search.
 */
Result SearchController::DoWork() {
void lowerWrist();
{


const int Rover1 = 100;
//const int Rover2 = 200;
//const int Rover3 = 300

//int grid [15][15];

//const startup[15][15] = { Rover1, /*Rover2, Rover3,*/ 0}

void setup (void) 
{
int grid [15][15]; {
do{
	do { 
{
 	//for (int x = currentLocation.x; x++) && (int y == currentLocation.y)
	//{ 
	 searchLocation.x = currentLocation.x + 1;//( * /*cos*/(searchLocation.x/*theta*/));
	searchLocation.y = 0;

}		//for ( x = (1 - perimeter)) {
		//currentLocation.y = 0;	
	while (searchLocation.x <15);
		return results; }
	if (searchLocation.x = 15) {
	searchLocation.y = currentLocation.y - 1;
return results;
}
	do {
 	//for (int x = currentLocation.x; x++) && (int y == currentLocation.y)
	{ 
	 searchLocation.x = currentLocation.x - 1;//( * /*cos(searchLocation.x/*theta));
	searchLocation.y = 0; */

	//do { //(ifor (int y = currentLocation.y; y++) && (int x == currentlocation.x)
		{
			//Board[x][y] = startup [x][y];
	//		searchLocation.y = currentLocation.y + 1; //* /*sin//(SearchLocation.y/*theta));
	//		searchLocation.x = 0;*/

		

}	 while (searchLocation.x < 15 ) ;
		return results;
}
} while (succesfullPickup = false);
}
void printb (void)
{
/*using namespace std;
//int a, b;
string piece;
for (a = 14; a > -1; a --)
{
cout << endl;
	for (b = 0; b < 14; b++)
	{
	switch (board[a][b])
	{
	case 0:
	piece = "-";
	break;
	case Rover1:
	piece = "R"
	/*case Rover2:
	piece = "Q"
	case Rover3:
	piece = "K"
	break;
	}
	cout << " " << piece << " ";
	}
}*/
cout << endl << endl;
} 
}
  /*if (!result.wpts.waypoints.empty()) {
    if (hypot(result.wpts.waypoints[0].x-currentLocation.x, result.wpts.waypoints[0].y-currentLocation.y) < 0.15) { 
      attemptCount = 0;
    }
  }

  if (attemptCount > 0 && attemptCount < 5) {
    attemptCount++;
    if (succesfullPickup) {
      succesfullPickup = false;
      attemptCount = 1;
    }
    return result;
  }
  else if (attemptCount >= 5 || attemptCount == 0) 
  {
    attemptCount = 1;


    result.type = waypoint;
    Point  searchLocation;

    //select new position 50 cm from current location
    if (first_waypoint)
    {
      first_waypoint = false;
      searchLocation.theta = currentLocation.theta + M_PI;
      searchLocation.x = currentLocation.x + (0.5 * cos(searchLocation.theta));
      searchLocation.y = currentLocation.y + (0.5 * sin(searchLocation.theta));
    }
    else
    {
      //select new heading from Gaussian distribution around current heading
      searchLocation.theta = rng->gaussian(currentLocation.theta, 0.785398); //45 degrees in radians
      searchLocation.x = currentLocation.x + (0.5 * cos(searchLocation.theta));
      searchLocation.y = currentLocation.y + (0.5 * sin(searchLocation.theta));
    }

    result.wpts.waypoints.clear();
    result.wpts.waypoints.insert(result.wpts.waypoints.begin(), searchLocation);
   */ 
    return result;
  }

}

void SearchController::SetCenterLocation(Point centerLocation) {
  
  float diffX = this->centerLocation.x - centerLocation.x;
  float diffY = this->centerLocation.y - centerLocation.y;
  this->centerLocation = centerLocation;
  
  if (!result.wpts.waypoints.empty())
  {
  result.wpts.waypoints.back().x -= diffX;
  result.wpts.waypoints.back().y -= diffY;
  }
  
}

void SearchController::SetCurrentLocation(Point currentLocation) {
  this->currentLocation = currentLocation;
}

void SearchController::ProcessData() {
}

bool SearchController::ShouldInterrupt(){
  ProcessData();

  return false;
}

bool SearchController::HasWork() {
  return true;
}

void SearchController::SetSuccesfullPickup() {
  succesfullPickup = true;
}


