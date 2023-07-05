//Declaramos las variables a utilizar 
int mic = 2;
int led = 7;
int valor;
int estado;


void setup() {
  pinMode(mic,INPUT); //Inicializamos como entrada el MIC.
  pinMode(led,OUTPUT);// Inicializamos como salida a el LED.
 
  

}

void loop() {
  valor = digitalRead(mic); // La variable VALOR almacena la lectura de MIC.
  if(valor == 1){
   estado = digitalRead(led); // Estado almacena el dato leido de el LED.                                                                                                                
   digitalWrite(led,!estado); // Escribe en el un estado dependiedo de la frecuencia de sonido leida.
   //delay(250);
    
  }

}
