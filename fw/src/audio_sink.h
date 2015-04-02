#ifndef audio_sink_H
#define audio_sink_H

#include <stdint.h>

typedef struct{
	uint8_t samplingRate;
	uint8_t codec_address;
}audio_sink_config_t;


uint8_t audio_sink_init(audio_sink_config_t * config_struct);
#endif // audio_sink_H
