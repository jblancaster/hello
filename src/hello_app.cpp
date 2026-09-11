#include "hello.h"

#include <ostream>

#include "greeting.h"

int run_hello(std::ostream& output) {
    output << hello_message() << '\n';
    return 0;
}
