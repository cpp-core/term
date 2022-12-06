// Copyright (C) 2021, 2022 by Mark Melton
//

#include <fmt/format.h>
#include "core/term/unicode/box_drawing.h"

namespace core::unicode::box
{

const char *corner(unsigned int location, bool heavy) {
    switch (location) {
    case 0: return heavy ? HeavyDownAndRight : LightDownAndRight;
    case 1: return heavy ? HeavyDownAndLeft : LightDownAndLeft;
    case 2: return heavy ? HeavyUpAndLeft : LightUpAndLeft;
    case 3: return heavy ? HeavyUpAndRight : LightUpAndRight;
    default:
	throw std::runtime_error
	    (fmt::format("corner: location must be 0, 1, 2 or 3: {}", location));
    }
}

const char *intersection(std::uint8_t parts, std::uint8_t heavy) {
    switch (parts) {
    case 0b0000: return " ";
    case 0b0001: return LightRight;
    case 0b0010: return LightLeft;
    case 0b0011: return LightHorizontal;
    case 0b0100: return LightDown;
    case 0b0101: return LightDownAndRight;
    case 0b0110: return LightDownAndLeft;
    case 0b0111: return LightDownAndHorizontal;
    case 0b1000: return LightUp;
    case 0b1001: return LightUpAndRight;
    case 0b1010: return LightUpAndLeft;
    case 0b1011: return LightUpAndHorizontal;
    case 0b1100: return LightVertical;
    case 0b1101: return LightVerticalAndRight;
    case 0b1110: return LightVerticalAndLeft;
    case 0b1111: return LightVerticalAndHorizontal;
    default:
	throw std::runtime_error
	    (fmt::format("intersection: parts mask more than 4 bits: {}", parts));
	
    }
}


}; // core::unicode::box

