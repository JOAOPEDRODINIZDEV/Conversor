#include <stdio.h>

float Celsius_Fahrenheit(float tc){
  float r;
    r=(tc*1.8)+32;

return r;
}


  float Fahrenheit_Celsius(float tf){
    float r;
  
    r= (tf-32)/1.8;

  return r;


}
float Celsius_Kelvin(float tc){
 float r;
  r= tc+273.15;
 
return r;
}

int main(){
int op, op1;
	  float tc, tf,tk, r;
 
 printf( " Conversor de temperatura");
 printf("Escolhar um opção");
 printf("\n1- Celcius Para fahrenheit\n");
 printf("2- Fahrenheit Para Celsius\n");
 printf("3-celsius Para Kelvin\n");
 scanf("%d",&op);
 printf("Digite a temperatura\n");

 if(op==1){
printf("Em Calsius:");
scanf("%f",&tc);

tf=Celsius_Fahrenheit(tc);

printf("Temperatura em fahrenheit é : %.2f\n",tf);
}else if(op==2){
   printf("Em Fahrenheit:");
    scanf("%f",&tf);
    
    tc= Fahrenheit_Celsius(tf);
    printf("Temperatura em Celsius é : %.2f\n",tc);

    
    
}else if (op==3){
   printf("Em Celsius:");
scanf("%f",&tc);

tk= Celsius_Kelvin(tc);
 printf("Temperatura em Kelvin é : %.2f\n",tk);
}


 

return 0;
}



    
    
    
  
 
    