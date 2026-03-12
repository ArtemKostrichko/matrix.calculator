#pragma once

#include <istream>

#include "core/matrix.h"

namespace matrix::io {

    class MatrixInput {
    public:
        [[nodiscard]] matrix::core::Matrix read(std::istream& in) const;
    };

}