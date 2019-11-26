int M11=4,M12=2,M13=3,M21=10,M22=8,M23=9,M31=7,M32=5,M33=6,M41=37,M42=14,M43=38,M51=20,M52=22,M53=21,M61=23,M62=29,M63=30;
String received;
String receivedText="";
char receivedTextF[1000],receivedText1F[1000],receivedText1OF[1000],receivedText2OF[1000],receivedText2F[1000],receivedText3OF[1000],receivedText3F[1000],receivedText4OF[1000],receivedText4F[1000],receivedText5OF[1000],receivedText5F[1000],receivedText6_F[1000];
char switchoff[5];
char R[5],R11[5],R12[5],R13[5],R14[5],R15[5],R16[5];
char R21[5],R22[5],R23[5],R24[5],R25[5],R26[5];
char R31[5],R32[5],R33[5],R34[5],R35[5],R36[5];
char R41[5],R42[5],R43[5],R44[5],R45[5],R46[5];
char R51[5],R52[5],R53[5],R54[5],R55[5],R56[5];
char R61[5],R62[5],R63[5],R64[5],R65[5],R66[5];
//**********************************************************************************************************************************
char G[5],G11[5],G12[5],G13[5],G14[5],G15[5],G16[5];
char G21[5],G22[5],G23[5],G24[5],G25[5],G26[5];
char G31[5],G32[5],G33[5],G34[5],G35[5],G36[5];
char G41[5],G42[5],G43[5],G44[5],G45[5],G46[5];
char G51[5],G52[5],G53[5],G54[5],G55[5],G56[5];
char G61[5],G62[5],G63[5],G64[5],G65[5],G66[5];
//**********************************************************************************************************************************
char B[5],B_11[5],B12[5],B13[5],B14[5],B15[5],B16[5];
char B_21[5],B22[5],B23[5],B24[5],B25[5],B26[5];
char B_31[5],B32[5],B33[5],B34[5],B35[5],B36[5];
char B_41[5],B42[5],B43[5],B44[5],B45[5],B46[5];
char B_51[5],B52[5],B53[5],B54[5],B55[5],B56[5];
char B_61[5],B62[5],B63[5],B64[5],B65[5],B66[5];
//**********************************************************************************************************************************
char T11[3]=" ",T12[3]=" ",T13[3]=" ",T14[3]=" ",T15[3]=" ",T16[3]=" ";
char T21[3]=" ",T22[3]=" ",T23[3]=" ",T24[3]=" ",T25[3]=" ",T26[3]=" ";
char T31[3]=" ",T32[3]=" ",T33[3]=" ",T34[3]=" ",T35[3]=" ",T36[3]=" ";
char T41[3]=" ",T42[3]=" ",T43[3]=" ",T44[3]=" ",T45[3]=" ",T46[3]=" ";
char T51[3]=" ",T52[3]=" ",T53[3]=" ",T54[3]=" ",T55[3]=" ",T56[3]=" ";
char T61[3]=" ",T62[3]=" ",T63[3]=" ",T64[3]=" ",T65[3]=" ",T66[3]=" ";
//**********************************************************************************************************************************
char L_11[3]=" ";
char L_21[3]=" ";
char L_31[3]=" ";
char L_41[3]=" ";
char L_51[3]=" ";
char L_61[3]=" ";
//**********************************************************************************************************************************
unsigned long previousMillis11=0,previousMillis12=0 ,previousMillis13=0, previousMillis14=0 ,previousMillis15=0 ,previousMillis16=0;
unsigned long previousMillis21=0,previousMillis22=0 ,previousMillis23=0, previousMillis24=0 ,previousMillis25=0 ,previousMillis26=0;
unsigned long previousMillis31=0,previousMillis32=0 ,previousMillis33=0, previousMillis34=0 ,previousMillis35=0 ,previousMillis36=0;
unsigned long previousMillis41=0,previousMillis42=0 ,previousMillis43=0, previousMillis44=0 ,previousMillis45=0 ,previousMillis46=0;
unsigned long previousMillis51=0,previousMillis52=0 ,previousMillis53=0, previousMillis54=0 ,previousMillis55=0 ,previousMillis56=0;
unsigned long previousMillis61=0,previousMillis62=0 ,previousMillis63=0, previousMillis64=0 ,previousMillis65=0 ,previousMillis66=0;
//**********************************************************************************************************************************
int i=0,j=0,k=0,in6=1,in1=1,in2=1,in3=1,in4=1,in5=1,t,z=0,noff,non,Module;
//**********************************************************************************************************************************
unsigned int t11=0,t12=0,t13=0,t14=0,t15=0,t16=0;
unsigned int t21=0,t22=0,t23=0,t24=0,t25=0,t26=0;
unsigned int t31=0,t32=0,t33=0,t34=0,t35=0,t36=0;
unsigned int t41=0,t42=0,t43=0,t44=0,t45=0,t46=0;
unsigned int t51=0,t52=0,t53=0,t54=0,t55=0,t56=0;
unsigned int t61=0,t62=0,t63=0,t64=0,t65=0,t66=0;
//**********************************************************************************************************************************
float l,L1,L2,L3,L4,L5,L6;
int c,C;
//**********************************************************************************************************************************
int r,r11,r12,r13,r14,r15,r16;
int r21,r22,r23,r24,r25,r26;
int r31,r32,r33,r34,r35,r36;
int r41,r42,r43,r44,r45,r46;
int r51,r52,r53,r54,r55,r56;
int r61,r62,r63,r64,r65,r66;
//**********************************************************************************************************************************
int g,g11,g12,g13,g14,g15,g16;
int g21,g22,g23,g24,g25,g26;
int g31,g32,g33,g34,g35,g36;
int g41,g42,g43,g44,g45,g46;
int g51,g52,g53,g54,g55,g56;
int g61,g62,g63,g64,g65,g66;
//**********************************************************************************************************************************
int b,b11,b12,b13,b14,b15,b16;
int b21,b22,b23,b24,b25,b26;
int b31,b32,b33,b34,b35,b36;
int b41,b42,b43,b44,b45,b46;
int b51,b52,b53,b54,b55,b56;
int b61,b62,b63,b64,b65,b66;
//**********************************************************************************************************************************

