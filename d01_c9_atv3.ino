// Semáforo com Controle de Pedestres
const int VERMELHO = 12;
const int AMARELO = 11;
const int VERDE = 10;

// Semáforo de Pedestres
const int PED_VERDE = 8;
const int PED_VERMELHO = 9;

void setup() {
  pinMode(VERMELHO, OUTPUT);
  pinMode(AMARELO, OUTPUT);
  pinMode(VERDE, OUTPUT);
  
  pinMode(PED_VERDE, OUTPUT);
  pinMode(PED_VERMELHO, OUTPUT);
}

void loop() {
  // Fase Verde (Carros: Verde | Pedestres: Vermelho) - 4 s
  digitalWrite(VERDE, HIGH);
  digitalWrite(AMARELO, LOW);
  digitalWrite(VERMELHO, LOW);
  digitalWrite(PED_VERDE, LOW);
  digitalWrite(PED_VERMELHO, HIGH);
  delay(4000);

  // Fase Amarela (Carros: Amarelo | Pedestres: Vermelho) - 2 s
  digitalWrite(VERDE, LOW);
  digitalWrite(AMARELO, HIGH);
  digitalWrite(VERMELHO, LOW);
  digitalWrite(PED_VERDE, LOW);
  digitalWrite(PED_VERMELHO, HIGH);
  delay(2000);

  // Fase Vermelha (Carros: Vermelho | Pedestres: Verde) - 5 s
  digitalWrite(VERDE, LOW);
  digitalWrite(AMARELO, LOW);
  digitalWrite(VERMELHO, HIGH);
  digitalWrite(PED_VERDE, HIGH);
  digitalWrite(PED_VERMELHO, LOW);
  delay(5000);
}
