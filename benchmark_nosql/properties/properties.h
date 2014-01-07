#ifndef benchmark_nosql_properties
#define benchmark_nosql_properties

#include <map>
#include <inttypes.h>
#include <iostream>
#include <fstream>
#include <string>
#include <set>

#endif

class properties{
    public:
        properties();
        ~properties();
        properties* getInstance();
        int loadProperty(const string& content);
        int loadProperty(const ifstream &cin);
        string getProperty(const string &key_name, const string &default_value = "");
    private:
        properties* instance_properties;
        map<string, string> data;
};
