#include "calc/Calc.h"
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/catch_test_macros.hpp>

TEST_CASE("Addition", "[calc]") { CHECK(Calc::add(2, 3) == 5); }

TEST_CASE("Subtraction", "[calc]") { CHECK(Calc::sub(1, 1) == 0); }

TEST_CASE("AdditionBenchmark", "[.benchmark]")
{
    BENCHMARK("Addition") { return Calc::add(1, 1); };
}
