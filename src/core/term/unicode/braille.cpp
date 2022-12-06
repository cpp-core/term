// Copyright (C) 2021, 2022 by Mark Melton
//

#include "core/term/unicode/braille.h"

namespace core::unicode::braille
{

std::string braille(std::uint8_t mask) {
    constexpr auto offset = 0x2800;
    std::uint32_t codepoint = offset | mask;
    std::string bytes = { (char)0b11100000, (char)0b10000000, (char)0b10000000 };

    bytes[2] |= codepoint & 0b111111;
    codepoint >>= 6;

    bytes[1] |= codepoint & 0b111111;
    codepoint >>= 6;

    bytes[0] |= codepoint & 0b1111;

    return bytes;
}

std::string braille_matrix(std::uint8_t matrix) {
    auto mask = (matrix & 0xE1) |
	((matrix & 0x02) << 2) |
	((matrix & 0x04) >> 1) |
	((matrix & 0x08) << 1) |
	((matrix & 0x10) >> 2);
    return braille(mask);
}

}; // core::unicode::braille

