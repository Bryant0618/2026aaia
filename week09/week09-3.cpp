PImage img; // 宣告變數(圖)

void setup() {
  size(600, 500);
  img = loadImage("balloon.png");
}

float x,y,s=0.1;
void draw() {
  background(#FFFFF2); // 背景:淡黃色
  //image(img, mouseX - 96 / 2, mouseY - 132, 96, 132);
  if(mousePressed){
    s=s*1.05;
    image(img, mouseX - 96 / 2*s, mouseY - 132*s, 96*s, 132*s);
  }
  else s=0.1;
}
