#include <set>

using namespace std;

class Book_t
{	
	public:
		~Boot_t(const string& _name, const string& _author, const string& _subject, const string& _ISBN);
		Book_t();
		const string& GetName() const;
		const string& GetAuthor() const;
		const string& GetSubject() const;
		const string& GetISBN() const;
	private:
		const string m_name;
		const string m_author;
		const string m_subject;
		const string m_ISBN;
};

class BookRecord_t
{
	public:
		bool Borrow(Borrower_t& _borrower);

	private:
		Book_t* m_book;		
		size_t m_numOfCopies;
		set<Borrower_t*> m_borrowedBy;
};

