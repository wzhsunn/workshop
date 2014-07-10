#include <iostream>

class Singleton
{
private:
	Singleton();
	Singleton(const Singleton&);
	void operator = (const Singleton&);
	static Singleton* m_instance;
public:
	Singleton* GetInstance()
	{
		if (m_instance == NULL)
		{
			m_instance = new Singleton();
		}
		return m_instance;
	}
	~Singleton()
	{
		delete m_instance;
	}
};


Singleton* Singleton::m_instance = NULL;

