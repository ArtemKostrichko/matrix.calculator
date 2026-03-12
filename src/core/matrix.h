#ifndef MATRIXCALCULATOR_MATRIX_H
#define MATRIXCALCULATOR_MATRIX_H
#pragma once

#include <vector>

namespace matrix::core {

    class Matrix {
    public:
        Matrix() = default;
        Matrix(int rows, int cols);

        [[nodiscard]] static Matrix identity(int n);

        [[nodiscard]] int rows() const noexcept;
        [[nodiscard]] int cols() const noexcept;

        double& at(int r, int c);
        [[nodiscard]] double at(int r, int c) const;

        [[nodiscard]] Matrix transpose() const;
        [[nodiscard]] Matrix operator*(double scalar) const;
        [[nodiscard]] Matrix operator+(const Matrix& other) const;
        [[nodiscard]] Matrix operator-(const Matrix& other) const;
        [[nodiscard]] Matrix operator*(const Matrix& other) const;

        [[nodiscard]] const std::vector<double>& raw() const noexcept;

    private:
        int rows_ = 0;
        int cols_ = 0;
        std::vector<double> data_;

        [[nodiscard]] int index(int r, int c) const;
    };

}
#endif //MATRIXCALCULATOR_MATRIX_H