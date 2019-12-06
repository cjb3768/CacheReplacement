#include <list>

using namespace std;

class LRUCache{
  private:
    list<int> cache_list;
    int cache_size;

  public:

    LRUCache(int cs): cache_size(cs){};

    void access_value(int value);
    void print_cache();
};
