#include "Name.h"
#include <string>

std::string DynamicName::Leaver::leave(const std::string& name) {
    return "До свидания, " + name + "!";
}
