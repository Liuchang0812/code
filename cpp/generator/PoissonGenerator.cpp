#include "PoissonGenerator.h"

using apsara::benchmark;


int PoissonGenerator::init(int32_t lambda, int32_t delta)
{
    mLambda = lambda;
    mDelta = delta;
}

PoissonGenerator::PoissonGenerator()
{
    init(10, 300);
}

PoissonGenerator::PoissonGenerator(int32_t lambda)
{
    init(lambda, 300);
}

PoissonGenerator::PoissonGenerator(int32_t lambda, delta)
{
    init(lambda, delta);
}

int64_t nextLong()
{

}
