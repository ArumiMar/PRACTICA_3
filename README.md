Practica 3 : contador BCD ascendente/descendente con FreeRTOS

Integrantes: Alexa Huerta Sanchez, Arumi Mar Romero

Descripcion: 
En esta practica se implementa un contador BCD (de 0 a 9) sobre un microcontrolador ESP32 
utilizando el sistema operativo en tiempo real FreeRTOS. El sistema permite controlar la dirección del conteo
(ascendente/descendente), la velocidad (500 ms o 250 ms) y el estado de ejecución (Start/Pause) mediante botones 
físicos y un TaskManager.

Material:
1. ESP32 DevKit V1
2. 4 LEDs (para visualización BCD)
3. 4 Resistencias de 330 Ω
4. Botones pulsadores 
5. Protoboard y cables 

Requisitos de Software 
* Visual Studio Code
* Extensión de PlatformIO
* Framework: ESP-IDF

Conexiones 

| Componente | ESP32 GPIO | Descripción |
| :--- | :--- | :--- |
| LED_B0 | GPIO 2 | Bit 0 |
| LED_B1 | GPIO 4 | Bit 1 |
| LED_B2 | GPIO 5 | Bit 2 |
| LED_B3 | GPIO 18 | Bit 3 |
| BTN_START| GPIO 13 | inicia o pausa el contador |
| BTN_DIR  | GPIO 12 | alterna entre conteo UP / DOWN |
| BTN_SPEED| GPIO 14 | alterna entre 500 ms y 250 ms |

Especificaciones funcionales: 
1. El sistema inicia en estado PAUSADO: el contador conserva su valor (0) y espera la indicación de inicio.
2. Start / pause: activa el contador o lo congela en su valor actual. Al reanudar continúa desde el último número mostrado.
3. La dirección y velocidad solo pueden modificarse si el sistema está en estado RUNNING, si el sistema está pausado, las pulsaciones a estos botones son ignoradas y reportadas por consola.
4. El Task Manager envía reportes por UART mostrando el estado interno de cada tarea (eTaskGetState()) y los parámetros actuales del sistema.

