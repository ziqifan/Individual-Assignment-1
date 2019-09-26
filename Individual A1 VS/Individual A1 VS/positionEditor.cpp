#include "positionEditor.h"


int PositionEditorClass::savePosition(float x, float y, float z)
{
	std::ofstream position;

	position.open("objectPos.txt", std::ofstream::out | std::ofstream::trunc);
	
	position << x << std::endl;
	position << y << std::endl;
	position << z << std::endl;
	
	position.close();

	return 1;
}

float PositionEditorClass::loadPositionX()
{
	std::ifstream positionX("objectPos.txt");
	if (!positionX) {
		std::cout << "Connot open the file.\n";
		return 0;
	}

	float myX;
	positionX >> myX;

	return myX;
}

float PositionEditorClass::loadPositionY()
{
	std::ifstream positionY("objectPos.txt");
	if (!positionY) {
		std::cout << "Connot open the file.\n";
		return 0;
	}

	float myY;
	positionY >> myY;
	positionY >> myY;

	return myY;
}

float PositionEditorClass::loadPositionZ()
{
	std::ifstream positionZ("objectPos.txt");
	if (!positionZ) {
		std::cout << "Connot open the file.\n";
		return 0;
	}

	float myZ;
	positionZ >> myZ;
	positionZ >> myZ;
	positionZ >> myZ;

	return myZ;
}
