// display/sensors
#define I2C_SCL 22
#define I2C_SDA 23

// no GPS
#undef GPS_RX_PIN
// #define GPS_RX_PIN 15

// A battery voltage measurement pin, voltage divider connected here to measure battery voltage
#define BATTERY_PIN 35
#define ADC_CHANNEL ADC1_GPIO35_CHANNEL
#define ADC_MULTIPLIER 2.0

// custom button
#define BUTTON_PIN 14
#define BUTTON_NEED_PULLUP

// red onboard LED
#define PIN_LED1 (13)

// wired button LED
#define PIN_LED2 (12)
#define ledOff(pin) digitalWrite(pin, LOW);//pinMode(pin, INPUT)

// disable shitty default LED, it's annoying and has little meaning
#define LED_PIN PIN_LED1

// board LED -> bluetooth connection
#define BLE_LED PIN_LED2

// button-LED -> new message // TODO: requires some changes to also work with custom esp32 
// #define LED_CONN PIN_LED2

#define LED_STATE_ON 1 // State when LED is litted

// #define EXT_NOTIFY_OUT PIN_LED2 // Overridden default pin to use for Ext Notify Module (#975).

#define LORA_DIO0 26  // a No connect on the SX1262/SX1268 module
#define LORA_RESET 27 // RST for SX1276, and for SX1262/SX1268
#define LORA_DIO1 33  // IRQ for SX1262/SX1268
#define LORA_DIO2 32  // BUSY for SX1262/SX1268
#define LORA_DIO3     // Not connected on PCB, but internally on the TTGO SX1262/SX1268, if DIO3 is high the TXCO is enabled

#undef LORA_SCK
#define LORA_SCK 5
#undef LORA_MISO
#define LORA_MISO 19
#undef LORA_MOSI
#define LORA_MOSI 18
#undef LORA_CS
#define LORA_CS 4

// common pinouts for SX126X modules
#define SX126X_CS LORA_CS
#define SX126X_DIO1 LORA_DIO1
#define SX126X_BUSY LORA_DIO2
#define SX126X_RESET LORA_RESET

// supported modules list
#define USE_RF95 // RFM95/SX127x
#define USE_SX1262
#define USE_SX1268
#define USE_LLCC68

// static inline void initVariant()
// {
//     // LED1 & LED2
//     pinMode(PIN_LED1, OUTPUT);
//     ledOff(PIN_LED1);

//     pinMode(PIN_LED2, OUTPUT);
//     ledOff(PIN_LED2);
// }
