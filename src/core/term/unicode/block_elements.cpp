// Copyright (C) 2021, 2022 by Mark Melton
//

#include <fmt/format.h>
#include "core/term/unicode/block_elements.h"

namespace core::unicode::block
{

const char *quadrant(std::uint8_t mask) {
    switch (mask) {
    case 0b0000: return " ";
    case 0b0001: return QuadrantLowerRight;
    case 0b0010: return QuadrantLowerLeft;
    case 0b0011: return LowerHalf;
    case 0b0100: return QuadrantUpperRight;
    case 0b0101: return RightHalf;
    case 0b0110: return QuadrantUpperRightAndLowerLeft;
    case 0b0111: return QuadrantUpperRightAndLowerLeftAndLowerRight;
    case 0b1000: return QuadrantUpperLeft;
    case 0b1001: return QuadrantUpperLeftandLowerRight;
    case 0b1010: return LeftHalf;
    case 0b1011: return QuadrantUpperLeftandLowerLeftAndLowerRight;
    case 0b1100: return UpperHalf;
    case 0b1101: return QuadrantUpperLeftAndUpperRightAndLowerRight;
    case 0b1110: return QuadrantUpperLeftandUpperRightAndLowerLeft;
    case 0b1111: return Full;
    default:
	throw std::runtime_error(fmt::format("quadrant: bad mask value: {:b}", mask));
    }
}

const char *quadrant(bool ul, bool ur, bool ll, bool lr) {
    std::uint8_t mask = (ul ? 0b1000 : 0) | (ur ? 0b0100 : 0) | (ll ? 0b0010 : 0) | (lr ? 0b0001 : 0);
    return quadrant(mask);
}

const char *bottom(unsigned int n) {
    switch (n) {
    case 0: return " ";
    case 1: return LowerOneEighth;
    case 2: return LowerOneQuarter;
    case 3: return LowerThreeEighths;
    case 4: return LowerHalf;
    case 5: return LowerFiveEighths;
    case 6: return LowerThreeQuarters;
    case 7: return LowerSevenEighths;
    case 8: return Full;
    default:
	throw std::runtime_error(fmt::format("bottom: fill greater than 8/8ths: {}", n));
    }
}

const char *left(unsigned int n) {
    switch (n) {
    case 0: return " ";
    case 1: return LeftOneEighth;
    case 2: return LeftOneQuarter;
    case 3: return LeftThreeEighths;
    case 4: return LeftHalf;
    case 5: return LeftFiveEighths;
    case 6: return LeftThreeQuarters;
    case 7: return LeftSevenEighths;
    case 8: return Full;
    default:
	throw std::runtime_error(fmt::format("bottom: fill greater than 8/8ths: {}", n));
    }
}

}; // core::unicode::block

