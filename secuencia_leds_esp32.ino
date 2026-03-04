// Secuencia de Luces LED (LED Chaser) con ESP32
// Proyecto por Juan David Moreno Jurado
// github.com/JuanDavid-electronics/ESP32-led-chaser-sequence

// Pines GPIO conectados a los LEDs (cambia según tu montaje)
const int ledPins[] = {2, 4, 5, 18, 19, 21};  // Ejemplo: 6 LEDs en pines comunes
const int numLeds = sizeof(ledPins) / sizeof(ledPins[0]);

void setup() {
  Serial.begin(115200);
  for (int i = 0; i < numLeds; i++) {
    pinMode(ledPins[i], OUTPUT);
    digitalWrite(ledPins[i], LOW);  // Apagar al inicio
  }
  Serial.println("Secuencia de luces LED con ESP32 iniciada!");
}

void loop() {
  // Patrón 1: Ida (de izquierda a derecha)
  for (int i = 0; i < numLeds; i++) {
    digitalWrite(ledPins[i], HIGH);
    delay(150);  // Velocidad del efecto
    digitalWrite(ledPins[i], LOW);
  }

  // Patrón 2: Vuelta (de derecha a izquierda)
  for (int i = numLeds - 2; i > 0; i--) {  // Evita repetir el último
    digitalWrite(ledPins[i], HIGH);
    delay(150);
    digitalWrite(ledPins[i], LOW);
  }

  // Patrón 3: Todos parpadeando (efecto extra)
  for (int j = 0; j < 3; j++) {  // 3 ciclos
    for (int i = 0; i < numLeds; i++) digitalWrite(ledPins[i], HIGH);
    delay(300);
    for (int i = 0; i < numLeds; i++) digitalWrite(ledPins[i], LOW);
    delay(300);
  }

  delay(500);  // Pausa entre ciclos completos
}
