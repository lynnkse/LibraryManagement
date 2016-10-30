using namespace std;

class Admin_t
{
	public:
		Admin_t(const string& _name);
		~Admin_t();
		bool BorrowBook(int _ISBN, int _borrowerID) const;
		bool ReturnBook(int _ISBN, int _borrowerID) const;
		bool AddBook(const Book_t& _book) const;		
		bool RemoveBook(int _ISBN) const;
		const Report_t& GetBooksReport() const;
		list<Book_t*> FindBooks(const string& _name);
		list<Book_t*> FindBooks(const string& _ID);
		list<Book_t*> FindBooks(const string& _subject); 
		bool AddBorrower(const Borrower_t& _borrower) const;
		bool RemoveBorrower(int m_ID) const;	
				

	private:
		BooksManager_t* m_booksManager;
		BorrowersManager_t* m_borrowersManager;
		const string m_name;
};

