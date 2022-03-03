// Copyright 2021 Espressif Systems (Shanghai) PTE LTD
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at

//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once

#define SET_VENDOR_IE      CONFIG_SET_VENDOR_IE

#define ESP_GATEWAY_SOFTAP_SSID     "ESP_Gateway"
#define ESP_GATEWAY_SOFTAP_PASSWORD "12345678"

typedef enum {
    ESP_GATEWAY_SOFTAP,
    ESP_GATEWAY_STATION,
    ESP_GATEWAY_ETH,
    ESP_GATEWAY_USB,
    ESP_GATEWAY_SDIO,
    ESP_GATEWAY_SPI,
    ESP_GATEWAY_MAX,
} esp_gateway_interface_t;