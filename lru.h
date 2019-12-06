#include "naivelru.h"
#include <list>
#include <unordered_map>

using namespace std;

class LRUCache: public NaiveLRUCache
{
  private:
    unordered_map<int, list<int>::iterator> cache_map;

  public:

    LRUCache(int cs): NaiveLRUCache(cs){};

};
