void setup()//設定
{
  size(400,300);
}
int x=100, y=150, x2=300, y2=150;//座標
int vx=0, vy=0, vx2=0, vy2=0;
void draw()//畫圖60次/秒
{
  background(#03FABE);
  ellipse(x,y,30,30);//圓
  ellipse(x2,y2,30,30);
  x+=vx; y+=vy;
  x2+=vx2; y2+=vy2;
}
void keyPressed()//按鍵,一次只能一個人
{
  if(key=='w') vy=-2;
  if(key=='s') vy=+2;
  if(key=='a') vx=-2;
  if(key=='d') vx=+2;
  if(keyCode==UP) vy2=-2;
  if(keyCode==DOWN) vy2=+2;
  if(keyCode==LEFT) vx2=-2;
  if(keyCode==RIGHT) vx2=+2;
}
