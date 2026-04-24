#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include <stdint.h>
#include "soc/soc_caps.h"

#define USB_VID 0x303a
#define USB_PID 0x1001

// LED bawaan board
#define PIN_RGB_LED 48
static const uint8_t LED_BUILTIN = SOC_GPIO_PIN_COUNT + PIN_RGB_LED;
#define BUILTIN_LED LED_BUILTIN
#define LED_BUILTIN LED_BUILTIN
#define RGB_BUILTIN LED_BUILTIN
#define RGB_BRIGHTNESS 64

// UART default
static const uint8_t TX = 43;
static const uint8_t RX = 44;

// I2C default
static const uint8_t SDA = 8;
static const uint8_t SCL = 9;

// SPI shared bus (dipakai semua modul)
static const uint8_t MOSI = 11;
static const uint8_t MISO = 13;
static const uint8_t SCK  = 12;

// --- TFT ST7735 128x160 ---
#define ST7735_DRIVER 1
#define TFT_WIDTH 128
#define TFT_HEIGHT 160
#define TFT_CS   5
#define TFT_DC   4
#define TFT_RST  2
#define TFT_BL   21
#define TFT_MOSI MOSI
#define TFT_SCLK SCK
#define TFT_MISO MISO

// --- SDCard ---
#define SDCARD_CS   13
#define SDCARD_MOSI MOSI
#define SDCARD_SCK  SCK
#define SDCARD_MISO MISO

// --- CC1101 ---
#define CC1101_SS_PIN   10
#define CC1101_GDO0_PIN 9
#define CC1101_MOSI_PIN MOSI
#define CC1101_SCK_PIN  SCK
#define CC1101_MISO_PIN MISO

// --- nRF24 ---
#define NRF24_SS_PIN   7
#define NRF24_CE_PIN   6
#define NRF24_MOSI_PIN MOSI
#define NRF24_SCK_PIN  SCK
#define NRF24_MISO_PIN MISO

// --- Tombol fisik ---
#define BTN_PREV 34   // GPIO untuk tombol Prev
#define BTN_NEXT 35   // GPIO untuk tombol Next
#define BTN_SEL  36   // GPIO untuk tombol Select/OK
#define BTN_ESC  37   // GPIO untuk tombol Exit/Back

#endif /* Pins_Arduino_h */
