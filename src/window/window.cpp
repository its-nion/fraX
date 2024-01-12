
#include "window.hpp"

#include <iostream>

Window::Window(const char* name, const int width, const int height)
{
    glfwInit();

    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
    glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

    _glfwWindow = glfwCreateWindow(width, height, name, nullptr, nullptr);
}

Window::~Window()
{
    glfwDestroyWindow(_glfwWindow);

    glfwTerminate();
}

bool Window::shouldClose()
{
    return (glfwWindowShouldClose(_glfwWindow));
}

void Window::updateEvents()
{
    glfwPollEvents();
}

GLFWwindow* Window::getWindowHandle()
{
    return _glfwWindow;
}