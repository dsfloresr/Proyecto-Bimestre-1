
#define tam_sig 100 //tamaño de la señal
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
  moving_average ((double *)&sigin[0], (double *)&output_signal[0], (int) tam_sig,9);
  plot_signal();
  delay(100);

}

//////SUAVIZADO DE  LA SEÑAL ////////////////////////////
void moving_average (double *sig_in, double *output_signal, int sig_tam, int filter){
  int i,j;
  for(i=floor(filter/2);i<sig_tam-floor(filter/2)-1;i++){
    output_signal[i]=0;
    for(j=-floor(filter/2);j<floor(filter/2);j++){
        output_signal[i]=output_signal[i]+sig_in[i+j];
      }
      output_signal[i]=output_signal[i]/filter;
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
