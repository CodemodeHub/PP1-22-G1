# PP1-2022-Fall

- What is a programming?
https://slides.com/adilzhapar/lesson-1
- Conditions
https://slides.com/adilzhapar/lesson-2
- Loops
https://slides.com/adilzhapar/lesson-3-4
- Arrays
https://slides.com/turdalynnurasyl/codemode-pp1-l56
- Double array
https://slides.com/adilzhapar/lesson-7-8
- Strings
https://slides.com/turdalynnurasyl/codemode-pp1-l78
- Functions
https://slides.com/adilzhapar/codemode-pp1-l11-12
- Recursion
https://slides.com/zhaparka/codemode-pp1-l13-14

SHORTCUTS:

copy line: shift + alt + arrow

move line: alt + arrow

open terminal: ctrl + ~

screenshot: windows + shift + s

hide left-panel: ctrl + B


SNIPPETS: 
snippets are template, which will prepare default code by typing key word

settings -> configure user snippets -> cpp.json

then paste code below:

"Print to console": {
		"prefix": "qwe",
		"body": [
			"#include <iostream>",
			"",
			"using namespace std;",
			"",
			"int main(){",
			"\t$0",
			"",
			"\treturn 0;",
			"}"

		]
	},