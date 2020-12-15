#define tam_sig 74 //tamaño de la señal
#define tam_imp 29 //tamaño del impulso

//Import signal to another .h file
extern double sigin[tam_sig];
extern double sigaux[tam_imp];

double output_signal[tam_sig];
void moving_average (double *sig_in, double *output_signal, int sig_tam, int filter);
void plot_signal(void);

void setup() {
  Serial.begin(9600);

}

void loop() {
  moving_average();
  plot_signal();
  delay(100);

}

//////SUAVIZADO DE  LA SEÑAL ////////////////////////////
void moving_average (){
  float varVolt = 1.1218;
  float varProcess = 1e-2;
  float Pc =0.0;
  float G =0.0;
  float P = 1.0;
  float Xp = 0.0;
  float Zp =0.0;
  float Xe =0.0;
  int i;
  for(i=0;i<tam_sig;i++){
    Pc = P+varProcess;
    G =Pc/(Pc+varVolt);
    P=(1-G)*Pc;
    Xp=Xe;
    Zp=Xp;
    output_signal[i]=(G*(sigin[i]-Zp)+Xp)*4;
  }
}
void plot_signal(void){ //puede ir sin void pero se pone para una manera mejor estrutura 
  int i;
  for(i=0;i<tam_sig;i++){
    Serial.print(sigin[i]+1000);
    Serial.print(",");
    Serial.println(output_signal[i]+5);
    delay(5);
  }
}
