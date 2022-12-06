// Copyright (C) 2021, 2022 by Mark Melton
//

#pragma once
#include <cstdint>

namespace core::unicode::box {

inline constexpr auto LightHorizontal = "\u2500";
inline constexpr auto HeavyHorizontal = "\u2501";
inline constexpr auto LightVertical = "\u2502";
inline constexpr auto HeavyVertical = "\u2503";

inline constexpr auto LightTripleDashHorizontal = "\u2504";
inline constexpr auto HeavyTripleDashHorizontal = "\u2505";
inline constexpr auto LightTripleDashVertical = "\u2506";
inline constexpr auto HeavyTripleDashVertical = "\u2507";

inline constexpr auto LightQuadrupleDashHorizontal = "\u2508";
inline constexpr auto HeavyQuadrupleDashHorizontal = "\u2509";
inline constexpr auto LightQuadrupleDashVertical = "\u250a";
inline constexpr auto HeavyQuadrupleDashVertical = "\u250b";

inline constexpr auto LightDownAndRight = "\u250c";
inline constexpr auto DownRightAndRightHeavy = "\u250d";
inline constexpr auto DownHeavyAndRightLigth = "\u250e";
inline constexpr auto HeavyDownAndRight = "\u250f";

inline constexpr auto LightDownAndLeft = "\u2510";
inline constexpr auto DownLightAndLeftHeavy = "\u2511";
inline constexpr auto DownHeavyAndLeftLight = "\u2512";
inline constexpr auto HeavyDownAndLeft = "\u2513";

inline constexpr auto LightUpAndRight = "\u2514";
inline constexpr auto UpLightAndRightHeavy = "\u2515";
inline constexpr auto UpHeavyAndRightLight = "\u2516";
inline constexpr auto HeavyUpAndRight = "\u2517";

inline constexpr auto LightUpAndLeft = "\u2518";
inline constexpr auto UpLightAndLeftHeavy = "\u2519";
inline constexpr auto UpHeavyAndLeftLight = "\u251a";
inline constexpr auto HeavyUpAndLeft = "\u251b";

inline constexpr auto LightVerticalAndRight = "\u251c";
inline constexpr auto VerticalLightAndRightHeavy = "\u251d";
inline constexpr auto UpHeavyAndRightDownLight = "\u251e";
inline constexpr auto DownHeavyAndRightUpLight = "\u251f";

inline constexpr auto VerticalHeavyAndRightLight = "\u2520";
inline constexpr auto DownLightAndRightUpHeavy = "\u2521";
inline constexpr auto UpLightAndRightDownHeavy = "\u2522";
inline constexpr auto HeavyVerticalAndRight = "\u2523";

inline constexpr auto LightVerticalAndLeft = "\u2524";
inline constexpr auto VerticalLightAndLeftHeavy = "\u2525";
inline constexpr auto UpHeavyAndLeftDownLight = "\u2526";
inline constexpr auto DownHeavyAndLeftUpLight = "\u2527";

inline constexpr auto VerticalHeavyAndLeftLight = "\u2528";
inline constexpr auto DownLightAndLeftUpHeavy = "\u2529";
inline constexpr auto UpLightAndLeftDownHeavy = "\u252a";
inline constexpr auto HeavyVerticalAndLeft = "\u252b";

inline constexpr auto LightDownAndHorizontal = "\u252c";
inline constexpr auto LeftHeavyAndRightDownLight = "\u252d";
inline constexpr auto RightHeavyAndLeftDownLight = "\u252e";
inline constexpr auto DownLightAndHorizontalHeavy = "\u252f";

inline constexpr auto DownHeavyAndHorizontalLight = "\u2530";
inline constexpr auto RightLightAndLeftDownHeavy = "\u2531";
inline constexpr auto LeftLightAndRightDownHeavy = "\u2532";
inline constexpr auto HeavyDownAndHorizontal = "\u2533";

inline constexpr auto LightUpAndHorizontal = "\u2534";
inline constexpr auto LeftHeavyAndRightUpLight = "\u2535";
inline constexpr auto RightHeavyAndLeftUpLight = "\u2536";
inline constexpr auto UpLightAndHorizontalHeavy = "\u2537";

inline constexpr auto UpHeavyAndHorizontalLight = "\u2538";
inline constexpr auto RightLightAndLeftUpHeavy = "\u2539";
inline constexpr auto LeftLightAndRightUpHeavy = "\u253a";
inline constexpr auto HeavyUpAndHorizontal = "\u253b";

inline constexpr auto LightVerticalAndHorizontal = "\u253c";
inline constexpr auto LeftHeavyAndRightVerticalLight = "\u253d";
inline constexpr auto RightHeavyAndLeftVerticalLight = "\u253e";
inline constexpr auto VerticalLightAndHorizontalHeavy = "\u253f";

inline constexpr auto UpHeavyAndDownHorizontalLight = "\u2540";
inline constexpr auto DownHeavyAndUpHorizontalLight = "\u2541";
inline constexpr auto VerticalHeavyAndHorizontalLight = "\u2542";
inline constexpr auto LeftUpHeavyAndRightDownLight = "\u2543";

inline constexpr auto RightUpHeavyAndLeftDownLight = "\u2544";
inline constexpr auto LeftDownHeavyAndRightUpLight = "\u2545";
inline constexpr auto RightDownHeavyAndLeftUpLight = "\u2546";
inline constexpr auto DownLightAndUpHorizontalHeavy = "\u2547";

inline constexpr auto UpLightAndDownHorizontalHeavy = "\u2548";
inline constexpr auto RightLightAndVerticalHeavy = "\u2549";
inline constexpr auto LeftLightAndRightVerticalHeavy = "\u254a";
inline constexpr auto HeavyVerticalAndHorizontal = "\u254b";

inline constexpr auto LightDoubleDashHorizontal = "\u254c";
inline constexpr auto HeavyDoubleDashHorizontal = "\u254d";
inline constexpr auto LightDoubleDashVertical = "\u254e";
inline constexpr auto HeavyDoubleDashVertical = "\u254f";

inline constexpr auto DoubleHorizontal = "\u2550";
inline constexpr auto DoubleVertical = "\u2551";
inline constexpr auto DownSingleAndRightDouble = "\u2552";
inline constexpr auto DownDoubleAndRightSingle = "\u2553";

inline constexpr auto DoubleDownAndRight = "\u2554";
inline constexpr auto DownSingleAndLeftDouble = "\u2555";
inline constexpr auto DownDoubleAndLeftSingle = "\u2556";
inline constexpr auto DoublDownAndLeft = "\u2557";

inline constexpr auto UpSingleAndRightDouble = "\u2558";
inline constexpr auto UpDoubleAndRightSingle = "\u2559";
inline constexpr auto DoubleUpAndRight = "\u255a";
inline constexpr auto UpSingleAndLeftDouble = "\u255b";

inline constexpr auto UpDoubleAndLeftSingle = "\u255c";
inline constexpr auto DoubleUpAndLeft = "\u255d";
inline constexpr auto VerticalSingleAndRightDoub = "\u255e";
inline constexpr auto VerticalDoubleAndRightSingle = "\u255f";

inline constexpr auto DoubleVerticalandRight = "\u2560";
inline constexpr auto VerticalSingleAndLeftDouble = "\u2561";
inline constexpr auto VerticalDoubleAndLeftSingle = "\u2562";
inline constexpr auto DoubleVerticalAndLeft = "\u2563";

inline constexpr auto DownSingleAndHorizontalDouble = "\u2564";
inline constexpr auto DownDoubleAndHorizontalSingle = "\u2565";
inline constexpr auto DoubleDownAndHorizontal = "\u2566";
inline constexpr auto UpSingleAndHorizontalDouble = "\u2567";

inline constexpr auto UpDoubleAndHorizontalSingle = "\u2568";
inline constexpr auto DoubleUpAndHorizontal = "\u2569";
inline constexpr auto VerticalSingleAndHorizontalDoubl = "\u256a";
inline constexpr auto VerticalDoubleAndHorizontalSingle = "\u256b";

inline constexpr auto DoubleVerticalAndHorizontal = "\u256c";
inline constexpr auto LightArcDownAndRight = "\u256d";
inline constexpr auto LightArcDownAndLeft = "\u256e";
inline constexpr auto LightArcUpAndLeft = "\u256f";

inline constexpr auto LightArcUpAndRight = "\u2570";
inline constexpr auto LightDiagonalUpperRightToLowerLeft = "\u2571";
inline constexpr auto LightDiagonalUpperLeftToLowerRight = "\u2572";
inline constexpr auto LightDiagnoalCross = "\u2573";

inline constexpr auto LightLeft = "\u2574";
inline constexpr auto LightUp = "\u2575";
inline constexpr auto LightRight = "\u2576";
inline constexpr auto LightDown = "\u2577";

inline constexpr auto HeavyLeft = "\u2578";
inline constexpr auto HeavyUp = "\u2579";
inline constexpr auto HeavyRight = "\u257a";
inline constexpr auto HeavyDown = "\u257b";

inline constexpr auto LeftLightAndHeavyRight = "\u257c";
inline constexpr auto LightUpAndHeavyDown = "\u257d";
inline constexpr auto HeavyLeftAndRightLight = "\u257e";
inline constexpr auto HeaveUpAndLightDown = "\u257f";

// Return the unicode box character of a corner in <location>.
//
// 0 - upper left
// 1 - upper right
// 2 - lower right
// 3 - lower left
const char *corner(unsigned int location, bool heavy = false);

// Return the unicode box character with intersection components
// defined by the <parts> bit mask along with the <heavy> bitmask to
// determine weight.
//
// 1000 - upper
// 0100 - lower
// 0010 - left
// 0001 - right
const char *intersection(std::uint8_t parts, std::uint8_t heavy = 0);

}; // core::unicode::box
