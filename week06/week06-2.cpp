void setup() {
  size(800, 500); // 視窗大小 800 x 500
}

int [][] a = new int[10][16]; // Java 的陣列寫法，跟 C/C++ 不同

void mouseDragged() { // mouse 按下去時，執行這段
  int i = mouseY / 50, j = mouseX / 50; // 計算 i, j 座標
  a[i][j] = 120; // 數字變大了
}

void draw() {
  background(255);
  for (int i = 0; i < 10; i++) { // 上週是 for y 現在改成 for i 左手 i
    for (int j = 0; j < 16; j++) { // 上週是 for x 現在改成 for j 右手 j
      if (a[i][j] > 0) {
        fill(#5DFF1F, a[i][j] * 4); // 若陣列有值，設綠色 (含透明度)
        a[i][j]--;
      } else {
        fill(255); // 沒有值，設白色
      }
      rect(j * 50, i * 50, 50, 50); // 畫四邊形
    }
  }
}
