
#include "application.hpp"

int main(int argc, char *argv[]) {
    // create app
    auto fraX = new Application("FraX", 720, 480);

    // run loop and catch errors
    try { fraX->run(); }
    catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
        return EXIT_FAILURE;
    }

    // app destructor
    delete fraX;

    return EXIT_SUCCESS;
}