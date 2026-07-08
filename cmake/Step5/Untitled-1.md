W (41347) ota_app: esp_https_ota_perform failed (ESP_ERR_TIMEOUT)
I (41347) pow_acc: evt[0]<=0
I (41347) pow_acc: evt[1]<=0
I (41347) pow_acc: evt[2]<=0
I (41347) pow_acc: evt[3]<=0
I (41357) pow_acc: evt[4] 330.611111uAh time_s=10.8
I (41357) pow_acc: evt[5]<=0
I (41367) pow_acc: evt[6] 627.436940uAh time_s=25.7
I (41367) pow_acc: evt[7]<=0
I (41377) pow_acc: evt[8]<=0
I (41377) pow_acc: evt[9]<=0
I (41377) pow_acc: evt[10]<=0
I (41387) pow_acc: evt[11]<=0
I (41387) pow_acc: evt[12]<=0
I (41387) pow_acc: evt[13]<=0
I (41397) pow_acc: evt[14]<=0
I (41397) pow_acc: evt[15]<=0
I (41397) pow_acc: evt[16]<=0
I (41407) pow_acc: evt[17]<=0
I (41407) pow_acc: evt[18]<=0
I (41417) pow_acc: evt[19] not end
I (41417) pow_acc: evt[19] 471.458717uAh time_s=40.4
I (41417) pow_acc: evt[20]<=0
I (41437) pow_acc: deep sleep=0.000000,evt=1429.506768, flash =3473.247973 ,all =4902.754742 ,xx_s=76.9
I (41437) pow_acc: save_power_uAh 4902.754742
W (41447) ota_app: esp_ota failed (ESP_ERR_TIMEOUT)
uinx=107
W (41467) ota_app: aws_remainOtaJob_result_reply(false)
W (41487) uart_terminal: HW FIFO Overflow
get_cacert : get_cacert ...
get_cacert : get_cacert ...
get_clientcert : get_clientcert ...
get_clientcert : get_clientcert ...
get_clientkey : get_clientkey ...
get_clientkey : get_clientkey ...
aws_Connect : aws_Connect completed !
I (47107) ota_app: OTA timer callback function called
I (49657) bat_monitor: vol:3302.36 cal_vol:3288.16 state 2

aws_Subscribe : low power ! aws_Subscribe Error !
aws_iot_jobs_result_reply : topic  subscribe failed
aws_remainOtaJob_result_reply : Failed to publish result !aws_Disconnect : aws_Disconnect successed !
I (49677) user_app: save ota suc
I (50407) bat_monitor: vol:3313.28 cal_vol:3304.16 state 2

I (50407) ota_app: OTA time out reached!
I (50407) ota_app: Battery level is [not ok]
I (50407) ota_app: OTA Timer is [20000]
I (53687) sleep_handler_task: Recieved notification value is 1
I (56677) ota_app: ota end ret=-1
I (57107) ota_app: OTA timer callback function called
I (57317) bat_monitor: vol:3319.34 cal_vol:3313.05 state 2

I (57317) timer_wakeup: per=4320,start=111 now_unix 28923 wakeup_time_m 3949
I (57317) set_wakeup_time: Meter will wake up after 3949 minutes.
I (57327) network_manager: Disconnecting from the network
I (57327) pppos_new: PPP state changed event 267
I (57337) pppos_new: PPP state changed event 265
I (57337) pppos_new: PPP state changed event 262
run pppos_disc ret=0
I (57467) pppos_new: pppos_dev_deinit: Waiting for PPP to close ...
ets Jul 29 2019 12:21:46

rst:0xc (SW_CPU_RESET),boot:0x12 (SPI_FAST_FLASH_BOOT)
configsip: 0, SPIWP:0xee
clk_drv:0x00,q_drv:0x00,d_drv:0x00,cs0_drv:0x00,hd_drv:0x00,wp_drv:0x00
mode:DIO, clock div:2
load:0x3fff0030,len:1416
load:0x40078000,len:14892
ho 0 tail 12 room 4
load:0x40080400,len:3612
0x40080400: _init at ??:?

entry 0x400805a4
I (404) cpu_start: Pro cpu up.
I (404) cpu_start: Starting app cpu, entry point is 0x40081480
0x40081480: call_start_cpu1 at C:/Users/zhilang110/esp/v5.0/esp-idf/components/esp_system/port/cpu_start.c:142

I (390) cpu_start: App cpu up.
I (468) cpu_start: Pro cpu start user code
I (468) cpu_start: cpu freq: 160000000 Hz
I (468) cpu_start: Application information:
I (471) cpu_start: Project name:     ESP32_PXFW2_2_1_7_20240919
I (478) cpu_start: App version:      12
I (482) cpu_start: Compile time:     Sep 23 2024 15:50:03
I (488) cpu_start: ELF file SHA256:  4d4d19130d0ee072...
I (494) cpu_start: ESP-IDF:          v5.0-dirty
I (500) heap_init: Initializing. RAM available for dynamic allocation:
I (507) heap_init: At 3FFAFF10 len 000000F0 (0 KiB): DRAM
I (513) heap_init: At 3FFB6388 len 00001C78 (7 KiB): DRAM
I (519) heap_init: At 3FFB9A20 len 00004108 (16 KiB): DRAM
I (525) heap_init: At 3FFCE2B8 len 00011D48 (71 KiB): DRAM
I (531) heap_init: At 3FFE0440 len 00003AE0 (14 KiB): D/IRAM
I (538) heap_init: At 3FFE4350 len 0001BCB0 (111 KiB): D/IRAM
I (544) heap_init: At 40097AC4 len 0000853C (33 KiB): IRAM
I (551) spi_flash: detected chip: gd
I (555) spi_flash: flash io: qio
I (559) cpu_start: Starting scheduler on PRO CPU.
I (0) cpu_start: Starting scheduler on APP CPU.
=================================== Px Esp32 App Start ===================================
I (587) app_manager_t:  init >>
I (697) gpio: GPIO[2]| InputEn: 0| OutputEn: 1| OpenDrain: 0| Pullup: 0| Pulldown: 1| Intr:0
I (697) gpio: GPIO[17]| InputEn: 0| OutputEn: 1| OpenDrain: 0| Pullup: 0| Pulldown: 1| Intr:0
I (707) gpio: GPIO[26]| InputEn: 0| OutputEn: 1| OpenDrain: 0| Pullup: 0| Pulldown: 1| Intr:0
I (717) gpio: GPIO[27]| InputEn: 0| OutputEn: 1| OpenDrain: 0| Pullup: 0| Pulldown: 1| Intr:0
I (827) gpio: GPIO[4]| InputEn: 0| OutputEn: 1| OpenDrain: 0| Pullup: 0| Pulldown: 1| Intr:0
I (827) gpio: GPIO[14]| InputEn: 0| OutputEn: 1| OpenDrain: 0| Pullup: 0| Pulldown: 1| Intr:0
I (827) gpio: GPIO[38]| InputEn: 1| OutputEn: 0| OpenDrain: 0| Pullup: 0| Pulldown: 1| Intr:3
I (837) gpio: GPIO[18]| InputEn: 0| OutputEn: 1| OpenDrain: 1| Pullup: 0| Pulldown: 0| Intr:0
I (847) gpio: GPIO[15]| InputEn: 0| OutputEn: 1| OpenDrain: 0| Pullup: 0| Pulldown: 1| Intr:0
I (857) gpio: GPIO[39]| InputEn: 1| OutputEn: 0| OpenDrain: 0| Pullup: 0| Pulldown: 1| Intr:3
app_var_init g_meterId : CNPX00000009
app_var_init g_userId : 7654321
app_var_init g_updatePeriod : 4320
app_var_init g_startPeriod : 111
app_var_init g_warnLowBattery : 400
app_var_init g_warnLowCreditBalance : 100.000000
app_var_init g_warnLowGasMass : 0.500000
app_var_init g_gasRemain : 13.000000
app_var_init g_unitPrice : 23.000000
app_var_init g_csrpCreated : 0
app_var_init g_csrpSeqNo : 0
app_var_init g_opValveCnt : 0
app_var_init g_creditRemain : 100.000000
app_var_init g_mAhRemain : 18996
app_var_init g_openCloseLock : 1
app_var_init g_closeValve : 0
app_var_init modemName : EG915U
app_var_init modemFwVersion : R03A04M08
app_var_init modemIMEI : "867689061483519"
app_var_init modemIMSI : 208012404547437
app_var_init g_stIccid.iccid_nu : 89330124377803844200
app_var_init g_displayDuration : 10
app_var_init g_densityChange : 1.000000
app_var_init g_cookMinsRemain : 300
app_var_init g_cookTimeout : 6
app_var_init g_meterStatus : 1
app_var_init g_bleTimeout : 30
app_var_init PCB Type is C Board!
307 adjustCredit = 0.000000
I (957) log_mgr: ################
I (967) log_mgr: ################
I (967) log_mgr: current_index = 14
current_index = 14
 I (977) log_mgr: ################
