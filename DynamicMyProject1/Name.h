#pragma once
#include <string>

#ifdef LEAVER_EXPORTS
#define LEAVER_API __declspec(dllexport)
#else
#define LEAVER_API __declspec(dllimport)
#endif

namespace DynamicName
{
    class LEAVER_API Leaver
    {
    public:
        std::string leave(const std::string& name);
    };
}
