#include "io/matrix_input.h"

#include "core/errors.h"

namespace matrix::io {

    matrix::core::Matrix MatrixInput::read(std::istream& in) const {
        (void)in;
        throw matrix::core::ParseError("MatrixInput::read is not implemented yet");
    }

}