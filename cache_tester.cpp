#include "naivelru.h"

using namespace std;

int main()
{
  //Verify basic functionality of naive cache
  //create a 5 slot cache
  NaiveLRUCache cache0 = NaiveLRUCache(5);

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

  //Verify basic functionality of smarter lru cache
  LRUCache cache1 = LRUCache(5);

  //test accessing a value not present
  cache1.print_cache();
  cache1.access_value(1);
  cache1.print_cache();

  //test accessing a value present in a populated cache
  cache1.access_value(2);
  cache1.access_value(3);
  cache1.access_value(1);
  cache1.print_cache();

  //test accessing a value with full cache
  cache1.access_value(4);
  cache1.access_value(5);
  cache1.access_value(6);
  cache1.print_cache();
}
