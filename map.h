#pragma once
#include <SFML\Graphics.hpp>

using namespace sf;
const int HEIGHT_MAP = 126;//������ ����� ������
const int WIDTH_MAP = 140;//������ ����� ������ 
String TileMap[HEIGHT_MAP] = {




	"00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000",//1
	"0                               0 0                        0                                              0                                0",//2
	"0                               0 0                        0                                              0                                0",//3
	"0                               000                        0000000000000000000000000000000000000000000000 0                                0",//4
	"0                                7                         0                                            0 0                                0",//5
	"0                                7                         0                                            0 0                                0",//5
	"0                                7                         0                                            0 0                                0",//5
	"0                                7                         0                                            0 0                                0",//5
	"0                                7                         0                                            0 0                                0",//5
	"0                m               7                         0                                            0 0                                0",//5
	"0                               000                        0                                            0 0                                0",//6
	"0                               0 0            0           0                                            0 0                                0",//7
	"0                               0 0            0           0                                            0 0                                0",//7
	"0                               0 0            0           0                                            0 0                                0",//7
	"0                               0 0         0000000        0                                            0 0                                0",//7
	"0                               0 0            0           0                                            0 0                                0",//7
	"0                               0 0            0           0                                            0 0                                0",//7
	"0                               0 0            0           0                                            000                                0",//7
	"0                               0 0                        0                                             7                                 0",//8
	"000000000000077777000000000000000 0                        0                                             7                                 0",//9
	"0           0     0             0 0                        0                                             7                                 0",//10
	"00000000000007777700000000000000000                        0                                             7                                 0",//11
	"0         0                     0 0                        0                                            000                                0",//12
	"0         0                     0 0                        0                                            0 0                                0",//13
	"0         0                     0 0                        0                                            0 0                                0",//13
	"0         0                     0 0                        0                                            0 0                                0",//13
	"0         0                     0 0                        0                                            0 0                                0",//14
	"0         0                     0000000000000000077777000000                                            0 0                                0",//15
	"0         0                     0               0     0    0                                            0 0                                0",//16
	"0         0                     00000000000000000777770000000000000000000000000000000000000000     000000 0                                0",//17
	"0         0                                              0                                0  0777770    0 0                                0",//18
	"0         0                                              0                                0000     000000 0                                0",//19
	"0         0                                              0                                  7      0    0 0                                0",//20
	"0         0                                              0                                  7      0    0 0000000000000000000000000000000000",//21
	"0         0                                              0                                  7      000000                                  0",//22
	"0         0                                              0                                  7      0    0                                  0",//23
	"0         0                                              0                                 0007777700000000000000000000000000000000000000000",//24
	"0         0                                              0                                 000                                             0",//25
	"0         0                                              0                                 0                                               0",//26
	"0         0                                              0                                 0                                               0",//27
	"0         0                                              0                                 0                                               0",//28
	"0         000000000000000000777770000000000000000000000000                                 0                                               0",//29
	"0                                             000                                          0                                               0",//30
	"0                                              7                                           0                                               0",//31
	"0                                              7                                           0                                               0",//32
	"0                                              7                                           0                                               0",//33
	"0                                              7                                           0                                               0",//33
	"0                                              7                                           0                                               0",//34
	"0                                             000                                          0                                               0",//35
	"0                                             0 0000000000000000000     00000000000000000000000000000000000000000000777777000000000000000000",//36
	"0                                             0 0                 0777770                  0                                               0",//37
	"0000000000000000000000000000000000000000000000000000000000000000000     00000000000000000000                                               0",//38
	"0                                            0  0                                          0                                               0",//39
	"0                                            0  0                                          0                                               0",//40
	"0                                            0  0                                          0                                               0",//40
	"0                                            0000                                          0                                               0",//41
	"0                                              7                                           0                                               0",//42
	"0                                              7                                           0                                               0",//43
	"0                                              7                                           0                                               0",//44
	"0                                              7                                           0                                               0",//44
	"0                                              7                                           0                                               0",//44
	"0                                            0000                                          0                                               0",//45
	"0                                            0  0                                          0                                               0",//46
	"0                                            0  0                                          0                00000000000000077777000000000000",//47
	"0                                            0  0                                          0                0                              0",//48
	"0                                            0  0                                          0                0                              0",//49
	"0000000007777700000000000000000000000000000000000000000000000000000000000000000000000000000000000007777000000                              0",//50
	"0                     0                                                               7                     0                              0",//51
	"0                     0                                                               7                     0                              0",//52
	"0                     0                                                               7                     00000000000000000000000000000000",//53
	"0                     0                                                               7                                                    0",//54
	"0                     0                                                               7                                                    0",//55
	"0                     0                 00000000000000000000000000000000000000000000000                                                    0",//56
	"0                     7                 0                                             0                                                    0",//57
	"0                     7                 0                                             0                                                    0",//58
	"0                     7                 0                                             7                                                    0",//58
	"0                     0                 0                                             7                                                    0",//59
	"0                     0                 0                                             7                                                    0",//60
	"0                     0                 0                                             7                                                    0",//60
	"0                     0                 0                                             7                                                    0",//61
	"0                     0                 0                                             0                                                    0",//61
	"0                     0000000000000000000                                             000000000000000000000000000000000000000000000000000000",//62
	"0                                 0     0                                             0                                                    0",//63
	"0                                 0     0                                             0                                                    0",//64
	"00000000000000000000000077777000000     0                                             0                                                    0",//65
	"0                                 0     0                                             0                                                    0",//66//10
	"0                                 00000000000000000000000000777770000000000000000000000                                                    0",//67
	"0                                 0                                                   0                                                    0",//68
	"0                                 0                                                   0                                                    0",//68
	"0      s                          0                                                   0                                                    0",//69
	"0                    s            0                                                   7                                                    0",//70
	"0                                 0                                                   7                                                    0",//71
	"0                                 0                                                   7                                                    0",//72
	"0                                 0                                                   0                                                    0",//73
	"0                                 0                                                   0                                                    0",//73
	"0   s           s                 0                                                   0                                                    0",//74
	"0                                 0                                                   0                                                    0",//75
	"0        s                        0000000000000000000000000000000000000000000000000000000000000000000000000000000000000777000000000000000000",//76
	"0                                 0                 0                                             0                                        0",//77
	"0                                 0                 0                                             0                                        0",//78
	"0      s                          0                 0                                             0                                        0",//79
	"0                    s            0                 0                                             7                                        0",//80
	"00000000     0000000000000000000000                 0                                             7                                        0",//81
	"0      0777770      0                               0                                             7                                        0",//82
	"00000000     00000000                               0                                             7                                        0",//83
	"0                   0                               0                                             7                                        0",//84
	"0                   0                               0                                             0                                        0",//84
	"0                   0                               0                                             0                                        0",//84
	"0                   0                               0                                             0                                        0",//84
	"0   s           s   0                               0                                             0                                        0",//85
	"0                   0                               0                                             000000000000000000000000000000000000000000",//86
	"0        s          0                               0                                             0                                        0",//87
	"0                   0                               0                                             0                                        0",//88
	"0                   0000000000000000000000000000000000000000000000000077777000000000000000000000000                                        0",//89
	"0      s                                         0 0                                           0  0                                        0",//90
	"0      s                                         0 0                                           0  0                                        0",//90
	"0      s                                         000                                           0  0                                        0",//90
	"0                    s                            7                                            0000                                        0",//91
	"0                                                 7                                             77                                         0",//92
	"0                                                 7                                             77                                         0",//92
	"0                                                 7                                             77                                         0",//92
	"0                                                 7                                             77                                         0",//93
	"0      s                                         000                                           0000                                        0",//90
	"0      s                                         0 0                                           0  0                                        0",//90
	"0                                                0 0                                           0  0                                        0",//94
	"00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000",//116

};

