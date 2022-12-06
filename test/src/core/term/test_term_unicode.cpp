// Copyright 2019, 2021, 2022 by Mark Melton
//

#include <gtest/gtest.h>
#include <string>
#include "core/term/unicode/unicode.h"
#include "core/term/unicode/math.h"
#include "coro/stream/stream.h"

using namespace core::unicode;

TEST(TermUnicode, Length)
{
    std::vector<std::string> choices = {
	"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q",
	    math::AllEqualTo, math::Angle, math::AnticlockwiseCountourIntegral
    };

    for (auto i = 0; i < 10; ++i) {
	auto str = coro::draw(choices) | coro::take(20) | coro::flatten<std::string>();
	EXPECT_EQ(length(str), 20);
    }
}

int main(int argc, char *argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
