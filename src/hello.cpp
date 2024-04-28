#include "hello.h"

#include "lib.h"

std::ostream &hello::greetings(std::ostream &out) {
  return out << "Hello2, it's patch " << getVersion() << "\n";
}