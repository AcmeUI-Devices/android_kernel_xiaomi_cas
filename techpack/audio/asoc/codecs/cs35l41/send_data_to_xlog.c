#include "send_data_to_xlog.h"
#include <linux/debugfs.h>

char msg_format[] = "{\"name\":\"DC detection\",\"audio_event\":{\"count\":\"%d\",\"reason\":\"%s\"},\"dgt\":\"null\",\"audio_ext\":\"null\" }";

#define MAX_LEN 512

void send_DC_data_to_xlog(int dc_current_cnt, char *reason)
{
}

int xlog_send_int(int dc_current_cnt, char *reason)
{
	return 0;
}

int xlog_format_msg_int (char *msg, int dc_current_cnt, char *reason)
{
	return 0;
}
