/*******************************************************************************
Copyright 2016 Microchip Technology Inc. (www.microchip.com)

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.

To request to license the code under the MLA license (www.microchip.com/mla_license), 
please contact mla_licensing@microchip.com
*******************************************************************************/
#include "system.h"

/* Demo I/O options. */
#define LED_USB_DEVICE_STATE                            LED_D1
#define LED_USB_DEVICE_HID_KEYBOARD_CAPS_LOCK           LED_D2

#define BUTTON_USB_DEVICE_HID_KEYBOARD_KEY_0            BUTTON_S1
#define BUTTON_USB_DEVICE_HID_KEYBOARD_KEY_1            BUTTON_S2
#define BUTTON_USB_DEVICE_HID_KEYBOARD_KEY_2            BUTTON_S3
#define BUTTON_USB_DEVICE_REMOTE_WAKEUP                 BUTTON_S1

/* USB Stack I/O options. */
#define self_power                                      1
