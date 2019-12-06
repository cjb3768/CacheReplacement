#include <list>

using namespace std;

class NaiveLRUCache
{
  private:
    list<int> cache_list;
    int cache_size;

  public:

    NaiveLRUCache(int cs): cache_size(cs){};

    void access_value(int value);
    void print_cache();
};
