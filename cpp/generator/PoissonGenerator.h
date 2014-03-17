#ifndef APSARA_BENCHMARK_POISSONGENERATOR_H
#define APSARA_BENCHMARK_POISSONGENERATOR_H
#include "generator.h"
namespace apsara
{
namespace benchmark
{
class PoissonGenerator : Generator
{
public:
    Generator();
    Generator(int32_t lambda);
    /*
     * @lambda: how many operators one second
     * @delta: the delta time in usec.
     */
    Generator(int32_t lambda, int32_t delta);
    virtual int64_t nextLong();
    virtual ~PoissonGenerator();
private:
    int init(int32_t lambda, int32_t delta);
    int32_t mLambda, mDelta; 
};
}
}
#endif
