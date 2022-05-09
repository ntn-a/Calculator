Calculator.exe:
	g++ *.cpp *.cxx -o Calculator `fltk-config --use-images --ldflags --cxxflags`
