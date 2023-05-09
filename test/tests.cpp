// Copyright 2022 GHA Test Team Vizgalov Y

#include <gtest/gtest.h>
#include "Automata.h"
TEST(task2, test3) {
    Automata a = Automata();
    a.on();
    a.coin(100);
    a.choice(2);
    int result = a.getState();
    EXPECT_EQ(2, result);
}

TEST(task2, test4) {
    Automata a = Automata();
    a.on();
    a.coin(100);
    a.choice(2);
    a.coin(20);
    a.choice(2);
    int result = a.getState();
    EXPECT_EQ(4, result);
}

