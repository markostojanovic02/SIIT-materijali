#ifndef _GLOBALS_H_
#define _GLOBALS_H_

#include <queue>
#include <vector>

#include "tbb/concurrent_vector.h"
#include "tbb/concurrent_hash_map.h"

#include "defines.h"

using namespace std;
using namespace tbb;

// globals
queue<unsigned char> in2HighPassQueue;
concurrent_vector<short> highPass2ClipVector;
concurrent_vector<unsigned char> clip2CounterVector;
concurrent_hash_map<unsigned char, unsigned int> couterValues;

#endif