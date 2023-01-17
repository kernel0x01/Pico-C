#include "pico/stdlib.h"
#include "hardware/gpio.h"

const uint LED_PIN1 = 2 ;
const uint LED_PIN2 = 3 ;
const uint LED_PIN3 = 4 ;
const uint LED_PIN4 = 5 ;
const uint LED_PIN5 = 6 ;
const uint LED_PIN6 = 7 ;

// seconds

const uint d1 = 100;
const uint d2 = 100;
const uint d3 = 2000;

// ON / OFF

const uint ON = 0; //OFF
const uint OFF = 1; // ON

int main() {

    gpio_init(LED_PIN1) ;
    gpio_set_dir(LED_PIN1, GPIO_OUT) ;
    
    gpio_init(LED_PIN2) ;
    gpio_set_dir(LED_PIN2, GPIO_OUT) ;
    
    gpio_init(LED_PIN3) ;
    gpio_set_dir(LED_PIN3, GPIO_OUT) ;
    
    gpio_init(LED_PIN4) ;
    gpio_set_dir(LED_PIN4, GPIO_OUT) ;
    
    gpio_init(LED_PIN5) ;
    gpio_set_dir(LED_PIN5, GPIO_OUT) ;
    
    gpio_init(LED_PIN6) ;
    gpio_set_dir(LED_PIN6, GPIO_OUT) ;

    while(1) {

        gpio_put(LED_PIN1, OFF) ;
        sleep_ms(50) ;
        gpio_put(LED_PIN1, ON);
        sleep_ms(d2) ;
        
        gpio_put(LED_PIN2, OFF) ;
        sleep_ms(50) ;
        gpio_put(LED_PIN2, ON);
        sleep_ms(d2) ;
        
        gpio_put(LED_PIN3, OFF) ;
        sleep_ms(50) ;
        gpio_put(LED_PIN3, ON);
        sleep_ms(d2) ;
        
        gpio_put(LED_PIN4, OFF) ;
        sleep_ms(50) ;
        gpio_put(LED_PIN4, ON);
        sleep_ms(d2) ;

        gpio_put(LED_PIN5, OFF) ;
        sleep_ms(50) ;
        gpio_put(LED_PIN5, ON);
        sleep_ms(d2) ;

        gpio_put(LED_PIN6, OFF) ;
        sleep_ms(50) ;
        gpio_put(LED_PIN6, ON);
        sleep_ms(d2) ;
    }
}
