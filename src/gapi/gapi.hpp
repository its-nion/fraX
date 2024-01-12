
#include "../gvars.hpp"

class Gapi {
    public:
        Gapi(char* appName, GLFWwindow* windowHandle);
        ~Gapi();

        // vars


        // functions
        void renderLoop();

    private:
        // user vars
        bool _useValidationLayers = true;

        // vars
        VkInstance _instance;
        VkDebugUtilsMessengerEXT _debugMessenger;
        VkSurfaceKHR _surface;

        // functions
        void createInstanceAndDebugMessengerAndSurface(char* appName, GLFWwindow* windowHandle);
};