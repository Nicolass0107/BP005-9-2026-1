/*
Etapa 1
Lectura simple del potenciómetro conectado al pin A0.
Este programa todavía no usa funciones propias, punteros ni arreglos.
*/
const int PIN_POTENCIOMETRO = A0;
void setup() {
/* Iniciamos la comunicación serial a 9600 baudios. */
Serial.begin(9600);
}
void loop() {
/* Leemos el valor analógico del potenciómetro.
En Arduino UNO, analogRead entrega un valor entre 0 y 1023. */
int valorADC = analogRead(PIN_POTENCIOMETRO);
/* Mostramos el valor leído. */
Serial.print("ADC = ");
Serial.println(valorADC);
/* Pausa corta para no saturar el Monitor Serial. */
delay(500);
}
