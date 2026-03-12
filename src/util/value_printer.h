#ifndef MATRIXCALCULATOR_VALUE_PRINTER_H
#define MATRIXCALCULATOR_VALUE_PRINTER_H
#pragma once

#include <memory>
#include <string>

#include "util/value.h"

namespace matrix::io {
    class MatrixPrinter;
}

namespace matrix::util {

    [[nodiscard]] std::string printValue(
        const Value& value,
        const std::shared_ptr<const matrix::io::MatrixPrinter>& printer
    );

}
#endif //MATRIXCALCULATOR_VALUE_PRINTER_H