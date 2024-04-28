#include "hello.h"

#include "lib.h"

std::ostream &hello::greetings(std::ostream &out) {
  return out << "Hello3, it's patch " << getVersion() << "\n";
}