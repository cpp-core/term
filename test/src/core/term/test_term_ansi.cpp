// Copyright 2019, 2021, 2022 by Mark Melton
//

#include <fmt/format.h>
#include <gtest/gtest.h>
#include "core/term/ansi.h"

using namespace core::term::ansi;

TEST(TermAnsi, Strip)
{
    auto s = fmt::format("{}abc{}", fg::Color(3), attr::Normal);
    EXPECT_EQ(s.size(), 16);

    auto r = strip(s);
    EXPECT_EQ(r.size(), 3);
}

int main(int argc, char *argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
