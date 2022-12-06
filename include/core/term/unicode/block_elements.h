// Copyright (C) 2021, 2022 by Mark Melton
//

#pragma once
#include <cstdint>

namespace core::unicode::block {

inline constexpr auto UpperHalf = "\u2580";
inline constexpr auto LowerOneEighth = "\u2581";
inline constexpr auto LowerOneQuarter = "\u2582";
inline constexpr auto LowerThreeEighths = "\u2583";
inline constexpr auto LowerHalf = "\u2584";
inline constexpr auto LowerFiveEighths = "\u2585";
inline constexpr auto LowerThreeQuarters = "\u2586";
inline constexpr auto LowerSevenEighths = "\u2587";

inline constexpr auto Full = "\u2588";
inline constexpr auto LeftSevenEighths = "\u2589";
inline constexpr auto LeftThreeQuarters = "\u258a";
inline constexpr auto LeftFiveEighths = "\u258b";
inline constexpr auto LeftHalf = "\u258c";
inline constexpr auto LeftThreeEighths = "\u258d";
inline constexpr auto LeftOneQuarter = "\u258e";
inline constexpr auto LeftOneEighth = "\u258f";

inline constexpr auto RightHalf = "\u2590";
inline constexpr auto LightShade = "\u2591";
inline constexpr auto MediumShade = "\u2592";
inline constexpr auto DarkShade = "\u2593";
inline constexpr auto UpperOneEighth = "\u2594";
inline constexpr auto RightOneEighth = "\u2595";
inline constexpr auto QuadrantLowerLeft = "\u2596";
inline constexpr auto QuadrantLowerRight = "\u2597";

inline constexpr auto QuadrantUpperLeft = "\u2598";
inline constexpr auto QuadrantUpperLeftandLowerLeftAndLowerRight = "\u2599";
inline constexpr auto QuadrantUpperLeftandLowerRight = "\u259a";
inline constexpr auto QuadrantUpperLeftandUpperRightAndLowerLeft = "\u259b";
inline constexpr auto QuadrantUpperLeftAndUpperRightAndLowerRight = "\u259c";
inline constexpr auto QuadrantUpperRight = "\u259d";
inline constexpr auto QuadrantUpperRightAndLowerLeft = "\u259e";
inline constexpr auto QuadrantUpperRightAndLowerLeftAndLowerRight = "\u259f";

// Return the unicode block character with filled quadrants
// corresponding to the bits set in mask:
//
// 1000 - upper left
// 0100 - upper right
// 0010 - lower left
// 0001 - lower right
const char *quadrant(std::uint8_t mask);

// Return the unicode block character with filled quadrants
// corresponding to:
//
// ul - upper left
// ur - upper right
// ll - lower left
// lr - lower right
const char *quadrant(bool ul, bool ur, bool ll, bool lr);

// Return the unicode block character filled <n> eighths from the
// bottom.
const char *bottom(unsigned int n);

// Return the unicode block character filled <n> eighths from the
// left.
const char *left(unsigned int n);

}; // core::unicode::block
