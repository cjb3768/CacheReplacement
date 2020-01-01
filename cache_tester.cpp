#include <iostream>
#include <ctime>
#include "naivelru.h"
#include "lru.h"

using namespace std;

int main(int argc, char* argv[])
{
  /**
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

  cout << "+++++++++++++++++\n";

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
  */

  //test for variable sized caches of random numbers

  int cache_size = 5;
  if (argc >= 2)
  {
    cache_size = stoi(argv[1]);
  }

  int num_accesses = 20;
  if (argc >= 3)
  {
    num_accesses = stoi(argv[2]);
  }

  int cache_min = 0;
  if (argc >= 4)
  {
    cache_min = stoi(argv[3]);
  }

  int cache_max = 10;
  if (argc >= 5)
  {
    cache_max = stoi(argv[4]);
  }

  LRUCache randCache = LRUCache(cache_size);
  NaiveLRUCache  naiveRandCache = NaiveLRUCache(cache_size);

  clock_t start, stop;
  double lruTime, naiveLruTime;

  srand(time(0));

  cout << "---\nBeginning LRU trials\n---\n";

  start = clock();
  for (int i =0; i < num_accesses; i++){
    randCache.access_value(rand() % cache_max + cache_min);
  }
  stop = clock();

  cout << "---\nLRU trials complete\n---\n";
  lruTime = (stop - start);
  //randCache.print_cache();

  cout << "---\nBeginning NaiveLRU trials\n---\n";

  start = clock();
  for (int i =0; i < num_accesses; i++){
    naiveRandCache.access_value(rand() % cache_max + cache_min);
  }
  stop = clock();

  cout << "---\nNaiveLRU trials complete\n---\n";
  naiveLruTime = (stop - start);
  //naiveRandCache.print_cache();


  //print results
  cout << "=========\n";
  cout << " Results\n";
  cout << "=========\n";

  cout << "Cache size: " << cache_size << endl;
  cout << "Num accessess for cache: " << num_accesses << endl;
  cout << "Minimum value for cache entries: " << cache_min << endl;
  cout << "Maximum value for cache entries: " << cache_max << endl;
  cout << "\nCache results generated using the stdlib rand() function\n\n";

  cout << "LRU runtime (in ticks): " << lruTime << endl;
  cout << "LRU runtime (in seconds): " << lruTime/CLOCKS_PER_SEC << endl;
  cout << "LRU average access time (in ticks): " << lruTime/num_accesses << endl;
  cout << "LRU average access time (in seconds): " << lruTime/CLOCKS_PER_SEC/num_accesses << endl;
  cout << "LRU cache hits: " << randCache.get_cache_hits() << endl;
  cout << "LRU cache misses: " << randCache.get_cache_misses() << endl;
  cout << endl;
  cout << "Naive LRU runtime (in ticks): " << naiveLruTime << endl;
  cout << "Naive LRU runtime (in seconds): " << naiveLruTime/CLOCKS_PER_SEC << endl;
  cout << "Naive LRU average access time (in ticks): " << naiveLruTime/num_accesses << endl;
  cout << "Naive LRU average access time (in seconds): " << naiveLruTime/CLOCKS_PER_SEC/num_accesses << endl;
  cout << "Naive LRU cache hits: " << naiveRandCache.get_cache_hits() << endl;
  cout << "Naive LRU cache misses: " << naiveRandCache.get_cache_misses() << endl;
}
