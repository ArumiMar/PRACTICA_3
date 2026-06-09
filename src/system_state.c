#include "system_state.h"
#include "app_config.h"

SystemState_t g_system;

void system_state_init(void)
{
	//TODO: 
	// 1. establecer el valor de value a cero 
    g_system.value = 0;
	// 2. establecer periodo_ms a una velocidad 
    g_system.period_ms = SPEED_SLOW_MS; 
	// 3. establecer dirección 
    g_system.direction = COUNT_UP;
	// 4. establecer modo 
    g_system.mode = SYSTEM_PAUSED;
	// 5. establecer el estado del manager 
    g_system.pending_event = MANAGER_EVENT_NONE;
}