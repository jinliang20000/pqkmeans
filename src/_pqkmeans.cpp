#include <pybind11/pybind11.h>

#include "encoder/encoder_sample.h"

namespace py = pybind11;

PYBIND11_PLUGIN(_pqkmeans) {
    py::module m("_pqkemeans", "internal module for PQk-means");

    py::class_<EncoderSample>(m, "EncoderSample")
            .def(py::init<>())
            .def("fit_generator", &EncoderSample::fit_generator)
            .def("transform_one", &EncoderSample::transform_one)
            .def("inverse_transform_one", &EncoderSample::inverse_transform_one);
    return m.ptr();
}