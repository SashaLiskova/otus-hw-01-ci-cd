#include "hello.h"

#include "lib.h"

std::ostream &hello::greetings(std::ostream &out) {
  return out << "Hello, it's patch " << getVersion() << "\n";
}