void setup() {
Serial1.begin(9600); //rx1 and tx1 = pins 0 and 1 on Teensy
Serial.begin(9600);
delay(200);
pinMode(M11,OUTPUT);
pinMode(M12,OUTPUT);
pinMode(M13,OUTPUT);
pinMode(M21,OUTPUT);
pinMode(M22,OUTPUT);
pinMode(M23,OUTPUT);
pinMode(M31,OUTPUT);
pinMode(M32,OUTPUT);
pinMode(M33,OUTPUT);
pinMode(M41,OUTPUT);
pinMode(M42,OUTPUT);
pinMode(M43,OUTPUT);
pinMode(M51,OUTPUT);
pinMode(M52,OUTPUT);
pinMode(M53,OUTPUT);
pinMode(M61,OUTPUT);
pinMode(M62,OUTPUT);
pinMode(M63,OUTPUT);


}
void loop() {
 
 unsigned long currentMillis = millis();
  

   
  if (Serial.available()) Serial1.write(Serial.read());
                while(Serial1.available() > 0)
                { 
                  receivedText += (char)Serial1.read();
                  delay(2);  
                  Serial.println("ok");
                 }

  
  if(receivedText != "")
   for(i=0;i<1000;i++)
  receivedTextF[i]=receivedText[i];
  
  if(receivedText != "") Serial.println(receivedTextF);
  receivedText = "";
     
     
//-----------------------------------------------------------------------------STROBE-------------------------------------------------------------------------------------------------------------- 
if(receivedTextF[0]=='D' && receivedTextF[1]=='O' && receivedTextF[2]=='B')
{
  for(i=1;i<7;i++)
  turnon(i,255,255,255,1);
  delay(100);
  for(i=1;i<7;i++)
  turnon(i,0,255,255,1);
  delay(100);
  for(i=1;i<7;i++)
  turnon(i,255,0,255,1);
  delay(100);
  for(i=1;i<7;i++)
  turnon(i,255,255,0,1);
  delay(100);
  for(i=1;i<7;i++)
  turnon(i,0,255,0,1);
  delay(100);
  for(i=1;i<7;i++)
  turnon(i,255,0,0,1);
  delay(100);
  for(i=1;i<7;i++)
  turnon(i,0,0,255,1);
  delay(100);
  
  }


//-----------------------------------------------------------------------------SMOOTH--------------------------------------------------------------------------------------------------------------
if(receivedTextF[0]=='D' && receivedTextF[1]=='O' && receivedTextF[2]=='T')
{  
  
  turnon(1,255,0,0,1);turnon(2,255,0,0,1);turnon(3,255,0,0,1);turnon(4,255,0,0,1);turnon(5,255,0,0,1);turnon(6,255,0,0,1);
  delay(50);
  turnon(1,255,0,0,0.9);turnon(2,255,0,0,0.9);turnon(3,255,0,0,0.9);turnon(4,255,0,0,0.9);turnon(5,255,0,0,0.9);turnon(6,255,0,0,0.9);
  delay(50);
  turnon(1,255,0,0,0.8);turnon(2,255,0,0,0.8);turnon(3,255,0,0,0.8);turnon(4,255,0,0,0.8);turnon(5,255,0,0,0.8);turnon(6,255,0,0,0.8);
  delay(50);
  turnon(1,255,0,0,0.7);turnon(2,255,0,0,0.7);turnon(3,255,0,0,0.7);turnon(4,255,0,0,0.7);turnon(5,255,0,0,0.7);turnon(6,255,0,0,0.7);
  delay(50);
  turnon(1,255,0,0,0.6);turnon(2,255,0,0,0.6);turnon(3,255,0,0,0.6);turnon(4,255,0,0,0.6);turnon(5,255,0,0,0.6);turnon(6,255,0,0,0.6);
  delay(50);
  turnon(1,255,0,0,0.5);turnon(2,255,0,0,0.5);turnon(3,255,0,0,0.5);turnon(4,255,0,0,0.5);turnon(5,255,0,0,0.5);turnon(6,255,0,0,0.5);
  delay(50);
  turnon(1,255,0,0,0.4);turnon(2,255,0,0,0.4);turnon(3,255,0,0,0.4);turnon(4,255,0,0,0.4);turnon(5,255,0,0,0.4);turnon(6,255,0,0,0.4);
  delay(50);
  turnon(1,255,0,0,0.3);turnon(2,255,0,0,0.3);turnon(3,255,0,0,0.3);turnon(4,255,0,0,0.3);turnon(5,255,0,0,0.3);turnon(6,255,0,0,0.3);
  delay(50);
  turnon(1,255,0,0,0.2);turnon(2,255,0,0,0.2);turnon(3,255,0,0,0.2);turnon(4,255,0,0,0.2);turnon(5,255,0,0,0.2);turnon(6,255,0,0,0.2);
  delay(50);
 //----------------------------
  turnon(1,0,255,0,1);turnon(2,0,255,0,1);turnon(3,0,255,0,1);turnon(4,0,255,0,1);turnon(5,0,255,0,1);turnon(6,0,255,0,1);
  delay(50);
  turnon(1,0,255,0,0.9);turnon(2,0,255,0,0.9);turnon(3,0,255,0,0.9);turnon(4,0,255,0,0.9);turnon(5,0,255,0,0.9);turnon(6,0,255,0,0.9);
  delay(50);
  turnon(1,0,255,0,0.8);turnon(2,0,255,0,0.8);turnon(3,0,255,0,0.8);turnon(4,0,255,0,0.8);turnon(5,0,255,0,0.8);turnon(6,0,255,0,0.8);
  delay(50);
  turnon(1,0,255,0,0.7);turnon(2,0,255,0,0.7);turnon(3,0,255,0,0.7);turnon(4,0,255,0,0.7);turnon(5,0,255,0,0.7);turnon(6,0,255,0,0.7);
  delay(50);
  turnon(1,0,255,0,0.6);turnon(2,0,255,0,0.6);turnon(3,0,255,0,0.6);turnon(4,0,255,0,0.6);turnon(5,0,255,0,0.6);turnon(6,0,255,0,0.6);
  delay(50);
  turnon(1,0,255,0,0.5);turnon(2,0,255,0,0.5);turnon(3,0,255,0,0.5);turnon(4,0,255,0,0.5);turnon(5,0,255,0,0.5);turnon(6,0,255,0,0.5);
  delay(50);
  turnon(1,0,255,0,0.4);turnon(2,0,255,0,0.4);turnon(3,0,255,0,0.4);turnon(4,0,255,0,0.4);turnon(5,0,255,0,0.4);turnon(6,0,255,0,0.4);
  delay(50);
  turnon(1,0,255,0,0.3);turnon(2,0,255,0,0.3);turnon(3,0,255,0,0.3);turnon(4,0,255,0,0.3);turnon(5,0,255,0,0.3);turnon(6,0,255,0,0.3);
  delay(50);
  turnon(1,0,255,0,0.2);turnon(2,0,255,0,0.2);turnon(3,0,255,0,0.2);turnon(4,0,255,0,0.2);turnon(5,0,255,0,0.2);turnon(6,0,255,0,0.2);
  delay(50);
 //----------------------------
   turnon(1,0,0,255,1);turnon(2,0,0,255,1);turnon(3,0,0,255,1);turnon(4,0,0,255,1);turnon(5,0,0,255,1);turnon(6,0,0,255,1);
   delay(50);
   turnon(1,0,0,255,0.9);turnon(2,0,0,255,0.9);turnon(3,0,0,255,0.9);turnon(4,0,0,255,0.9);turnon(5,0,0,255,0.9);turnon(6,0,0,255,0.9);
   delay(50);
   turnon(1,0,0,255,0.8);turnon(2,0,0,255,0.8);turnon(3,0,0,255,0.8);turnon(4,0,0,255,0.8);turnon(5,0,0,255,0.8);turnon(6,0,0,255,0.8);
   delay(50);
   turnon(1,0,0,255,0.7);turnon(2,0,0,255,0.7);turnon(3,0,0,255,0.7);turnon(4,0,0,255,0.7);turnon(5,0,0,255,0.7);turnon(6,0,0,255,0.7);
   delay(50);
   turnon(1,0,0,255,0.6);turnon(2,0,0,255,0.6);turnon(3,0,0,255,0.6);turnon(4,0,0,255,0.6);turnon(5,0,0,255,0.6);turnon(6,0,0,255,0.6);
   delay(50);
   turnon(1,0,0,255,0.5);turnon(2,0,0,255,0.5);turnon(3,0,0,255,0.5);turnon(4,0,0,255,0.5);turnon(5,0,0,255,0.5);turnon(6,0,0,255,0.5);
   delay(50);
   turnon(1,0,0,255,0.4);turnon(2,0,0,255,0.4);turnon(3,0,0,255,0.4);turnon(4,0,0,255,0.4);turnon(5,0,0,255,0.4);turnon(6,0,0,255,0.4);
   delay(50);
   turnon(1,0,0,255,0.3);turnon(2,0,0,255,0.3);turnon(3,0,0,255,0.3);turnon(4,0,0,255,0.3);turnon(5,0,0,255,0.3);turnon(6,0,0,255,0.3);
   delay(50);
   turnon(1,0,0,255,0.2);turnon(2,0,0,255,0.2);turnon(3,0,0,255,0.2);turnon(4,0,0,255,0.2);turnon(5,0,0,255,0.2);turnon(6,0,0,255,0.2);
   delay(50);
    }
//-----------------------------------------------------------------------------FADE----------------------------------------------------------------------------------------------------------------
if(receivedTextF[0]=='D' && receivedTextF[1]=='A' && receivedTextF[2]=='D')
{
  
  turnon(1,255,0,0,0.2);turnon(2,255,0,0,0.2);turnon(3,255,0,0,0.2);turnon(4,255,0,0,0.2);turnon(5,255,0,0,0.2);turnon(6,255,0,0,0.2);
  delay(50);
  turnon(1,255,0,0,0.3);turnon(2,255,0,0,0.3);turnon(3,255,0,0,0.3);turnon(4,255,0,0,0.3);turnon(5,255,0,0,0.3);turnon(6,255,0,0,0.3);
   delay(50);
  turnon(1,255,0,0,0.4);turnon(2,255,0,0,0.4);turnon(3,255,0,0,0.4);turnon(4,255,0,0,0.4);turnon(5,255,0,0,0.4);turnon(6,255,0,0,0.4);
   delay(50);
  turnon(1,255,0,0,0.5);turnon(2,255,0,0,0.5);turnon(3,255,0,0,0.5);turnon(4,255,0,0,0.5);turnon(5,255,0,0,0.5);turnon(6,255,0,0,0.5);
   delay(50);
  turnon(1,255,0,0,0.6);turnon(2,255,0,0,0.6);turnon(3,255,0,0,0.6);turnon(4,255,0,0,0.6);turnon(5,255,0,0,0.6);turnon(6,255,0,0,0.6);
   delay(50);
  turnon(1,255,0,0,0.7);turnon(2,255,0,0,0.7);turnon(3,255,0,0,0.7);turnon(4,255,0,0,0.7);turnon(5,255,0,0,0.7);turnon(6,255,0,0,0.7);
   delay(50);
  turnon(1,255,0,0,0.8);turnon(2,255,0,0,0.8);turnon(3,255,0,0,0.8);turnon(4,255,0,0,0.8);turnon(5,255,0,0,0.8);turnon(6,255,0,0,0.8);
   delay(50);
  turnon(1,255,0,0,0.9);turnon(2,255,0,0,0.9);turnon(3,255,0,0,0.9);turnon(4,255,0,0,0.9);turnon(5,255,0,0,0.9);turnon(6,255,0,0,0.9);
   delay(50);
  turnon(1,255,0,0,1);turnon(2,255,0,0,1);turnon(3,255,0,0,1);turnon(4,255,0,0,1);turnon(5,255,0,0,1);turnon(6,255,0,0,1);
  delay(50);
//----------------------------
  turnon(1,0,255,0,0.2);turnon(2,0,255,0,0.2);turnon(3,0,255,0,0.2);turnon(4,0,255,0,0.2);turnon(5,0,255,0,0.2);turnon(6,0,255,0,0.2);
  delay(50);
  turnon(1,0,255,0,0.3);turnon(2,0,255,0,0.3);turnon(3,0,255,0,0.3);turnon(4,0,255,0,0.3);turnon(5,0,255,0,0.3);turnon(6,0,255,0,0.3);
   delay(50);
  turnon(1,0,255,0,0.4);turnon(2,0,255,0,0.4);turnon(3,0,255,0,0.4);turnon(4,0,255,0,0.4);turnon(5,0,255,0,0.4);turnon(6,0,255,0,0.4);
   delay(50);
  turnon(1,0,255,0,0.5);turnon(2,0,255,0,0.5);turnon(3,0,255,0,0.5);turnon(4,0,255,0,0.5);turnon(5,0,255,0,0.5);turnon(6,0,255,0,0.5);
   delay(50);
  turnon(1,0,255,0,0.6);turnon(2,0,255,0,0.6);turnon(3,0,255,0,0.6);turnon(4,0,255,0,0.6);turnon(5,0,255,0,0.6);turnon(6,0,255,0,0.6);
   delay(50);
  turnon(1,0,255,0,0.7);turnon(2,0,255,0,0.7);turnon(3,0,255,0,0.7);turnon(4,0,255,0,0.7);turnon(5,0,255,0,0.7);turnon(6,0,255,0,0.7);
   delay(50);
  turnon(1,0,255,0,0.8);turnon(2,0,255,0,0.8);turnon(3,0,255,0,0.8);turnon(4,0,255,0,0.8);turnon(5,0,255,0,0.8);turnon(6,0,255,0,0.8);
   delay(50);
  turnon(1,0,255,0,0.9);turnon(2,0,255,0,0.9);turnon(3,0,255,0,0.9);turnon(4,0,255,0,0.9);turnon(5,0,255,0,0.9);turnon(6,0,255,0,0.9);
   delay(50);
  turnon(1,0,255,0,1);turnon(2,0,255,0,1);turnon(3,0,255,0,1);turnon(4,0,255,0,1);turnon(5,0,255,0,1);turnon(6,0,255,0,1);
  delay(50);

//----------------------------
  turnon(1,0,0,255,0.2);turnon(2,0,0,255,0.2);turnon(3,0,0,255,0.2);turnon(4,0,0,255,0.2);turnon(5,0,0,255,0.2);turnon(6,0,0,255,0.2);
  delay(50);
  turnon(1,0,0,255,0.3);turnon(2,0,0,255,0.3);turnon(3,0,0,255,0.3);turnon(4,0,0,255,0.3);turnon(5,0,0,255,0.3);turnon(6,0,0,255,0.3);
   delay(50);
  turnon(1,0,0,255,0.4);turnon(2,0,0,255,0.4);turnon(3,0,0,255,0.4);turnon(4,0,0,255,0.4);turnon(5,0,0,255,0.4);turnon(6,0,0,255,0.4);
   delay(50);
  turnon(1,0,0,255,0.5);turnon(2,0,0,255,0.5);turnon(3,0,0,255,0.5);turnon(4,0,0,255,0.5);turnon(5,0,0,255,0.5);turnon(6,0,0,255,0.5);
   delay(50);
  turnon(1,0,0,255,0.6);turnon(2,0,0,255,0.6);turnon(3,0,0,255,0.6);turnon(4,0,0,255,0.6);turnon(5,0,0,255,0.6);turnon(6,0,0,255,0.6);
   delay(50);
  turnon(1,0,0,255,0.7);turnon(2,0,0,255,0.7);turnon(3,0,0,255,0.7);turnon(4,0,0,255,0.7);turnon(5,0,0,255,0.7);turnon(6,0,0,255,0.7);
   delay(50);
  turnon(1,0,0,255,0.8);turnon(2,0,0,255,0.8);turnon(3,0,0,255,0.8);turnon(4,0,0,255,0.8);turnon(5,0,0,255,0.8);turnon(6,0,0,255,0.8);
   delay(50);
  turnon(1,0,0,255,0.9);turnon(2,0,0,255,0.9);turnon(3,0,0,255,0.9);turnon(4,0,0,255,0.9);turnon(5,0,0,255,0.9);turnon(6,0,0,255,0.9);
   delay(50);
  turnon(1,0,0,255,1);turnon(2,0,0,255,1);turnon(3,0,0,255,1);turnon(4,0,0,255,1);turnon(5,0,0,255,1);turnon(6,0,0,255,1);
  delay(50);


  
  }

//-----------------------------------------------------------------------------FLASH--------------------------------------------------------------------------------------------------------------
if(receivedTextF[0]=='D' && receivedTextF[1]=='A' && receivedTextF[2]=='S')
{
  for(i=1;i<7;i++)
  turnon(i,255,255,255,1);
  delay(250);
  for(i=1;i<7;i++)
  turnon(i,0,0,0,1);
  delay(250);
  }
//---------------------------------------------------------------------------turn_off-------------------------------------------------------------------------------------------------------------- 
  if(receivedTextF[0]=='D' && receivedTextF[1]=='M' && receivedTextF[2]=='O')
  {  for(i=0;i<1000;i++)
     {
      receivedText1F[i]=' ';
      receivedText2F[i]=' ';
      receivedText3F[i]=' ';
      receivedText4F[i]=' ';
      receivedText5F[i]=' ';
      receivedText6_F[i]=' ';
     }  
    for(i=0;i<6;i++)switchoff[i]=receivedTextF[i];
    noff=(int)switchoff[4]-48;
    turnoff(noff);
    i=0;
    
   }
 //---------------------------------------------------------------------------Manuel--------------------------------------------------------------------------------------------------------------
    if(receivedTextF[0]=='D' && receivedTextF[1]=='M' && receivedTextF[2]=='M')
  {
   for(i=0;i<1000;i++)
     {
      receivedText1F[i]=' ';
      receivedText2F[i]=' ';
      receivedText3F[i]=' ';
      receivedText4F[i]=' ';
      receivedText5F[i]=' ';
      receivedText6_F[i]=' ';
     }
   char L[3]=" ";
   tri(receivedTextF,'R','G',R);
   tri(receivedTextF,'G','B',G);
   tri(receivedTextF,'B','L',B);
   tri(receivedTextF,'L','F',L);
   l=chartoint(L);
   l=map(l,1,100,0.2,1);
   r=chartoint(R)*l;
   g=chartoint(G)*l; 
   b=chartoint(B)*l;
   non=(int)receivedTextF[4]-48;
   turnon(non,r,g,b,l); 
    }
//---------------------------------------------------------------------------Sequences--------------------------------------------------------------------------------------------------------------
if(receivedTextF[0]=='D' && receivedTextF[1]=='S' ) 
     {  
      Module=(int)receivedTextF[4]-48;
          if(Module==1)
          {
              for(i=0;i<1000;i++)
              {
              receivedText1OF[i]=receivedTextF[i];
              receivedTextF[i]=' ';
              } 
          }
             
          if(Module==2)
          {
              for(i=0;i<1000;i++)
              {
              receivedText2OF[i]=receivedTextF[i];
              receivedTextF[i]=' ';
              } 
         
          }
          if(Module==3)
          {
              for(i=0;i<1000;i++)
              {
              receivedText3OF[i]=receivedTextF[i];
              receivedTextF[i]=' ';
              } 
           
          }
          if(Module==4)
          {
              for(i=0;i<1000;i++)
              {
              receivedText4OF[i]=receivedTextF[i];
              receivedTextF[i]=' ';
              } 
        
          }
          if(Module==5)
          {
              for(i=0;i<1000;i++)
              {
              receivedText5OF[i]=receivedTextF[i];
              receivedTextF[i]=' ';
              } 
             
    
          }
          if(Module==6)
          {
              for(i=0;i<1000;i++)
              {
              receivedText6_F[i]=receivedTextF[i];
              receivedText5F[i]=receivedText5OF[i];
              receivedText4F[i]=receivedText4OF[i];
              receivedText3F[i]=receivedText3OF[i];
              receivedText2F[i]=receivedText2OF[i];
              receivedText1F[i]=receivedText1OF[i];
              receivedTextF[i]=' ';
              receivedText1OF[i];
              receivedText2OF[i];
              receivedText3OF[i];
              receivedText4OF[i];
              receivedText5OF[i];
              } 
          }
        
     }
    


//--------------------------------------------------------------------------Module1------------------------------------------------------------------------------------------------------------------
if(receivedText1F[0]=='D' && receivedText1F[1]=='S' ) 
{          
  
   tri(receivedText1F,'A','Z',T11);tri(receivedText1F,'T','Y',T12);tri(receivedText1F,'O','P',T13);tri(receivedText1F,'G','H',T14);tri(receivedText1F,'L','W',T15);tri(receivedText1F,'V','B',T16);
   tri(receivedText1F,'Z','E',R11);tri(receivedText1F,'Y','U',R12);tri(receivedText1F,'P','Q',R13);tri(receivedText1F,'H','J',R14);tri(receivedText1F,'W','X',R15);tri(receivedText1F,'B','N',R16);
   tri(receivedText1F,'E','R',G11);tri(receivedText1F,'U','I',G12);tri(receivedText1F,'Q','D',G13);tri(receivedText1F,'J','K',G14);tri(receivedText1F,'X','C',G15);tri(receivedText1F,'N','/',G16);
   tri(receivedText1F,'R','T',B_11);tri(receivedText1F,'I','O',B12);tri(receivedText1F,'D','G',B13);tri(receivedText1F,'K','L',B14);tri(receivedText1F,'C','V',B15);tri(receivedText1F,'/','+',B16);
   tri(receivedText1F,'+','F',L_11);
   L1=chartoint(L_11);L1=map(L1,1,100,0.2,1);
   t11=chartoint(T11);t12=chartoint(T12);t13=chartoint(T13);t14=chartoint(T14);t15=chartoint(T15);t16=chartoint(T16);
   r11=chartoint(R11);r12=chartoint(R12);r13=chartoint(R13);r14=chartoint(R14);r15=chartoint(R15);r16=chartoint(R16);
   g11=chartoint(G11);g12=chartoint(G12);g13=chartoint(G13);g14=chartoint(G14);g15=chartoint(G15);g16=chartoint(G16);
   b11=chartoint(B_11);b12=chartoint(B12);b13=chartoint(B13);b14=chartoint(B14);b15=chartoint(B15);b16=chartoint(B16);
   non=(int)receivedText1F[4]-48;
  
    if(in1==1) 
     {
         if(currentMillis - previousMillis11 >= t11*1000 )
            {  
               Serial.println("M1_1"); 
               previousMillis11 = currentMillis;
               if(L1==5)
               dynamique(1,r11,g11,b11,1);
               if(L1==4)
               dynamique(1,r11,g11,b11,1);
               if(L1==3)
               dynamique(1,r11,g11,b11,1);
               if(L1==2)
               dynamique(1,r11,g11,b11,0.3);
               if(L1==1)
               dynamique(1,r11,g11,b11,0.22);
               in1=2;
               previousMillis12 = previousMillis11;
            } 
      }
         
    if(in1==2) 
      {
          if(currentMillis - previousMillis12 >= t12*1000  )
            {  Serial.println("M1_2");
               previousMillis12 = currentMillis;
               if(L1==5)
               dynamique(1,r12,g12,b12,1);
               if(L1==4)
               dynamique(1,r12,g12,b12,0.82);
               if(L1==3)
               dynamique(1,r12,g12,b12,1);
               if(L1==2)
               dynamique(1,r12,g12,b12,0.33);
               if(L1==1)
               dynamique(1,r12,g12,b12,0.34);
               in1=3;
               previousMillis13 = previousMillis12;
            } 
      }
      
    if(in1==3) 
      {
          if(currentMillis - previousMillis13 >= t13*1000  )
            {  Serial.println("M1_3");
               previousMillis13 = currentMillis;
               if(L1==5)
               dynamique(1,r13,g13,b13,1);
               if(L1==4)
               dynamique(1,r13,g13,b13,0.66);
               if(L1==3)
               dynamique(1,r13,g13,b13,0.86);
               if(L1==2)
               dynamique(1,r13,g13,b13,0.49);
               if(L1==1)
               dynamique(1,r13,g13,b13,0.49);
               in1=4;
               previousMillis14 = previousMillis13;
            } 
      }

    if(in1==4) 
      {
          if(currentMillis - previousMillis14 >= t14*1000 )
            {
               Serial.println("M1_4");
               previousMillis14 = currentMillis;
               if(L1==5)
               dynamique(1,r14,g14,b14,1);
               if(L1==4)
               dynamique(1,r14,g14,b14,0.49);
               if(L1==3)
               dynamique(1,r14,g14,b14,0.84);
               if(L1==2)
               dynamique(1,r14,g14,b14,0.66);
               if(L1==1)
               dynamique(1,r14,g14,b14,0.84);
               in1=5;
               previousMillis15 = previousMillis14;
            } 
      }

    if(in1==5) 
      {
          if(currentMillis - previousMillis15 >= t15*1000  )
            {  Serial.println("M1_5");
               previousMillis15 = currentMillis;
               if(L1==5)
               dynamique(1,r15,g15,b15,1);
               if(L1==4)
               dynamique(1,r15,g15,b15,0.33);
               if(L1==3)
               dynamique(1,r15,g15,b15,0.1);
               if(L1==2)
               dynamique(1,r15,g15,b15,0.82);
               if(L1==1)
               dynamique(1,r15,g15,b15,0.86);
               in1=6;
               previousMillis16 = previousMillis15;
            } 
      }
            
    if(in1==6) 
      {
           if(currentMillis - previousMillis16 >= t16*1000  )
            {
             Serial.println("M1_6");
             previousMillis16 = currentMillis;
             if(L1==5)
               dynamique(1,r16,g16,b16,1);
               if(L1==4)
               dynamique(1,r16,g16,b16,0.2);
               if(L1==3)
               dynamique(1,r16,g16,b16,0.34);
               if(L1==2)
               dynamique(1,r16,g16,b16,0.1);
               if(L1==1)
               dynamique(1,r16,g16,b16,1);
             for(i=0;i<1000;i++)
             receivedText1F[i]=' ';
             in1=1;
             previousMillis11 = previousMillis16;
            }     
      }
    
    }

   
    
//---------------------------------------------------------------------------Module2 --------------------------------------------------------------------------------------------------------------   
if(receivedText2F[0]=='D' && receivedText2F[1]=='S' ) 
{          
  
   tri(receivedText2F,'A','Z',T21);tri(receivedText2F,'T','Y',T22);tri(receivedText2F,'O','P',T23);tri(receivedText2F,'G','H',T24);tri(receivedText2F,'L','W',T25);tri(receivedText2F,'V','B',T26);
   tri(receivedText2F,'Z','E',R21);tri(receivedText2F,'Y','U',R22);tri(receivedText2F,'P','Q',R23);tri(receivedText2F,'H','J',R24);tri(receivedText2F,'W','X',R25);tri(receivedText2F,'B','N',R26);
   tri(receivedText2F,'E','R',G21);tri(receivedText2F,'U','I',G22);tri(receivedText2F,'Q','D',G23);tri(receivedText2F,'J','K',G24);tri(receivedText2F,'X','C',G25);tri(receivedText2F,'N','/',G26);
   tri(receivedText2F,'R','T',B_21);tri(receivedText2F,'I','O',B22);tri(receivedText2F,'D','G',B23);tri(receivedText2F,'K','L',B24);tri(receivedText2F,'C','V',B25);tri(receivedText2F,'/','+',B26);
   tri(receivedText2F,'+','F',L_21);
   L2=chartoint(L_21);L2=map(L2,1,100,0.2,1);
   t21=chartoint(T21);t22=chartoint(T22);t23=chartoint(T23);t24=chartoint(T24);t25=chartoint(T25);t26=chartoint(T26);
   r21=chartoint(R21);r22=chartoint(R22);r23=chartoint(R23);r24=chartoint(R24);r25=chartoint(R25);r26=chartoint(R26);
   g21=chartoint(G21);g22=chartoint(G22);g23=chartoint(G23);g24=chartoint(G24);g25=chartoint(G25);g26=chartoint(G26);
   b21=chartoint(B_21);b22=chartoint(B22);b23=chartoint(B23);b24=chartoint(B24);b25=chartoint(B25);b26=chartoint(B26);
   non=(int)receivedText2F[4]-48;
  
    if(in2==1) 
     {
         if(currentMillis - previousMillis21 >= t21*1000 )
            {  
               Serial.println("M2_1"); 
               previousMillis21 = currentMillis;
               if(L2==5)
               dynamique(2,r21,g21,b21,1);
               if(L2==4)
               dynamique(2,r21,g21,b21,1);
               if(L2==3)
               dynamique(2,r21,g21,b21,1);
               if(L2==2)
               dynamique(2,r21,g21,b21,0.3);
               if(L2==1)
               dynamique(2,r21,g21,b21,0.22);
               in2=2;
               previousMillis22 = previousMillis21;
            } 
      }
         
    if(in2==2) 
      {
          if(currentMillis - previousMillis22 >= t22*1000  )
            {  Serial.println("M2_2");
               previousMillis22 = currentMillis;
               if(L2==5)
               dynamique(2,r22,g22,b22,1);
               if(L2==4)
               dynamique(2,r22,g22,b22,1);
               if(L2==3)
               dynamique(2,r22,g22,b22,1);
               if(L2==2)
               dynamique(2,r22,g22,b22,0.3);
               if(L2==1)
               dynamique(2,r22,g22,b22,0.22);
               in2=3;
               previousMillis23 = previousMillis22;
            } 
      }
      
    if(in2==3) 
      {
          if(currentMillis - previousMillis23 >= t23*1000  )
            {  Serial.println("M2_3");
               previousMillis23 = currentMillis;
               if(L2==5)
               dynamique(2,r23,g23,b23,1);
               if(L2==4)
               dynamique(2,r23,g23,b23,1);
               if(L2==3)
               dynamique(2,r23,g23,b23,1);
               if(L2==2)
               dynamique(2,r23,g23,b23,0.3);
               if(L2==1)
               dynamique(2,r23,g23,b23,0.22);
               in2=4;
               previousMillis24 = previousMillis23;
            } 
      }

    if(in2==4) 
      {
          if(currentMillis - previousMillis24 >= t24*1000 )
            {
               Serial.println("M2_4");
               previousMillis24 = currentMillis;
               if(L2==5)
               dynamique(2,r24,g24,b24,1);
               if(L2==4)
               dynamique(2,r24,g24,b24,1);
               if(L2==3)
               dynamique(2,r24,g24,b24,1);
               if(L2==2)
               dynamique(2,r24,g24,b24,0.3);
               if(L2==1)
               dynamique(2,r24,g24,b24,0.22);
               in2=5;
               previousMillis25 = previousMillis24;
            } 
      }

    if(in2==5) 
      {
          if(currentMillis - previousMillis25 >= t25*1000  )
            {  Serial.println("M2_5");
               previousMillis25 = currentMillis;
               if(L2==5)
               dynamique(2,r25,g25,b25,1);
               if(L2==4)
               dynamique(2,r25,g25,b25,1);
               if(L2==3)
               dynamique(2,r25,g25,b25,1);
               if(L2==2)
               dynamique(2,r25,g25,b25,0.3);
               if(L2==1)
               dynamique(2,r25,g25,b25,0.22);
               in2=6;
               previousMillis26 = previousMillis25;
            } 
      }
            
    if(in2==6) 
      {
           if(currentMillis - previousMillis26 >= t26*1000  )
            {
             Serial.println("M2_6");
             previousMillis26 = currentMillis;
                if(L2==5)
               dynamique(2,r26,g26,b26,1);
               if(L2==4)
               dynamique(2,r26,g26,b26,1);
               if(L2==3)
               dynamique(2,r26,g26,b26,1);
               if(L2==2)
               dynamique(2,r26,g26,b26,0.3);
               if(L2==1)
               dynamique(2,r26,g26,b26,0.22);
             for(i=0;i<1000;i++)
             receivedText2F[i]=' ';
             in2=1;
             previousMillis21 = previousMillis26;
            }     
      }
    
    }
 
//---------------------------------------------------------------------------Module3--------------------------------------------------------------------------------------------------------------
 if(receivedText3F[0]=='D' && receivedText3F[1]=='S' ) 
{          
  
   tri(receivedText3F,'A','Z',T31);tri(receivedText3F,'T','Y',T32);tri(receivedText3F,'O','P',T33);tri(receivedText3F,'G','H',T34);tri(receivedText3F,'L','W',T35);tri(receivedText3F,'V','B',T36);
   tri(receivedText3F,'Z','E',R31);tri(receivedText3F,'Y','U',R32);tri(receivedText3F,'P','Q',R33);tri(receivedText3F,'H','J',R34);tri(receivedText3F,'W','X',R35);tri(receivedText3F,'B','N',R36);
   tri(receivedText3F,'E','R',G31);tri(receivedText3F,'U','I',G32);tri(receivedText3F,'Q','D',G33);tri(receivedText3F,'J','K',G34);tri(receivedText3F,'X','C',G35);tri(receivedText3F,'N','/',G36);
   tri(receivedText3F,'R','T',B_31);tri(receivedText3F,'I','O',B32);tri(receivedText3F,'D','G',B33);tri(receivedText3F,'K','L',B34);tri(receivedText3F,'C','V',B35);tri(receivedText3F,'/','+',B36);
   tri(receivedText3F,'+','F',L_31);
   L3=chartoint(L_31);L3=map(L3,1,100,0.2,1);
   t31=chartoint(T31);t32=chartoint(T32);t33=chartoint(T33);t34=chartoint(T34);t35=chartoint(T35);t36=chartoint(T36);
   r31=chartoint(R31);r32=chartoint(R32);r33=chartoint(R33);r34=chartoint(R34);r35=chartoint(R35);r36=chartoint(R36);
   g31=chartoint(G31);g32=chartoint(G32);g33=chartoint(G33);g34=chartoint(G34);g35=chartoint(G35);g36=chartoint(G36);
   b31=chartoint(B_31);b32=chartoint(B32);b33=chartoint(B33);b34=chartoint(B34);b35=chartoint(B35);b36=chartoint(B36);
   non=(int)receivedText3F[4]-48;
  
    if(in3==1) 
     {
         if(currentMillis - previousMillis31 >= t31*1000 )
            {  
               Serial.println("M3_1"); 
               previousMillis31 = currentMillis;
               if(L3==5)
               dynamique(3,r31,g31,b31,1);
               if(L3==4)
               dynamique(3,r31,g31,b31,1);
               if(L3==3)
               dynamique(3,r31,g31,b31,1);
               if(L3==2)
               dynamique(3,r31,g31,b31,0.3);
               if(L3==1)
               dynamique(3,r31,g31,b31,0.22);
               in3=2;
               previousMillis32 = previousMillis31;
            } 
      }
         
    if(in3==2) 
      {
          if(currentMillis - previousMillis32 >= t32*1000  )
            {  Serial.println("M3_2");
               previousMillis32 = currentMillis;
               if(L3==5)
               dynamique(3,r32,g32,b32,1);
               if(L3==4)
               dynamique(3,r32,g32,b32,1);
               if(L3==3)
               dynamique(3,r32,g32,b32,1);
               if(L3==2)
               dynamique(3,r32,g32,b32,0.3);
               if(L3==1)
               dynamique(3,r32,g32,b32,0.22);
               in3=3;
               previousMillis33 = previousMillis32;
            } 
      }
      
    if(in3==3) 
      {
          if(currentMillis - previousMillis33 >= t33*1000  )
            {  Serial.println("M3_3");
               previousMillis33 = currentMillis;
               if(L3==5)
               dynamique(3,r33,g33,b33,1);
               if(L3==4)
               dynamique(3,r33,g33,b33,1);
               if(L3==3)
               dynamique(3,r33,g33,b33,1);
               if(L3==2)
               dynamique(3,r33,g33,b33,0.3);
               if(L3==1)
               dynamique(3,r33,g33,b33,0.22);
               in3=4;
               previousMillis34 = previousMillis33;
            } 
      }

    if(in3==4) 
      {
          if(currentMillis - previousMillis34 >= t34*1000 )
            {
               Serial.println("M3_4");
               previousMillis34 = currentMillis;
               if(L3==5)
               dynamique(3,r34,g34,b34,1);
               if(L3==4)
               dynamique(3,r34,g34,b34,1);
               if(L3==3)
               dynamique(3,r34,g34,b34,1);
               if(L3==2)
               dynamique(3,r34,g34,b34,0.3);
               if(L3==1)
               dynamique(3,r34,g34,b34,0.22);
               in3=5;
               previousMillis35 = previousMillis34;
            } 
      }

    if(in3==5) 
      {
          if(currentMillis - previousMillis35 >= t35*1000  )
            {  Serial.println("M3_5");
               previousMillis35 = currentMillis;
               if(L3==5)
               dynamique(3,r35,g35,b35,1);
               if(L3==4)
               dynamique(3,r35,g35,b35,1);
               if(L3==3)
               dynamique(3,r35,g35,b35,1);
               if(L3==2)
               dynamique(3,r35,g35,b35,0.3);
               if(L3==1)
               dynamique(3,r35,g35,b35,0.22);
               in3=6;
               previousMillis36 = previousMillis35;
            } 
      }
            
    if(in3==6) 
      {
           if(currentMillis - previousMillis36 >= t36*1000  )
            {
             Serial.println("M3_6");
             previousMillis36 = currentMillis;
              if(L3==5)
               dynamique(3,r36,g36,b36,1);
               if(L3==4)
               dynamique(3,r36,g36,b36,1);
               if(L3==3)
               dynamique(3,r36,g36,b36,1);
               if(L3==2)
               dynamique(3,r36,g36,b36,0.3);
               if(L3==1)
               dynamique(3,r36,g36,b36,0.22);
             for(i=0;i<1000;i++)
             receivedText3F[i]=' ';
             in3=1;
             previousMillis31 = previousMillis36;
            }     
      }
    
    }

//---------------------------------------------------------------------------Module4--------------------------------------------------------------------------------------------------------------
 if(receivedText4F[0]=='D' && receivedText4F[1]=='S' ) 
{          
  
   tri(receivedText4F,'A','Z',T41);tri(receivedText4F,'T','Y',T42);tri(receivedText4F,'O','P',T43);tri(receivedText4F,'G','H',T44);tri(receivedText4F,'L','W',T45);tri(receivedText4F,'V','B',T46);
   tri(receivedText4F,'Z','E',R41);tri(receivedText4F,'Y','U',R42);tri(receivedText4F,'P','Q',R43);tri(receivedText4F,'H','J',R44);tri(receivedText4F,'W','X',R45);tri(receivedText4F,'B','N',R46);
   tri(receivedText4F,'E','R',G41);tri(receivedText4F,'U','I',G42);tri(receivedText4F,'Q','D',G43);tri(receivedText4F,'J','K',G44);tri(receivedText4F,'X','C',G45);tri(receivedText4F,'N','/',G46);
   tri(receivedText4F,'R','T',B_41);tri(receivedText4F,'I','O',B42);tri(receivedText4F,'D','G',B43);tri(receivedText4F,'K','L',B44);tri(receivedText4F,'C','V',B45);tri(receivedText4F,'/','+',B46);
   tri(receivedText4F,'+','F',L_41);
   L4=chartoint(L_41);L4=map(L4,1,100,0.2,1);
   t41=chartoint(T41);t42=chartoint(T42);t43=chartoint(T43);t44=chartoint(T44);t45=chartoint(T45);t46=chartoint(T46);
   r41=chartoint(R41);r42=chartoint(R42);r43=chartoint(R43);r44=chartoint(R44);r45=chartoint(R45);r46=chartoint(R46);
   g41=chartoint(G41);g42=chartoint(G42);g43=chartoint(G43);g44=chartoint(G44);g45=chartoint(G45);g46=chartoint(G46);
   b41=chartoint(B_41);b42=chartoint(B42);b43=chartoint(B43);b44=chartoint(B44);b45=chartoint(B45);b46=chartoint(B46);
   non=(int)receivedText4F[4]-48;
  
    if(in4==1) 
     {
         if(currentMillis - previousMillis41 >= t41*1000 )
            {  
               Serial.println("M4_1"); 
               previousMillis41 = currentMillis;
               if(L4==5)
               dynamique(4,r41,g41,b41,1);
               if(L4==4)
               dynamique(4,r41,g41,b41,1);
               if(L4==3)
               dynamique(4,r41,g41,b41,1);
               if(L4==2)
               dynamique(4,r41,g41,b41,0.3);
               if(L4==1)
               dynamique(4,r41,g41,b41,0.22);
               in4=2;
               previousMillis42 = previousMillis41;
            } 
      }
         
    if(in4==2) 
      {
          if(currentMillis - previousMillis42 >= t42*1000  )
            {  Serial.println("M4_2");
               previousMillis42 = currentMillis;
               if(L4==5)
               dynamique(4,r42,g42,b42,1);
               if(L4==4)
               dynamique(4,r42,g42,b42,1);
               if(L4==3)
               dynamique(4,r42,g42,b42,1);
               if(L4==2)
               dynamique(4,r42,g42,b42,0.3);
               if(L4==1)
               dynamique(4,r42,g42,b42,0.22);
               in4=3;
               previousMillis43 = previousMillis42;
            } 
      }
      
    if(in4==3) 
      {
          if(currentMillis - previousMillis43 >= t43*1000  )
            {  Serial.println("M4_3");
               previousMillis43 = currentMillis;
                if(L4==5)
               dynamique(4,r43,g43,b43,1);
               if(L4==4)
               dynamique(4,r43,g43,b43,1);
               if(L4==3)
               dynamique(4,r43,g43,b43,1);
               if(L4==2)
               dynamique(4,r43,g43,b43,0.3);
               if(L4==1)
               dynamique(4,r43,g43,b43,0.22);
               in4=4;
               previousMillis44 = previousMillis43;
            } 
      }

    if(in4==4) 
      {
          if(currentMillis - previousMillis44 >= t44*1000 )
            {
               Serial.println("M4_4");
               previousMillis44 = currentMillis;
              if(L4==5)
               dynamique(4,r44,g44,b44,1);
               if(L4==4)
               dynamique(4,r44,g44,b44,1);
               if(L4==3)
               dynamique(4,r44,g44,b44,1);
               if(L4==2)
               dynamique(4,r44,g44,b44,0.3);
               if(L4==1)
               dynamique(4,r44,g44,b44,0.22);
               in4=5;
               previousMillis45 = previousMillis44;
            } 
      }

    if(in4==5) 
      {
          if(currentMillis - previousMillis45 >= t45*1000  )
            {  Serial.println("M4_5");
               previousMillis45 = currentMillis;
               if(L4==5)
               dynamique(4,r45,g45,b45,1);
               if(L4==4)
               dynamique(4,r45,g45,b45,1);
               if(L4==3)
               dynamique(4,r45,g45,b45,1);
               if(L4==2)
               dynamique(4,r45,g45,b45,0.3);
               if(L4==1)
               dynamique(4,r45,g45,b45,0.22);
               in4=6;
               previousMillis46 = previousMillis45;
            } 
      }
            
    if(in4==6) 
      {
           if(currentMillis - previousMillis46 >= t46*1000  )
            {
             Serial.println("M4_6");
             previousMillis46 = currentMillis;
                if(L4==5)
               dynamique(4,r46,g46,b46,1);
               if(L4==4)
               dynamique(4,r46,g46,b46,1);
               if(L4==3)
               dynamique(4,r46,g46,b46,1);
               if(L4==2)
               dynamique(4,r46,g46,b46,0.3);
               if(L4==1)
               dynamique(4,r46,g46,b46,0.22);
             for(i=0;i<1000;i++)
             receivedText4F[i]=' ';
             in4=1;
             previousMillis41 = previousMillis46;
            }     
      }
    
    }
       
//---------------------------------------------------------------------------Module5--------------------------------------------------------------------------------------------------------------
 if(receivedText5F[0]=='D' && receivedText5F[1]=='S' ) 
{          
  
   tri(receivedText5F,'A','Z',T51);tri(receivedText5F,'T','Y',T52);tri(receivedText5F,'O','P',T53);tri(receivedText5F,'G','H',T54);tri(receivedText5F,'L','W',T55);tri(receivedText5F,'V','B',T56);
   tri(receivedText5F,'Z','E',R51);tri(receivedText5F,'Y','U',R52);tri(receivedText5F,'P','Q',R53);tri(receivedText5F,'H','J',R54);tri(receivedText5F,'W','X',R55);tri(receivedText5F,'B','N',R56);
   tri(receivedText5F,'E','R',G51);tri(receivedText5F,'U','I',G52);tri(receivedText5F,'Q','D',G53);tri(receivedText5F,'J','K',G54);tri(receivedText5F,'X','C',G55);tri(receivedText5F,'N','/',G56);
   tri(receivedText5F,'R','T',B_51);tri(receivedText5F,'I','O',B52);tri(receivedText5F,'D','G',B53);tri(receivedText5F,'K','L',B54);tri(receivedText5F,'C','V',B55);tri(receivedText5F,'/','+',B56);
   tri(receivedText5F,'+','F',L_51);
   L5=chartoint(L_51);L5=map(L5,1,100,0.2,1);
   t51=chartoint(T51);t52=chartoint(T52);t53=chartoint(T43);t54=chartoint(T54);t55=chartoint(T55);t56=chartoint(T56);
   r51=chartoint(R51);r52=chartoint(R52);r53=chartoint(R43);r54=chartoint(R54);r55=chartoint(R55);r56=chartoint(R56);
   g51=chartoint(G51);g52=chartoint(G52);g53=chartoint(G43);g54=chartoint(G54);g55=chartoint(G55);g56=chartoint(G56);
   b51=chartoint(B_51);b52=chartoint(B52);b53=chartoint(B43);b54=chartoint(B54);b55=chartoint(B55);b56=chartoint(B56);
   non=(int)receivedText5F[4]-48;
  
    if(in5==1) 
     {
         if(currentMillis - previousMillis51 >= t51*1000 )
            {  
               Serial.println("M5_1"); 
               previousMillis51 = currentMillis;
               if(L5==5)
               dynamique(5,r51,g51,b51,1);
               if(L5==4)
               dynamique(5,r51,g51,b51,1);
               if(L5==3)
               dynamique(5,r51,g51,b51,1);
               if(L5==2)
               dynamique(5,r51,g51,b51,0.3);
               if(L5==1)
               dynamique(5,r51,g51,b51,0.22);
               in5=2;
               previousMillis52 = previousMillis51;
            } 
      }
         
    if(in5==2) 
      {
          if(currentMillis - previousMillis52 >= t52*1000  )
            {  Serial.println("M5_2");
               previousMillis52 = currentMillis;
               if(L5==5)
               dynamique(5,r52,g52,b52,1);
               if(L5==4)
               dynamique(5,r52,g52,b52,1);
               if(L5==3)
               dynamique(5,r52,g52,b52,1);
               if(L5==2)
               dynamique(5,r52,g52,b52,0.3);
               if(L5==1)
               dynamique(5,r52,g52,b52,0.22);
               in5=3;
               previousMillis53 = previousMillis52;
            } 
      }
      
    if(in5==3) 
      {
          if(currentMillis - previousMillis53 >= t53*1000  )
            {  Serial.println("M5_3");
               previousMillis53 = currentMillis;
              if(L5==5)
               dynamique(5,r53,g53,b53,1);
               if(L5==4)
               dynamique(5,r53,g53,b53,1);
               if(L5==3)
               dynamique(5,r53,g53,b53,1);
               if(L5==2)
               dynamique(5,r53,g53,b53,0.3);
               if(L5==1)
               dynamique(5,r53,g53,b53,0.22);
               in5=4;
               previousMillis54 = previousMillis53;
            } 
      }

    if(in5==4) 
      {
          if(currentMillis - previousMillis54 >= t54*1000 )
            {
               Serial.println("M5_4");
               previousMillis54 = currentMillis;
               if(L5==5)
               dynamique(5,r54,g54,b54,1);
               if(L5==4)
               dynamique(5,r54,g54,b54,1);
               if(L5==3)
               dynamique(5,r54,g54,b54,1);
               if(L5==2)
               dynamique(5,r54,g54,b54,0.3);
               if(L5==1)
               dynamique(5,r54,g54,b54,0.22);
               in5=5;
               previousMillis55 = previousMillis54;
            } 
      }

    if(in5==5) 
      {
          if(currentMillis - previousMillis55 >= t55*1000  )
            {  Serial.println("M5_5");
               previousMillis55 = currentMillis;
               if(L5==5)
               dynamique(5,r55,g55,b55,1);
               if(L5==4)
               dynamique(5,r55,g55,b55,1);
               if(L5==3)
               dynamique(5,r55,g55,b55,1);
               if(L5==2)
               dynamique(5,r55,g55,b55,0.3);
               if(L5==1)
               dynamique(5,r55,g55,b55,0.22);
               in5=6;
               previousMillis56 = previousMillis55;
            } 
      }
            
    if(in5==6) 
      {
           if(currentMillis - previousMillis56 >= t56*1000  )
            {
             Serial.println("M5_6");
             previousMillis56 = currentMillis;
               if(L5==5)
               dynamique(5,r56,g56,b56,1);
               if(L5==4)
               dynamique(5,r56,g56,b56,1);
               if(L5==3)
               dynamique(5,r56,g56,b56,1);
               if(L5==2)
               dynamique(5,r56,g56,b56,0.3);
               if(L5==1)
               dynamique(5,r56,g56,b56,0.22);
             for(i=0;i<1000;i++)
             receivedText5F[i]=' ';
             in5=1;
             previousMillis51 = previousMillis56;
            }     
      }
    
    }  
       
//---------------------------------------------------------------------------Module6 --------------------------------------------------------------------------------------------------------------
 if(receivedText6_F[0]=='D' && receivedText6_F[1]=='S' ) 
{          
  
   tri(receivedText6_F,'A','Z',T61);tri(receivedText6_F,'T','Y',T62);tri(receivedText6_F,'O','P',T63);tri(receivedText6_F,'G','H',T64);tri(receivedText6_F,'L','W',T65);tri(receivedText6_F,'V','B',T66);
   tri(receivedText6_F,'Z','E',R61);tri(receivedText6_F,'Y','U',R62);tri(receivedText6_F,'P','Q',R63);tri(receivedText6_F,'H','J',R64);tri(receivedText6_F,'W','X',R65);tri(receivedText6_F,'B','N',R66);
   tri(receivedText6_F,'E','R',G61);tri(receivedText6_F,'U','I',G62);tri(receivedText6_F,'Q','D',G63);tri(receivedText6_F,'J','K',G64);tri(receivedText6_F,'X','C',G65);tri(receivedText6_F,'N','/',G66);
   tri(receivedText6_F,'R','T',B_61);tri(receivedText6_F,'I','O',B62);tri(receivedText6_F,'D','G',B63);tri(receivedText6_F,'K','L',B64);tri(receivedText6_F,'C','V',B65);tri(receivedText6_F,'/','+',B66);
   tri(receivedText6_F,'+','F',L_61);
   L6=chartoint(L_61);L6=map(L6,1,100,0.2,1);
   t61=chartoint(T61);t62=chartoint(T62);t63=chartoint(T63);t64=chartoint(T64);t65=chartoint(T65);t66=chartoint(T66);
   r61=chartoint(R61);r62=chartoint(R62);r63=chartoint(R63);r64=chartoint(R64);r65=chartoint(R65);r66=chartoint(R66);
   g61=chartoint(G61);g62=chartoint(G62);g63=chartoint(G63);g64=chartoint(G64);g65=chartoint(G65);g66=chartoint(G66);
   b61=chartoint(B_61);b62=chartoint(B62);b63=chartoint(B63);b64=chartoint(B64);b65=chartoint(B65);b66=chartoint(B66);
   non=(int)receivedText6_F[4]-48;
  
    if(in6==1) 
     {
         if(currentMillis - previousMillis61 >= t61*1000 )
            {  
               Serial.println("M6_1"); 
               previousMillis61 = currentMillis;
               if(L6==5)
               dynamique(6,r61,g61,b61,1);
               if(L6==4)
               dynamique(6,r61,g61,b61,1);
               if(L6==3)
               dynamique(6,r61,g61,b61,1);
               if(L6==2)
               dynamique(6,r61,g61,b61,0.3);
               if(L6==1)
               dynamique(6,r61,g61,b61,0.22);
               in6=2;
               previousMillis62 = previousMillis61;
            } 
      }
         
    if(in6==2) 
      {
          if(currentMillis - previousMillis62 >= t62*1000  )
            {  Serial.println("M6_2");
               previousMillis62 = currentMillis;
               if(L6==5)
               dynamique(6,r62,g62,b62,1);
               if(L6==4)
               dynamique(6,r62,g62,b62,1);
               if(L6==3)
               dynamique(6,r62,g62,b62,1);
               if(L6==2)
               dynamique(6,r62,g62,b62,0.3);
               if(L6==1)
               dynamique(6,r62,g62,b62,0.22);
               in6=3;
               previousMillis63 = previousMillis62;
            } 
      }
      
    if(in6==3) 
      {
          if(currentMillis - previousMillis63 >= t63*1000  )
            {  Serial.println("M6_3");
               previousMillis63 = currentMillis;
               if(L6==5)
               dynamique(6,r63,g63,b63,1);
               if(L6==4)
               dynamique(6,r63,g63,b63,1);
               if(L6==3)
               dynamique(6,r63,g63,b63,1);
               if(L6==2)
               dynamique(6,r63,g63,b63,0.3);
               if(L6==1)
               dynamique(6,r63,g63,b63,0.22);
               in6=4;
               previousMillis64 = previousMillis63;
            } 
      }

    if(in6==4) 
      {
          if(currentMillis - previousMillis64 >= t64*1000 )
            {
               Serial.println("M6_4");
               previousMillis64 = currentMillis;
               if(L6==5)
               dynamique(6,r64,g64,b64,1);
               if(L6==4)
               dynamique(6,r64,g64,b64,1);
               if(L6==3)
               dynamique(6,r64,g64,b64,1);
               if(L6==2)
               dynamique(6,r64,g64,b64,0.3);
               if(L6==1)
               dynamique(6,r64,g64,b64,0.22);
               in6=5;
               previousMillis65 = previousMillis64;
            } 
      }

    if(in6==5) 
      {
          if(currentMillis - previousMillis65 >= t65*1000  )
            {  Serial.println("M6_5");
               previousMillis65 = currentMillis;
               if(L6==5)
               dynamique(6,r65,g65,b65,1);
               if(L6==4)
               dynamique(6,r65,g65,b65,1);
               if(L6==3)
               dynamique(6,r65,g65,b65,1);
               if(L6==2)
               dynamique(6,r65,g65,b65,0.3);
               if(L6==1)
               dynamique(6,r65,g65,b65,0.22);
               in6=6;
               previousMillis66 = previousMillis65;
            } 
      }
            
    if(in6==6) 
      {
           if(currentMillis - previousMillis66 >= t66*1000  )
            {
             Serial.println("M6_6");
             previousMillis66 = currentMillis;
               if(L6==5)
               dynamique(6,r66,g66,b66,1);
               if(L6==4)
               dynamique(6,r66,g66,b66,1);
               if(L6==3)
               dynamique(6,r66,g66,b66,1);
               if(L6==2)
               dynamique(6,r66,g66,b66,0.3);
               if(L6==1)
               dynamique(6,r66,g66,b66,0.22);
             for(i=0;i<1000;i++)
             receivedText6_F[i]=' ';
             in6=1;
             previousMillis61 = previousMillis66;
            }     
      }
    
    }    
 
}



