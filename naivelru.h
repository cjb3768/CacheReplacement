#pragma once

#include <list>

using namespace std;

class NaiveLRUCache
{
  protected:
    list<int> cache_list;
    int cache_size;
    long int cache_hits;
    long int cache_misses;

  public:

    NaiveLRUCache(int cs): cache_size(cs){ cache_hits = 0; cache_misses = 0;};

    long int get_cache_hits() {return cache_hits;};
    long int get_cache_misses() {return cache_misses;};

    void access_value(int value);
    void print_cache();
};
