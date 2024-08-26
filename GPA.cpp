//Grade Program using Nested IF/ELSE  Write a program in C++ to find the grade of a student. You must enter marks of five subjects and then calculate the average marks (out of 100) and then apply the following grading criteria. 
// Grade >= 90   Grade A
 // Grade >= 80   Grade B
// Grade >= 70   Grade C
// Grade >= 60    Grade D
 
 float sub1, sub2, sub3, sub4, sub5, avr;
 cout << "enter the degree of subject1 \n";
 cin >> sub1;
 cout << "enter the degree of subject2 \n";
 cin >> sub2;
 cout << "enter the degree of subject3 \n";
 cin >> sub3;
 cout << "enter the degree of subject4 \n";
 cin >> sub4;
 cout << "enter the degree of subject5 \n";
 cin >> sub5;
 avr = (sub1 + sub2 + sub3 + sub4 + sub5) / 5;
 if (avr >= 90) {
 cout << "your grades is A\n";
 }
  else if (avr >= 80) {
 cout << "your grades is B\n";
 }
  else if (avr >= 70) {
 cout << "your grades is C\n";
 }
  else if (avr >= 60) {
 cout << "your grades is D\n";
 }
  else {
 cout << " your is grades is F\n";
 }
