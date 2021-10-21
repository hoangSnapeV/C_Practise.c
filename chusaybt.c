// [3, 4, 4.5, 5, 6, 6, 6.5, 5, 7, 9, 9, 9.5, 10]

// 1. find index of 3
//index  0  1  2    3  4  5   6   7  8  9 10  11  12   
//      [3, 4, 4.5, 5, 6, 6, 6.5, 7, 7, 9, 9, 9.5, 10]

// step 1. find index middle (0+12)/2= 6 => value = 6.5
// vì 3 < 6.5 nằm bên left nên không xét bên phải từ 6.5
// result = //index  0  1  2    3  4  5   
//                  [3, 4, 4.5, 5, 6, 6]

// step 2. find index middle (0+5)/2= 2 => value = 4.5
// vì 3 < 4.5 nằm bên left nên không xét bên phải từ 4.5 
// result = //index  0  1 
//                  [3, 4]

// step 3. find index middle (0+1)/2= 2 => value = 0 
// vì 3 = 3 => index %d of value = 3 la, i  


// 2. find index have value= 7.5 
//index  0  1  2    3  4  5   6   7  8  9 10  11  12   
//      [3, 4, 4.5, 5, 6, 6, 6.5, 7, 7, 9, 9, 9.5, 10]

// step 1. find index middle (0+12)/2= 6 => value = 6.5
// vì 7.5 > 6.5 nằm bên right nên không xét bên left từ 6.5
//index  7  8  9  10  11  12   
//       7, 7, 9, 9, 9.5, 10]

// step 2. find index middle (12+7)/2= 9 => value = 9
// vì 7.5 < 9 nằm bên left nên không xét bên right từ 9
//index  7  8 
//       7, 7,
// step 3. find index middle (7+8)/2= 7 => value = 7
// vì 7.5 > 7 nằm bên right nên không xét bên left từ 7

// step 4. if only 1 index = 8 => value = 7 
// vì 7.5 != 7 --> no find   
// 

// 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
// 0 0 0 0 0 0 0 0 0 0 1   1 1  1  1  1  1  1  1  1  1


// find index (0+20)/2 = 10 => value = 1
// if (index -1)
