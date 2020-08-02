#include <iostream>

using namespace std;

class SqList
{
private:
    int *m_Data;
    int m_Length;
    int m_MaxSize;

public:
    SqList()
    {
        m_MaxSize = 10;
        m_Data = new int[m_MaxSize];
        if (!m_Data)
            exit(-1);
        m_Length = 0;
    }

    SqList(int size)
    {
        m_Data = new int[size];
        if (!m_Data)
            exit(-1);
        m_MaxSize = size;
        m_Length = 0;
    }

    int length()
    {
        return m_Length;
    }

    int maxSize()
    {
        return m_MaxSize;
    }

    void printList()
    {
        for (int i = 0; i < m_Length; i++)
        {
            cout << m_Data[i] << endl;
        }
    }
    bool ResetList(int size)
    {
        m_MaxSize = size;
        int *temp = new int[m_MaxSize];

        if (m_MaxSize >= m_Length)
        {
            for (int i = 0; i < m_Length; i++)
            {
                temp[i] = m_Data[i];
            }
        }
        else
        {
            for (int i = 0; i < m_MaxSize; i++)
            {
                temp[i] = m_Data[i];
            }
            m_Length = m_MaxSize;
        }

        delete m_Data;
        m_Data = temp;
        return true;
    }

    bool InsertList(int i, int e)
    {
        if (i < 1 || i > (m_Length + 1))
        {
            return false;
        }

        //不动态扩容
        // if (m_Length >= m_MaxSize)
        // {
        //     return false;
        // }

        //动态扩容
        if (m_Length == m_MaxSize)
        {
            m_MaxSize += 100;
            int *temp = new int[m_MaxSize];
            for (int i = 0; i < m_Length; i++)
            {
                temp[i] = m_Data[i];
            }
            delete m_Data;
            m_Data = temp;
        }

        for (int j = m_Length - 1; j >= i - 1; j--)
        {
            m_Data[j + 1] = m_Data[j];
        }
        m_Data[i - 1] = e;
        m_Length++;
        return true;
    }

    bool DeletList(int i)
    {
        if (i < 1 || i > (m_Length + 1))
        {
            return false;
        }

        if (!m_Length)
        {
            return false;
        }

        for (int j = i; j <= (m_Length - 1); j++)
        {
            m_Data[j - 1] = m_Data[j];
        }
        m_Length--;

        return true;
    }

    int GetElem(int pos)
    {
        if (pos < 1 || pos > m_Length)
            return 0;
        return m_Data[pos - 1];
    }
    ~SqList()
    {
        delete m_Data;
        m_Data = NULL;
    }
};

int main(int argc, char const *argv[])
{
    SqList list1(10);
    for (int i = 0; i < 10; i++)
    {
        list1.InsertList(i + 1, i);
    }
    list1.printList();
    cout << "******************" << endl;
    cout << list1.GetElem(5) << endl;
    cout << list1.length() << endl;
    cout << list1.maxSize() << endl;
    cout << "******************" << endl;
    list1.ResetList(5);
    list1.printList();
    cout << list1.length() << endl;
    cout << list1.maxSize() << endl;
    return 0;
};