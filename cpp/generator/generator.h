#ifndef APSARA_BENCHMARK_GENERATOR_H
#define APSARA_BENCHMARK_GENERATOR_H
namespace apsara
{
namespace benchmark
{
class Generator
{
public:
    virtual int64_t nextLong() = 0;
    virtual ~Generator(){};
};
}//end benchmark
}//end apsara
#endif
