#include <CAN.h>

void setup() {
	//put your setup code here to run once:
}

void loop() {
	CAN.sendMsgBuf(0x1ED, 0, 3, 0xFF 0xE0 0x68);
	delay(10);
	CAN.sendMsgBuf(0x1ED, 0, 3, 0xFF 0xE1 0xED);
	delay(10);
	CAN.sendMsgBuf(0x1ED, 0, 3, 0xFF 0xE2 0xE7);
	delay(10);
	CAN.sendMsgBuf(0x1ED, 0, 3, 0xFF 0xE3 0x62);
	delay(10);
}