// Copyright (C) 2021, 2022 by Mark Melton
//

#pragma once
#include <cstdint>
#include <string>

namespace core::unicode::braille {

inline constexpr std::uint8_t BrailleDot1 = 0x01;
inline constexpr std::uint8_t BrailleDot2 = 0x02;
inline constexpr std::uint8_t BrailleDot3 = 0x04;
inline constexpr std::uint8_t BrailleDot4 = 0x08;
inline constexpr std::uint8_t BrailleDot5 = 0x10;
inline constexpr std::uint8_t BrailleDot6 = 0x20;
inline constexpr std::uint8_t BrailleDot7 = 0x40;
inline constexpr std::uint8_t BrailleDot8 = 0x80;

inline constexpr std::uint8_t BrailleMat00 = 0x01;
inline constexpr std::uint8_t BrailleMat01 = 0x08;
inline constexpr std::uint8_t BrailleMat10 = 0x02;
inline constexpr std::uint8_t BrailleMat11 = 0x10;
inline constexpr std::uint8_t BrailleMat20 = 0x04;
inline constexpr std::uint8_t BrailleMat21 = 0x20;
inline constexpr std::uint8_t BrailleMat30 = 0x40;
inline constexpr std::uint8_t BrailleMat31 = 0x80;

std::string braille(std::uint8_t mask);
std::string braille_matrix(std::uint8_t matrix);

}; // core::unicode::braille
