#include "unity.h"
#include "audio_sink.h"

void setUp(void)
{
}

void tearDown(void)
{
}

// Audio sink must be started before use
void test_audio_sink_start(void)
{
	TEST_FAIL_MESSAGE("audio sink start");
}

// Audio sink need to select the sampling rate
// Audio sink keep control of buffer size
// Audio sink can be stoped
// Audio sink controls can be trough I2C/SPI
// Audio sink data transfer is trough I2S
// Audio sink must be able to select the codec type

