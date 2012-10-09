/**  @File: hw2-2-unix-sample
  * 
  *  Description: This is a sample code of for/while loops
  *		  Students have to show 
  *		  Use "clear"/"cls" functions to implement animation
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
#include <unistd.h>

#define COUNT_INIT 10

int main()
{
	int frame_counter, counter=COUNT_INIT;

	for (frame_counter = 0; frame_counter <= 10; frame_counter++) {

		/*
		 * Clean the screen
		 */
		system("clear"); //in UNIX environment

		/*
		 * Counting down
		 */
		printf("Counting down: %d\n", counter); 
		counter--;

		/*
		 * Do nothing for one second
		 * 
		 * usleep(x) means that it will do nothing for x microsecond. (i.e. waiting for x*10^(-6) second)
		 *
		 * You can also use sleep(y). It means that it will do nothing for y second.
		 */
		usleep(1000000);
	}
	
	/*
	 * Final content on the screen
	 */
	system("clear"); //in UNIX environment
	printf("The End of the animation.\n");

	return 0;
}
