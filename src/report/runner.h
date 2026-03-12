#pragma once

#include <memory>
#include <vector>

#include "core/matrix.h"
#include "report/step.h"

namespace matrix::report {

    class StepRunner {
    public:
        StepRunner() = default;

        void addStep(std::unique_ptr<Step> step);
        void run(const matrix::core::Matrix& matrix) const;

    private:
        std::vector<std::unique_ptr<Step>> steps_;
    };

}