link:
https://raydiy.de/en/esp32-cam-platformio-surveillance-camera-with-live-video-stream-via-webserver/#how-do-i-connect-my-esp32-cam-to-the-wifi
https://hshop.vn/kit-rf-thu-phat-wifi-ble-esp32-cam
https://github.com/SeeedDocument/forum_doc/blob/master/reg/ESP32_CAM_V1.6.pdf
https://datasheet.lcsc.com/lcsc/Ai-Thinker-ESP32-CAM_C277946.pdf
https://github.com/donny681/ESP32_CAMERA_QR
https://github.com/igrr/esp32-cam-demo
https://github.com/bitluni/ESP32CameraI2S
https://docs.platformio.org/en/latest/tutorials/index.html
https://hshop.vn/ov2640-camera-module-wide-angle-lens-65-degree-2mp-fpc-24pin#:~:text=gi%C3%A1%20s%E1%BA%A3n%20ph%E1%BA%A9m-,OV2640%20Camera%20Module%20Wide%2Dangle%20Lens%2065%2F120%20Degree%202MP,%C4%91%E1%BB%99%20ph%C3%A2n%20gi%E1%BA%A3i%20t%E1%BB%91i%20%C4%91a
https://github.com/kprasadvnsi/tang-doc/releases/download/1.0.0/OV2640-DATASHEET.pdf

📌 5. Kiến trúc đường ống 7 tầng (7-stage pipeline architecture)

Khi một lệnh đang ở bước thứ 2, lệnh kế tiếp có thể bắt đầu ở bước thứ 1 → nhiều lệnh được xử lý song song ở các giai đoạn khác nhau.
Mục tiêu: tăng tốc độ thực thi mà không cần tăng xung nhịp.
| Tầng | Tên viết tắt            | Chức năng                             |
| ---- | ----------------------- | ------------------------------------- |
| 1    | IF (Instruction Fetch)  | Lấy lệnh từ bộ nhớ                    |
| 2    | ID (Instruction Decode) | Giải mã lệnh                          |
| 3    | RF (Register Fetch)     | Đọc dữ liệu từ các thanh ghi          |
| 4    | EX (Execute)            | Thực thi phép toán (cộng, trừ...)     |
| 5    | MEM1 (Memory Access 1)  | Truy cập bộ nhớ (giai đoạn đầu)       |
| 6    | MEM2 (Memory Access 2)  | Truy cập bộ nhớ (giai đoạn 2 nếu cần) |
| 7    | WB (Write Back)         | Ghi kết quả về thanh ghi              |

PSRAM (Pseudo SRAM) 
Trong một dự án ESP32-CAM, nếu bạn bật camera với độ phân giải cao (SVGA hoặc UXGA), bạn bắt buộc phải có PSRAM để lưu frame ảnh.

Dạng ăng ten: ăng-ten PCB trên bo mạch, đạt được 2dBi
dBi (decibel-isotropic) là đơn vị đo "độ lợi" (gain) của ăng-ten – cho biết ăng-ten phát sóng tập trung tốt đến đâu so với ăng-ten đẳng hướng lý tưởng.

2dBi là mức trung bình – tốt cho việc phát tín hiệu theo mọi hướng (360°) gần quanh thiết bị.
Ứng dụng:
Phù hợp với môi trường trong nhà.
Khoảng cách truyền WiFi tốt trong phạm vi 10–20m (tùy không gian và vật cản).


#define CAMERA_MODEL_AI_THINKER // Has PSRAM
