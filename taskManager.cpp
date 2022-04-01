#include<iostream>
#include<string>
#include<cstring>

using namespace std;

bool isRunning = true;
int actualNumber = 3;
string tasks[3] = {"Estudar", "Jogar", "Trabalhar"};

void addTask(){
  string actualValue;
  cout << "Insira um nome para essa tarefa: ";
  cin >> actualValue;
  tasks[actualNumber] = actualValue;
  actualNumber++;
}

string printTasks(){
  for(int x = 0; x < sizeof(tasks); x++){
  }
  return 0;
}

void printOptions(){
  cout << "Lista de deveres a fazer:\n" << endl;
  printTasks();
  cout << "Digite 1 para adicionar uma nova tarefa." << endl;
}

int main(){

  while(true){
    printOptions();
  }

}
