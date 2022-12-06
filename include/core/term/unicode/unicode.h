// Copyright (C) 2021, 2022 by Mark Melton
//

#pragma once
#include <cstdint>
#include <string>

namespace core::unicode {

// Returns true iff b is a UTF-8 continuation byte.
bool continuation(std::uint8_t b);

// Returns the number of codepoints in <s>.
size_t length(std::string_view s);

}; // Core::unicode
