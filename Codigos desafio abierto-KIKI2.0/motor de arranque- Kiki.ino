  #include <AFMotor.h>
  AF_DCMotor motor1(1);
  void setup() 
{
  
  motor1.run(RELEASE);
  //myservo.attach(10);// Asigna el pin 10 al objeto myservo para controlar el servo
  motor1.setSpeed(250);// Establece la velocidad del motor en 250
  //myservo.write(90);//Mueve el servo a la posición de 90 grados (inicial)
  motor1.run(FORWARD);// Configura el motor para que gire hacia adelante
  delay(400);// Espera 1 segundos pega
  //myservo.write(100);//Mueve el servo a la posición de 100 grados
  motor1.setSpeed(255); // Ajusta nuevamente la velocidad del motor a 250
  motor1.run(FORWARD);// Configura el motor para que gire hacia adelante
  delay(2400); // Espera 2.5 segundos
 // terminar vuelta
 //myservo.write(100);// Mantiene el servo en la posición de 100 grados
  motor1.setSpeed(255);// Establece la velocidad máxima del motor
  motor1.run(FORWARD);// Configura el motor para que gire hacia adelante
  delay(9000); // Espera 25 segundos para completar las 3 vueltas 
  motor1.setSpeed(0);// Detiene el motor
  motor1.run(RELEASE);
}
void loop(){
  
}