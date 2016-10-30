class Book_t
{
	public:
		enum BookStatus {OUT, AVAILABLE};

	public:
		~Boot_t(const string& _name, const string& _author, const string& _subject, const string& _ISBN);
		Book_t();
		const string* GetName() const;
		const string* GetAuthor() const;
		const string* GetSubject() const;
		const string* GetISBN() const;
	private:
		const string m_name;
		const string m_author;
		const string m_subject;
		const string m_ISBN;
		const int m_ID;
		static int m_nextID;
		BookStatus m_status;

		void UpdateID();
};
