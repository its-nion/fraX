
#include "gvars.hpp"

#include "window/window.hpp"
#include "gapi/gapi.hpp"

class Application {
    public:
        Application(const char* name, const int width, const int height);
        ~Application();

        void run();

    private:
        Window* _window;
        Gapi* _gapi;
};