/**  @File: hw2-3-sample
  * 
  *  Description: This is a sample code for demoing how to use timer 
  *  		  related functions 
  *
  *  Copyright (c) 2012, Peter Chang
  *  All rights reserved.
  *
  * Redistribution and use in source and binary forms, with or without
  * modification, are permitted provided that the following conditions are met:
  *
  *     * Redistributions of source code must retain the above copyright
  *       notice, this list of conditions and the following disclaimer.
  *     * Redistributions in binary form must reproduce the above copyright
  *       notice, this list of conditions and the following disclaimer in the
  *       documentation and/or other materials provided with the distribution.
  *     * Neither the name of Peter Ping-Hao Chang nor the
  *       names of its contributors may be used to endorse or promote products
  *       derived from this software without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY PETER CHANG "AS IS" AND ANY
  * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
  * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL PETER CHANG BE LIABLE FOR ANY
  * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
  * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
  * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
  * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
  * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
  * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  */

#include <stdio.h>
#include <time.h>

/*
 * get_time_asctime
 *
 * This function shows that how to use "localtime" and "asctime" to 
 * show current time without saving the value of current time
 *
 */
void get_time_asctime()
{
	// Initiate the variable which is about time_infomation.
	time_t timer=time(NULL);

	/*
	 * This function will show the current time, date, and year.
	 *
	 * "localtime" will get the current time from the input time_t variable.
	 * "asctime" will transform the data type from time_t to string.
	 *
	 * You can get more info about time.h on this website:
	 * http://www.acm.uiuc.edu/webmonkeys/book/c_guide/2.15.html
	 */
	printf("The current time is %s\n", asctime(localtime(&timer)));
	
}

/*
 * get_time_and_save_value
 *
 * This function shows how to get current time by getting its value and saving it.
 *
 */
void get_time_and_save_value()
{
	// Initiate the variable which is about time_infomation.
	time_t timer=time(NULL);
	// Variables to save info about hour, min, and sec.
	int hour, min, sec;
	// Get the information about current time
	// You can ignore how to use structure variable.
	// If you want to use this way to get time. 
	// For now, you just need to follow the pattern of this sample function.
	struct tm *time_ptr = localtime(&timer);
	
	/*
	 * Put info about current time into "hour, min, and sec variables"
	 * For now, you don't need to know the detail about this part.
	 * If you want to use this way to get time, you just need to follow 
	 * the pattern of this sample function.
	 */
	hour = time_ptr->tm_hour;
	min = time_ptr->tm_min; 
	sec = time_ptr->tm_sec;
	printf("Current time (HH:MM:SS) is %u:%u:%u\n", hour, min, sec);

}

int main()
{

	//One way to show current time by asctime()
	get_time_asctime();
	//Another way to show current time by getting time information and saving its value.
	get_time_and_save_value();

	return 0;
}