ullup: 0| Pulldown: 1| Intr:0
HW Version voltage is 825 mv
I (1107) gpio: GPIO[35]| InputEn: 1| OutputEn: 0| OpenDrain: 0| Pullup: 0| Pulldown: 1| Intr:0
pcb=F
I (1107) bat_monitor: calibration scheme version is Line Fittinullup: 0| Pulldown: 1| Intr:0g
I (1107) bat_monitor: Calibration Success                       Pullup: 0| Pulldown: 1| Intr:0
I (1117) gpio: GPIO[16]| InputEn: 0| OutputEn: 1| OpenDrain: 0| Pullup: 0| Pulldown: 1| Intr:0                                g
I (1127) bat_monitor: state:2 k:1.466000b:-1553.100000
 esp_vol0: 3463.7stm_vol0:3512.0
esp_vol1: 0.0 stm_vol1:0.0
I (4437) bat_monitor: vol:3324.19 cal_vol:3320.16 state 2

is_voltage_normal=0
  pcb=FI (4437) app_manager_t:  start >>
W (4437) User core: Wake up form undefined
I (4437) user_app: ota_state=2
I (4447) user_app: isp_ota_state=3
I (4447) user_app: subtype=252
I (4447) user_app: now len=123164
I (4457) user_app: sub_mcu_frame_ver=65
I (7757) bat_monitor: vol:3324.19 cal_vol:3320.16 state 2

I (7757) app_manager_t: BATTERY_LEVEL_NOT_OK -> No reason to say awake
I (7767) app_manager_t: WAKEUP_BY_UNDEFINED -> No reason to say awake
I (7777) sleep_handler_task: Up and running!
I (7777) sleep_handler_task: Recieved notification value is 1
I (11407) bat_monitor: vol:3324.19 cal_vol:3320.16 state 2

I (11407) timer_wakeup: per=4320,start=111 now_unix 28936 wakeup_time_m 3949
I (11407) set_wakeup_time: Meter will wake up after 3949 minutes.
->into low power!
I (11417) gpio: GPIO[34]| InputEn: 1| OutputEn: 0| OpenDrain: 0| Pullup: 0| Pulldown: 1| Intr:0
I (11427) sleep: Entering deep sleep ...
ets Jul 29 2019 12:21:46

rst:0x5 (DEEPSLEEP_RESET),boot:0x12 (SPI_FAST_FLASH_BOOT)
configsip: 0, SPIWP:0xee
clk_drv:0x00,q_drv:0x00,d_drv:0x00,cs0_drv:0x00,hd_drv:0x00,wp_drv:0x00
mode:DIO, clock div:2
load:0x3fff0030,len:1416
load:0x40078000,len:14892
ho 0 tail 12 room 4
load:0x40080400,len:3612
0x40080400: _init at ??:?

entry 0x400805a4
I (41) cpu_start: Pro cpu up.
I (41) cpu_start: Starting app cpu, entry point is 0x40081480
0x40081480: call_start_cpu1 at C:/Users/zhilang110/esp/v5.0/esp-idf/components/esp_system/port/cpu_start.c:142

