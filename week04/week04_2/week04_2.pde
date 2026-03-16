//week04-2 for(迴圈)+if(判斷)
void setup(){//設定函式
  size(800, 200);  
}
void draw(){//畫圖函式
  for(int x=0; x<800; x+=100){//for(迴圈)
  //下面的if是判斷mouse的X座標是否夾在x...x+100中間
    if(x<mouseX && mouseX <x+100)fill(#FF8F05);//設定橘色
    else fill(#FFFFF2);//否則設定填充淡黃色
    rect(x, 0, 100, 100);
  }
}
