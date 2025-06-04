# Prerequisite

## Target

Need "Seeed Studio XIAO ESP32C3"

https://akizukidenshi.com/catalog/g/g117454/

## esp-idf

https://github.com/espressif/esp-idf

# Build and Run

in esp-idf

components/bt/host/bluedroid/stack/btu/btu_hcif.c

```diff
diff --git a/components/bt/host/bluedroid/stack/btu/btu_hcif.c b/components/bt/host/bluedroid/stack/btu/btu_hcif.c
index eb2995b9..e403f6c9 100644
--- a/components/bt/host/bluedroid/stack/btu/btu_hcif.c
+++ b/components/bt/host/bluedroid/stack/btu/btu_hcif.c
@@ -1453,6 +1453,7 @@ static void btu_hcif_command_complete_evt(BT_HDR *response, void *context)
             break;
         }
         case HCI_BLE_WRITE_ADV_PARAMS:
+            if (*stream != BTM_FAILED_ON_SECURITY)
             adv_param_status = *stream;
             osi_sem_give(&adv_param_sem);
             break;
```

```
idf.py set-target esp32c3
idf.py build
idf.py flash
```

