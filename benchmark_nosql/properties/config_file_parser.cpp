#include <iostream>
#include <fstream>
#include <string>
#include <map>

using namespace std;

class ConfigFileParser{
    public:
        ConfigFileParser(string filename);
        ~ConfigFileParser();
        int parseFile(map<string, string> &result);
    private:
        string filename_;
};

ConfigFileParser::ConfigFileParser(std::string filename):filename_(filename)
{
}
ConfigFileParser::~ConfigFileParser()
{
}
int ConfigFileParser::parseFile(map<string, string> &result)
{
    if (filename_ == "")
    {
        throw "filename is empty!";
        return -1;
    }
    ifstream cin(filename_.c_str());
    string buffer;
    while( getline(cin, buffer) )
    {
        cerr << "processing: "<< buffer << endl;
        int position = buffer.find("=");
        if( position == -1)
        {
            continue;
        }
        result[buffer.substr(0,position)] = buffer.substr(position+1);
    }
    return result.size();
}

