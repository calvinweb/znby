#define S2 5
#define S3 6
void setup(){
  pinMode(S2,OUTPUT);
  pinMode(S3,OUTPUT);
  
}
int pa=0
void time(){

}
void red(){
  pd=0
  pa=0
  digitalWrite(S1,0)
  digitalWrite(S2,0);
    
  MsTimer2::set(10, onTimer); //设置中断，每1000ms进入一次中断服务程序 onTimer()
  MsTimer2::start(); 
  while(pa!=0);
}
