
#define GLFW_INCLUDE_VULKAN
#include <glfw/glfw3.h>
#include <memory>

class Window {
    public:
        Window(const char* name, const int width, const int height);
        ~Window();

        bool shouldClose();
        void updateEvents();
        GLFWwindow* getWindowHandle();

    private:
        GLFWwindow* _glfwWindow;
};