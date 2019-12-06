#include "lru.h"

using namespace std;

int main()
{
  //create a 5 slot cache
  LRUCache cache0 = LRUCache(5);

  //test accessing a value not present
  cache0.access_value(1);
  cache0.print_cache();
}
