#pragma once

#include "plugInSetting.h"
#include <iostream>
#include <fstream>

class PLUGIN_API PositionEditorClass
{
public:
	int savePosition(float x, float y, float z);
	float loadPositionX();
	float loadPositionY();
	float loadPositionZ();
};