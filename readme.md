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
Tự Làm Dasai Mochi Với ESP32, Màn Hình Màu 0.96inch - Đầy Đủ Code Và Hướng Dẫn Cho Người Không Biết.
https://www.youtube.com/watch?v=6Mo1RGRmEOE
💯Đấu nối lập trình bật camera ESP32-CAM siêu dễ
https://www.youtube.com/watch?v=hrBev_ga8SE&list=PLYxM7t7aYNaspaglob1l0XHadmtz5y0cj&index=4
Mạch nhận dạng giọng nói Offline Voice Recognition VC-02 Kit Ai-thinker
https://www.youtube.com/watch?v=VlBJXu2qoPc&t=14s
Kết Nối ESP32 với tay cầm playstation PS3/PS4 | Hùng Anh DIY |
https://youtu.be/kt4lckkNmVs?si=3toTbVLNlJA154Fx
ESP32-CAM Chụp ảnh và lưu vào thẻ MicroSD
https://youtu.be/eot6COwCPF0?si=TqI6gS8SW3wtLo5m
Lập trình ESP32 - Bài 6 - Làm loa bluetooth dùng esp32 và max98357a
https://www.youtube.com/watch?v=70nSUjZGYPw
code mẫu
https://dienthongminhesmart.com/mach-ung-dung-va-code-mau/
web socket
https://github.com/TiotVN/esp32_wwrbsocket/blob/main/esp32_websocket/src/main.cpp
Simple ESP32-CAM Object Detection | Edge Impulse
https://www.youtube.com/watch?v=HDRvZ_BYd08
android cam ai and esp32 cam ai websocket
https://github.com/longpth/ESP32CamAI/blob/master/ESP32CamAI_arduino/ESP32CamAI_arduino.ino
ArduCAM_ESP32S_UNO_PSRAM  face detection
    arduino>preferences>settings>additionals boards manager urls:
    https://www.arducam.com/downloads/esp32_uno_psram/package_ArduCAM_ESP32_PSRAM_index.json
    board manager: arducam
    https://github.com/ArduCAM/ArduCAM_ESP32S_UNO_PSRAM
    https://github.com/robotzero1/face-follow-robot/blob/master/esp32-wifi-version.ino
Nhận diện đối tượng với ESP32 CAM
https://www.youtube.com/watch?v=qyorxwPYij8

Object Detection 101 Course - Including 4xProjects | Computer Vision
https://youtu.be/WgPbbWmnXJ8?si=RNuCd_FefbQ71djP
Track any object with Python and OpenCV
https://www.youtube.com/watch?v=w-IuLVibtWM
Simple ESP32 CAM Object detection using Open CV
    https://www.hackster.io/mircemk/simple-esp32-cam-object-detection-using-open-cv-ebc717
    pip3 install numpy
    pip3 install opencv-python
    pip3 install cvlib
Easy Object Detection With Teachable Machine & Python Raspberry Pi
https://www.hackster.io/mjdargen/easy-object-detection-with-teachable-machine-python-d4063b

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

Cách sửa lỗi: Thêm python vào $PATH
    Bạn chỉ cần thêm thư mục chứa python vào biến môi trường $PATH.

    🔧 Bước 1: Thêm vào .zshrc hoặc .bashrc
    Nếu bạn dùng Zsh (macOS mặc định), mở file cấu hình:

    nano ~/.zshrc
    Thêm dòng sau vào cuối:

    export PATH="/usr/local/opt/python@3.13/libexec/bin:$PATH"
    Hoặc nếu bạn dùng Bash:

    nano ~/.bashrc
    Sau đó lưu lại, rồi chạy:

    source ~/.zshrc  # hoặc ~/.bashrc nếu bạn dùng bash

Giảm baud rate upload
    Tốc độ 921600 có thể quá cao với một số adapter hoặc dây USB.

    👉 Vào Arduino IDE > Tools > Upload Speed, chọn 115200.

