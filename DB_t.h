#include <map>

using namespace std;

/*class DB_t
{
	public:
		DB_t();
		virtual ~DB_t();		
		virtual Command_t* InsertData(Command_t* _comm) = 0;
};*/

class BorrowersManager_t : 
{
	public:
		BorrowersManager_t();
		virtual ~BorrowersManager_t();		
		virtual Command_t* ProcessCommand(Command_t* _comm);
		void AddBorrower(const Borrower_t* _borrower);
		bool RemoveBorrower(int _ID);
		const Borrower_t& FindBorrower(int _ID) const;
		const Borrower_t& FindBorrower(const string& _name) const;
		const Report_t& ReportAllBorrowers() const;
	private:
		map<int, Borrower_t*> m_borrowersByID;
		map<string, Borrower_t*> m_borrowerByName;
};

class BooksManager_t 
{
	public:
		BooksManager_t();
		virtual ~BooksManager_t();
		const Report_t& ReportBooksByName(const string& _name) const;
		const Report_t& ReportBooksByAuthor(const string& _author) const;
		const Report_t& ReportBooksBySubject(const string& _subject) const; 
		void AddBook(const Book_t& _book);
		bool RemoveBook(int _bookID);
		list<Book_t*> FindBook(const string& _name, const string& _author, const string& _subject) const;
		const Report_t& GenerateReport() const;
	private:
		map<string, Book_t*> m_bookByName;
		map<string, Book_t*> m_bookByAuthor;
		map<string, Book_t*> m_bookBySubject;
};

class AdminDB_t 
{
	public:	
		AdminDB_t();
		virtual ~AdminDB_t();
		bool LogIn(const string& _name, const string& _password);
		bool LogOut();
		AddAdmin(const string& _name, const string& _password);
		
	private:
		map<string, string> m_admins;
		bool m_loggedIn;
		string m_loggedInAdmin;
}






















