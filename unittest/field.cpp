#include "cn/fieldnoise.hpp"

using namespace cn;

void test_fields()
{
    WangHash hasher;

    // Compilation tests
    value1D(hasher, 0.5f, 2, Interpolation::LINEAR);
    value2D(hasher, ei::Vec2(0.5f), 2, Interpolation::LINEAR);
}