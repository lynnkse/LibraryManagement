#include <cstring>
#include <list>

using namespace std;

class Borrower_t
{
	friend class Admin_t;	
	public:
		Borrower_t(const string& _name, const string& _addr, const string _phone);
		~Borrower_t();		
		const string& GetName() const;
		const string& GetAddress() const;
		const string& GetPhone() const;
		int GetID() const;
		bool AddBorrowed(int m_ISBN);
		bool ReturnBook(int m_ISBN);

	protected:
		void SetName(const string& _name);		
		void SetAddress(const string& _addr);
		void SetPhone(const string& _phone);

	private:
		string m_name;
		string m_address;
		string m_phone;
		const int m_ID;
		static int m_nextID;
		list<int> m_currentlyBorrowed;
		Admin_t* m_admin;

		static void UpdateNextID();
};


