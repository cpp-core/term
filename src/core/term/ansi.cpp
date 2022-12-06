// Copyright (C) 2019, 2021, 2022 by Mark Melton
//

#include <fmt/format.h>
#include <regex>
#include "core/term/ansi.h"

#define ANSI_ESC "\033["s
using namespace std::string_literals;

namespace core::term::ansi {

std::string strip(std::string_view str) {
    std::regex re("\x1B(?:[@-Z\\-_]|\[[0-?]*[ -/]*[@-~])");
    return std::regex_replace(std::string(str), re, ""s);
}

std::string escape(const std::string& command) {
    return ANSI_ESC + command + "m"s;
}

static std::uint8_t to_uint8(float x) {
    return std::min(255, int(256 * x));
}

namespace attr {

std::string talic(std::string_view s) { return Italic + std::string(s) + attr::Normal; }

}; // attr

namespace fg {

std::string Color(unsigned int n) {
    return escape(fmt::format("38;5;{}", n));
}

std::string Color(float r, float g, float b) {
    return escape(fmt::format("38;2;{};{};{}m", to_uint8(r), to_uint8(g), to_uint8(b)));
}

std::string Gray(float x) {
    return Color(std::min(255, int(23.999 * x) + 232));
}

}; // fg

namespace bg {

std::string Color(unsigned int n) {
    return escape(fmt::format("48;5;{}", n));
}

std::string Color(float r, float g, float b) {
    return escape(fmt::format("48;2;{};{};{}m", to_uint8(r), to_uint8(g), to_uint8(b)));
}

std::string Gray(float x) {
    return Color(std::min(255, int(23.999 * x) + 232));
}

}; // bg


}; // core::term::ansi
