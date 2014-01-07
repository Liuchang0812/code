#include <fstream>
#include <string>

class ConfigFileParser{
    public:
        ConfigFileParser(string filename);
        ~ConfigFileParser();
        int parserFile(const map<string, string> &result);
    private:
        string filename_;
};

ConfigFileParser::ConfigFileParser(string filename)
{
    filename_ = filename;
}
ConfigFileParser::~ConfigFileParser()
{
}
ConfigFileParser::parserFile(const map<string, string> &result)
{
    if (filename_ == NULL || filename_ == "")
    {
        throw "filename is empty!";
        return;
    }
    ifstream cin(filename_);
    string buffer;
    while(getline(cin, buffer) != EOF)
    {
        std::cerr << "processing: "<< buffer << endl;
        int position = buffer.find("=");
        if( position == -1)
        {
            continue;
        }
        result[buffer.substr(0,position)] = buffer.substr(position+1);
    }
}

