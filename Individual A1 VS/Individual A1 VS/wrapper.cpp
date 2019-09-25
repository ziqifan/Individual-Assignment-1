#include "wrapper.h"
PositionEditorClass positionEditorClass;

int savePosition(float x, float y, float z)
{
	return positionEditorClass.savePosition(x, y, z);
}
float loadPositionX()
{
	return positionEditorClass.loadPositionX();
}
float loadPositionY()
{
	return positionEditorClass.loadPositionY();
}
float loadPositionZ()
{
	return positionEditorClass.loadPositionZ();
}