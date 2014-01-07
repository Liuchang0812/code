#ifndef benchark_nosql_db
#define benchark_nosql_db
#include <string>
#include <set>
#include <algorithm>
#include <set>
#include <map>
#endif
namespace benchmark_nosql{
    class DB
    {
        public:
            void setproperties(Properties p)
            {
                _p = p;
            }
            Properties getProperties()
            {
                return _p;
            }
            virtual void init()
            {
            }
            virtual void cleanup()
            {
            }
            virtual int read(string table, string key, set<string> fields, map<string> result);
            virtual int scan(string table, string startkey, int recordcount, set<string> fields, vector<map<string, string> >result);
            virtual int update(string table, string key, map<string, string> values);
            virtual int insert(string table, string key, map<string, string> values);
            virtual int delete(string table, string key);
        private:
            Properties _p=new Properties();
    }
}
