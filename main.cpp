#include <iostream>
#include <chrono>
#include <thread>
#include <stdlib.h>

using namespace std;
string getTime()
{
  std::time_t t = std::time(0);
  std::tm *now = std::localtime(&t);
  return to_string((now->tm_hour)) + ':' + to_string((now->tm_min + 1)) + ':' + to_string((now->tm_sec));
}
int main()
{
  while(1){
    system("clear");
    cout << getTime() << endl;
    std::chrono::milliseconds time_span(1000);
    std::this_thread::sleep_for(time_span);
  }
}