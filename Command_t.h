class Command_t
{
	public:
		enum CommandClass {BOOK_COMMAND, BORROWER_COMMAND, ADMIN_COMMAD};
		
	public:
		Command_t();
		virtual ~Command_t() = 0;		
		CommandClass GetClass() const;

	private:
		CommandClass m_class;
}

class BookCommand_t : public Command_t
{
	public: 
		CommandType {ADD_BOOK, REMOVE_BOOK, SEARCH_BOOKS, BOOKS_REPORT};
		
	public:
		BookCommand_t(const string& _name, const string& _author, const string& _subject, const string& _ISBN);
		~BookCommand();
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

class BorrowerCommand_t : public Command_t
{
	public: 
		CommandType {ADD_BORROWER, SEARCH_BORROWER, REMOVE_BORROWER, BORROWERS_REPORT};

	public:
		BorrowerCommand(const string& _name, const string& _address, const string& _phone, const string& _ID);
		~BorrowerCommand();
		const string& GetName() const;
		const string& GetAddress() const;
		const string& GetPhone() const;
		const string& GetID() const;

	private:
		const string m_borrowerName;
		const string m_address;
		const string m_phone;
		const string m_ID;
};

class AdminCommand_t : public Command_t
{
	public:
		AdminCommand(const string& _name, const string& _password);
		~AdminCommand();
		const string& GetName() const;
		const string& GetPassword() const;

	private:
		const string m_name;
		const string m_password;
};


