I (0) cpu_start: App cpu up.
I (106) cpu_start: Pro cpu start user code
I (106) cpu_start: cpu freq: 160000000 Hz
I (106) cpu_start: Application information:
I (109) cpu_start: Project name:     ESP32_PXFW2_2_1_7_20240919
I (115) cpu_start: App version:      12
I (120) cpu_start: Compile time:     Sep 23 2024 15:50:03
I (126) cpu_start: ELF file SHA256:  4d4d19130d0ee072...
I (132) cpu_start: ESP-IDF:          v5.0-dirty
I (137) heap_init: Initializing. RAM available for dynamic allocation:
I (144) heap_init: At 3FFAFF10 len 000000F0 (0 KiB): DRAM
I (150) heap_init: At 3FFB6388 len 00001C78 (7 KiB): DRAM
I (156) heap_init: At 3FFB9A20 len 00004108 (16 KiB): DRAM
I (163) heap_init: At 3FFCE2B8 len 00011D48 (71 KiB): DRAM
I (169) heap_init: At 3FFE0440 len 00003AE0 (14 KiB): D/IRAM
I (175) heap_init: At 3FFE4350 len 0001BCB0 (111 KiB): D/IRAM
I (181) heap_init: At 40097AC4 len 0000853C (33 KiB): IRAM
I (189) spi_flash: detected chip: gd
I (192) spi_flash: flash io: qio
I (197) cpu_start: Starting scheduler on PRO CPU.
I (0) cpu_start: Starting scheduler on APP CPU.
=================================== Px Esp32 App Start ===================================
I (224) app_manager_t:  init >>
I (334) gpio: GPIO[2]| InputEn: 0| OutputEn: 1| OpenDrain: 0| Pullup: 0| Pulldown: 1| Intr:0
I (334) gpio: GPIO[17]| InputEn: 0| OutputEn: 1| OpenDrain: 0| Pullup: 0| Pulldown: 1| Intr:0
I (344) gpio: GPIO[26]| InputEn: 0| OutputEn: 1| OpenDrain: 0| Pullup: 0| Pulldown: 1| Intr:0
I (354) gpio: GPIO[27]| InputEn: 0| OutputEn: 1| OpenDrain: 0| Pullup: 0| Pulldown: 1| Intr:0
I (464) gpio: GPIO[4]| InputEn: 0| OutputEn: 1| OpenDrain: 0| Pullup: 0| Pulldown: 1| Intr:0
I (464) gpio: GPIO[14]| InputEn: 0| OutputEn: 1| OpenDrain: 0| Pullup: 0| Pulldown: 1| Intr:0
I (464) gpio: GPIO[38]| InputEn: 1| OutputEn: 0| OpenDrain: 0| Pullup: 0| Pulldown: 1| Intr:3
I (474) gpio: GPIO[18]| InputEn: 0| OutputEn: 1| OpenDrain: 1| Pullup: 0| Pulldown: 0| Intr:0
I (484) gpio: GPIO[15]| InputEn: 0| OutputEn: 1| OpenDrain: 0| Pullup: 0| Pulldown: 1| Intr:0
I (494) gpio: GPIO[39]| InputEn: 1| OutputEn: 0| OpenDrain: 0| Pullup: 0| Pulldown: 1| Intr:3
app_var_init g_meterId : CNPX00000009
app_var_init g_userId : 7654321
app_var_init g_updatePeriod : 4320
app_var_init g_startPeriod : 111
app_var_init g_warnLowBattery : 400
app_var_init g_warnLowCreditBalance : 100.000000
app_var_init g_warnLowGasMass : 0.500000
app_var_init g_gasRemain : 13.000000
app_var_init g_unitPrice : 23.000000
app_var_init g_csrpCreated : 0
app_var_init g_csrpSeqNo : 0
app_var_init g_opValveCnt : 0
app_var_init g_creditRemain : 100.000000
app_var_init g_mAhRemain : 18996
app_var_init g_openCloseLock : 1
app_var_init g_closeValve : 0
app_var_init modemName : EG915U
app_var_init modemFwVersion : R03A04M08
app_var_init modemIMEI : "867689061483519"
app_var_init modemIMSI : 208012404547437
app_var_init g_stIccid.iccid_nu : 89330124377803844200
app_var_init g_displayDuration : 10
app_var_init g_densityChange : 1.000000
app_var_init g_cookMinsRemain : 300
app_var_init g_cookTimeout : 6
app_var_init g_meterStatus : 1
app_var_init g_bleTimeout : 30
app_var_init PCB Type is C Board!
307 adjustCredit = 0.000000
I (594) log_mgr: ################
I (604) log_mgr: ################
I (604) log_mgr: current_index = 14
current_index = 14
 I (614) log_mgr: ################
I (614) pow_acc: ################
unix1727149352
uAh:4902.754742
I (624) bat_monitor: calibration scheme version is Line Fitting
I (624) bat_monitor: Calibration Success
I (634) gpio: GPIO[5]| InputEn: 0| OutputEn: 1| OpenDrain: 0| Pullup: 0| Pulldown: 1| Intr:0
HW Version voltage is 880 mv
I (744) gpio: GPIO[35]| InputEn: 1| OutputEn: 0| OpenDrain: 0| Pullup: 0| Pulldown: 1| Intr:0
pcb=F
I (744) bat_monitor: calibration scheme version is Line Fitting
I (744) bat_monitor: Calibration Success
I (754) gpio: GPIO[16]| InputEn: 0| OutputEn: 1| OpenDrain: 0| Pullup: 0| Pulldown: 1| Intr:0
I (764) bat_monitor: state:2 k:1.466000b:-1553.100000
 esp_vol0: 3463.7stm_vol0:3512.0
esp_vol1: 0.0 stm_vol1:0.0
I (874) bat_monitor: vol:3445.47 cal_vol:3497.96 state 2

is_voltage_normal=1
  pcb=FI (874) app_manager_t:  start >>
I (874) user_app: ota_state=2
I (874) user_app: isp_ota_state=3
I (874) user_app: subtype=252
I (884) user_app: now len=123164
I (884) user_app: sub_mcu_frame_ver=65
I (994) bat_monitor: vol:3444.26 cal_vol:3496.18 state 2

I (994) app_manager_t: WAKEUP_BY_STM -> Running main tasks, without explicit connection to aws
e free spaces: 20
aws_actions_task g_PsmState : 0
aws_actions_task g_Cfun0State : 0
I (1004) main_task: Start Px State Observer...
aws_actions_task MQTT_Broker.mqtt_url : a175vxbf0slgi9-ats.iot.eu-west-1.amazonaws.com
aws_actions_task MQTT_Broker.mqtt_port : 8883
aws_actions_task MQTT_Broker.operateCompany : KE-mgas
aws_actions_task MQTT_Broker.LastJobId :
aws_actions_task MQTT_Broker.remainOtaJobSuccessFlag : 0
aws_actions_task MQTT_Broker.remainOtaJobId :
I (1854) uart_toP1_task: [UART DATA LEN]: 23
Received Data:
0x5a 0xa5 0x5 0x0 0xd 0x3 0xb8 0x1e 0xf 0xa4 0x31 0x50 0x1 0x46 0x13 0x60 0x2 0x0 0x30 0x16 0x50 0x1 0x1
selfTestCb self test = 48
openBleNbiotCb open Ble Nbiot = 1
pcbVersionCb PCB Type is F Board!
setRcvV5PacketEvent Finished 1
Tab version = 5
P1 Data Updated!
----------------

mAhOnInstall = 0
mAhOnLastCook = 0
mAhRemain = 0
-------------

cntValve = 0
------------

sensorFailWarn is false
lockFailWarn   is false
valveFailWarn  is false
lowBatWarn     is false
lowGasWarn     is false
lowCreditWarn  is false
-----------------------

errOled      is false
errSensor    is false
errEepromCrc is false
errAdcCal    is false
errVbat      is false
errValve     is false
errButton    is false
errLock      is false
errFlashCrc  is false
---------------------

g_B1FwVersion is 65
u8OpenBleNb is 1
----------------

Send Ack!
I (2294) bat_monitor: vol:3441.83 state 2

I (2304) BTDM_INIT: BT controller compile version [8020d24]
I (2314) system_api: Base MAC address is not set
I (2314) system_api: read default base MAC address from EFUSE
I (2324) phy_init: phy_version 4670,719f9f6,Feb 18 2021,17:07:07
I (3534) UT_PRO: create attribute table successfully, the number handle = 6 ret = 0

