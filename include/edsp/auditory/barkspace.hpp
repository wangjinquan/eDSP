/*
* eDSP, A cross-platform Digital Signal Processing library written in modern C++.
* Copyright (C) 2018 Mohammed Boujemaoui Boulaghmoudi, All rights reserved.
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
* You should have received a copy of the GNU General Public License along withº
* this program.  If not, see <http://www.gnu.org/licenses/>
*
* Filename: barkspace.hpp
* Author: Mohammed Boujemaoui
* Date: 18/10/18
*/

#ifndef EDSP_BARKSPACE_HPP
#define EDSP_BARKSPACE_HPP

#include <edsp/algorithm/linspace.hpp>
#include <edsp/auditory/converter/hertz2bark.hpp>
#include <algorithm>

namespace edsp { namespace auditory {
    /**
     * @brief This function computes an array of N frequencies uniformly spaced between [x1,x2] on an Bark
     * scale and stores the result in another range, beginning at d_first.
     *
     * @param min Minimum frequency.
     * @param max Maximum frequency..
     * @param N Number of frequencies to generate.
     * @param d_first The beginning of the destination range
     */
    template <typename OutputIt, typename Numeric, typename Integer>
    constexpr void barkspace(OutputIt d_first, Numeric min, Numeric max, Integer N) {
        using output_type = typename std::iterator_traits<OutputIt>::value_type;
        algorithm::linspace(d_first, min, max, N);
        std::transform(d_first, d_first + N, converter::hertz2bark);
    }

}} // namespace edsp::auditory

#endif //EDSP_BARKSPACE_HPP
