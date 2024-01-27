#define DT_DRV_COMPAT zmk_behavior_hidapi

// Dependencies
#include <zephyr/device.h>
#include <drivers/behavior.h>
#include <zephyr/logging/log.h>

#include <zmk/behavior.h>

LOG_MODULE_DECLARE(zmk, CONFIG_ZMK_LOG_LEVEL);

#if DT_HAS_COMPAT_STATUS_OKAY(DT_DRV_COMPAT)

// Instance-Unique Data Struct (Optional)
struct behavior_behavior_hidapi_data {
    bool example_data_param1;
    bool example_data_param2;
    bool example_data_param3;
};

// Instance-Unique Config Struct (Optional)
struct behavior_behavior_hidapi_config {
    bool example_config_param1;
    bool example_config_param2;
    bool example_config_param3;
};

// Initialization Function
static int behavior_hidapi_init(const struct device *dev) { return 0; };

// API Structure
static const struct behavior_driver_api_behavior_hidapi _driver_api = {};

BEHAVIOR_DT_INST_DEFINE(
    0, // Instance Number (Equal to 0 for behaviors that don't require multiple instances,
       //                  Equal to n for behaviors that do make use of multiple instances)
    <behavior_hidapi> _init, NULL, // Initialization Function, Power Management Device Pointer
    &<behavior_hidapi> _data,
    &<behavior_hidapi>
        _config, // Behavior Data Pointer, Behavior Configuration Pointer (Both Optional)
    APPLICATION, CONFIG_KERNEL_INIT_PRIORITY_DEFAULT, // Initialization Level, Device Priority
    &<behavior_hidapi> _driver_api);                    // API Structure

#endif /* DT_HAS_COMPAT_STATUS_OKAY(DT_DRV_COMPAT) */