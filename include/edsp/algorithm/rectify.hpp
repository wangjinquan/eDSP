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
* Filename: rectify.hpp
* Author: Mohammed Boujemaoui
* Date: 12/10/18
*/

#ifndef EDSP_RECTIFY_HPP
#define EDSP_RECTIFY_HPP

#include <edsp/meta/iterator.hpp>
#include <algorithm>
#include <cmath>

namespace edsp { inline namespace algorithm {

    /**
         * @brief For each element in the range [first, last) computes the absolute value not and stores the result in
         * another range, beginning at d_first.
         *
         * @param first Forward iterator defining the begin of the range to examine.
         * @param last Forward iterator defining the end of the range to examine.
         * @param d_first Output iterator defining the beginning of the destination range.
         */
    template <typename InputIt, typename OutputIt>
    constexpr void rectify(InputIt first, InputIt last, OutputIt d_first) {
        std::transform(
            first, last, d_first,
            [](const meta::value_type_t<InputIt> value) -> meta::value_type_t<OutputIt> { return std::fabs(value); });
    }

}} // namespace edsp::algorithm

#endif //EDSP_RECTIFY_HPP
