import 'package:flutter/material.dart';
import 'package:flutter_chess_board/flutter_chess_board.dart';

void main() {
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      debugShowCheckedModeBanner: false,
      home: Scaffold(
        appBar: AppBar(
        title: Text("CHESS"),
        backgroundColor: Colors.brown,
        centerTitle: true,
        ),
        body: Center(
          child: ChessBoard(
            boardType: BoardType.darkBrown,
            size: 350.0,
            onMove: (move) {
              print("Sound");
            },
            onCheckMate: (color) {
              print(color);
            },
            onDraw: () {
              print("DRAW!");
            },
          ),
        ),
      ),
    );
  }
}
