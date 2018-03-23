//
// Created by Mohammed Boujemaoui on 10/10/2017.
//

#ifndef EDSP_TEST_DB_H
#define EDSP_TEST_DB_H

#include <vector>
#include <complex>

namespace test {
    namespace db {
        static const std::vector<double> ref_vector = {
            0.080000000000000,
            0.090754544373360,
            0.122515306951360,
            0.173797189775404,
            0.242202309000359,
            0.324532117278097,
            0.416936964276558,
            0.515096102050708,
            0.614419718414272,
            0.710263551456361,
            0.798146050066696,
            0.873957926284640,
            0.934154301037091,
            0.975920458744089,
            0.997303460291005,
            0.997303460291005,
            0.975920458744089,
            0.934154301037091,
            0.873957926284640,
            0.798146050066696,
            0.710263551456361,
            0.614419718414272,
            0.515096102050708,
            0.416936964276558,
            0.324532117278097,
            0.242202309000359,
            0.173797189775404,
            0.122515306951360,
            0.090754544373360,
            0.080000000000000
        };


        static const std::vector<std::complex<double>> fft_ref_vector = {
                {15.739999999999998, 0.000000000000000},
                {-6.965765847996035, 0.732131492493389},
                {0.163133393091523, 0.034675073129098},
                {0.058039200907150, 0.018858079528352},
                {0.029189147822383, 0.012995845910236},
                {0.016923122981977, 0.009770569609173},
                {0.010543593658588, 0.007660369190972},
                {0.006810462147743, 0.006132167661365},
                {0.004453774737721, 0.004946417961942},
                {0.002890086476838, 0.003977862775318},
                {0.001820803647182, 0.003153724427525},
                {0.001081071567109, 0.002428126494950},
                {0.000575126572706, 0.001770057584611},
                {0.000245951732677, 0.001157111927029},
                {0.000060112652438, 0.000571933683611},
                {0.000000000000001, 0.000000000000000},
                {0.000060112652438, 0.000571933683611},
                {0.000245951732677, 0.001157111927029},
                {0.000575126572706, 0.001770057584611},
                {0.001081071567109, 0.002428126494950},
                {0.001820803647182, 0.003153724427525},
                {0.002890086476838, 0.003977862775318},
                {0.004453774737721, 0.004946417961942},
                {0.006810462147743, 0.006132167661365},
                {0.010543593658588, 0.007660369190972},
                {0.016923122981977, 0.009770569609173},
                {0.029189147822383, 0.012995845910236},
                {0.058039200907150, 0.018858079528352},
                {0.163133393091523, 0.034675073129098},
                {-6.965765847996035, 0.732131492493389}
        };


        static constexpr double max_ref_vector = 0.997303460291005;
        static constexpr double min_ref_vector = 0.080000000000000;
        static constexpr double sum_ref_vector = 15.740000000000000;
        static constexpr double mean_ref_vector = 0.524666666666667;
        static constexpr double var_ref_vector = 0.112853333333333;
        static constexpr double std_desv_ref_vector = 0.335936501936502;
        static constexpr double mode_ref_vector = 0.080000000000000;
        static constexpr double sum_square_ref_vector = 11.530999999999997;


    }
}

#endif //EDSP_TEST_DB_H