I (3544) UT_PRO: dis create attribute table successfully, the number handle = 6

I (3554) UT_PRO: DIS SERVICE_START_EVT, status 0, service_handle 46
Meter Observer: Not in idle state!
Meter Observer: Not in idle state!
I (13654) bat_monitor: vol:3443.04 cal_vol:3494.40 state 2

Meter Observer: Not in idle state!
Meter Observer: Not in idle state!
I (23654) bat_monitor: vol:3445.47 cal_vol:3497.96 state 2

Meter Observer: Not in idle state!
Meter Observer: Not in idle state!
I (33654) bat_monitor: vol:3446.68 cal_vol:3499.73 state 2

release_ble : release_ble...
W (33664) BT_APPL: bta_dm_disable BTA_DISABLE_DELAY set to 200 ms
gb_enNbIot = 1
I (33934) UT_PRO: release ble
I (33954) network_manager: Connecting to the network
I (33974) uart: queue free spaces: 30
I (34984) ledc: Set duty to 50%
I (34984) ledc: Set duty to 100%
Meter Observer: Not in idle state!
resetModem : reset modem ...
Meter Observer: Not in idle state!
I (41254) pppos_new: atc get module name : EG915U
I (41274) pppos_new: SIM card inserted
I (41274) pppos_new: atc_many_attempts type: 11, cnt: 1
I (42304) pppos_new: SIM card inserted
I (42304) pppos_new: atc_many_attempts type: 11, cnt: 2
I (43334) pppos_new: SIM card inserted
I (43354) pppos_new: atc get revision : R03A04M08
I (43374) pppos_new: IMSI=208012404547437
I (43394) pppos_new: IMEI="867689061483519"
I (43414) pppos_new: atc get ICCID : 89330124377803844200
I (43544) pppos_new: get network status: type=0, stat=0
I (43544) pppos_new: atc_many_attempts type: 17, cnt: 1
I (44574) pppos_new: get network status: type=0, stat=0
I (44574) pppos_new: atc_many_attempts type: 17, cnt: 2
I (45604) pppos_new: get network status: type=0, stat=0
I (45604) pppos_new: atc_many_attempts type: 17, cnt: 3
Meter Observer: Not in idle state!
I (46634) pppos_new: get network status: type=0, stat=5
To wakeupP1
I (46674) uart_toP1_task: [UART DATA LEN]: 19
Received Data:
0x5a 0xa5 0x5 0x0 0x9 0x2 0x2c 0x72 0xa0 0x28 0x31 0x50 0x1 0x46 0x13 0x60 0x2 0x0 0x30
selfTestCb self test = 48
pcbVersionCb PCB Type is F Board!
setRcvV5PacketEvent Finished 1
Tab version = 5
P1 Data Updated!
Send Ack!
I (47304) pppos_new: Signal quality: rssi=17, ber=99
I (47324) pppos_new: esp_modem_get_attachment_detachmen=1
I (47344) pppos_new: Signal quality: rssi=17, ber=99
I (47364) pppos_new: +CCLK: "24/09/24,10:12:59+00"
I (47424) pppos_new: PPP state changed event 259
I (47424) pppos_new: PPP state changed event 262
I (48994) uart_toP1_task: [UART DATA LEN]: 14
Received Data:
0x5a 0xa5 0x5 0x0 0x4 0x1 0x8d 0x8 0xb9 0x17 0x2e 0x50 0x1 0x0
ackCb ack = 0
setRcvV5PacketEvent Finished 1
Tab version = 5

ACK!!!
Meter Observer: Not in idle state!
I (53474) pppos_new: PPP state changed event 263
I (53484) pppos_new: PPP state changed event 265
Meter Observer: Not in idle state!
I (59604) pppos_new: IP event! 6
I (59604) pppos_new: Modem Connect to PPP Server
I (59604) pppos_new: IP          : 10.71.174.203
I (59604) esp-netif_lwip-ppp: Connected
I (59614) pppos_new: Netmask     : 255.255.255.255
I (59624) pppos_new: Gateway     : 192.168.0.1
I (59634) pppos_new: Get Name Server1: 192.168.10.110
I (59634) pppos_new: Get Name Server2: 194.51.3.56
I (59644) pppos_new: PPP state changed event 0
I (59644) esp_modem_netif: PPP state changed event 0
I (59644) pppos_new: PPP state changed event 266
I (59644) pppos_new: wait bit 1
To wakeupP1
I (60274) uart_toP1_task: [UART DATA LEN]: 19
Received Data:
0x5a 0xa5 0x5 0x0 0x9 0x2 0x2c 0x72 0xa0 0x28 0x31 0x50 0x1 0x46 0x13 0x60 0x2 0x0 0x30
selfTestCb self test = 48
pcbVersionCb PCB Type is F Board!
setRcvV5PacketEvent Finished 1
Tab version = 5
P1 Data Updated!
Send Ack!
I (60324) sntp: Time is not set yet. Getting time over NTP.
I (60324) sntp: Initializing SNTP
I (60324) sntp: List of configured NTP servers:
I (60334) sntp: server 0: pool.ntp.org
I (60334) sntp: Waiting for system time to be set... (1/15)
Meter Observer: Not in idle state!
I (61474) sntp: Notification of a time synchronization event
I (62344) sntp: The current date/time is: Tue Sep 24 10:13:15 2024
esp_wait_sntp_sync : time(NULL): 1727172795
get_cacert : get_cacert ...
get_cacert : get_cacert ...
get_clientcert : get_clientcert ...
get_clientcert : get_clientcert ...
get_clientkey : get_clientkey ...
get_clientkey : get_clientkey ...
To wakeupP1
I (62444) uart_toP1_task: [UART DATA LEN]: 14
Received Data:
0x5a 0xa5 0x5 0x0 0x4 0x1 0x8d 0x8 0xb9 0x17 0x2e 0x50 0x1 0x0
ackCb ack = 0
setRcvV5PacketEvent Finished 1
Tab version = 5

ACK!!!
I (63674) uart_toP1_task: [UART DATA LEN]: 14
Received Data:
0x5a 0xa5 0x5 0x0 0x4 0x1 0x8d 0x8 0xb9 0x17 0x2e 0x50 0x1 0x0
ackCb ack = 0
setRcvV5PacketEvent Finished 1
Tab version = 5

ACK!!!
Meter Observer: Not in idle state!
aws_Connect : aws_Connect completed !
To wakeupP1
I (68054) uart_toP1_task: [UART DATA LEN]: 19
Received Data:
0x5a 0xa5 0x5 0x0 0x9 0x2 0x2c 0x72 0xa0 0x28 0x31 0x50 0x1 0x46 0x13 0x60 0x2 0x0 0x30
selfTestCb self test = 48
pcbVersionCb PCB Type is F Board!
setRcvV5PacketEvent Finished 1
Tab version = 5
P1 Data Updated!
Send Ack!
I (68864) bat_monitor: vol:3436.98 cal_vol:3485.51 state 2

