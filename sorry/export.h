#pragma once

#ifdef SORRY_EXPORTS
#define SORRY_API __declspec(dllexport)
#else
#define SORRY_API __declspec(dllimport)
#endif