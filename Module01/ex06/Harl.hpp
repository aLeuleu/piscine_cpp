#include <iostream>

class Harl {
private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
	bool _debugFilter;
	bool _infoFilter;
	bool _warningFilter;
	bool _errorFilter;

public:
		Harl();
	void trigFilter(int lvl);
	void filter(std::string logToFilter);
	void complain(std::string level);
};