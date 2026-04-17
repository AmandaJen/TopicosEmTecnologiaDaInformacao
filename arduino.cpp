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

void setup () {
// Configura todos os pinos como saida
pinMode ( IN1 , OUTPUT );
pinMode ( IN2 , OUTPUT );
pinMode ( IN3 , OUTPUT );
pinMode ( IN4 , OUTPUT );
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
  delay (3000) ;
}

void marchaRe(){
  digitalWrite ( IN1 , LOW );
  digitalWrite ( IN2 , HIGH );
  
  digitalWrite ( IN4 , LOW );
  digitalWrite ( IN3 , HIGH );
  delay (100) ; 
}




void loop () {
  
  
}
