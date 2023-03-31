int luz = 13;

void setup() {
  pinMode(luz, OUTPUT);

}

void loop() {

  // Variável contador
  int i;

  //Letra S (3 pontos)
  for(i=0; i<3; i++){
     digitalWrite(luz, 1);
     delay(150);
     digitalWrite(luz, 0); 
     delay(100);
  }

  //Tempo para dar intervalo entre as letras
  delay(300);

  //Letra O (3 linhas)
  for(i=0; i<3; i++){
     digitalWrite(luz, 1);
     delay(400);
     digitalWrite(luz, 0);
     delay(100);
  }

   //Letra S (3 pontos)
  for(i=0; i<3; i++){
     digitalWrite(luz, 1);
     delay(150);
     digitalWrite(luz, 0); 
     delay(100);
  }

  //Tempo para dar intervalo entre S.O.S
  delay(5000); 

}
