/*
 * @BEGIN LICENSE
 *
 * Psi4: an open-source quantum chemistry software package
 *
 * Copyright (c) 2007-2018 The Psi4 Developers.
 *
 * The copyrights for code used from other parties are included in
 * the corresponding files.
 *
 * This file is part of Psi4.
 *
 * Psi4 is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, version 3.
 *
 * Psi4 is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License along
 * with Psi4; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 * @END LICENSE
 */

#include "psi4/pybind11.h"

#include "psi4/libcubeprop/cubeprop.h"
#include "psi4/liboptions/liboptions.h"
#include "psi4/libmints/wavefunction.h"

using namespace psi;

void export_cubeprop(py::module& m) {
    py::class_<CubeProperties, std::shared_ptr<CubeProperties>>(m, "CubeProperties", "docstring")
        .def(py::init<std::shared_ptr<Wavefunction>>())
        .def("compute_properties", &CubeProperties::compute_properties, "docstring");
}
