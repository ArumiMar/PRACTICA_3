#include "counter.h"
#include "system_states.h"

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

#include "esp_log.h"

static const char TAG = "COUNTER";

static void counter_step(void)
{
	/*TODO --> Si g_system.direction = COUNT_UP entonces g_system.value incrementa su valor*/
    if()
	{
		
    }
    else
    {
	/*TODO --> Si g_system.direction = COUNT_DOWN entonces g_system.value decrementa su valor*/

    }
}

void counter_task(void *pvParameters)
{
    (void)pvParameters;

    while (1)
    {
        /*
           Si esta tarea está suspendida, no entra aquí.
           Cuando está corriendo, cuenta en función del periodo.
        */
        ESP_LOGI(TAG,"Valor=%u | Direccion=%s | Periodo=%lu ms",g_system.value,g_system.direction == COUNT_UP ? "UP" : "DOWN",(unsigned long)g_system.period_ms);

        vTaskDelay(pdMS_TO_TICKS(g_system.period_ms));

        counters_step();
    }
}