void turnon(int k,int r,int g , int b,float l)
{
  if(k==1){analogWrite(M11,r);analogWrite(M12,g);analogWrite(M13,b);}
  if(k==2){analogWrite(M21,r);analogWrite(M22,g);analogWrite(M23,b);}
  if(k==3){analogWrite(M31,r);analogWrite(M32,g);analogWrite(M33,b);}
  if(k==4){analogWrite(M41,r);analogWrite(M42,g);analogWrite(M43,b);}
  if(k==5){analogWrite(M51,r);analogWrite(M52,g);analogWrite(M53,b);}
  if(k==6){analogWrite(M61,r);analogWrite(M62,g);analogWrite(M63,b);}
  
}


void turnoff(int k)
{ if(k==1){analogWrite(M11,0);analogWrite(M12,0);analogWrite(M13,0);}
  if(k==2){analogWrite(M21,0);analogWrite(M22,0);analogWrite(M23,0);}
  if(k==3){analogWrite(M31,0);analogWrite(M32,0);analogWrite(M33,0);}
  if(k==4){analogWrite(M41,0);analogWrite(M42,0);analogWrite(M43,0);}
  if(k==5){analogWrite(M51,0);analogWrite(M52,0);analogWrite(M53,0);}
  if(k==6){analogWrite(M61,0);analogWrite(M62,0);analogWrite(M63,0);}
}

