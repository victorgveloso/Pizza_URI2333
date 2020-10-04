//
// Created by victor on 04/10/2020.
//
#include "../src/Pizza.h"
#include <gtest/gtest.h>

TEST(PizzaTest, FirstTest) {
    auto *p1 = new Pizza();
    auto *p2 = new Pizza();
    ASSERT_NE(p1, p2);
}

TEST(PizzaTest, FirstExampleTest) {
    int v[] = {5, -3, -3, 2, -1, 3};
    auto p = Pizza(6, v);
    ASSERT_EQ(p.melhorRecorte(), 9);
}

TEST(PizzaTest, SecondExampleTest) {
    int v[] = {1, -2, 2, -1, 4, 1, -5};
    auto p = Pizza(7, v);
    ASSERT_EQ(p.melhorRecorte(), 6);
}

TEST(PizzaTest, ThirdExampleTest) {
    int v[] = {-3, -10};
    auto p = Pizza(2, v);
    ASSERT_EQ(p.melhorRecorte(), 0);
}

TEST(PizzaTest, SinglePieceTest) {
    int v[] = {4};
    auto p = Pizza(1, v);
    ASSERT_EQ(p.melhorRecorte(), 4);
}