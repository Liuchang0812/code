#include <string>

namespace ycsb::generator{
class Generator{
    /*
     * Generate the next string in the distribution.
     */
    public virtual string nextString();

    /*
     * return the previous string generated by the distribution.
     */
    public virtual string lastString();

}
