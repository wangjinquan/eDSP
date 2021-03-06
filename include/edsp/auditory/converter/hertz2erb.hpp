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
* Filename: hertz2erb.hpp
* Author: Mohammed Boujemaoui
* Date: 17/10/18
*/

#ifndef EDSP_HERTZ2ERB_HPP
#define EDSP_HERTZ2ERB_HPP

#include <cmath>

namespace edsp { namespace auditory { inline namespace converter {

    /**
     * @brief Converts a frequency in Hz into an equivalent rectangular band rate (ERB).
     * @param f Hz Frequency in Hz.
     * @returns The equivalent rectangular band rate in Hertzz.
     * @see hertz2erb
     * @see [1] B.C.J.Moore & B.R.Glasberg "Suggested formula for
     *          calculating auditory-filter bandwidth and excitation
     *          patterns", J Acoust Soc America V74, pp 750-753, 1983
     * @see http://www.ee.ic.ac.uk/hp/staff/dmb/voicebox/doc/voicebox/frq2erb.html
     */
    template <typename T>
    constexpr T hertz2erb(T f) noexcept {
        constexpr auto GFB_L = 24.7;    //see equation (17) in [Hohmann 2002]
        constexpr auto GFB_Q = 9.26449; //see equation (17) in [Hohmann 2002]
        return GFB_Q * std::log(1. + f / (GFB_L * GFB_Q));
    }

}}} // namespace edsp::auditory::converter

#endif
