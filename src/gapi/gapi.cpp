
#include "gapi.hpp"

Gapi::Gapi(char* appName, GLFWwindow* windowHandle)
{
    createInstanceAndDebugMessengerAndSurface(appName, windowHandle);
}

Gapi::~Gapi()
{
    vkDestroySurfaceKHR(_instance, _surface, nullptr);

    vkb::destroy_debug_utils_messenger(_instance, _debugMessenger);
    vkDestroyInstance(_instance, nullptr);
}

void Gapi::renderLoop()
{

}

void Gapi::createInstanceAndDebugMessengerAndSurface(char* appName, GLFWwindow* windowHandle)
{
    vkb::InstanceBuilder builder;

    auto inst_build_ret = builder
    .set_app_name(appName)
    .request_validation_layers(_useValidationLayers)
    .use_default_debug_messenger()
    .require_api_version(1, 3, 0)
    .build();

    if (!inst_build_ret) {
        std::cout << "Could not create a VkInstance!" << std::endl;
    } 

    vkb::Instance vkb_inst = inst_build_ret.value();

    // VkInstance
    _instance = vkb_inst.instance;

    // DebugMessenger
    _debugMessenger = vkb_inst.debug_messenger;

    // Surface
    VkResult err = glfwCreateWindowSurface (_instance, windowHandle, NULL, &_surface);
}