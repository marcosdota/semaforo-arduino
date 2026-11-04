// Semáforo com Controle de Pedestres
const int VERMELHO = 12;
const int AMARELO = 11;
const int VERDE = 10;

void setup() {
  pinMode(VERMELHO, OUTPUT);
  pinMode(AMARELO, OUTPUT);
  pinMode(VERDE, OUTPUT);
}

void loop() {
  // Fase Verde (Carros: Verde) - 4 s
  digitalWrite(VERDE, HIGH);
  digitalWrite(AMARELO, LOW);
  digitalWrite(VERMELHO, LOW);
  delay(4000);

  // Fase Amarela (Carros: Amarelo) - 2 s
  digitalWrite(VERDE, LOW);
  digitalWrite(AMARELO, HIGH);
  digitalWrite(VERMELHO, LOW);
  delay(2000);

  // Fase Vermelha (Carros: Vermelho) - 5 s
  digitalWrite(VERDE, LOW);
  digitalWrite(AMARELO, LOW);
  digitalWrite(VERMELHO, HIGH);
  delay(5000);
}