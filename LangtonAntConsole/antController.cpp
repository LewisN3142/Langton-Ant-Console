#include "standardInc.h"

using namespace std;

void antTurn(int facingDirection, pair<int, int>& antPositionLocal)
{
	switch (facingDirection)
	{
	case 0: // Facing Up
		antPositionLocal.second -= 1;
		break;
	case 1: // Facing Left
		antPositionLocal.first += 1;
		break;
	case 2: // Facing Down
		antPositionLocal.second += 1;
		break;
	case 3: // Facing Right
		antPositionLocal.first -= 1;
		break;
	}
}



// antStep changes the tile value, facing direction, and then moves the ant 
// dependent on the current facing direction and tile value - there is one loop per tile value

int antStep(int facingDirection, pair<int, int>& antPositionLocal, vector< vector<char> >& gridValuesLocal)
{

	if (gridValuesLocal[antPositionLocal.second][antPositionLocal.first] == '0')
	{
		gridValuesLocal[antPositionLocal.second][antPositionLocal.first] = '1';
		facingDirection = ((facingDirection + 3) % 4);
		antTurn(facingDirection, antPositionLocal);
		return facingDirection;
	}

	if (gridValuesLocal[antPositionLocal.second][antPositionLocal.first] == '1')
	{
		gridValuesLocal[antPositionLocal.second][antPositionLocal.first] = '2';
		facingDirection = ((facingDirection + 3) % 4);
		antTurn(facingDirection, antPositionLocal);
		return facingDirection;
	}

	if (gridValuesLocal[antPositionLocal.second][antPositionLocal.first] == '2')
	{
		gridValuesLocal[antPositionLocal.second][antPositionLocal.first] = '3';
		facingDirection = ((facingDirection + 1) % 4);
		antTurn(facingDirection, antPositionLocal);
		return facingDirection;
	}

	if (gridValuesLocal[antPositionLocal.second][antPositionLocal.first] == '3')
	{
		gridValuesLocal[antPositionLocal.second][antPositionLocal.first] = '0';
		facingDirection = ((facingDirection + 1) % 4);
		antTurn(facingDirection, antPositionLocal);
		return facingDirection;
	}

	else 
	{
		exit(EXIT_FAILURE);
	}

	return facingDirection;	
}
