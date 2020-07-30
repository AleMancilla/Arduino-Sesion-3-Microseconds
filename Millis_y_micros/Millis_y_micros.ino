// Autor: Alejandro Mancilla Huanca - (+591)65537461
// Contacto: alejandro.mancilla.umsa@gmail.com
//
unsigned long time; 
void setup()
{ Serial.begin(9600); } 
void loop()
{ Serial.print("Time: ");
time = millis();
Serial.println(time); //Imprime el tiempo en millis
time = micros();
Serial.println(time); //Imprime el tiempo en micros
delay(1000); // Espera un segundo para que los datos no se desborden 
}