I (69644) coreMQTT: Received MQTT ACK (packet_id:1, type:144): Was registered
aws_iot_jobs_get_jobid_request : topic $aws/things/CNPX00000009/jobs/get/accepted is subscribed
I (69854) bat_monitor: vol:3429.70 cal_vol:3474.84 state 2

I (70384) uart_toP1_task: [UART DATA LEN]: 14
Received Data:
0x5a 0xa5 0x5 0x0 0x4 0x1 0x8d 0x8 0xb9 0x17 0x2e 0x50 0x1 0x0
ackCb ack = 0
setRcvV5PacketEvent Finished 1
Tab version = 5

ACK!!!
I (70574) coreMQTT: Received MQTT ACK (packet_id:2, type:144): Was registered
aws_iot_jobs_get_jobid_request : topic $aws/things/CNPX00000009/jobs/get/rejected is subscribed
I (70784) bat_monitor: vol:3428.49 cal_vol:3473.07 state 2

Meter Observer: Not in idle state!
I (71814) coreMQTT: Received MQTT ACK (packet_id:3, type:64): Was registered
handleIncomePublish : incomingPublish.Topic : $aws/things/CNPX00000009/jobs/get/accepted
handleIncomePublish : incomingPublish.Payload : {"timestamp":1727172804,"inProgressJobs":[{"jobId":"ota2313","queuedAt":1727166421,"lastUpdatedAt":1727166559,"startedAt":1727166559,"executionNumber":1,"versionNumber":2}],"queuedJobs":[]}
aws_Publish : aws_Publish successed !
aws_Publish : pubTopic : $aws/things/CNPX00000009/jobs/get
aws_Publish : pubPayload : {}
aws_Excute_Job : aws_iot_jobs_get_jobid_request successed
I (75034) bat_monitor: vol:3428.49 cal_vol:3473.07 state 2

I (75754) coreMQTT: Received MQTT ACK (packet_id:4, type:176): Was registered
aws_Unsubscribe : aws_Unsubscribe to topic $aws/things/CNPX00000009/jobs/get/accepted successed !
I (75964) bat_monitor: vol:3429.70 cal_vol:3474.84 state 2

Meter Observer: Not in idle state!
I (76974) coreMQTT: Received MQTT ACK (packet_id:5, type:176): Was registered
aws_Unsubscribe : aws_Unsubscribe to topic $aws/things/CNPX00000009/jobs/get/rejected successed !
I (77184) bat_monitor: vol:3429.70 cal_vol:3474.84 state 2

I (78234) coreMQTT: Received MQTT ACK (packet_id:6, type:144): Was registered
I (78434) bat_monitor: vol:3429.70 cal_vol:3474.84 state 2

I (79494) coreMQTT: Received MQTT ACK (packet_id:7, type:64): Was registered
handleIncomePublish : incomingPublish.Topic : $aws/things/CNPX00000009/jobs/ota2313/update/accepted
handleIncomePublish : incomingPublish.Payload : {"timestamp":1727172811}
aws_Publish : aws_Publish successed !
aws_Publish : pubTopic : $aws/things/CNPX00000009/jobs/ota2313/update
aws_Publish : pubPayload : {"status": "FAILED","statusDetails":{"errorMessage":"Unknown Error"}}
Meter Observer: Not in idle state!
I (82694) bat_monitor: vol:3441.83 cal_vol:3492.62 state 2

I (83684) coreMQTT: Received MQTT ACK (packet_id:8, type:176): Was registered
aws_Unsubscribe : aws_Unsubscribe to topic $aws/things/CNPX00000009/jobs/ota2313/update/accepted successed !
aws_json_massage_in_progress_job_handler : no jobId in inProgressJobs index:1
app_mqtts_jobs_RecParse_JobList : no jobid in queuedJobs
aws_Excute_Job : app_mqtts_jobs_RecParse_JobList successed
aws_Excute_Job : There is no job to do
To wakeupP1
I (83854) uart_toP1_task: [UART DATA LEN]: 19
Received Data:
0x5a 0xa5 0x5 0x0 0x9 0x2 0x2c 0x72 0xa0 0x28 0x31 0x50 0x1 0x46 0x13 0x60 0x2 0x0 0x30
selfTestCb self test = 48
pcbVersionCb PCB Type is F Board!
setRcvV5PacketEvent Finished 1
Tab version = 5
P1 Data Updated!
Send Ack!
The Queried Tag ID = 10
To Send Query Data:
 0x5a 0xa5 0x5 0x0 0x4 0x1 0xbd 0x53 0x9d 0x2c 0xa 0x51 0x1 0x0
I (84504) uart_toP1_task: [UART DATA LEN]: 21
Received Data:
0x5a 0xa5 0x5 0x0 0xb 0x2 0xa0 0xc5 0x35 0x27 0x2e 0x50 0x1 0x0 0xa 0x90 0x4 0x41 0x50 0x0 0x0
csrpRemainingGasCb cooking session gas remaining = 13.000000
ackCb ack = 0
setRcvV5PacketEvent Finished 1
Tab version = 5

ACK!!!
To wakeupP1
I (84614) uart_toP1_task: [UART DATA LEN]: 19
Received Data:
0x5a 0xa5 0x5 0x0 0x9 0x2 0x2c 0x72 0xa0 0x28 0x31 0x50 0x1 0x46 0x13 0x60 0x2 0x0 0x30
selfTestCb self test = 48
pcbVersionCb PCB Type is F Board!
setRcvV5PacketEvent Finished 1
Tab version = 5
P1 Data Updated!
Send Ack!
The Queried Tag ID = 12
To Send Query Data:
 0x5a 0xa5 0x5 0x0 0x4 0x1 0x35 0x53 0xfb 0x2c 0xc 0x51 0x1 0x0
I (85264) uart_toP1_task: [UART DATA LEN]: 21
Received Data:
0x5a 0xa5 0x5 0x0 0xb 0x2 0xcd 0x43 0xb8 0x84 0x2e 0x50 0x1 0x0 0xc 0x90 0x4 0x43 0x16 0x0 0x0
csrpEndCreditCb cooking session end credit = 150.000000
ackCb ack = 0
setRcvV5PacketEvent Finished 1
Tab version = 5

ACK!!!
I (85534) bat_monitor: vol:3430.91 cal_vol:3476.62 state 2

