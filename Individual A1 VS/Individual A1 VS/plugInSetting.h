#pragma once

#ifdef MYPLUGIN_EXPORTS
#define PLUGIN_API __declspec(dllexport)
#elif MYPLUGIN_IMPORTS
#define PLUGIN_API __declspec(dllimport)
#else
#define PLUGIN_API
#endif