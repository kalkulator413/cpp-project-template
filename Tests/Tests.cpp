#include "calc/Calc.h"
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/catch_test_macros.hpp>

TEST_CASE("Addition", "[calc]")
{
    Calc calc;
    CHECK(calc.add(2, 3) == 5);
}

TEST_CASE("AdditionBenchmark", "[.benchmark]")
{
    Calc calc;
    BENCHMARK("Addition") { return calc.add(1, 1); };
}
