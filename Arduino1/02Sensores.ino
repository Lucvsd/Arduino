// Definindo os pinos dos LEDs RGB (Vermelho, Verde e Azul)
int ledR = 10;   // LED vermelho no pino 10
int ledG = 11;   // LED verde no pino 11
int ledB = 9;    // LED azul no pino 9

// Definindo o pino do botão
int btn = 13;    // Botão no pino 13
int PressBtn = 0; // Variável para armazenar o estado do botão (pressionado ou não)

// Variáveis para armazenar os valores aleatórios das cores RGB
int randomicR = 0; // Cor vermelha aleatória
int randomicG = 0; // Cor verde aleatória
int randomicB = 0; // Cor azul aleatória

void setup() {
  // Configurando os pinos dos LEDs como saída (OUTPUT)
  pinMode(ledR, OUTPUT);  // Pino do LED vermelho como saída
  pinMode(ledG, OUTPUT);  // Pino do LED verde como saída
  pinMode(ledB, OUTPUT);  // Pino do LED azul como saída
  
  // Configurando o pino do botão como entrada (INPUT)
  pinMode(btn, INPUT);    // Pino do botão como entrada
}

void loop() {
  // Lendo o estado do botão (se foi pressionado ou não)
  PressBtn = digitalRead(btn);

  // Se o botão for pressionado (estado HIGH), alteramos a cor dos LEDs
  if (PressBtn == HIGH) {
    // Gerando valores aleatórios entre 0 e 255 para cada cor (RGB)
    randomicR = random(0, 255); // Valor aleatório para o vermelho
    randomicG = random(0, 255); // Valor aleatório para o verde
    randomicB = random(0, 255); // Valor aleatório para o azul

    // Enviando os valores para os LEDs (usando PWM para controle de brilho)
    analogWrite(ledR, randomicR);  // Ajusta o brilho do LED vermelho
    analogWrite(ledG, randomicG);  // Ajusta o brilho do LED verde
    analogWrite(ledB, randomicB);  // Ajusta o brilho do LED azul
  }
}