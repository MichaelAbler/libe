#include <stdio.h>
#include "libe.h"
#include "../libf/libf.h"  // Include parent depf header

std::string depe() {
    std::string result = "... called E ";
    result += depf(2);
    return result;
}

