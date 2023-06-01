#pragma once
#include <optional>
#include <iostream>
#include <set>
#include <vector>
#include <vulkan/vulkan_core.h>

struct QueueFamilyIndices {
    std::optional<uint32_t> graphicsFamily;
    std::optional<uint32_t> presentFamily;

    bool isComplete();
};

const std::vector<const char*> deviceExtensions = {
    VK_KHR_SWAPCHAIN_EXTENSION_NAME
};

QueueFamilyIndices findQueueFamilies(VkPhysicalDevice device, VkSurfaceKHR& surface);

bool checkDeviceExtensionSupport(VkPhysicalDevice device);

bool isDeviceSuitable(VkPhysicalDevice device, VkSurfaceKHR& surface);
