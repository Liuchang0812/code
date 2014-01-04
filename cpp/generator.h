#ifndef btm_generator
#define btm_generator
#include<string.h>
#endif
namespace btm{
namespace generator{
    class BasicGenerator{
        public:
            virtual const char* NextString() ;
            virtual const char* LastString() ;
        private:
            char* laststring;
    };
}
}
