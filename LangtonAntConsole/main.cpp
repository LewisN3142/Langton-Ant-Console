#include "standardInc.h"
#include <chrono> // include the high precision timer

using namespace std;

// We can put the declaration in the cpp file directly or use a header as is conventional
void printMultiVector(vector< vector<char> >& vect);
int antStep(int facingDirection, pair<int, int>& antPositionLocal, vector< vector<char> >& gridValuesLocal);


int main()
{	
	// necessary modules from chrono
	using chrono::high_resolution_clock;
	using chrono::duration_cast;
	using chrono::duration;
	using chrono::milliseconds;

	// start time of timer
	auto t1 = high_resolution_clock::now();
	
	int m = 40; // Number of rows in grid
	int n = 40; // Number of columns in grid
	int d = 0; // Default array value
	int facingDirection = 0; // Initial facing direction (can be...)

	pair <int, int> antPosition(n/2 , m/2 ); // Put the ant near the center (alter to allow user to place ant)
	vector< vector<char> > gridValues(m, vector<char>(n, '0')); // Initialise a 2D vector grid for calculations (could probably have used an array)
	vector< vector<char> > printValues(m, vector<char>(n, '0')); // Initialise a 2D grid for printing
	
	int k = 0;
	while (k < 20000) //Perform numSteps generatins of Langton's Ant
	{
		facingDirection = antStep(facingDirection, antPosition, gridValues);
		k+=1;

		// This code prints the grid at each step (set up variable to initialise this)
		/*
		printValues = gridValues;
		printValues[antPosition.second][antPosition.first] = 'A';
		printMultiVector(printValues);
		*/

	}

	printValues = gridValues;
	printValues[antPosition.second][antPosition.first] = 'A';
	printMultiVector(printValues);
	


	// end time of timer
	auto t2 = high_resolution_clock::now();

	/* Getting number of milliseconds as an integer. */
	auto ms_int = duration_cast<milliseconds>(t2 - t1);

	/* Getting number of milliseconds as a double. */
	duration<double, milli> ms_double = t2 - t1;

	cout << ms_int.count() << "ms\n";
	cout << ms_double.count() << "ms\n";

	// cin.get();
	return 0;	
}







// Things I need to include
// 
// Modify function to allow different states, more colours
// Resize vector when function hits edge / test how many columns/rows fit in window and stop when reached
// 
// Function to take in user input for number of states, colours, which colours, command for each color/state, time step
// Function to convert user input into Ant-Code
//
// Shift to SDL2, SFML, or OpenGL in order to render by pixel over time rather than in console