Meter Observer: Not in idle state!
I (86864) coreMQTT: Received MQTT ACK (packet_id:9, type:64): Was registered
aws_Publish : aws_Publish successed !
aws_Publish : pubTopic : dt/smart-meter/KE-mgas/CNPX00000009/device/cumulative-report
aws_Publish : pubPayload : {"timestamp":1727172817,"cumulativeReport":{"endCumulativeMass":0,"endCumulativeCredit":0,"gasRemaining":13,"currentCredit":150,"cumlTimestamp":1727172817}}
SendCumulativeReport Publish SendCumulativeReport successed!
To wakeupP1
I (87734) uart_toP1_task: [UART DATA LEN]: 19
Received Data:
0x5a 0xa5 0x5 0x0 0x9 0x2 0x2c 0x72 0xa0 0x28 0x31 0x50 0x1 0x46 0x13 0x60 0x2 0x0 0x30
selfTestCb self test = 48
pcbVersionCb PCB Type is F Board!
setRcvV5PacketEvent Finished 1
Tab version = 5
P1 Data Updated!
Send Ack!
The Queried Tag ID = 10
To Send Query Data:
 0x5a 0xa5 0x5 0x0 0x4 0x1 0xbd 0x53 0x9d 0x2c 0xa 0x51 0x1 0x0
I (88384) uart_toP1_task: [UART DATA LEN]: 21
Received Data:
0x5a 0xa5 0x5 0x0 0xb 0x2 0xa0 0xc5 0x35 0x27 0x2e 0x50 0x1 0x0 0xa 0x90 0x4 0x41 0x50 0x0 0x0
csrpRemainingGasCb cooking session gas remaining = 13.000000
ackCb ack = 0
setRcvV5PacketEvent Finished 1
Tab version = 5

ACK!!!
To wakeupP1
I (88504) uart_toP1_task: [UART DATA LEN]: 19
Received Data:
0x5a 0xa5 0x5 0x0 0x9 0x2 0x2c 0x72 0xa0 0x28 0x31 0x50 0x1 0x46 0x13 0x60 0x2 0x0 0x30
selfTestCb self test = 48
pcbVersionCb PCB Type is F Board!
setRcvV5PacketEvent Finished 1
Tab version = 5
P1 Data Updated!
Send Ack!
The Queried Tag ID = 12
To Send Query Data:
 0x5a 0xa5 0x5 0x0 0x4 0x1 0x35 0x53 0xfb 0x2c 0xc 0x51 0x1 0x0
I (89154) uart_toP1_task: [UART DATA LEN]: 21
Received Data:
0x5a 0xa5 0x5 0x0 0xb 0x2 0xcd 0x43 0xb8 0x84 0x2e 0x50 0x1 0x0 0xc 0x90 0x4 0x43 0x16 0x0 0x0
csrpEndCreditCb cooking session end credit = 150.000000
ackCb ack = 0
setRcvV5PacketEvent Finished 1
Tab version = 5

ACK!!!
I (89474) bat_monitor: vol:3434.55 cal_vol:3481.95 state 2

I (90714) coreMQTT: Received MQTT ACK (packet_id:10, type:64): Was registered
Meter Observer: Not in idle state!
aws_Publish : aws_Publish successed !
aws_Publish : pubTopic : dt/smart-meter/KE-mgas/CNPX00000009/device/meter-status
aws_Publish : pubPayload : {"timestamp":1727172821,"meterStatus":{"lastCookingTime":4294967295.00,"gasRemaining":13,"creditRemaining":150,"mAhRemaining":18996,"batteryLevel":99.98,"countValveCycle":0,"electronicValveStatus":"meterValveClosed","gsmSignalIntensity":17,"cookingSessionSent":0,"cookingSessionCreated":0}}
SendMeterStatusPacket Publish SendMeterStatusPacket successed!
user_nvs_get_u32 nvs_get_u32 failed errNo = 4354!
I (91834) bat_monitor: vol:3427.28 cal_vol:3471.29 state 2

I (92944) coreMQTT: Received MQTT ACK (packet_id:11, type:64): Was registered
aws_Publish : aws_Publish successed !
aws_Publish : pubTopic : dt/smart-meter/KE-mgas/CNPX00000009/device/hardware-report
aws_Publish : pubPayload : {"timestamp":1727172824,"hardwareReport":{"pcbVersion":"rev.F","B1FirmwareVersion":"v4.1","B2FirmwareVersion":"ESP32_PXFW2_2_1_7_20240919","modemFirmwareVersion":"R03A04M08","batteryModel":"186503P1S","iflowSerialNumber":"WN_C5LAD0077","meterSerialNumber":"CNPX00000009","ICCID":"89330124377803844200","totalLogs":14,"otaStatus":"null","calibrationVersion":4294443008.00}}
aws_Disconnect : aws_Disconnect successed !
To wakeupP1
I (94054) uart_toP1_task: [UART DATA LEN]: 19
Received Data:
0x5a 0xa5 0x5 0x0 0x9 0x2 0x2c 0x72 0xa0 0x28 0x31 0x50 0x1 0x46 0x13 0x60 0x2 0x0 0x30
selfTestCb self test = 48
pcbVersionCb PCB Type is F Board!
setRcvV5PacketEvent Finished 1
Tab version = 5
P1 Data Updated!
Send Ack!
I (94704) uart_toP1_task: [UART DATA LEN]: 14
Received Data:
0x5a 0xa5 0x5 0x0 0x4 0x1 0x8d 0x8 0xb9 0x17 0x2e 0x50 0x1 0x0
ackCb ack = 0
setRcvV5PacketEvent Finished 1
Tab version = 5

ACK!!!
I (101014) sleep_handler_task: Recieved notification value is 1
I (101214) bat_monitor: vol:3441.83 cal_vol:3492.62 state 2

I (101214) timer_wakeup: per=4320,start=111 now_unix 1727201633 wakeup_time_m 1898
I (101224) set_wakeup_time: Meter will wake up after 1898 minutes.
I (101224) network_manager: Disconnecting from the network
I (101224) pppos_new: PPP state changed event 267
I (101234) pppos_new: PPP state changed event 265
I (101244) pppos_new: PPP state changed event 262
run pppos_disc ret=0
I (101354) pppos_new: pppos_dev_deinit: Waiting for PPP to close ...
E (112464) pppos_new: pppos_dev_deinit: Timeout waiting for PPP to close
I (112464) pppos_new: pppos_dev_deinit: Destroying network interfaces
To wakeupP1
I (112584) uart_toP1_task: [UART DATA LEN]: 19
Received Data:
0x5a 0xa5 0x5 0x0 0x9 0x2 0x2c 0x72 0xa0 0x28 0x31 0x50 0x1 0x46 0x13 0x60 0x2 0x0 0x30
selfTestCb self test = 48
pcbVersionCb PCB Type is F Board!
setRcvV5PacketEvent Finished 1
Tab version = 5
P1 Data Updated!
----------------

mAhOnInstall = 0
mAhOnLastCook = 0
mAhRemain = 0
-------------

cntValve = 0
------------

