/* conclusiones 
integrantes: Alexa Huerta Snachez, Arumi Mar Romero 
1. el uso de  pvParameters perminte reutilizacion de codigo, ya que se 
diseñaron tareas genericas que se configuran al momento de crearlas pasando su contexto. 
2. cuando todas las tareas están bloqueadas o suspendidas, se ejecuta el idle task
3. un estado BLOCKED ocurre cuando una tarea espera un evento o un tiempo
4. SUSPENDED quita la tarea por completo del planificador, nunca volvera a ejecutarse 
a menos que otra tarea llame a vTaskResume
*/
#include "system_state.h"
#include "app_task.h"

void app_main(void)
{
	
	/*TODO --> Inicializar el sistema y crear tareas*/
	system_state_init();  //inicializacion 
    app_tasks_create();   // tareas
}