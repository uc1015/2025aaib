//week13_5_sound 要播放音樂
//要先安裝Sketch-Library-Manage Libraries...
//找sound下載Sound 的函式 點Install
import processing.sound.*;//使用聲音的外掛
SoundFile mySound, monkey,sword;//宣告變數 mySound 他是SoundFile
void setup(){
  size(400,400);//視窗大小400x400
  monkey=new SoundFile(this, "Monkey 1.mp3");
  sword=new SoundFile(this, "sword slash.mp3");
  mySound=new SoundFile(this, "Intro Song_Final.mp3");
  mySound.play();//再播放剛剛讀入的聲音檔
  }
  void mousePressed(){
    if(mouseButton==LEFT)monkey.play();
    if(mouseButton==RIGHT)sword.play();
  }
  void draw(){
    
  } //裡面是空的畫圖,要寫他
