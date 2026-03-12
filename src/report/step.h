#pragma once

#include <string>

#include "core/matrix.h"
#include "util/value.h"

namespace matrix::report {

    class Step {
    public:
        virtual ~Step() = default;

        [[nodiscard]] virtual std::string name() const = 0;
        [[nodiscard]] virtual matrix::util::Value run(const matrix::core::Matrix& matrix) const = 0;
    };

}