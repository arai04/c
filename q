1.読み込んだ整数値が奇数か偶数か判別する（好きなだけ繰り返せる）
2.整数値を次々と読み込んで合計と平均値を表示
3.二つの整数値を読み込んで、小さい方の数以上で大きい方の数以下の
  全整数を加えた数を表示する

  実行例:
  2つの整数を入力してください。
  整数a :37
  整数b :28
  28以上37以下の全整数の和は325です。

4.読み込まれた整数値以下である正の2のべき乗の数を順に表示する
  実行例:
  正の整数を入力してください :24
  2 4 8 16


5.非負の値を読み込んで逆順に表示する

  実行例:
  正の整数を入力してください :-1
  正でない数を入力しないでください。
  正の整数を入力してください :1963
  1963を逆から読むと3691です。

6.1234567890を読み込んだ整数値の個数だけ繰り返す

  実行例:
  正の整数を入力してください :25
  1234567890123456789012345

7.身長と標準体重の対応表を表示する。
  なお、表示する身長の範囲（開始値、終了値、増分）は
  整数値として読み込んで、標準体重は少数部を2桁表示
  （(身長 - 100) * 0.9 = 標準体重）

  実行例:
  何cmから : 155
  何cmまで : 190
  何cmごと : 5
  155cm  49.50kg
  160cm  54.00kg
  --以下略--

8.整数値を読み込んでその個数だけ*を表示する
  ただし5個表示するごとに改行すること

9.整数値を2つ読み込み、その値を縦と横の長さに持つ長方形を表示

  実行例:
  長方形を作ります。
  高さ : 3
  横幅 : 7
  *******
  *******
  *******

10.左下が直角の直角二等辺三角形を表示

  実行例:
  短辺 : 5
  *
  **
  ***
  ****
  *****
11.左下が直角の直角二等辺三角形を表示

  実行例:
  短辺 : 5
  
      *
     **
    ***
   ****
  *****

12.読み込んだ整数の段数を持つ下向き数字ピラミッドを表示する

  実行例:
  何段ですか : 3
  33333
   222
    1

13.配列の要素の値をキーボードから読み込みそれをint[6]型の配列の各要素に値を読み込ん   で、その値を表示した後配列の全要素を反転する
  実行例:
  x[0] : 1
  x[1] : 2
  x[2] : 3
  x[3] : 4
  x[4] : 5
  x[5] : 6
  x[6] : 7
  反転しました。
  x[0] = 7
  x[1] = 6
  x[2] = 5
  x[3] = 4
  x[4] = 3
  x[5] = 2
  x[6] = 1

14.4行3列の行列と3行4列の行列の積を求めるプログラムを作成、各構成要素の値はキーボー
   ドから読み込む
