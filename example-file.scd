(
~globalVar = 2;
z = "A perfectly normal string";
x = \zymbol;

thisProcess.openUDPPort(1234);

if(nil.isNil, { "Nil!!!!".postln });

while ( { i < 5 }, { i = i + 1; "boing \$".postln });

// Make a function
f = {|aNumber, anotherNumber|
	var aLocalVar = 1000;
	var numIndices = 10;

	numIndices.do{|index| 
		index.postln 
	};

	~globalVar + aNumber + anotherNumber + aLocalVar;
};

f.value(aNumber: 2, anotherNumber: 10);
)
