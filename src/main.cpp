
#include "gvars.hpp"
#include "application.hpp"

int main(int argc, char *argv[]) {
    auto fraX = std::make_unique<Application>();

    try {
        fraX->run();
    }
    catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}