# Secuencia de Luces LED (LED Chaser) con ESP32

![ESP32](https://img.shields.io/badge/ESP32-DevKit-green?style=flat&logo=espressif&logoColor=white)
![Arduino](https://img.shields.io/badge/Arduino-IDE-blue?style=flat&logo=arduino&logoColor=white)
![C++](https://img.shields.io/badge/C%2B%2B-Embedded-red?style=flat&logo=c%2B%2B&logoColor=white)

Proyecto simple pero visual: secuencia de LEDs con efectos tipo "Knight Rider" o chaser usando pines GPIO del ESP32. Ideal para demostrar control digital, timing y prototipado rápido.

## Características
- Múltiples patrones: ida y vuelta, parpadeo grupal
- Código comentado y fácil de modificar
- Bajo consumo y escalable (agrega botones, PWM para brillo, IoT después)
- Funciona en cualquier ESP32 DevKit

## Hardware necesario
- ESP32 Dev Module (o similar)
- LEDs (5-10, colores variados)
- Resistencias 220-330 Ω por LED
- Breadboard + cables jumper

## Fotos del prototipo
![foto_miniproyecto](https://github.com/user-attachments/assets/9138db05-fbb1-4ed3-b6fb-d8ff94145738)

![foto_miniproyecto2](https://github.com/user-attachments/assets/13c4b2da-2400-4ab7-88c7-ebe5798cdd98)


## Cómo usar / replicar
1. Clona este repo: `git clone https://github.com/JuanDavid-electronics/ESP32-led-chaser-sequence.git`
2. Abre `secuencia_leds_esp32.ino` en Arduino IDE
3. Instala el board ESP32 (si no lo tienes: Boards Manager → esp32 by Espressif)
4. Selecciona tu placa y puerto
5. Cambia los pines en el código si es necesario
6. Sube y observa el efecto!

## Ideas de mejora (próximas versiones)
- Agregar botón para cambiar patrones
- Control por app Blynk o web server
- Efectos con PWM (brillo variable)

Disponible para proyectos freelance en Workana: animaciones LED, control de luces, prototipos IoT similares. ¡Escríbeme!

Hecho con ❤️ por Juan David Moreno Jurado  
📍 Zarzal / Cali, Valle del Cauca, Colombia  
📧 juandavidmorenojurado422@gmail.com  
🔗 Perfil GitHub: github.com/JuanDavid-electronics
🔗 link workana: https://www.workana.com/freelancer/b6f6f09021f3b2d07c5f3a2df5ac3683
