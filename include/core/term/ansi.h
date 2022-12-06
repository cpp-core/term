// Copyright (C) 2021, 2022 by Mark Melton
//

#pragma once
#include <string>

#define ANSI_ESC "\033["
#define ANSI_M "m"
#define ANSI(CMD) ANSI_ESC #CMD ANSI_M

namespace core::term::ansi {

std::string strip(std::string_view str);

namespace attr {
static constexpr auto Normal = ANSI(0);
static constexpr auto Bold = ANSI(1);
static constexpr auto Feint = ANSI(2);
static constexpr auto Italic = ANSI(3);
static constexpr auto Under = ANSI(4);
static constexpr auto Reverse = ANSI(7);
static constexpr auto Strike  = ANSI(9);
std::string italic(std::string_view s);
}; // attr

namespace fg {
static constexpr auto Black = ANSI(30);
static constexpr auto Red = ANSI(31);
static constexpr auto Green = ANSI(32);
static constexpr auto Yellow = ANSI(33);
static constexpr auto Blue = ANSI(34);
static constexpr auto Magenta = ANSI(35);
static constexpr auto Cyan = ANSI(36);
static constexpr auto White = ANSI(37);
std::string Color(unsigned int n);
std::string Color(float r, float g, float b);
std::string Gray(float x);
}; // fg

namespace bg {
static constexpr auto Black = ANSI(40);
static constexpr auto Red = ANSI(41);
static constexpr auto Green = ANSI(42);
static constexpr auto Yellow = ANSI(43);
static constexpr auto Blue = ANSI(44);
static constexpr auto Magenta = ANSI(45);
static constexpr auto Cyan = ANSI(46);
static constexpr auto White = ANSI(47);
std::string Color(unsigned int n);
std::string Color(float r, float g, float b);
std::string Gray(float x);
}; // bg

}; // core::term::ansi

#undef ANSI
#undef ANSI_M
#undef ANSI_ESC
