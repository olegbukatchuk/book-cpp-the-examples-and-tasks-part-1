#include <iostream>
#include <cstdlib>
#include <string>
#include <thread>
#include <chrono>
#include <mutex>

using namespace std;

mutex m;

void mythread(string name, int time, int steps)