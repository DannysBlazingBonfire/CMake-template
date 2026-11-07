#include "printer.hpp"
#include "decoder.hpp"

int main() {
    Printer::print("Hello World");
    Decoder::print("Hello World From Dynamic Lib");
    return 0;
}
