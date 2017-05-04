int tiempo=200; // retraso, tiempo 
int i=0; //contador
int leds[5]={0,1,2,3,4}; //vector posicion de leds
int led=0; //habilitar el led 
int led1=1;  //habilitar el led 
int led2=2;    //habilitar el led 
int led3=3;    //habilitar el led 
int led4=4;   //habilitar el led 
int j=0;      //contador 

void setup() {
  for (i=0;i<5;i++){   // orden de salidas 
    pinMode(leds[i],OUTPUT);   //pines declarados de salida 
  }
}

void loop() {
  juego1();  //ejecutar las instrucciones de su juego
  delay(500);
  juego2();   //ejecutar las instrucciones de su juego
  delay(500); 
  juego3();   //ejecutar las instrucciones de su juego
  delay(500);
  juego4();    //ejecutar las instrucciones de su juego
  delay(500);
  juego5();   //ejecutar las instrucciones de su juego
  delay(500);
  }

void juego1(){   
  for(i=0;i<=5;i++){   //ciclo ascendente del juego
    digitalWrite(i,HIGH);  //encender leds
    delay(200);   //retardo
    digitalWrite(i,LOW);  //apagar leds
    delay(200);   //retardo
  }
}

void juego2(){
  for(i=0;i<=5;i++){  //ciclo ascendente del juego
    digitalWrite(leds[i],HIGH);   //encender leds
    delay(tiempo);    //retraso
  }
  for(i=5;i>=0;i--){     //ciclo descendente del juego
    digitalWrite(leds[i],LOW);   //apagado de leds
    delay(tiempo);     //retraso
  }
}

  void juego3(){
    for(;i<2;i++){     //ciclo ascendente del juego
      digitalWrite(led,HIGH);    // encender el led indicado
      digitalWrite(led4,HIGH);   //encender el led indicado
      delay(200);
      digitalWrite(led,LOW);     // apagar el led indicado
      digitalWrite(led4,LOW);    // apagar el led indicado
      delay(200);
      digitalWrite(led1,HIGH);   // encender el led indicado
      digitalWrite(led3,HIGH);   // encender el led indicado
      delay(200);
      digitalWrite(led1,LOW);   // apagar el led indicado
      digitalWrite(led3,LOW);   // apagar el led indicado
      delay(200);
      digitalWrite(led2,HIGH);    // encender el led indicado
      delay(200);
      digitalWrite(led2,LOW);    // apagar el led indicado
      delay(200);   
  } 
}

void juego4(){
  for(;j<5;j++){   //ciclo ascendente del juego
    digitalWrite(led2,HIGH);    // encender el led indicado
    delay(200);
    digitalWrite(led1,HIGH);    // encender el led indicado
    digitalWrite(led3,HIGH);     // encender el led indicado
    delay(200);
    digitalWrite(led,LOW);     // apagar el led indicado
    digitalWrite(led4,LOW);    // eapagar el led indicado
    delay(200);  
  }
}

void juego5(){
  int l=5;      //contador 
  for(;i<3;i++){    //repeticion del juego 
    for(j=0;j<5;j++){   //ciclo ascendente del juego
      digitalWrite(leds[j],HIGH);       // encender el led indicado
      delay(200);     // apagar el led indicado
    }
    for(j=1;j>5;j--){   //ciclo descendenete del juego
      digitalWrite(leds[j],HIGH);     //encender leds
      delay(200);
    }
    for(j=2;j<=4;j++){       //ciclo ascendente del juego
       digitalWrite(leds[j],LOW);    //apagar leds
       delay(200);
    }
    for(j=3;j>=0;j--){     //ciclo descendente del juego
       digitalWrite(leds[j],LOW);   //apagar leds
       delay(200);    //retraso
    }
  }
}


