
#pragma once

// std libraries
#include <iostream>
#include <stdexcept>
#include <memory>
#include <vector>
#include <cstring>
#include <cstdlib>

// vulkan
#include <vulkan/vulkan.h>

// glfw
#include <glfw/glfw3.h>

// vkbootstrap (also includes vulkan.h)
#include "vkbootstrap/VkBootstrap.h"

// preprocesser success check
#define VK_CHECK(x) do { VkResult err = x; if (err) {fmt::println("Detected Vulkan error: {}", string_VkResult(err)); abort(); } } while (0)