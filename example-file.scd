(
~globalVar = 2;
z = "A perfectly normal string";
x = \zymbol;

thisProcess.openUDPPort(1234);
i = 10;
while ( { i < 5 }, { i = i + 1; "boing an escape sequence: \$".postln });

// Make a function
f = {|aNumber, anotherNumber|
	var aLocalVar = 1000pi;
	var numIndices = 10.0;

	numIndices.do({ |index| 
		index.postln;
	});

	~globalVar + aNumber + anotherNumber + aLocalVar;
};

f.value(aNumber: 2, anotherNumber: 10);
)

