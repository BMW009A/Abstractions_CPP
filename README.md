# Repo of Programming Abstractions in C++
### This repo contains the code examples in the textbook and also some important points.
## Chapter 2 (Interface Design)
The interface design has five principles:
1. __Unified__: An interface should define a consistent abstraction with a clear unifying
theme. If a function does not fit that theme, it should be defined elsewhere.
2. __Simple__: To the extent that the underlying implementation is itself complex, the interface
must seek to hide that complexity from the client.
3. __Sufficient__: When clients use an abstraction, the interface must provide sufficient functionality
to meet their needs. If some critical operation is missing from an interface, clients may decide to abandon
it and develop their own, more powerful abstraction. As important as simplicity is, the designer must
avoid simplifying an interface to the point that it becomes useless.
4. __General__: A well-designed interface should be flexible enough to meet the needs of many different
clients. An interface that performs a narrowly defined set of operations for one client is
not as useful as one that can be used in many different situations.
5. __Stable__: The functions defined in an interface should continue to have precisely the same
structure and effect, even if the underlying implementation changes. Making changes in the
behavior of an interface forces clients to change their programs, which compromises the
value of interface.

Project (random.h design): RandTest.cpp, random.cpp and random.h.

## Chapter 3 (String)
1. <__string__> library exports a classed string that represents a sequence of 
characters.
2. <__cctype__> library exports several functions for working with individual 
characters.
## Chapter 4 (Streams)
## Chapter 5 (Collections)
later code will use '*.hpp' as header file suffix to make this C++ project consistency.



## Reference
https://web.stanford.edu/dept/cs_edu/resources/textbook/Reader-Beta-2012.pdf