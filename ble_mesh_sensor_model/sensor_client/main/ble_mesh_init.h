

#ifndef _BLE_MESH_DEMO_INIT_H_
#define _BLE_MESH_DEMO_INIT_H_

#define TAG "Client"

void ble_mesh_get_dev_uuid(uint8_t *dev_uuid);

esp_err_t bluetooth_init(void);

#endif
