/*
Etapa 3
Una función entrega varios resultados usando punteros.
Se calculan valor ADC, voltaje y porcentaje en una sola función.
*/
const int PIN_POTENCIOMETRO = A0;
const int ADC_MAX = 1023;
const float VREF = 5.0;
void leerPotenciometro(int pin, int *valorADC, float *voltaje, int *porcentaje) {
/* Verificamos que las direcciones recibidas sean válidas.
Si algún puntero es nullptr, no se debe usar * sobre él. */
if (valorADC == nullptr || voltaje == nullptr || porcentaje == nullptr) {
return;
}
/* Escribimos la lectura ADC en la variable externa apuntada por valorADC. */
*valorADC = analogRead(pin);
/* Usamos *valorADC porque allí quedó guardada la lectura real. */
*voltaje = (*valorADC * VREF) / ADC_MAX;
/* Calculamos el porcentaje.
Se usa long para evitar desbordamiento en la multiplicación. */
*porcentaje = (int)((long)(*valorADC) * 100L / ADC_MAX);
}
void mostrarDatos(int valorADC, float voltaje, int porcentaje) {
/* Mostramos los resultados calculados. */
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
Serial.begin(9600);
}
void loop() {
/* Variables donde se guardarán los resultados. */
int valorADC = 0;
float voltaje = 0.0;
int porcentaje = 0;
/* Enviamos direcciones para que la función escriba los resultados. */
leerPotenciometro(PIN_POTENCIOMETRO, &valorADC, &voltaje, &porcentaje);
/* Mostramos los valores ya calculados. */
mostrarDatos(valorADC, voltaje, porcentaje);
delay(500);
}
