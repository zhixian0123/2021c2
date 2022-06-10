void setup()
{
  size(500,500);
}
int []bx=new int[100];//旗子的座標 陣列
int []by=new int[100];//旗子的座標 陣列
int N=0;//棋子的數字,一開始0個棋子
void draw()
{
  background(#03FABE);
  for(int y=50;y<500;y+=50)
  {
    line(0,y,500,y);
  }
  for(int x=50;x<500;x+=50)
  {
    line(x,0,x,500);
  }
  fill(0);
  for(int i=0;i<N;i++)
  {
    if(i%2==0) fill(0);
    else fill(255);
    ellipse(bx[i],by[i],40,40);
  }
  if(N%2==0) fill(0);
  else fill(255);
  ellipse(mouseX,mouseY,40,40);
}
void mousePressed()
{
  bx[N]=mouseX; by[N]=mouseY;
  N++;
}
