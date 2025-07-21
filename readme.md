
# ESP32-CAM Tài liệu, Dự án và Hướng dẫn tổng hợp

## 📌 Tài liệu & Hướng dẫn chính thức

- [ESP32-CAM PlatformIO Surveillance Camera (raydiy.de)](https://raydiy.de/en/esp32-cam-platformio-surveillance-camera-with-live-video-stream-via-webserver/#how-do-i-connect-my-esp32-cam-to-the-wifi)
- [ESP32-CAM tại Hshop.vn](https://hshop.vn/kit-rf-thu-phat-wifi-ble-esp32-cam)
- [ESP32-CAM V1.6 PDF (Seeed Studio)](https://github.com/SeeedDocument/forum_doc/blob/master/reg/ESP32_CAM_V1.6.pdf)
- [Datasheet Ai-Thinker ESP32-CAM](https://datasheet.lcsc.com/lcsc/Ai-Thinker-ESP32-CAM_C277946.pdf)

## 📂 Các dự án GitHub

- [donny681/ESP32_CAMERA_QR](https://github.com/donny681/ESP32_CAMERA_QR)
- [igrr/esp32-cam-demo](https://github.com/igrr/esp32-cam-demo)
- [bitluni/ESP32CameraI2S](https://github.com/bitluni/ESP32CameraI2S)
- [PlatformIO Tutorials](https://docs.platformio.org/en/latest/tutorials/index.html)
- [longpth/ESP32CamAI](https://github.com/longpth/ESP32CamAI/blob/master/ESP32CamAI_arduino/ESP32CamAI_arduino.ino)
- [ArduCAM ESP32 UNO PSRAM](https://github.com/ArduCAM/ArduCAM_ESP32S_UNO_PSRAM)
- [face-follow-robot - robotzero1](https://github.com/robotzero1/face-follow-robot/blob/master/esp32-wifi-version.ino)
- [esp32_websocket TiotVN](https://github.com/TiotVN/esp32_wwrbsocket/blob/main/esp32_websocket/src/main.cpp)

## 🎥 Video hướng dẫn

- [Tự Làm Dasai Mochi Với ESP32 & Màn Hình 0.96"](https://www.youtube.com/watch?v=6Mo1RGRmEOE)
- [Đấu nối bật camera ESP32-CAM](https://www.youtube.com/watch?v=hrBev_ga8SE&list=PLYxM7t7aYNaspaglob1l0XHadmtz5y0cj&index=4)
- [Nhận dạng giọng nói VC-02 Ai-thinker](https://www.youtube.com/watch?v=VlBJXu2qoPc&t=14s)
- [ESP32 kết nối tay cầm PS3/PS4](https://youtu.be/kt4lckkNmVs?si=3toTbVLNlJA154Fx)
- [ESP32-CAM chụp ảnh và lưu vào thẻ SD](https://youtu.be/eot6COwCPF0?si=TqI6gS8SW3wtLo5m)
- [ESP32 làm loa bluetooth với MAX98357A](https://www.youtube.com/watch?v=70nSUjZGYPw)
- [Object Detection với ESP32 CAM](https://www.youtube.com/watch?v=qyorxwPYij8)
- [Simple ESP32-CAM Object Detection | Edge Impulse](https://www.youtube.com/watch?v=HDRvZ_BYd08)
- [Object Detection 101 Course - 4 Dự án](https://youtu.be/WgPbbWmnXJ8?si=RNuCd_FefbQ71djP)
- [Track any object with Python and OpenCV](https://www.youtube.com/watch?v=w-IuLVibtWM)

## 📦 Linh kiện & Module

- [OV2640 Wide Angle Camera Module](https://hshop.vn/ov2640-camera-module-wide-angle-lens-65-degree-2mp-fpc-24pin#:~:text=gi%C3%A1%20s%E1%BA%A3n%20ph%E1%BA%A9m-,OV2640%20Camera%20Module%20Wide%2Dangle%20Lens%2065%2F120%20Degree%202MP,%C4%91%E1%BB%99%20ph%C3%A2n%20gi%E1%BA%A3i%20t%E1%BB%91i%20%C4%91a)
- [OV2640 Datasheet PDF](https://github.com/kprasadvnsi/tang-doc/releases/download/1.0.0/OV2640-DATASHEET.pdf)

## 💡 Các bài viết & mẫu code

- [Code mẫu tổng hợp từ Điện Thông Minh eSmart](https://dienthongminhesmart.com/mach-ung-dung-va-code-mau/)
- [Simple ESP32-CAM object detection dùng OpenCV (Hackster.io)](https://www.hackster.io/mircemk/simple-esp32-cam-object-detection-using-open-cv-ebc717)
  ```
  pip3 install numpy
  pip3 install opencv-python
  pip3 install cvlib
  ```
- [Object Detection with Teachable Machine + Python + Raspberry Pi](https://www.hackster.io/mjdargen/easy-object-detection-with-teachable-machine-python-d4063b)

---

## 🧱 Kiến trúc xử lý lệnh 7 tầng (7-stage pipeline)

| Tầng | Tên viết tắt            | Chức năng                             |
| ---- | ----------------------- | ------------------------------------- |
| 1    | IF (Instruction Fetch)  | Lấy lệnh từ bộ nhớ                    |
| 2    | ID (Instruction Decode) | Giải mã lệnh                          |
| 3    | RF (Register Fetch)     | Đọc dữ liệu từ các thanh ghi         |
| 4    | EX (Execute)            | Thực thi phép toán (cộng, trừ...)     |
| 5    | MEM1 (Memory Access 1)  | Truy cập bộ nhớ (giai đoạn đầu)      |
| 6    | MEM2 (Memory Access 2)  | Truy cập bộ nhớ (giai đoạn 2 nếu cần)|
| 7    | WB (Write Back)         | Ghi kết quả về thanh ghi             |

---

## 🔧 Ghi chú kỹ thuật

### PSRAM (Pseudo SRAM)
- Cần thiết để chạy camera ở độ phân giải cao (SVGA, UXGA).
- Cho phép lưu trữ khung ảnh tạm thời trong RAM phụ.

### Anten PCB tích hợp
- Đạt ~2dBi — Phù hợp dùng trong nhà.
- Khoảng cách hiệu quả: 10–20m tùy vật cản.

---

## ⚙️ Cấu hình & lỗi thường gặp

### Cấu hình camera

```cpp
#define CAMERA_MODEL_AI_THINKER // Has PSRAM
```

### Thêm Python vào $PATH

```bash
# Zsh (macOS mặc định)
nano ~/.zshrc

# Thêm dòng sau:
export PATH="/usr/local/opt/python@3.13/libexec/bin:$PATH"

# Sau đó:
source ~/.zshrc
```

Hoặc với Bash:

```bash
nano ~/.bashrc
# rồi:
source ~/.bashrc
```

### Giảm baud rate khi upload

> Tốc độ 921600 có thể gây lỗi upload.
- Vào **Arduino IDE > Tools > Upload Speed**, chọn `115200`.

---
