#include "lru.h"

using namespace std;

int main()
{
  //Verify basic functionality
  //create a 5 slot cache
  LRUCache cache0 = LRUCache(5);

  //test accessing a value not present
  cache0.print_cache();
  cache0.access_value(1);
  cache0.print_cache();

  //test accessing a value present in a populated cache
  cache0.access_value(2);
  cache0.access_value(3);
  cache0.access_value(1);
  cache0.print_cache();

  //test accessing a value with full cache
  cache0.access_value(4);
  cache0.access_value(5);
  cache0.access_value(6);
  cache0.print_cache();
}
