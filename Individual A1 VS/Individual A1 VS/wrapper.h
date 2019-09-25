#pragma once

#include "pluginSetting.h"
#include "positionEditor.h"
#ifdef __cplusplus
extern "C"
{
#endif
	// Put your functions here
	PLUGIN_API int savePosition(float x, float y, float z);
	PLUGIN_API float loadPositionX();
	PLUGIN_API float loadPositionY();
	PLUGIN_API float loadPositionZ();
#ifdef __cplusplus
}
#endif#pragma once
