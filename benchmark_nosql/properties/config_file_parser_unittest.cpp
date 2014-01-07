#include "config_file_parser.cpp"
#include <map>
#include <string>
#include <iostream>

int main()
{
    std::ofstream fout("config.sample");
    fout<<"name=lc"<<std::endl;
    fout<<"namelc"<<std::endl;
    ConfigFileParser* cfp = new ConfigFileParser("config.sample");
    std::map<std::string, std::string> result;
    cfp->parseFile(result);
    for ( auto p = result.begin() ; p != result.end(); p++)
    {
        std::cout << p->first << ' ' << p->second << endl;
    }
    return 0;
}

  
