/*
 * Copyright (c) 2006-2018, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2021-03-17     supperthomas first version
 */

#include <rtthread.h>
#include <rtdevice.h>
#include <board.h>

/* defined the LED0 pin: PI8 */
#define LED0_PIN    GET_PIN(E, 0)
//#define LED1_PIN    GET_PIN(E, 1)

int main(void)
{
    /* set LED0 pin mode to output */
    rt_pin_mode(LED0_PIN, PIN_MODE_OUTPUT);
	//rt_pin_mode(LED1_PIN, PIN_MODE_OUTPUT);

    while (1)
    {
        rt_pin_write(LED0_PIN, PIN_HIGH);
		//rt_pin_write(LED1_PIN, PIN_LOW);
        rt_thread_mdelay(100);
        rt_pin_write(LED0_PIN, PIN_LOW);
		//rt_pin_write(LED1_PIN, PIN_HIGH);
        rt_thread_mdelay(100);
    }
}
