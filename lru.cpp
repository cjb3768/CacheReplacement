#include <iostream>
#include "lru.h"

using namespace std;

void LRUCache::access_value(int value)
{
  //Supposedly smarter implementation; check to see if the value is in cache_map (with constant access time) or not
  cout << "-----------------------------\n";
  cout << "Attempting to access value " << value << " from cache.\n";

  unordered_map<int, list<int>::iterator>::iterator it = cache_map.find(value);

  //search map to see if value is in cache
  if (it != cache_map.end())
  {
    //cache hit
    cout << "Value found; removing from list and pushing to front.\n";
    //remove the element from the cache_list
    cache_list.erase(cache_map[value]);
    //re-add to the front of the list
    cache_list.push_front(value);
    //update position in cache_map
    cache_map[value] = cache_list.begin();
    cout << "Value's position in cache map updated.\n";
    return;
  }

  //value wasn't in the cache
  cout << "Value not present in cache. Attempting to add it to cache.\n";
  
  //check to see if the cache is full
  if (cache_map.size() == cache_size)
  {
    //cache is full; remove least recently used element from map and list
    cout << "Cache full; deleting least recently used value from back.\n";
      cache_map.erase(cache_list.back());
    cache_list.pop_back();
  }

  //add new value to list and map
  cache_list.push_front(value);
  cache_map.emplace(value, cache_list.begin());
  cout << "Value added to cache.\n";
  cout << "-----------------------------\n";

}
