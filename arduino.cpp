// Definicao de Pinos - Motor A - Direita
const int IN1 = D3;
const int IN2 = D4;

// Definicao de Pinos - Motor B - Esquerda
const int IN3 = D1;
const int IN4 = D2;

//Definição de Pinos - Sensor Infra Direita
const int IN5 = D5;

//Definição de Pinos - Sensor Infra Esquerda
const int IN6 = D6;

//Variavel valor de leitura
int LeituraSensorE;
int LeituraSensorD;


void setup () {
// Configura os pinos como saida
//Rodas
pinMode ( IN1 , OUTPUT );
pinMode ( IN2 , OUTPUT );
pinMode ( IN3 , OUTPUT );
pinMode ( IN4 , OUTPUT );

//Pinos como entrada
//Sensor infra
pinMode ( IN5 , INPUT );
pinMode ( IN6 , INPUT );
}

void reto(){ //Ir para frente
  digitalWrite ( IN1 , HIGH );
  digitalWrite ( IN2 , LOW );
 
  digitalWrite ( IN4 , HIGH );
  digitalWrite ( IN3 , LOW );
  delay (100) ; //2,6 cm
}

void esquerda (){
  digitalWrite ( IN1 , HIGH );
  digitalWrite ( IN2 , LOW );
 
  digitalWrite ( IN4 , LOW );
  digitalWrite ( IN3 , HIGH );
  delay (100) ; //7 vezes para 90°
}

void direita(){
  digitalWrite ( IN1 , LOW );
  digitalWrite ( IN2 , HIGH );
 
  digitalWrite ( IN4 , HIGH );
  digitalWrite ( IN3 , LOW );
  delay (100) ;
}

void parar(){
  digitalWrite ( IN1 , LOW );
  digitalWrite ( IN2 , LOW );
 
  digitalWrite ( IN4 , LOW );
  digitalWrite ( IN3 , LOW );
  delay (100) ;
}

void marchaRe(){
  digitalWrite ( IN1 , LOW );
  digitalWrite ( IN2 , HIGH );
 
  digitalWrite ( IN4 , LOW );
  digitalWrite ( IN3 , HIGH );
  delay (100) ;
}

void loop () {
  /*LeituraSensorE = digitalRead (IN6);
  LeituraSensorD = digitalRead (IN5);

  if (LeituraSensorE == HIGH && LeituraSensorD == HIGH){
    reto();
  }
  if (LeituraSensorE == HIGH && LeituraSensorD == LOW){
    esquerda();
  }
  if (LeituraSensorE == LOW && LeituraSensorD == HIGH){
    direita();
  }
  if (LeituraSensorE == LOW && LeituraSensorD == LOW){
    parar();
  }*/
  /*for (int x=0;x<7;x++){
    esquerda();             Esta girando 90°
  }*/
  for (int x=0;x<=100;x++){
    parar();
  }
  for (int x=0;x<=10;x++){
    reto();
  }
  for (int x=0;x<4;x++){ // 3 vezes é menos e 4 é mais q 90°
    esquerda();
  }
  for (int x=0;x<=10;x++){
    reto();
  }
  for (int x=0;x<4;x++){
    direita();
  }
  for (int x=0;x<=10;x++){
    reto();
  }
  for (int x=0;x<4;x++){
    esquerda();
  }
  for (int x=0;x<=10;x++){
    reto();
  }
  for (int x=0;x<4;x++){
    direita();
  }
  for (int x=0;x<=100000000;x++){
    parar();
  }
}
