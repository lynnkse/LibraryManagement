#include <cstring>
#include <list>

using namespace std;

class Borrower_t
{
		Borrower_t(const string& _name, const string& _addr, const string _phone);
		~Borrower_t();		
		const string* GetName() const;
		void SetName(const string& _name);
		const string* GetAddress() const;
		void SetAddress(const string& _addr);
		const string* GetPhone() const;
		void SetPhone(const string& _phone);
		int GetID() const;
		void AddBorrowed(Book_t* _book);
		void ReturnBook(Book_t* _book); 
	private:
		string m_name;
		string m_address;
		string m_phone;
		const int m_ID;
		static int m_nextID;
		list<Book*> m_currentlyBorrowed;

		static void UpdateNextID();
};
