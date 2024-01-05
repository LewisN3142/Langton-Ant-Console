# Langton's Ant Console Application

This project is legacy code from when I first tried messing around with C++ to create command line applications. 
This particular piece of code is a console application of Langton's ant, a cellular automata where an ant moves around a grid according to the colour (or number, in this case) displayed on the tile.
As the ant leaves the tile, they change the tile's colour to a different one, creating emergent behaviour.

The number of rows/columns/colours/steps the ant takes are all variables within the code and can be tweaked to generate different grid patterns. 
As this programme is quite simplistic and could be improved, I plan to make a second Langton's ant application using SFML to render the colours and provide a user interface so that different multiple colour extensions may be selected at runtime. 
Look out for that on my Github page in the near future.

Please feel free to clone the repository should you wish to compile it locally. Alternatively, if you simply wish to take a look at some sample output, the [executable](https://github.com/LewisN3142/Langton-Ant-Console/tree/main/x64/Debug) can be found in this repository also. The example automata the code generates is the 20000th generation of a 40 x 40 grid initialised to the colour/number 0 following the LLRR four colour (represented by 0,1,2,3) extension of the classical Langton's ant. The ant itself is represented by the character ``A``.
