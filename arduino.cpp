// Definicao de Pinos - Motor A
const int IN1 = D3;
const int IN2 = D4;
//const int ENA = 10;

// Definicao de Pinos - Motor B
const int IN3 = D1;
const int IN4 = D2;
//const int ENB = 9;

void setup () {
// Configura todos os pinos como saida
pinMode ( IN1 , OUTPUT );
pinMode ( IN2 , OUTPUT );
//pinMode ( ENA , OUTPUT );
pinMode ( IN3 , OUTPUT );
pinMode ( IN4 , OUTPUT );
//pinMode ( ENB , OUTPUT );
}

void loop () {
// --- MOVER PARA FRENTE ---
digitalWrite ( IN1 , HIGH );
digitalWrite ( IN2 , LOW );

digitalWrite ( IN4 , HIGH );
digitalWrite ( IN3 , LOW );
delay (10000) ;
 
// --- VIRAR PARA A ESQUERDA ---
digitalWrite ( IN1 , HIGH );
digitalWrite ( IN2 , LOW );

digitalWrite ( IN4 , LOW );
digitalWrite ( IN3 , HIGH );
delay (10000) ;

// --- VIRAR PARA A DIREITA ---
digitalWrite ( IN1 , LOW );
digitalWrite ( IN2 , HIGH );

digitalWrite ( IN4 , HIGH );
digitalWrite ( IN3 , LOW );
delay (10000) ;

}
