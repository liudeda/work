### 1、aws 全量ota测试

```
I (5575) StartDefaultTask: GSM_ON_FLAG=0
Sim80x_SetPower(true)2
I (9925) pppos_new: atc get module name : SIMCOM_SIM800C 
I (11025) pppos_new: SIM card inserted
I (11075) pppos_new: atc get revision : 418B09SIM800C24_BT 
I (11125) pppos_new: IMSI=901405108746623
I (11175) pppos_new: IMEI=861937064827356
I (11325) pppos_new: get network status: type=0, stat=2
I (11325) pppos_new: atc_many_attempts type: 17, cnt: 1
I (14325) pppos_new: get network status: type=0, stat=2
I (14325) pppos_new: atc_many_attempts type: 17, cnt: 2
I (17325) pppos_new: get network status: type=0, stat=2
I (17325) pppos_new: atc_many_attempts type: 17, cnt: 3
I (20325) pppos_new: get network status: type=0, stat=5
I (20475) pppos_new: Signal quality: rssi=31, ber=0
I (20485) pppos_new: esp_modem_get_attachment_detachmen=1
I (20535) pppos_new: Signal quality: rssi=31, ber=0
I (20585) pppos_new: +CCLK: "04/01/01,00:00:10+00"
I (20655) pppos_new: PPP state changed event 259
I (20655) pppos_new: PPP state changed event 262
I (26665) pppos_new: PPP state changed event 263
I (26675) pppos_new: PPP state changed event 265
I (28705) pppos_new: IP event! 6
I (28705) pppos_new: Modem Connect to PPP Server
I (28705) pppos_new: IP          : 100.98.191.27
I (28705) pppos_new: Netmask     : 255.255.255.255
I (28715) pppos_new: Gateway     : 192.168.254.254
I (28715) esp-netif_lwip-ppp: Connected
I (28725) pppos_new: Get Name Server1: 8.8.8.8
I (28735) pppos_new: Get Name Server2: 8.8.4.4
I (28735) pppos_new: wait bit 1
I (28735) pppos_new: PPP state changed event 0
I (28745) esp_modem_netif: PPP state changed event 0
I (28755) pppos_new: PPP state changed event 266
I (28755) sntp: Time is not set yet. Getting time over NTP.
I (28765) sntp: Initializing SNTP
I (28765) sntp: List of configured NTP servers:
I (28775) sntp: server 0: pool.ntp.org
I (28775) sntp: Waiting for system time to be set... (1/15)
I (30785) sntp: Waiting for system time to be set... (2/15)
I (31665) sntp: Notification of a time synchronization event
I (32785) sntp: The current date/time is: Mon Jun  3 06:23:26 2024
esp_wait_sntp_sync : time(NULL): 1717395806
get_cacert : get_cacert ...
get_clientcert : get_clientcert ...
get_clientkey : get_clientkey ...
aws_Connect : aws_Connect completed !
aws_Publish : aws_Publish successed !
aws_Publish : pubTopic : dt/smart-meter/KE-mgas/CNPX00000007/device/cumulative-report
aws_Publish : pubPayload : {"timestamp":1717395814,"cumulativeReport":{"endCumulativeMass":23.97215461730957,"endCumulativeCredit":222.46153259277344,"gasRemaining":9000,"currentCredit":20083.833984375,"cumlTimestamp":1717395814}}
SendCumulativeReport Publish SendCumulativeReport successed!
aws_Publish : aws_Publish successed !
aws_Publish : pubTopic : dt/smart-meter/KE-mgas/CNPX00000007/device/meter-status
aws_Publish : pubPayload : {"timestamp":1717395822,"meterStatus":{"batteryVoltage":3.9719998836517334,"lidLightSensorStatus":"darkness","meterLockStatus":"meterLocked","neddleSensorStatus":"Up(close)","electronicValveStatus":"meterValveClose","gsmSignalIntensity":0,"cookingSessionSent":16,"cookingSessionCreated":16}}
SendMeterStatusPacket Publish SendMeterStatusPacket successed!
aws_iot_jobs_get_jobid_request : topic $aws/things/CNPX00000007/jobs/get/accepted is subscribed
aws_iot_jobs_get_jobid_request : topic $aws/things/CNPX00000007/jobs/get/rejected is subscribed
handleIncomePublish : incomingPublish.Topic : $aws/things/CNPX00000007/jobs/get/accepted
handleIncomePublish : incomingPublish.Payload : {"timestamp":1717395836,"inProgressJobs":[],"queuedJobs":[{"jobId":"AFR_OTA-ota1002","queuedAt":1717395148,"lastUpdatedAt":1717395148,"executionNumber":1,"versionNumber":1}]}
aws_Publish : aws_Publish successed !
aws_Publish : pubTopic : $aws/things/CNPX00000007/jobs/get
aws_Publish : pubPayload : {}
aws_Excute_Job : aws_iot_jobs_get_jobid_request successed
aws_Unsubscribe : aws_Unsubscribe to topic $aws/things/CNPX00000007/jobs/get/accepted successed !
aws_Unsubscribe : aws_Unsubscribe to topic $aws/things/CNPX00000007/jobs/get/rejected successed !
app_mqtts_jobs_RecParse_JobList : jobid List
app_mqtts_jobs_RecParse_JobList : 0 jobid name is: AFR_OTA-ota1002
aws_json_massage_in_progress_job_handler : no jobId in inProgressJobs index:0
aws_Excute_Job : app_mqtts_jobs_RecParse_JobList successed
aws_Excute_Job : next job : AFR_OTA-ota1002
aws_iot_jobs_get_jobid_decribe : topic $aws/things/CNPX00000007/jobs/AFR_OTA-ota1002/get/accepted is subscribedaws_iot_jobs_get_jobid_decribe : topic $aws/things/CNPX00000007/jobs/AFR_OTA-ota1002/get/rejected is subscribed
aws_Publish : aws_Publish successed !
aws_Publish : pubTopic : $aws/things/CNPX00000007/jobs/AFR_OTA-ota1002/get
aws_Publish : pubPayload : {}
aws_iot_jobs_get_jobid_decribe : publish a message to topic $aws/things/CNPX00000007/jobs/AFR_OTA-ota1002/get: {}
aws_Excute_Job : aws_iot_jobs_get_jobid_decribe successed
handleIncomePublish : incomingPublish.Topic : $aws/things/CNPX00000007/jobs/AFR_OTA-ota1002/get/accepted
handleIncomePublish : incomingPublish.Payload : {"timestamp":1717395845,"execution":{"jobId":"AFR_OTA-ota1002","status":"QUEUED","queuedAt":1717395148,"lastUpdatedAt":1717395148,"versionNumber":1,"executionNumber":1,"jobDocument":{"afr_ota":{"protocols":["HTTP"],"files":[{"filepath":"/","filesize":1230320,"fileid":0,"certfile":"/","fileType":0,"update_data_url":"https://esp32otatestbucket.s3.eu-west-1.amazonaws.com/SignedImages/163ad0bc-2483-4f52-b6d4-0f9e6b9b09a2?X-Amz-Security-Token=IQoJb3JpZ2luX2VjEP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCWV1LXdlc3QtMSJGMEQCICyRbt6SK9sDclyf0Jarc3OiB%2F8xbBTRQ7rbbcN5GrMXAiAfzCgFZTDTVkdK%2FzsKenmDuscHz05ZKa3U7IJINgomSSrmAgiI%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAEaDDMxNDgxNjg4MzU2NSIM0oBexzEld2GXpxvjKroC09bC4iDhxPJhHCHhF8bZZt%2FQ5bS8aX8OOTuK7UsheQH522tq7tJq9OEyRb%2F%2FSUdK5wesx6mHUyQO4GVTAe1KKlMUGgAaBUo9cT814FS2iVCkrsVJskGQJmTDYmPKEyvYyMI%2F3AbiOGkSeTig5TdfvfWVsEzHzYI3rdKHKeOwDUGWu%2FbIDRXCno2VbNt8W%2FvLX0k3A%2FJ1%2FLtYjQeYn6NaOU9%2F0UNIuYnZXj0PBGBKm8J%2FsA4HxorLRD70EF0UCSPVoJaLxN2UmSnNPR1M0SxsA%2BXKLWU7NJZ%2FAyPdqP5FwLcWsXVDuEOBU7b45sTTEUMXOuaSriE70M9P20UPOpe9LDkhkfvCAZ3Q1zvPPd9qoucBr9DNg4%2BcNrkP%2B%2BYQXNcWQ2VFRz2jnKVDOTEkR8QDM%2Be9C0gahXPNWGAwhcP1sgY6wAHy7P%2BhyBEj%2B6RG3bhXoa1Uj%2BOAPaa6huV5nNUj94%2Bn0wmp0hQhVHpQFUupLvV2P8P293Uzo033er%2BX8E7Cftl0CjbwktUJCG1svzFPcS2BJPy5%2BJ%2F0DT428%2FDmoAf792xOei28Q7LPgzYe4DLNj7S0lSWTHFWCajKWj9W2fdyrsZ%2Bly%2FGrJHhnIrc%2FDIS9awV0UKvVlwzvQMMGf%2FpeF64vWtTkurYHbohXsLnvFicmjq36kUzpgpRhdpftXypz7YY%3D&X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Date=20240603T062405Z&X-Amz-SignedHeaders=host&X-Amz-Expires=1800&X-Amz-Credential=ASIAUSTEMNNWQFPOE5WC%2F20240603%2Feu-west-1%2Fs3%2Faws4_request&X-Amz-Signature=4cdf15521b7c88513881216d709ce9db038358c78a4710beefe4e956d340db96","auth_scheme":"aws.s3.presigned","sig-sha256-ecdsa":"MEQCIFll/jUJRIRrblTOKWxKR6dGeVOC4G8BeAcePL9DkICCAiAM/OET1eeoyMrLtecYTim7tGJOPotJdtlxIKdSP+rNGQ=="}]}}}}
aws_Unsubscribe : aws_Unsubscribe to topic $aws/things/CNPX00000007/jobs/AFR_OTA-ota1002/get/accepted successed !
aws_Unsubscribe : aws_Unsubscribe to topic $aws/things/CNPX00000007/jobs/AFR_OTA-ota1002/get/rejected successed !
app_mqtts_jobs_RecParseExcute_JobDetail : Action name : firmware-update
handleIncomePublish : incomingPublish.Topic : $aws/things/CNPX00000007/jobs/AFR_OTA-ota1002/update/accepted
handleIncomePublish : incomingPublish.Payload : {"timestamp":1717395854}
aws_Publish : aws_Publish successed !
aws_Publish : pubTopic : $aws/things/CNPX00000007/jobs/AFR_OTA-ota1002/update
aws_Publish : pubPayload : {"status": "IN_PROGRESS"}
aws_Unsubscribe : aws_Unsubscribe to topic $aws/things/CNPX00000007/jobs/AFR_OTA-ota1002/update/accepted successed !
aws_Disconnect : aws_Disconnect successed !
UpdateFirmware : ota_config->ota_type:0
UpdateFirmware : ota_config->exec_time:0
UpdateFirmware : ota_config->image_len:1230320
UpdateFirmware : ota_config->url:https://esp32otatestbucket.s3.eu-west-1.amazonaws.com/SignedImages/163ad0bc-2483-4f52-b6d4-0f9e6b9b09a2?X-Amz-Security-Token=IQoJb3JpZ2luX2VjEP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCWV1LXdlc3QtMSJGMEQCICyRbt6SK9sDclyf0Jarc3OiB%2F8xbBTRQ7rbbcN5GrMXAiAfzCgFZTDTVkdK%2FzsKenmDuscHz05ZKa3U7IJINgomSSrmAgiI%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAEaDDMxNDgxNjg4MzU2NSIM0oBexzEld2GXpxvjKroC09bC4iDhxPJhHCHhF8bZZt%2FQ5bS8aX8OOTuK7UsheQH522tq7tJq9OEyRb%2F%2FSUdK5wesx6mHUyQO4GVTAe1KKlMUGgAaBUo9cT814FS2iVCkrsVJskGQJmTDYmPKEyvYyMI%2F3AbiOGkSeTig5TdfvfWVsEzHzYI3rdKHKeOwDUGWu%2FbIDRXCno2VbNt8W%2FvLX0k3A%2FJ1%2FLtYjQeYn6NaOU9%2F0UNIuYnZXj0PBGBKm8J%2FsA4HxorLRD70EF0UCSPVoJaLxN2UmSnNPR1M0SxsA%2BXKLWU7NJZ%2FAyPdqP5FwLcWsXVDuEOBU7b45sTTEUMXOuaSriE70M9P20UPOpe9LDkhkfvCAZ3Q1zvPPd9qoucBr9DNg4%2BcNrkP%2B%2BYQXNcWQ2VFRz2jnKVDOTEkR8QDM%2Be9C0gahXPNWGAwhcP1sgY6wAHy7P%2BhyBEj%2B6RG3bhXoa1Uj%2BOAPaa6huV5nNUj94%2Bn0wmp0hQhVHpQFUupLvV2P8P293Uzo033er%2BX8E7Cftl0CjbwktUJCG1svzFPcS2BJPy5%2BJ%2F0DT428%2FDmoAf792xOei28Q7LPgzYe4DLNj7S0lSWTHFWCajKWj9W2fdyrsZ%2Bly%2FGrJHhnIrc%2FDIS9awV0UKvVlwzvQMMGf%2FpeF64vWtTkurYHbohXsLnvFicmjq36kUzpgpRhdpftXypz7YY%3D&X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Date=20240603T062405Z&X-Amz-SignedHeaders=host&X-Amz-Expires=1800&X-Amz-Credential=ASIAUSTEMNNWQFPOE5WC%2F20240603%2Feu-west-1%2Fs3%2Faws4_request&X-Amz-Signature=4cdf15521b7c88513881216d709ce9db038358c78a4710beefe4e956d340db96
UpdateFirmware : ota_config->firmware_version:/
Starting OTA update...
I (85835) ota_app: iot_ota_start
I (85835) ota_app: fir_ver_len 1 /
I (85865) user_app: url=https://esp32otatestbucket.s3.eu-west-1.amazonaws.com/SignedImages/163ad0bc-2483-4f52-b6d4-0f9e6b9b09a2?X-Amz-Security-Token=IQoJb3JpZ2luX2VjEP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCWV1LXdlc3QtMSJGMEQCICyRbt6SK9sDclyf0Jarc3OiB%2F8xbBTRQ7rbbcN5GrMXAiAfzCgFZTDTVkdK%2FzsKenmDuscHz05ZKa3U7IJINgomSSrmAgiI%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAEaDDMxNDgxNjg4MzU2NSIM0oBexzEld2GXpxvjKroC09bC4iDhxPJhHCHhF8bZZt%2FQ5bS8aX8OOTuK7UsheQH522tq7tJq9OEyRb%2F%2FSUdK5wesx6mHUyQO4GVTAe1KKlMUGgAaBUo9cT814FS2iVCkrsVJskGQJmTDYmPKEyvYyMI%2F3AbiOGkSeTig5TdfvfWVsEzHzYI3rdKHKeOwDUGWu%2FbIDRXCno2VbNt8W%2FvLX0k3A%2FJ1%2FLtYjQeYn6NaOU9%2F0UNIuYnZXj0PBGBKm8J%2FsA4HxorLRD70EF0UCSPVoJaLxN2UmSnNPR1M0SxsA%2BXKLWU7NJZ%2FAyPdqP5FwLcWsXVDuEOBU7b45sTTEUMXOuaSriE70M9P20UPOpe9LDkhkfvCAZ3Q1zvPPd9qoucBr9DNg4%2BcNrkP%2B%2BYQXNcWQ2VFRz2jnKVDOTEkR8QDM%2Be9C0gahXPNWGAwhcP1sgY6wAHy7P%2BhyBEj%2B6RG3bhXoa1Uj%2BOAPaa6huV5nNUj94%2Bn0wmp0hQhVHpQFUupLvV2P8P293Uzo033er%2BX8E7Cftl0CjbwktUJCG1svzFPcS2BJPy5%2BJ%2F0DT428%2FDmoAf792xOei28Q7LPgzYe4DLNj7S0lSWTHFWCajKWj9W2fdyrsZ%2Bly%2FGrJHhnIrc%2FDIS9awV0UKvVlwzvQMMGf%2FpeF64vWtTkurYHbohXsLnvFicmjq36kUzpgpRhdpftXypz7YY%3D&X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Date=20240603T062405Z&X-Amz-SignedHeaders=host&X-Amz-Expires=1800&X-Amz-Credential=ASIAUSTEMNNWQFPOE5WC%2F20240603%2Feu-west-1%2Fs3%2Faws4_request&X-Amz-Signature=4cdf15521b7c88513881216d709ce9db038358c78a4710beefe4e956d340db96
len=1388
aws_ota_execute_action :otaRet == ESP_ERR_NOT_FINISHED !
aws_Excute_Job : app_mqtts_jobs_RecParseExcute_JobDetail successed
aws_Excute_Job : aws_Excute_Job successed
I (90315) pppos_new: PPP state changed event 267
I (90315) pppos_new: PPP state changed event 265
I (90315) pppos_new: PPP state changed event 262
run pppos_disc 
Sim80x_GPRSClose(30)
SendString AT+CPOWD=1

E (90765) uart: uart_write_bytes(1245): uart driver error
I (102315) pppos_new: PPP state changed event 268
I (102315) pppos_new: PPP state changed event 256
I (102315) esp-netif_lwip-ppp: User interrupt
I (102315) pppos_new: PPP state changed event 5
I (102325) pppos_new: User interrupted event from netif:0x3ffde8f0
I (102325) esp_modem_netif: PPP state changed event 5
ota status: 7
I (110195) timer_wakeup: per=1440,start=67
I (110195) timer_wakeup: Meter will wake up after 643 minutes.
ota start
I (118745) pppos_new: atc_many_attempts type: 0, cnt: 1
I (124745) pppos_new: atc_many_attempts type: 0, cnt: 2
I (130745) pppos_new: atc_many_attempts type: 0, cnt: 3
I (136745) pppos_new: atc_many_attempts type: 0, cnt: 4
I (142745) pppos_new: atc_many_attempts type: 0, cnt: 5
I (148745) pppos_new: atc_many_attempts type: 0, cnt: 6
I (149745) pppos_new: atc get module name : SIMCOM_SIM800C 
I (150845) pppos_new: SIM card inserted
I (150895) pppos_new: atc get revision : 418B09SIM800C24_BT 
I (150945) pppos_new: IMSI=901405108746623
I (150995) pppos_new: IMEI=861937064827356
I (151145) pppos_new: get network status: type=0, stat=2
I (151145) pppos_new: atc_many_attempts type: 17, cnt: 1
I (154145) pppos_new: get network status: type=0, stat=2
I (154145) pppos_new: atc_many_attempts type: 17, cnt: 2
I (157145) pppos_new: get network status: type=0, stat=2
I (157145) pppos_new: atc_many_attempts type: 17, cnt: 3
I (160145) pppos_new: get network status: type=0, stat=5
I (160295) pppos_new: Signal quality: rssi=31, ber=0
I (160295) pppos_new: esp_modem_get_attachment_detachmen=1
I (160345) pppos_new: Signal quality: rssi=31, ber=0
I (160395) pppos_new: +CCLK: "04/01/01,00:02:30+00"
I (160455) pppos_new: PPP state changed event 259
I (160455) pppos_new: PPP state changed event 262
I (166465) pppos_new: PPP state changed event 263
I (166465) pppos_new: PPP state changed event 265
I (168575) pppos_new: IP event! 6
I (168575) pppos_new: Modem Connect to PPP Server
I (168575) pppos_new: IP          : 100.98.191.27
I (168575) pppos_new: Netmask     : 255.255.255.255
I (168575) esp-netif_lwip-ppp: Connected
I (168575) pppos_new: Gateway     : 192.168.254.254
I (168595) pppos_new: Get Name Server1: 8.8.8.8
I (168595) pppos_new: Get Name Server2: 8.8.4.4
I (168605) pppos_new: wait bit 1
I (168605) pppos_new: PPP state changed event 0
uset_ota_start...
I (168615) esp_modem_netif: PPP state changed event 0
I (168615) ota_app: Starting Advanced OTA example
I (168615) pppos_new: PPP state changed event 266
I (168625) ota_app: binary_file_len 0
I (168635) esp_https_ota: image_length=1230320,max_http_request_size=65536
I (168635) esp_https_ota: range:bytes=0-65535
I (174865) esp_https_ota: post_len0
I (177715) esp_https_ota: Starting OTA...
I (177715) esp_https_ota: subtype 0x11 at offset 0x1f0000
I (177715) ota_app: advanced_ota_task : old run http esp_get_free_heap_size : 128228 !

I (177725) ota_app: ota_type0
I (177725) esp_https_ota_perform: up addr1f0000 bin_file_len0
I (177735) esp_ota_ops:  offset len=0
W (178275) uart_terminal: HW FIFO Overflow
W (178305) uart_terminal: HW FIFO Overflow
W (178335) uart_terminal: HW FIFO Overflow
W (178435) uart_terminal: HW FIFO Overflow
W (178465) uart_terminal: HW FIFO Overflow
W (178495) uart_terminal: HW FIFO Overflow
W (178525) uart_terminal: HW FIFO Overflow
W (178555) uart_terminal: HW FIFO Overflow
W (178585) uart_terminal: HW FIFO Overflow
W (178615) uart_terminal: HW FIFO Overflow
W (178765) uart_terminal: HW FIFO Overflow
W (178795) uart_terminal: HW FIFO Overflow
W (178825) uart_terminal: HW FIFO Overflow
W (178855) uart_terminal: HW FIFO Overflow
I (181025) esp_https_ota: binlen1024
I (189885) ota_app: 
ota progress 1.7%

I (192945) ota_app: 
ota progress 3.3%

I (194835) ota_app:
ota progress 5.0%

I (194845) esp_https_ota: range=bytes=65536-131071
I (198925) esp_https_ota: post_len0
I (205655) ota_app:
ota progress 6.5%

I (208755) ota_app:
ota progress 8.2%

I (213315) ota_app:
ota progress 9.8%

I (213695) esp_https_ota: range=bytes=131072-196607
I (218185) esp_https_ota: post_len0
I (225595) ota_app:
ota progress 11.3%

I (228845) ota_app:
ota progress 13.0%

I (231175) ota_app:
ota progress 14.6%

I (233375) esp_https_ota: range=bytes=196608-262143
I (238625) esp_https_ota: post_len0
I (243385) ota_app:
ota progress 16.1%

I (246665) ota_app:
ota progress 17.8%

I (252455) ota_app:
ota progress 19.5%

I (253495) ota_app:
ota progress 21.1%

I (253505) esp_https_ota: range=bytes=262144-327679
I (257595) esp_https_ota: post_len0
I (263285) ota_app:
ota progress 22.6%

I (269855) ota_app:
ota progress 24.3%

I (272075) ota_app:
ota progress 26.0%

I (272625) esp_https_ota: range=bytes=327680-393215
I (277755) esp_https_ota: post_len0
I (285425) ota_app: 
ota progress 27.5%

I (287805) ota_app: 
ota progress 29.1%

I (293375) ota_app: 
ota progress 30.8%

I (293445) esp_https_ota: range=bytes=393216-458751
I (297725) esp_https_ota: post_len0
I (303795) ota_app: 
ota progress 32.3%

I (306575) ota_app: 
ota progress 34.0%

W (306585) uart_terminal: HW FIFO Overflow
I (314545) ota_app: 
ota progress 35.6%

I (317005) ota_app: 
ota progress 37.3%

I (317005) esp_https_ota: range=bytes=458752-524287
I (322235) esp_https_ota: post_len0
I (334085) ota_app: 
ota progress 38.8%

I (337285) ota_app: 
ota progress 40.4%

I (339925) ota_app: 
ota progress 42.1%

I (339955) esp_https_ota: range=bytes=524288-589823
I (344645) esp_https_ota: post_len0
I (351055) ota_app: 
ota progress 43.6%

I (353705) ota_app: 
ota progress 45.3%

I (358835) ota_app: 
ota progress 46.9%

I (358895) esp_https_ota: range=bytes=589824-655359
I (363855) esp_https_ota: post_len0
I (370445) ota_app: 
ota progress 48.4%

I (373245) ota_app: 
ota progress 50.1%

I (376005) ota_app: 
ota progress 51.8%

I (378455) esp_https_ota: range=bytes=655360-720895
I (382675) esp_https_ota: post_len0
I (385245) ota_app: 
ota progress 53.3%

I (392605) ota_app: 
ota progress 54.9%

I (395465) ota_app: 
ota progress 56.6%

I (397505) ota_app: 
ota progress 58.3%

I (398105) esp_https_ota: range=bytes=720896-786431
I (403265) esp_https_ota: post_len0
I (410715) ota_app: 
ota progress 59.8%

I (414585) ota_app: 
ota progress 61.4%

I (417595) ota_app: 
ota progress 63.1%

I (418555) esp_https_ota: range=bytes=786432-851967
I (422705) esp_https_ota: post_len0
I (428685) ota_app: 
ota progress 64.6%

I (431715) ota_app: 
ota progress 66.3%

I (434855) ota_app: 
ota progress 67.9%

I (437255) esp_https_ota: range=bytes=851968-917503
I (442415) esp_https_ota: post_len0
I (448645) ota_app: 
ota progress 69.4%

I (451195) ota_app: 
ota progress 71.1%

I (454175) ota_app: 
ota progress 72.7%

I (456975) ota_app: 
ota progress 74.4%

I (456995) esp_https_ota: range=bytes=917504-983039
I (462255) esp_https_ota: post_len0
I (469065) ota_app: 
ota progress 75.9%

I (476195) ota_app: 
ota progress 77.6%

I (478115) ota_app: 
ota progress 79.2%

I (478145) esp_https_ota: range=bytes=983040-1048575
I (482585) esp_https_ota: post_len0
I (488105) ota_app: 
ota progress 80.7%

I (491005) ota_app: 
ota progress 82.4%

I (494385) ota_app: 
ota progress 84.1%

I (496755) esp_https_ota: range=bytes=1048576-1114111
I (501895) esp_https_ota: post_len0
I (508285) ota_app: 
ota progress 85.6%

I (511055) ota_app: 
ota progress 87.2%

I (514055) ota_app: 
ota progress 88.9%

I (516575) ota_app: 
ota progress 90.6%

I (516575) esp_https_ota: range=bytes=1114112-1179647
I (521225) esp_https_ota: post_len0
I (531055) ota_app: 
ota progress 92.1%

I (533795) ota_app: 
ota progress 93.7%

I (536375) ota_app: 
ota progress 95.4%

I (536405) esp_https_ota: range=bytes=1179648-
I (541015) esp_https_ota: post_len0
I (547115) ota_app: 
ota progress 96.9%

I (549915) ota_app: 
ota progress 98.5%

I (552665) ota_app: advanced_ota_task :http end esp_get_free_heap_size : 127948 !

I (552665) ota_app: user_ota_cfg->ota_type 0
I (552665) esp_image: segment 0: paddr=001f0020 vaddr=3f400020 size=38828h (231464) map
I (552735) esp_image: segment 1: paddr=00228850 vaddr=3ff80063 size=00008h (     8) 
I (552735) esp_image: segment 2: paddr=00228860 vaddr=3ffbdb60 size=04888h ( 18568) 
I (552745) esp_image: segment 3: paddr=0022d0f0 vaddr=40080000 size=02f28h ( 12072) 
I (552755) esp_image: segment 4: paddr=00230020 vaddr=400d0020 size=d5414h (873492) map
I (552965) esp_image: segment 5: paddr=0030543c vaddr=40082f28 size=17104h ( 94468) 
I (552985) esp_image: segment 6: paddr=0031c548 vaddr=400c0000 size=00064h (   100) 
I (552995) esp_image: segment 7: paddr=0031c5b4 vaddr=50000000 size=00010h (    16) 
W (553015) ota_app: aws_remainOtaJob_result_reply(true)
get_cacert : get_cacert ...
get_clientcert : get_clientcert ...
get_clientkey : get_clientkey ...
aws_Connect : aws_Connect completed !
handleIncomePublish : incomingPublish.Topic : $aws/things/CNPX00000007/jobs/AFR_OTA-ota1002/update/accepted
handleIncomePublish : incomingPublish.Payload : {"timestamp":1717396334}
aws_Publish : aws_Publish successed !
aws_Publish : pubTopic : $aws/things/CNPX00000007/jobs/AFR_OTA-ota1002/update
aws_Publish : pubPayload : {"status": "SUCCEEDED"}
aws_Unsubscribe : aws_Unsubscribe to topic $aws/things/CNPX00000007/jobs/AFR_OTA-ota1002/update/accepted successed !
aws_Disconnect : aws_Disconnect successed !
I (566275) pppos_new: PPP state changed event 267
I (566275) pppos_new: PPP state changed event 265
I (566275) pppos_new: PPP state changed event 262
run pppos_disc 
ets Jul 29 2019 12:21:46

rst:0xc (SW_CPU_RESET),boot:0x12 (SPI_FAST_FLASH_BOOT)
configsip: 0, SPIWP:0xee
clk_drv:0x00,q_drv:0x00,d_drv:0x00,cs0_drv:0x00,hd_drv:0x00,wp_drv:0x00
mode:DIO, clock div:2
load:0x3fff0030,len:7340
ho 0 tail 12 room 4
load:0x40078000,len:17016
ho 0 tail 12 room 4
load:0x40080400,len:4288
0x40080400: _init at ??:?

entry 0x4008066c
I (31) boot: ESP-IDF v5.0.4-dirty 2nd stage bootloader
I (31) boot: compile time 13:45:04
I (31) boot: Multicore bootloader
I (35) boot: chip revision: v3.0
I (38) qio_mode: Enabling default flash chip QIO
I (44) boot.esp32: SPI Speed      : 40MHz
I (48) boot.esp32: SPI Mode       : QIO
I (53) boot.esp32: SPI Flash Size : 16MB
I (58) boot: Enabling RNG early entropy source...
I (63) boot: Partition Table:
I (67) boot: ## Label            Usage          Type ST Offset   Length
I (74) boot:  0 phy_init         RF data          01 01 0000f000 00001000
I (81) boot:  1 ota_0            OTA app          00 10 00010000 001e0000
I (89) boot:  2 ota_1            OTA app          00 11 001f0000 001e0000
I (96) boot:  3 nvs              WiFi data        01 02 003d0000 00004000
I (104) boot:  4 coredump         Unknown data     01 03 003d4000 00010000
I (111) boot:  5 otadata          OTA data         01 00 003e4000 00002000
I (119) boot:  6 reserved         Unknown data     01 fe 003e6000 0001a000
I (126) boot:  7 P5meter          Unknown data     01 fe 00400000 00900000
I (134) boot:  8 patchdata        Unknown data     01 fe 00d00000 002c0000
I (141) boot:  9 netdata          Unknown data     01 fe 00fc0000 00040000
I (149) boot: End of partition table
I (153) esp_image: segment 0: paddr=001f0020 vaddr=3f400020 size=38828h (231464) map
I (233) esp_image: segment 1: paddr=00228850 vaddr=3ff80063 size=00008h (     8) load
I (233) esp_image: segment 2: paddr=00228860 vaddr=3ffbdb60 size=04888h ( 18568) load
I (245) esp_image: segment 3: paddr=0022d0f0 vaddr=40080000 size=02f28h ( 12072) load
I (252) esp_image: segment 4: paddr=00230020 vaddr=400d0020 size=d5414h (873492) map
I (525) esp_image: segment 5: paddr=0030543c vaddr=40082f28 size=17104h ( 94468) load
I (559) esp_image: segment 6: paddr=0031c548 vaddr=400c0000 size=00064h (   100) load
I (559) esp_image: segment 7: paddr=0031c5b4 vaddr=50000000 size=00010h (    16) load
I (578) boot: Loaded app from partition at offset 0x1f0000
I (578) boot: Disabling RNG early entropy source...
I (590) cpu_start: Pro cpu up.
I (590) cpu_start: Starting app cpu, entry point is 0x4008164c
0x4008164c: call_start_cpu1 at C:/Espressif/frameworks/esp-idf-v5.0.4/components/esp_system/port/cpu_start.c:167 (discriminator 1)

I (575) cpu_start: App cpu up.
I (654) cpu_start: Pro cpu start user code
I (654) cpu_start: cpu freq: 160000000 Hz
I (654) cpu_start: Application information:
I (657) cpu_start: Project name:     esp32_p4_2_3_4_20231016
I (664) cpu_start: App version:      12
I (668) cpu_start: Compile time:     Oct 16 2023 16:19:38
I (674) cpu_start: ELF file SHA256:  126edb9f16c066be...
Warning: checksum mismatch between flashed and built applications. Checksum of built application is 2aad7fc899363414804790f25b96c8cdeba1d8876d58211ea5d7772a3f26d655
I (680) cpu_start: ESP-IDF:          v5.0-dirty
I (686) heap_init: Initializing. RAM available for dynamic allocation:
I (693) heap_init: At 3FFAFF10 len 000000F0 (0 KiB): DRAM
I (699) heap_init: At 3FFB6388 len 00001C78 (7 KiB): DRAM
I (705) heap_init: At 3FFB9A20 len 00004108 (16 KiB): DRAM
I (711) heap_init: At 3FFCB1C8 len 00014E38 (83 KiB): DRAM
I (717) heap_init: At 3FFE0440 len 00003AE0 (14 KiB): D/IRAM
I (723) heap_init: At 3FFE4350 len 0001BCB0 (111 KiB): D/IRAM
I (730) heap_init: At 4009A02C len 00005FD4 (23 KiB): IRAM
I (737) spi_flash: detected chip: gd
I (740) spi_flash: flash io: qio
W (744) ADC: legacy driver is deprecated, please migrate to `esp_adc/adc_oneshot.h`
I (753) cpu_start: Starting scheduler on PRO CPU.
I (0) cpu_start: Starting scheduler on APP CPU.
I (763) Esp32 P4meter: ------------ Esp32 P400meter Project start 
W (803) sleep: Wake up form undefined
I (803) gpio: GPIO[14]| InputEn: 1| OutputEn: 0| OpenDrain: 0| Pullup: 0| Pulldown: 0| Intr:0 
I (803) gpio: GPIO[26]| InputEn: 1| OutputEn: 0| OpenDrain: 0| Pullup: 0| Pulldown: 0| Intr:0 
I (813) gpio: GPIO[27]| InputEn: 1| OutputEn: 0| OpenDrain: 0| Pullup: 0| Pulldown: 0| Intr:0 
I (2023) gpio: GPIO[17]| InputEn: 0| OutputEn: 0| OpenDrain: 0| Pullup: 1| Pulldown: 0| Intr:0 
I (2993) adc: eFuse Two Point: NOT supported
I (2993) adc: eFuse Chip Vref: Supported
I (2993) adc: Characterized using eFuse Chip Vref
SetSIM 0
setSimType sim_type is normal sim!
Flow_Magnification 1.000000
I (3123) User_AppInit: fram_run_sign=41,version=41
Voltage_slope 1.000000
Voltage_zero 0.000000
----------------------------------
ICCID 11111111111111111111
----------------------------------
CONFIG_GPRS 156/200 bytes
SetIP 1 39.101.176.192 PORT 05057
USE_GPRS_APN 1
SetAPN kopagas
SetName_APN
SetAP_N_secret
SetPin
ADMO_CRC16
----------------------------------
CONFIG_Meter 184/200 bytes
SetAddr CNPX00000007
FIRMWARE_V P4.2.3.3_20231016
PCB_VERSION HV1.0_220101A
CURRENCY TZS
CYLINDER_No xxxxxx
CYLINDER_CAPACITY 10.000000
BATTERY_MODEL TX123
UpDuty 1440
StartDuty 67
VeryLowPower 0
WarnBattery 3.500000
WarnPerpaid 200.000000
WarnVolume 1.000000
NominalCapacity 10.000
GasRemain 9000.000
USE_SENSOR 2
CompileDate Oct 16 2023
CompileTime 15:18:24
ResetSum 0
ResetTime 19700101000223
NormalResetSum 0
run_mode: normal
is_ble_init: 1
----------------------------------
REAL_DATA_PARAM 104/200 bytes
IsNeedIllegal_lid_opening 1
----------------------------------
REAL_DATA_Credit 40/200 bytes
CumulationCredit 222.461533
CumulationGasg 23.972155
UsedKg 0.001972
CardTotal 2
CookingSessionSendNumber 16
CookingSessionEnd 16
CurrentRechargeId 7851
----------------------------------
Current_Credit 76/200 bytes
REAL_DATA_Credit.CardTotal = 2
CUSTOMER_ID 1234567
CUSTOMER_ID.length 7
CARD_ID 123456712345671234
CARD_ID.length 18
CurrCredit 2589.703369
CUSTOMER_ID 7654321
CUSTOMER_ID.length 7
CARD_ID 765432176543217654
CARD_ID.length 18
CurrCredit 20083.833984
----------------------------------
Current_Log 12/200 bytes
----------------------------------
Current_Voltage 4/200 bytes
----------------------------------
update 146 bytes
----------------------------------
total 722/2048 bytes
----------------------------------
I (3373) BTDM_INIT: BT controller compile versionaddress from EFUSE
I (3373) phy_init: phy_version 4670,719f9f6,Feb 18 2021,17:07:07
W (3383) phy_init: failed to load RF calibration data (0xffffffff), falling back to full calibration
I (3963) log_mgr: ####idx = 92 size = 16 
I (4453) ./components/user/src/ble_uart/uart_profile.c: len=10,data CNPX00000007
I (4463) UART_PROFILE: create attribute table successfully, the number handle = 6 ret = 0

I (4463) UT_PRO: dis create attribute table successfully, the number handle = 6

I (4493) UT_PRO: DIS SERVICE_START_EVT, status 0, service_handle 46
W (24473) BT_APPL: bta_dm_disable BTA_DISABLE_DELAY set to 200 ms
I (24683) UART_PROFILE: release ble
ota status: 1
I (24693) timer_wakeup: per=1440,start=67
I (24693) timer_wakeup: Meter will wake up after 635 minutes.
check_is_send_infs:send info updataSendString AT+QCFG="autopdn",1

SendString AT

AT
OK
SendString AT

AT
OK
SendString ATE1

ATE1
OK
SendString AT+CGMM

AT+CGMM
SIMCOM_SIM800C

OK
SendString AT+CPIN?

AT+CPIN?
+CPIN: READY

OK
SendString AT+ICCID

AT+ICCID
+ICCID: 89882280666087466235

OK
SendString AT+CGDCONT=1,"IP","kopagas"

AT+CGDCONT=1,"IP","kopagas"
OK
SendString AT+CSQ

AT+CSQ
+CSQ: 31,0

OK
SendString AT+CGREG?

AT+CGREG?
+CGREG: 0,5

OK
SendString AT+CGATT=1

AT+CGATT=1
OK
SendString AT+CIPSHUT

AT+CIPSHUT
SHUT OK
SendString AT+CSTT="kopagas","",""

AT+CSTT="kopagas","",""
OK

loopSumPDP 0
SendString AT+CIICR

AT+CIICR
OK
SendString AT+CIFSR

AT+CIFSR
100.98.191.27
SendString AT+CIPHEAD=1

AT+CIPHEAD=1
OK
SendString AT+CIPSTART="TCP","time.nist.gov","13"

AT+CIPSTART="TCP","time.nist.gov","13"
OK

CONNECT OK

+IPD,51:
60464 24-06-03 06:33:13 50 0 0 592.0 UTC(NIST) *

CLOSED
SendString AT+CIFSR

AT+CIFSR
100.98.191.27
SendString AT+CIPHEAD=1

AT+CIPHEAD=1
OK
SendString AT+CIPSTART="TCP","39.101.176.192","05057"

AT+CIPSTART="TCP","39.101.176.192","05057"
OK

CONNECT OK
CYLINDER_No : xxxxxx
SendString AT+CIPSEND

AT+CIPSEND
> SendString ##INFS/CNPX000000/1234567/0000/P4.2.3.3_20231016/HV1.0_220101A/TZS/9000.0/XXX/xxxxxx/1440/67/TX123/202406030933/51A4**
SendRaw 933
##INFS/CNPX000000/1234567/0000/P4.2.3.3_20231016/HV1.0_220101A/TZS/9000.0/XXX/xxxxxx/1440/67/TX123/202406030933/51A4**
SEND OK

+IPD,5:?????time=93324 date:20240603
 encodeUpDataPacketReply:sendMeagess:##UPDATE/CNPX00000007/0000/01/202406030933/A4E9**SendString AT+CIPSEND

AT+CIPSEND
> SendString ##UPDATE/CNPX00000007/0000/01/202406030933/A4E9**
SendRaw 
##UPDATE/CNPX00000007/0000/01/202406030933/A4E9**
SEND OK

+IPD,5:?????SendString AT+CIPSEND

AT+CIPSEND
> SendString ##BEAT/CNPX000000/0000/202406030933/8DB6**
SendRaw 933
##BEAT/CNPX000000/0000/202406030933/8DB6**
SEND OK
Sim80x_GPRSClose(11)
SendString AT+CIPCLOSE=1

AT+CIPCLOSE=1
CLOSE OK
uinx=1717407240
SendString AT+CPOWD=1

AT+CPOWD=1
+PDP: DEACT

NORMAL POWER DOWN
IsNeedSendCook = 0  0
ota status: 9
I (116693) timer_wakeup: per=1440,start=67
I (116693) timer_wakeup: Meter will wake up after 453 minutes.
intolowpower 5
->into low power!
I (116773) gpio: GPIO[5]| InputEn: 0| OutputEn: 0| OpenDrain: 0| Pullup: 1| Pulldown: 0| Intr:0 
I (116773) gpio: GPIO[18]| InputEn: 0| OutputEn: 0| OpenDrain: 0| Pullup: 1| Pulldown: 0| Intr:0 
I (116783) gpio: GPIO[17]| InputEn: 0| OutputEn: 0| OpenDrain: 0| Pullup: 1| Pulldown: 0| Intr:0 
I (117293) gpio: GPIO[4]| InputEn: 1| OutputEn: 0| OpenDrain: 0| Pullup: 0| Pulldown: 1| Intr:1 
I (117293) gpio: GPIO[14]| InputEn: 1| OutputEn: 0| OpenDrain: 0| Pullup: 0| Pulldown: 1| Intr:1 
I (117293) gpio: GPIO[34]| InputEn: 1| OutputEn: 0| OpenDrain: 0| Pullup: 0| Pulldown: 1| Intr:1 
I (117313) gpio: GPIO[35]| InputEn: 1| OutputEn: 0| OpenDrain: 0| Pullup: 0| Pulldown: 1| Intr:1 
I (117333) button: use esp timer !!!
I (117333) gpio: GPIO[27]| InputEn: 1| OutputEn: 0| OpenDrain: 0| Pullup: 0| Pulldown: 1| Intr:3 
I (117333) sleep: Entering deep sleep ...

```

### 2蓝牙