int chartoint(char A[])
{int a ;
 // for(i=0;i<20);i++)
//   if(!isDigit(A[i]))A[i]=" ";
   a=atoi(A);
   return(a);
    }
void tri(char T[],char D, char F,char V[])
{ 
  for(i=0;i<strlen(T);i++)
 {
 if(T[i]==D) 
  {k=i+1;
    while(T[k]!=F)
    {
      V[j]=T[k];
      k++;
      j++;
      
      }
      k=0;j=0;i=0;break;
        }
     }
 }

 void dynamique(int k,int r,int g , int b,float l)
 {
  if(k==1){analogWrite(M11,r*l);analogWrite(M12,g*l);analogWrite(M13,b*l);}
  if(k==2){analogWrite(M21,r*l);analogWrite(M22,g*l);analogWrite(M23,b*l);}
  if(k==3){analogWrite(M31,r*l);analogWrite(M32,g*l);analogWrite(M33,b*l);}
  if(k==4){analogWrite(M41,r*l);analogWrite(M42,g*l);analogWrite(M43,b*l);}
  if(k==5){analogWrite(M51,r*l);analogWrite(M52,g*l);analogWrite(M53,b*l);}
  if(k==6){analogWrite(M61,r*l);analogWrite(M62,g*l);analogWrite(M63,b*l);}
  }
