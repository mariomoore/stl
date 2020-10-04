#pragma once

#include <string>

enum class ErrorCode {
    OK,
    BadCharacter,
    BadFormat,
    DivideBy0,
    SqrtOfNegativeNumber,
    ModuleOfNonIntegerValue,
    TEST,
};

ErrorCode process(std::string input, double* out);