sensorFailWarn is false
lockFailWarn   is false
valveFailWarn  is false
lowBatWarn     is false
lowGasWarn     is false
lowCreditWarn  is false
-----------------------

errOled      is false
errSensor    is false
errEepromCrc is false
errAdcCal    is false
errVbat      is true
errValve     is true
errButton    is false
errLock      is false
errFlashCrc  is false
---------------------

g_B1FwVersion is 65
u8OpenBleNb is 0
----------------

P1 Data Updated!
----------------

mAhOnInstall = 0
mAhOnLastCook = 0
mAhRemain = 0
-------------

cntValve = 0
------------

sensorFailWarn is false
lockFailWarn   is false
valveFailWarn  is false
lowBatWarn     is false
lowGasWarn     is false
lowCreditWarn  is false
-----------------------

errOled      is false
errSensor    is false
errEepromCrc is false
errAdcCal    is false
errVbat      is true
errValve     is true
errButton    is false
errLock      is false
errFlashCrc  is false
---------------------

g_B1FwVersion is 65
u8OpenBleNb is 0
----------------

mAhOnInstall = 0
mAhOnLastCook = 0
mAhRemain = 0
-------------

cntValve = 0
------------

sensorFailWarn is false
lockFailWarn   is false
valveFailWarn  is false
lowBatWarn     is false
lowGasWarn     is false
lowCreditWarn  is false
-----------------------

errOled      is false
errSensor    is false
errEepromCrc is false
errAdcCal    is false
errVbat      is true
errValve     is true
errButton    is false
errLock      is false
errFlashCrc  is false
---------------------

g_B1FwVersion is 65
u8OpenBleNb is 0
----------------

sensorFailWarn is false
lockFailWarn   is false
valveFailWarn  is false
lowBatWarn     is false
lowGasWarn     is false
lowCreditWarn  is false
-----------------------

errOled      is false
errSensor    is false
errEepromCrc is false
errAdcCal    is false
errVbat      is true
errValve     is true
errButton    is false
errLock      is false
errFlashCrc  is false
---------------------

g_B1FwVersion is 65
u8OpenBleNb is 0
----------------

lowCreditWarn  is false
-----------------------

errOled      is false
errSensor    is false
errEepromCrc is false
errAdcCal    is false
errVbat      is true
errValve     is true
errButton    is false
errLock      is false
errFlashCrc  is false
---------------------

g_B1FwVersion is 65
u8OpenBleNb is 0
----------------

errAdcCal    is false
errVbat      is true
errValve     is true
errButton    is false
errLock      is false
errFlashCrc  is false
---------------------

g_B1FwVersion is 65
u8OpenBleNb is 0
----------------

Send Ack!
I (113184) pow_acc: evt[0] 419.460827uAh time_s=30.6
I (113184) pow_acc: evt[1]<=0
errValve     is true
errButton    is false
errLock      is false
errFlashCrc  is false
---------------------

g_B1FwVersion is 65
u8OpenBleNb is 0
----------------

Send Ack!
I (113184) pow_acc: evt[0] 419.460827uAh time_s=30.6
I (113184) pow_acc: evt[1]<=0
I (113184) pow_acc: evt[2]<=0
-----------------------------

g_B1FwVersion is 65
u8OpenBleNb is 0
----------------

