/*
 * eDSP, A cross-platform DSP framework written in C++.
 * Copyright (C) 2018 Mohammed Boujemaoui Boulaghmoudi
 *
 * This program is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the Free
 * Software Foundation, either version 3 of the License, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of  MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef EDSP_WINDOW_BOHMAN_H
#define EDSP_WINDOW_BOHMAN_H

#include "window.h"

EDSP_BEGIN_NAMESPACE
    /**
     * @brief Bohman %window implementation.
     *
     * See also: Rectangular and Bartlett
     */
    class Bohman : Window {
    public:

        /**
         * @brief Creates and computes a Bohman %window with the given size.
         * @param size The number of elements to initially create.
         */
        explicit Bohman(size_type size);
        ~Bohman() override;

        void initialize() override;
    };
EDSP_END_NAMESPACE

#endif //EDSP_WINDOW_BOHMAN_H
