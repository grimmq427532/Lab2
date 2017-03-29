#include "rating.h"
Rate::Rate(){
	rate_value=0;
}

Rate::Rate(int rate){
	rate_value = rate;
}

int Update(int K , int oppsite_rate , float act_scro){
	Rate(rate_value+K*( act_scro - 1/1+10^((oppsite_rate-rate_value)/400)));
	return rate_value;
}

int returnValue(){
	return rate_value;
}