// SPDX-License-Identifier: MIT
// Copyright 2020 NXP

/*
 * custom.h
 *
 *  Created on: July 29, 2020
 *      Author: nxf53801
 */

#ifndef __CUSTOM_H_
#define __CUSTOM_H_
#ifdef __cplusplus
extern "C" {
#endif

#include "gui_guider.h"

#define SSID_KEY "SSID"
#define PASS_KEY "PASS"

#define DUBG 

#ifdef DUBG
#define MQTT_SERVER "aligenie.xuhongv.com"
#define MQTT_USER_NAME "admin"
#define MQTT_PASSWOLD "xuhong123456"

#else

#define MQTT_SERVER "your mqtt host"
#define MQTT_USER_NAME "mqtt user name"
#define MQTT_PASSWOLD "mqtt passworld"

#endif

#define MQTT_PORT 1883
#define FISH_MQTT_SUB_TOPIC "/FishTank/a81710cf69dd/devPub"
#define MQTT_CLIETN_TOPIC "topic/dev/pub"
#define MQTT_CLIETN_PUB_TOPIC "topic/dev/sub"

    typedef enum {
        CUSTOM_EVENT_NONE = 0,
        CUSTOM_EVENT_WIFI_SCAN_DONE,
        CUSTOM_EVENT_GET_WIFI,
        CUSTOM_EVENT_GOT_IP,
        CUSTOM_EVENT_GET_WEATHER,
        CUSTOM_EVENT_GET_WIFI_DISCONNECT,
        CUSTOM_EVENT_MQTT_CONNECT,
        CUSTOM_EVENT_MQTT_DISCONNECT,
        CUSTOM_EVENT_MQTT_GET_MSG,
        CUSTOM_EVENT_MQTT_PUB_MSG,
        CUSTOM_EVENT_BUTTOM_RED_HIGH,
        CUSTOM_EVENT_BUTTOM_RED_LOW,
        CUSTOM_EVENT_BUTTOM_GREEN_HIGH,
        CUSTOM_EVENT_BUTTOM_GREEN_LOW,
        CUSTOM_EVENT_BUTTOM_BLUE_HIGH,
        CUSTOM_EVENT_BUTTOM_BLUE_LOW,
        CUSTOM_EVENT_BUTTOM_ALL_ON,
        CUSTOM_EVENT_BUTTOM_ALL_OFF,
    }custom_event_t;

    typedef enum {
        MQTT_DEV_TYPE_NONE = -1,
        MQTT_DEV_TYPE_FISH = 0,
        MQTT_DEV_TYPE_RGB_WB2,
        MQTT_DEV_TYPE_RGB_M62,
        MQTT_DEV_TYPE_RGB_BW16,
    } mqtt_dev_type_t;
    void custom_init(lv_ui* ui);

#ifdef __cplusplus
}
#endif
#endif /* EVENT_CB_H_ */
