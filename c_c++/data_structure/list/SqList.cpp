#include <iostream>

using namespace std;

class SqList
{
private:
    int *m_data;
    int m_length;
    int m_maxSize;

public:
    SqList(int size)
    {
        m_data = new int[size];
        m_maxSize = size;
        m_length = 0;
    }

    void printList()
    {
        for (int i = 0; i < m_length; i++)
        {
            cout << m_data[i] << endl;
        }
        
    }

    bool ListInsert(int i, int e)
    {
        if (i < 1 || i > m_length + 1)
        {
            return false; 
        }
        if (m_length >= m_maxSize)
        {
            return false;
        }
        for (int j = m_length; j >= i; j--)
        {
            m_data[j] = m_data[j - 1];
        }
        m_data[i - 1] = e;
        m_length++;
        return true;
    }



};

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
