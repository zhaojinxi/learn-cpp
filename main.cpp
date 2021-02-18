#include <cstring> // for strlen()
#include <cassert> // for assert()

class MyString
{
private:
    char *m_data{};
    int m_length{};

public:
    MyString(const char *source = "")
    {
        assert(source); // make sure source isn't a null string

        // Find the length of the string
        // Plus one character for a terminator
        m_length = std::strlen(source) + 1;

        // Allocate a buffer equal to this length
        m_data = new char[m_length];

        // Copy the parameter string into our internal buffer
        for (int i{0}; i < m_length; ++i)
            m_data[i] = source[i];

        // Make sure the string is terminated
        m_data[m_length - 1] = '\0';
    }

    ~MyString() // destructor
    {
        // We need to deallocate our string
        delete[] m_data;
    }

    char *getString() { return m_data; }
    int getLength() { return m_length; }
};