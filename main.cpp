	 #include <iostream>
	 //#include <string>
	 #include <stack>
	 // Enable STL stack.
	 using namespace std;

 int main(int argc, char *argv[]) { //µ{¦¡¶i¤JÂI
	
	 char input[50];
	 cin >> input; 
	 stack<char> S; 
	
		
		 for (int i = 0; i < (sizeof(input) / sizeof(input[0])); i++) {
		 if (input[i] == '\0') { //End line.
			 return 0;
			
		}
		else if (input[i] == '(') { //First match
			 S.push(input[i]);
			
		}
		else if (input[i] == '[') { //Second match
			 S.push(input[i]);
			
		}
		else if (input[i] == '{') { //Third match
			 S.push(input[i]);
			
		}
		else {
			
				 if (S.size() != 0) {
				 if ((S.top() == '(') && (input[i] == ')')) { //First match
					 cout << S.top() << input[i] << endl;
					 S.pop();
					
				}
				else if ((S.top() == '[') && (input[i] == ']')) { //Second match
					 cout << S.top() << input[i] << endl;
					 S.pop();
					
				}
				else if ((S.top() == '{') && (input[i] == '}')) { //Third match
					 cout << S.top() << input[i] << endl;
					 S.pop();
					
				}
				
			}
				else {
					 cout << "Inpossible error." << endl;
					 break;
				
				}
				
		}
		
	}

	 return 0; //µ{¦¡µ²§ôÂI
	
}
