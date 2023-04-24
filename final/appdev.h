#pragma once

#define NN 20	//length of user name

typedef struct {
	int max, min;
	char rname[NN];
}rock;

void send_data(rock);