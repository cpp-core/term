// Copyright (C) 2021, 2022 by Mark Melton
//

#include "core/term/unicode/unicode.h"

namespace core::unicode
{

bool continuation(std::uint8_t b) {
    return (b & 0x80) and (~b & 0x40);
}

size_t length(std::string_view s) {
    size_t n{0};
    for (auto c : s) {
	std::uint8_t b = c;
	if (not continuation(b))
	    ++n;
    }
    return n;
}

}; // core::unicode

