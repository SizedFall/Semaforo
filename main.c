#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/gpio.h"
#include "hardware/timer.h"

#define LED_RED 2
#define LED_YELLOW 3
#define LED_GREEN 4

volatile int state = 0;

bool repeating_timer_callback(struct repeating_timer *t) {
    gpio_put(LED_RED, 0);
    gpio_put(LED_YELLOW, 0);
    gpio_put(LED_GREEN, 0);

    if (state == 0) {
        gpio_put(LED_RED, 1);
    } else if (state == 1) {
        gpio_put(LED_YELLOW, 1);
    } else {
        gpio_put(LED_GREEN, 1);
    }
    
    state = (state + 1) % 3;
    return true;
}

int main() {
    stdio_init_all();
    
    gpio_init(LED_RED);
    gpio_set_dir(LED_RED, GPIO_OUT);
    gpio_init(LED_YELLOW);
    gpio_set_dir(LED_YELLOW, GPIO_OUT);
    gpio_init(LED_GREEN);
    gpio_set_dir(LED_GREEN, GPIO_OUT);
    
    struct repeating_timer timer;
    add_repeating_timer_ms(-3000, repeating_timer_callback, NULL, &timer);
    
    while (1) {
        printf("Semáforo em funcionamento...\n");
        sleep_ms(1000);
    }
}
