#ifndef btm_generator
#define btm_generator
#include<string.h>
#endif
namespace btm{
namespace generator{
    class BasicGenerator{
        public:
            virtual char* NextString() ;
            virtual char* LastString() ;
        private:
            char* laststring;
    };
}
}
