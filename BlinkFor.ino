// dichiarazione variabili pin

int button1 = 13;
int button2 = 12;
int button3 = 11;

int led1 = 10;
int led2 = 9;
int led3 = 8;

int state1 = 0;
int state2 = 0;
int state3 = 0;

int count;
int time = 1000;

// setup

void setup() {

  // pin output

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);

  // pin input

  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  pinMode(button3, INPUT);

}

// ciclo

void loop() {

  // stato led

  state1 = digitalRead(button1);
  state2 = digitalRead(button2);
  state3 = digitalRead(button3);

  // caso button1

  if (state1 == 1) {

    // blink 3 volte

    for(count = 0; count < 3; count++) {

      digitalWrite(led1, HIGH);
      digitalWrite(led2, HIGH);
      digitalWrite(led3, HIGH);

      delay(time);

      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);

      delay(time);

    }
  }

  // caso button2

  if (state2 == 1) {

    // blink 5 volte

    for(count = 0; count < 5; count++) {

      digitalWrite(led1, HIGH);
      digitalWrite(led2, HIGH);
      digitalWrite(led3, HIGH);

      delay(time);

      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);

      delay(time);

    }
  }

  // caso button3

  if (state3 == 1) {

    // blink 8 volte
    
    for(count = 0; count < 8; count++) {

      digitalWrite(led1, HIGH);
      digitalWrite(led2, HIGH);
      digitalWrite(led3, HIGH);

      delay(time);

      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);

      delay(time);

    }
  }
}