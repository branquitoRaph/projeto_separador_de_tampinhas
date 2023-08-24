#include <Servo.h>
#include <Stepper.h>

const int s0Pin = 2;
const int s1Pin = 3;
const int s2Pin = 4;
const int s3Pin = 5;
const int outPin = 6;

const int passos = 500;
const int in1 = 8;
const int in2 = 9;
const int in3 = 10;
const int in4 = 11;

Stepper motor(passos, in1, in3, in2, in4);

const int pinServo = 12;

Servo servo;

int red = 0;
int green = 0;
int blue = 0;

int angulo = 0;

void setup() {
  pinMode(s0Pin, OUTPUT);
  pinMode(s1Pin, OUTPUT);
  pinMode(s2Pin, OUTPUT);
  pinMode(s3Pin, OUTPUT);
  pinMode(outPin, INPUT);

  Serial.begin(9600);

  servo.attach(pinServo);
  motor.setSpeed(60);

  // Configurando sensor para auta resolução
  digitalWrite(s0Pin, HIGH);
  digitalWrite(s1Pin, LOW);
}

void loop() {
  // Read red color
  digitalWrite(s2Pin, LOW);
  digitalWrite(s3Pin, LOW);
  red = pulseIn(outPin, LOW);

  // Read green color
  digitalWrite(s2Pin, HIGH);
  digitalWrite(s3Pin, HIGH);
  green = pulseIn(outPin, LOW);

  // Read blue color
  digitalWrite(s2Pin, LOW);
  digitalWrite(s3Pin, HIGH);
  blue = pulseIn(outPin, LOW);

  // Print the RGB values
  Serial.print("Red: ");
  Serial.print(red);
  Serial.print(" - Green: ");
  Serial.print(green);
  Serial.print(" - Blue: ");
  Serial.println(blue);

  delay(1000);

  // condiçoes para detecção das cores e atuação do servo motor
  if (80 < red && red < 100 && 120 < green && green < 140 && 105 < blue && blue < 130) {  // se os valores de RGB estiverem dentro dos parâmetros determinados, executa o codigo abaixo
    Serial.println("| Vermelho");
    angulo = 8;

  } else if (97 < red && red < 115 && 130 < green < green < 160 && 100 < blue && blue < 130) {  // se os valores de RGB estiverem dentro dos parâmetros determinados, executa o codigo abaixo
    Serial.println("| Verde");
    angulo = 24;


  } else if (110 < red && red < 140 && 100 < green && green < 140 && 100 < blue && blue < 125) {  // se os valores de RGB estiverem dentro dos parâmetros determinados, executa o codigo abaixo
    Serial.println("| Azul");
    angulo = 35;


  } else if (70 < red && red < 90 && 110 < green && green < 135 && 105 < blue && blue < 125) {  // se os valores de RGB estiverem dentro dos parâmetros determinados, executa o codigo abaixo
    Serial.println("| Laranja");
    angulo = 7;

  } else if (60 < red && red < 90 && 80 < green && green < 110 && 85 < blue && blue < 120) {  // se os valores de RGB estiverem dentro dos parâmetros determinados, executa o codigo abaixo
    Serial.println("| Amarelo");
    angulo = 60;
    
  } else if (65 < red && red < 90 && 100 < green && green < 120 && 50 < blue && blue < 77) {  // se os valores de RGB estiverem dentro dos parâmetros determinados, executa o codigo abaixo
    Serial.println("| Roxo");
    angulo = 24;

  } else if (115 < red && red < 135 && 155 < green && green < 170 && 110 < blue && blue < 140) {  // se os valores de RGB estiverem dentro dos parâmetros determinados, executa o codigo abaixo
    Serial.println("| Marron");
    angulo = 118;


  } else if (80 < red && red < 95 && 55 < green && green < 70 && 35 < blue && blue < 50) {  // se os valores de RGB estiverem dentro dos parâmetros determinados, executa o codigo abaixo
    Serial.println("| Azul Claro");
    angulo = 24;


  } else if (95 < red && red < 125 && 125 < green && green < 155 && 115 < blue && blue < 140) {  // se os valores de RGB estiverem dentro dos parâmetros determinados, executa o codigo abaixo Serial.println("| Verde Claro"); servo.write(130);} else if (red > 240 && green > 270 && blue > 200){ // se os valores de RGB estiverem dentro dos parâmetros determinados, executa o codigo abaixo
    Serial.println("| Preto");
    angulo = 118;


  } else if (red < 70 && green < 80 && blue < 75) {  // se os valores de RGB estiverem dentro dos parâmetros determinados, executa o codigo abaixo
    Serial.println("| Branco");
    angulo = 90;
  }

  Serial.println();  // quebra um linha no texto do serial monitor
  delay(1000); 

  servo.write(angulo);
  delay(3000);

  ;;
  
  motor.step(-682);
  delay(1000);
}