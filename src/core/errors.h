//
// Created by Денис on 12.03.2026.
//

#ifndef MATRIXCALCULATOR_ERRORS_H
#define MATRIXCALCULATOR_ERRORS_H
#pragma once

#include <stdexcept>
#include <string>

namespace matrix::core {

    class MatrixError : public std::runtime_error {
    public:
        explicit MatrixError(const std::string& message)
            : std::runtime_error(message) {}

        ~MatrixError() override = default;
    };

    class ParseError final : public MatrixError {
    public:
        explicit ParseError(const std::string& message)
            : MatrixError("Parse error: " + message) {}
    };

    class DimensionError final : public MatrixError {
    public:
        explicit DimensionError(const std::string& message)
            : MatrixError("Dimension error: " + message) {}
    };

    class SingularError final : public MatrixError {
    public:
        explicit SingularError(const std::string& message)
            : MatrixError("Singular matrix: " + message) {}
    };

    class EvalError final : public MatrixError {
    public:
        explicit EvalError(const std::string& message)
            : MatrixError("Evaluation error: " + message) {}
    };

}
#endif //MATRIXCALCULATOR_ERRORS_H