Send Ack!
I (113184) pow_acc: evt[0] 419.460827uAh time_s=30.6
I (113184) pow_acc: evt[1]<=0
I (113184) pow_acc: evt[2]<=0
I (113184) pow_acc: evt[3]<=0
Send Ack!
I (113184) pow_acc: evt[0] 419.460827uAh time_s=30.6
I (113184) pow_acc: evt[1]<=0
I (113184) pow_acc: evt[2]<=0
I (113184) pow_acc: evt[3]<=0
I (113184) pow_acc: evt[2]<=0
I (113184) pow_acc: evt[3]<=0
I (113194) pow_acc: evt[4]<=0
I (113194) pow_acc: evt[5]<=0
I (113194) pow_acc: evt[6] 919.915327uAh time_s=37.7
I (113214) pow_acc: evt[7]<=0
I (113184) pow_acc: evt[3]<=0
I (113194) pow_acc: evt[4]<=0
I (113194) pow_acc: evt[5]<=0
I (113194) pow_acc: evt[6] 919.915327uAh time_s=37.7
I (113214) pow_acc: evt[7]<=0
I (113214) pow_acc: evt[8] 199.140665uAh time_s=8.3
I (113194) pow_acc: evt[4]<=0
I (113194) pow_acc: evt[5]<=0
I (113194) pow_acc: evt[6] 919.915327uAh time_s=37.7
I (113214) pow_acc: evt[7]<=0
I (113214) pow_acc: evt[8] 199.140665uAh time_s=8.3
I (113194) pow_acc: evt[5]<=0
I (113194) pow_acc: evt[6] 919.915327uAh time_s=37.7
I (113214) pow_acc: evt[7]<=0
I (113214) pow_acc: evt[8] 199.140665uAh time_s=8.3
I (113214) pow_acc: evt[9]<=0
I (113224) esp-netif_lwip-ppp: User interrupt
I (113214) pow_acc: evt[8] 199.140665uAh time_s=8.3
I (113214) pow_acc: evt[9]<=0
I (113224) esp-netif_lwip-ppp: User interrupt
I (113234) pow_acc: evt[10]<=0
I (113214) pow_acc: evt[9]<=0
I (113224) esp-netif_lwip-ppp: User interrupt
I (113234) pow_acc: evt[10]<=0
I (113224) esp-netif_lwip-ppp: User interrupt
I (113234) pow_acc: evt[10]<=0
I (113234) pow_acc: evt[10]<=0
I (113234) pow_acc: evt[11] 244.358994uAh time_s=10.3
I (113244) pow_acc: evt[12]<=0
I (113244) pow_acc: evt[13]<=0
I (113244) pow_acc: evt[14] 381.935558uAh time_s=15.1
I (113244) pow_acc: evt[15]<=0
I (113264) pow_acc: evt[16]<=0
I (113264) pow_acc: evt[17] 15.887250uAh time_s=0.7
I (113264) pow_acc: evt[18]<=0
I (113284) pow_acc: evt[19] 28.103277uAh time_s=2.4
I (113284) pow_acc: evt[20]<=0
I (113454) pow_acc: deep sleep=0.000000,evt=2208.801898, flash =4902.754742 ,all =7111.556639 ,xx_s=105.1
Esp32 Used = 7112uAh.
I (113234) pow_acc: evt[11] 244.358994uAh time_s=10.3
I (113244) pow_acc: evt[12]<=0
I (113244) pow_acc: evt[13]<=0
I (113244) pow_acc: evt[14] 381.935558uAh time_s=15.1
I (113244) pow_acc: evt[15]<=0
I (113264) pow_acc: evt[16]<=0
I (113264) pow_acc: evt[17] 15.887250uAh time_s=0.7
I (113264) pow_acc: evt[18]<=0
I (113284) pow_acc: evt[19] 28.103277uAh time_s=2.4
I (113284) pow_acc: evt[20]<=0
I (113454) pow_acc: deep sleep=0.000000,evt=2208.801898, flash =4902.754742 ,all =7111.556639 ,xx_s=105.1
I (113234) pow_acc: evt[11] 244.358994uAh time_s=10.3
I (113244) pow_acc: evt[12]<=0
I (113244) pow_acc: evt[13]<=0
I (113244) pow_acc: evt[14] 381.935558uAh time_s=15.1
I (113244) pow_acc: evt[15]<=0
I (113264) pow_acc: evt[16]<=0
I (113264) pow_acc: evt[17] 15.887250uAh time_s=0.7
I (113264) pow_acc: evt[18]<=0
I (113284) pow_acc: evt[19] 28.103277uAh time_s=2.4
I (113234) pow_acc: evt[11] 244.358994uAh time_s=10.3
I (113244) pow_acc: evt[12]<=0
I (113244) pow_acc: evt[13]<=0
I (113244) pow_acc: evt[14] 381.935558uAh time_s=15.1
I (113244) pow_acc: evt[15]<=0
I (113264) pow_acc: evt[16]<=0
I (113264) pow_acc: evt[17] 15.887250uAh time_s=0.7
I (113264) pow_acc: evt[18]<=0
I (113234) pow_acc: evt[11] 244.358994uAh time_s=10.3
I (113244) pow_acc: evt[12]<=0
I (113244) pow_acc: evt[13]<=0
I (113244) pow_acc: evt[14] 381.935558uAh time_s=15.1
I (113244) pow_acc: evt[15]<=0
I (113234) pow_acc: evt[11] 244.358994uAh time_s=10.3
I (113234) pow_acc: evt[11] 244.358994uAh time_s=10.3
I (113244) pow_acc: evt[12]<=0
I (113244) pow_acc: evt[13]<=0
I (113244) pow_acc: evt[14] 381.935558uAh time_s=15.1
I (113244) pow_acc: evt[15]<=0
I (113264) pow_acc: evt[16]<=0
I (113234) pow_acc: evt[11] 244.358994uAh time_s=10.3
I (113244) pow_acc: evt[12]<=0
I (113244) pow_acc: evt[13]<=0
I (113244) pow_acc: evt[14] 381.935558uAh time_s=15.1
I (113244) pow_acc: evt[15]<=0
I (113264) pow_acc: evt[16]<=0
I (113264) pow_acc: evt[17] 15.887250uAh time_s=0.7
I (113264) pow_acc: evt[18]<=0
I (113284) pow_acc: evt[19] 28.103277uAh time_s=2.4
I (113234) pow_acc: evt[11] 244.358994uAh time_s=10.3
I (113244) pow_acc: evt[12]<=0
I (113244) pow_acc: evt[13]<=0
I (113244) pow_acc: evt[14] 381.935558uAh time_s=15.1
I (113244) pow_acc: evt[15]<=0
I (113264) pow_acc: evt[16]<=0
I (113264) pow_acc: evt[17] 15.887250uAh time_s=0.7
I (113234) pow_acc: evt[11] 244.358994uAh time_s=10.3
I (113244) pow_acc: evt[12]<=0
I (113244) pow_acc: evt[13]<=0
I (113244) pow_acc: evt[14] 381.935558uAh time_s=15.1
I (113244) pow_acc: evt[15]<=0
I (113264) pow_acc: evt[16]<=0
I (113244) pow_acc: evt[12]<=0
I (113244) pow_acc: evt[13]<=0
I (113244) pow_acc: evt[14] 381.935558uAh time_s=15.1
I (113244) pow_acc: evt[15]<=0
I (113264) pow_acc: evt[16]<=0
I (113244) pow_acc: evt[14] 381.935558uAh time_s=15.1
I (113244) pow_acc: evt[15]<=0
I (113264) pow_acc: evt[16]<=0
I (113244) pow_acc: evt[15]<=0
I (113264) pow_acc: evt[16]<=0
I (113264) pow_acc: evt[16]<=0
I (113264) pow_acc: evt[17] 15.887250uAh time_s=0.7
I (113264) pow_acc: evt[18]<=0
I (113284) pow_acc: evt[19] 28.103277uAh time_s=2.4
I (113284) pow_acc: evt[20]<=0
I (113454) pow_acc: deep sleep=0.000000,evt=2208.801898, flash =4902.754742 ,all =7111.556639 ,xx_s=105.1
Esp32 Used = 7112uAh.
time = 1727172846
I (113284) pow_acc: evt[19] 28.103277uAh time_s=2.4
I (113284) pow_acc: evt[20]<=0
I (113454) pow_acc: deep sleep=0.000000,evt=2208.801898, flash =4902.754742 ,all =7111.556639 ,xx_s=105.1
Esp32 Used = 7112uAh.
time = 1727172846
I (113284) pow_acc: evt[20]<=0
I (113454) pow_acc: deep sleep=0.000000,evt=2208.801898, flash =4902.754742 ,all =7111.556639 ,xx_s=105.1
Esp32 Used = 7112uAh.
time = 1727172846
I (113454) pow_acc: deep sleep=0.000000,evt=2208.801898, flash =4902.754742 ,all =7111.556639 ,xx_s=105.1
Esp32 Used = 7112uAh.
time = 1727172846
Esp32 Used = 7112uAh.
time = 1727172846
To Send Subdata :
time = 1727172846
To Send Subdata :
 0x5a 0xa5 0x5 0x0 0xc 0x2 0xed 0x50 0x90 0x3d 0x1a 0x60 0x2 0x1b 0xc8 0x28 0x70 0x4 0x66 0xf2 0x90 0xee
To Send Subdata :
 0x5a 0xa5 0x5 0x0 0xc 0x2 0xed 0x50 0x90 0x3d 0x1a 0x60 0x2 0x1b 0xc8 0x28 0x70 0x4 0x66 0xf2 0x90 0xee
 0x5a 0xa5 0x5 0x0 0xc 0x2 0xed 0x50 0x90 0x3d 0x1a 0x60 0x2 0x1b 0xc8 0x28 0x70 0x4 0x66 0xf2 0x90 0xee
I (113564) uart_toP1_task: [UART DATA LEN]: 14
Received Data:
0x5a 0xa5 0x5 0x0 0x4 0x1 0x8d 0x8 0xb9 0x17 0x2e 0x50 0x1 0x0
ackCb ack = 0
setRcvV5PacketEvent Finished 1
Tab version = 5

ACK!!!
->into low power!
I (116484) gpio: GPIO[34]| InputEn: 1| OutputEn: 0| OpenDrain: 0| Pullup: 0| Pulldown: 1| Intr:0
I (116484) sleep: Entering deep sleep ...
