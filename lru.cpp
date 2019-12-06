#include <iostream>
#include <list>
#include "lru.h"

using namespace std;

void LRUCache::access_value(int value)
{
  //Naive implementation; navigate the whole list and see if value is in the list.

  list<int>::iterator it = cache_list.begin();
  int i = 0;

  //search cache
  while ((i<cache_size) && (it != cache_list.end()))
  {
    //cache hit
    if (*it == value)
    {
        //remove the element from the cache_list
        cache_list.erase(it);
        //re-add to the front of the list
        cache_list.push_front(value);
        return;
    }
    i++;
    it++;
  }

  //value was not present in cache; determine if we need to remove the back end before inserting value into cache
  if (i == cache_size)
  {
    //cache is full; remove back of cache, the least recently used element
    cache_list.pop_back();
  }

  //insert value at front of cache
  cache_list.push_front(value);

}

void LRUCache::print_cache()
{
  //Print cache for testing purposes
  cout << "-----------------------------\n";
  cout << "Cache contains the following.\n";

  list<int>::iterator it = cache_list.begin();

  while (it != cache_list.end())
  {
    cout << *it << " -> ";
    it++;
  }
  cout << endl;
  cout << "-----------------------------\n";
}
