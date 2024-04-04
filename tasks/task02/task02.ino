#include <TaskManagerIO.h>

const int pin3 = 3; 
const int pin5 = 5; 
const int pin6 = 6; 
const int pin9 = 9; 
const int pin10 = 10;

const unsigned long period3 = 10000; 
const unsigned long period5 = 1000; 
const unsigned long period6 = 500; 
const unsigned long period9 = 100; 
const unsigned long period10 = 50; 

int state3 = LOW; 
int state5 = LOW; 
int state6 = LOW; 
int state9 = LOW; 
int state10 = LOW; 

void setup() {
  pinMode(pin3,OUTPUT);
  pinMode(pin5,OUTPUT);
  pinMode(pin6,OUTPUT);
  pinMode(pin9,OUTPUT);
  pinMode(pin10,OUTPUT);
  
  taskid_t task1 = taskManager.scheduleFixedRate(period3, [] {
    if(state3==LOW)
	  {
      state3=HIGH;  
    }
    else
	  {
      state3=LOW;
    }  
	
     digitalWrite(pin3,state3);
  }, TIME_MICROS);
  
  taskid_t task2 = taskManager.scheduleFixedRate(period5, [] {
    if(state5==LOW)
	  {
      state5=HIGH;  
    }
    else
	  {
      state5=LOW;
    }   
	
    digitalWrite(pin5,state5);
  }, TIME_MICROS);
  
  taskid_t task3 = taskManager.scheduleFixedRate(period6, [] {
    if(state6==LOW)
	  {
      state6=HIGH;  
    }
    else
	  {
	  state6=LOW;
    }    
	
    digitalWrite(pin6,state6);
  }, TIME_MICROS);
  
  taskid_t task4 = taskManager.scheduleFixedRate(period9, [] {
    if(state9==LOW)
	  {
      state9=HIGH;  
    }
    else
	  {
      state9=LOW;
    }    
	
    digitalWrite(pin9,state9);
  }, TIME_MICROS);
  
  taskid_t task5 = taskManager.scheduleFixedRate(period10, [] {
    if(state10==LOW)
	  {
      state10=HIGH;  
    }
    else
	  {
      state10=LOW;
    }    
	
    digitalWrite(pin10,state10);
  }, TIME_MICROS);
}

void loop() {
   taskManager.runLoop();
}
