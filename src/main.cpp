#include "stm32f1xx_hal.h"

extern "C" void app_main() {
    // Empty main for now
}

int main(void) {
    HAL_Init();
    app_main();
    while (1) {}
}