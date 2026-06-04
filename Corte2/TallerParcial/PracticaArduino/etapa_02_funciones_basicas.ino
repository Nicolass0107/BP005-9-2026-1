/*
Etapa 2
Lectura del potenciómetro usando funciones propias.
Todavía no usamos punteros. Cada función realiza una tarea pequeña.
*/
const int PIN_POTENCIOMETRO = A0;
const int ADC_MAX = 1023;
const float VREF = 5.0;
int leerADC(int pin) {
/* Esta función recibe un pin analógico y devuelve la lectura ADC. */
int valor = analogRead(pin);
return valor;
}
float calcularVoltaje(int valorADC) {
/* Convertimos el valor ADC a voltaje aproximado.
Se usa VREF = 5.0 porque Arduino UNO trabaja normalmente con 5 V. */
float voltaje = (valorADC * VREF) / ADC_MAX;
return voltaje;
}
int calcularPorcentaje(int valorADC) {
/* Convertimos el valor ADC a porcentaje.
Se usa long para evitar desbordamiento en placas donde int es de 16 bits. */
int porcentaje = (int)((long)valorADC * 100L / ADC_MAX);
return porcentaje;
}
void mostrarDatos(int valorADC, float voltaje, int porcentaje) {
/* Mostramos los datos en una sola línea del Monitor Serial. */
Serial.print("ADC = ");
Serial.print(valorADC);
Serial.print(" | Voltaje = ");
Serial.print(voltaje, 2);
Serial.print(" V");
Serial.print(" | Porcentaje = ");
Serial.print(porcentaje);
Serial.println(" %");
}
void setup() {
/* Iniciamos el Monitor Serial. */
Serial.begin(9600);
}
void loop() {
/* Leemos el potenciómetro. */
int valorADC = leerADC(PIN_POTENCIOMETRO);
/* Calculamos el voltaje. */
float voltaje = calcularVoltaje(valorADC);
/* Calculamos el porcentaje. */
int porcentaje = calcularPorcentaje(valorADC);
/* Mostramos todo por serial. */
mostrarDatos(valorADC, voltaje, porcentaje);
delay(500);
}
