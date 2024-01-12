
#include "gvars.hpp"
#include "application.hpp"

Application::Application()
{
    std::cout << "Instantiated!" << std::endl;
}

void Application::run()
{
    std::cout << "Ran!" << std::endl;
}

Application::~Application()
{
    std::cout << "Destructed!" << std::endl;
}