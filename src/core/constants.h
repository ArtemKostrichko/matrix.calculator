//
// Created by Денис on 12.03.2026.
//

#ifndef MATRIXCALCULATOR_CONSTANTS_H
#define MATRIXCALCULATOR_CONSTANTS_H
#pragma once

namespace matrix::core {

    inline constexpr double EPS = 1e-9;
    inline constexpr int PRINT_PRECISION = 4;

    constexpr bool isNearlyZero(const double value) {
        return value > -EPS && value < EPS;
    }

}
#endif //MATRIXCALCULATOR_CONSTANTS_H