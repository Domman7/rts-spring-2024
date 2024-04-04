// Пины для импульсов 
const int pin3 = 3; 
const int pin5 = 5; 
const int pin6 = 6; 
const int pin9 = 9; 
const int pin10 = 10; 
 
// Периоды импульсов в миллисекундах 
const unsigned long period3 = 10000; 
const unsigned long period5 = 1000; 
const unsigned long period6 = 500; 
const unsigned long period9 = 100; 
const unsigned long period10 = 50; 
 
// Переменные для хранения времени последнего изменения состояния пина 
unsigned long previousMicros3 = 0; 
unsigned long previousMicros5 = 0; 
unsigned long previousMicros6 = 0; 
unsigned long previousMicros9 = 0; 
unsigned long previousMicros10 = 0; 
 
// Текущее состояние пина 
int state3 = LOW; 
int state5 = LOW; 
int state6 = LOW; 
int state9 = LOW; 
int state10 = LOW; 
 
void setup() { 
  // Установка пинов в режим OUTPUT 
  pinMode(pin3, OUTPUT); 
  pinMode(pin5, OUTPUT); 
  pinMode(pin6, OUTPUT); 
  pinMode(pin9, OUTPUT); 
  pinMode(pin10, OUTPUT); 
} 
 
void loop() { 
  // Получение текущего времени 
  unsigned long currentMicros = micros(); 
 
  // Генерация импульса для пина 3 
  if (currentMicros - previousMicros3 >= period3) { 
    previousMicros3 = currentMicros; 
     
    if (state3 == LOW) { 
      state3 = HIGH; 
      digitalWrite(pin3, state3); 
    } else { 
      state3 = LOW; 
      digitalWrite(pin3, state3); 
    } 
  } 
 
  // Генерация импульса для пина 5 
  if (currentMicros - previousMicros5 >= period5) { 
    previousMicros5 = currentMicros; 
     
    if (state5 == LOW) { 
      state5 = HIGH; 
      digitalWrite(pin5, state5); 
    } else { 
      state5 = LOW; 
      digitalWrite(pin5, state5); 
    } 
  } 
 
  // Генерация импульса для пина 6 
  if (currentMicros - previousMicros6 >= period6) { 
    previousMicros6 = currentMicros; 
     
    if (state6 == LOW) { 
      state6 = HIGH; 
      digitalWrite(pin6, state6); 
    } else { 
      state6 = LOW; 
      digitalWrite(pin6, state6); 
    } 
  } 
 
  // Генерация импульса для пина 9 
  if (currentMicros - previousMicros9 >= period9) { 
    previousMicros9 = currentMicros; 
     
    if (state9 == LOW) { 
      state9 = HIGH; 
      digitalWrite(pin9, state9); 
    } else { 
      state9 = LOW; 
      digitalWrite(pin9, state9); 
    } 
  } 
 
  // Генерация импульса для пина 10 
  if (currentMicros - previousMicros10 >= period10) { 
    previousMicros10 = currentMicros; 
     
    if (state10 == LOW) { 
      state10 = HIGH; 
      digitalWrite(pin10, state10); 
    } else { 
      state10 = LOW; 
      digitalWrite(pin10, state10); 
    } 
  } 
}
