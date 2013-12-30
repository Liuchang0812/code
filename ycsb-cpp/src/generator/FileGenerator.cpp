#include "Generator.cpp"

namespace ycsb.generator
{
class FileGenerator:Generator{
    public:
        FileGenerator();

    private:
        string filename;
        string current;
        ifstream reader;
        
}
}
