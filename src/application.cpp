
#include "application.hpp"

Application::Application(const char* name, const int width, const int height)
{
    _window = new Window(name, width, height);

    _gapi = new Gapi((char*)name, _window->getWindowHandle());
}

void Application::run()
{
    while (!_window->shouldClose())
    {
        _window->updateEvents();
    }
}

Application::~Application()
{
    delete _gapi;
    delete _window;
}