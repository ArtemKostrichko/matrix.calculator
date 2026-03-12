#ifndef MATRIXCALCULATOR_VALUE_H
#define MATRIXCALCULATOR_VALUE_H
#pragma once

#include <string>
#include <variant>

#include "core/matrix.h"

namespace matrix::util {

    using Value = std::variant<
        matrix::core::Matrix,
        double,
        int,
        std::string
    >;

}
#endif //MATRIXCALCULATOR_VALUE_H