//week12_1_happy_bubblue_3D_part1
void setup(){
  size(300,300,P3D);//開啟3D功能
}
int[][]state=new int[6][6];
void draw(){
  background(255,255,0);//黃色背景
  ortho();//垂直投影(就會全部都正正的)
  lights();//打光,可讓3D模型更立體
  noStroke();//不要有線
  fill(#FF8BEA);//球是粉紅色
  
  for(int i=0; i<6; i++){
    for(int j=0; j<6; j++){
  pushMatrix();//備分矩陣
  translate(25+j*50, 25+i*50);//照著滑鼠的座標動
  if(state[i][j]==0)sphere(23);//沒按
  else sphere(10);//有按
  popMatrix();//還原矩陣
    }
  }
}
void mousePressed(){
  int j=(mouseX)/50, i=(mouseY)/50;//座標換算:按哪一個
  state[i][j]=1-state[i][j];
}
