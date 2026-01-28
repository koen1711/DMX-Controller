#include <Arduino.h>
#include <esp_dmx.h>

int transmitPin = 18;
int receivePin = 19;
int enablePin = 23;

dmx_port_t dmxPort = 1;
byte data[DMX_PACKET_SIZE];

bool dmxIsConnected = false;

void setup() {
  Serial.begin(115200);

  dmx_config_t config = DMX_CONFIG_DEFAULT;
  dmx_personality_t personalities[] = {
    {1, "Default Personality"}
  };
  int personality_count = 1;
  dmx_driver_install(dmxPort, &config, personalities, personality_count);
  dmx_set_pin(dmxPort, transmitPin, receivePin, enablePin);
}

void loop() {
  dmx_packet_t packet;
  if (dmx_receive(dmxPort, &packet, DMX_TIMEOUT_TICK)) {
    if (!packet.err) {
      if (!dmxIsConnected) {
        Serial.println("DMX is connected!");
        dmxIsConnected = true;
      }
      dmx_read(dmxPort, data, packet.size);

      // Read channel 0
      if (data[0] > 0) {
        // DO SOMETHING WITH VALUE
      }

    } else {
      Serial.println("A DMX error occurred.");
    }
  }
}
