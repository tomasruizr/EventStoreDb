#pragma once
#ifndef EVENTSOURCING
#define EVENTSOURCING
using namespace std;
#include <string>

struct Event {
  string name;
  string data;
  unsigned long long int revision;
  
  Event(){};
  Event(string _name, string _data)
    : name(_name), data(_data) {};
  Event(string _name, string _data, unsigned long long int _revision)
    : name(_name), data(_data), revision(_revision) {};
};

#endif // EVENTSOURCING