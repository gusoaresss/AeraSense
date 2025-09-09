const int PINO_SENSOR_MQ2 =  A0;


 const int VALOR_MINIMO = 100;
 const int VALOR_MAXIMO = 1000;

void setup() {
Serial.begin(9600); }

void loop() {



int valorSensor = analogRead(PINO_SENSOR_MQ2);

float porcentagem = ( (VALOR_MAXIMO -  VALOR_MINIMO)   *  ( VALOR_MINIMO - valorSensor ) ) / 100;


if (porcentagem < 0) {

porcentagem = 0;

} else if (porcentagem > 100) {

porcentagem = 100;

}

Serial.print("gasMaximo:");
Serial.print(100);
Serial.print(",");
Serial.print("GasAtual:");
Serial.print(porcentagem);
Serial.print(",");
Serial.print("gasMinimo:");
Serial.println(0);
delay(100);



 }