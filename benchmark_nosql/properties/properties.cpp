#include "properties.h"

properties::properties()
{
    data.clear();
}

properties::~properties()
{
    data.clear();
}
properties:: getProperty* getInstance()
{
    if (instance_properties == NULL)
        return new properties();
    else 
        return instance_properties;
}
properties::loadProperty(const string& content)
{
}
