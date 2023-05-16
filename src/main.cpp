#include <iostream>
#include <memory>

#include "AnalogClock.hpp"
#include "DigitalClockAdapter.hpp"

int main() {
  // AnalogClock clock(20, 2, 3);
  std::shared_ptr<AnalogClock> ptr = std::make_shared<AnalogClock>(30, 45, 15);
  DigitalClockAdapter adapter(ptr);
  auto t = adapter.getTime();
  std::cout << t.getHours() << " " << t.getMinutes() << " " << t.getSeconds()
            << '\n';
  return 0;
}
