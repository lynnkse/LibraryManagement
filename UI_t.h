class UI_t
{
	public:
		UI_t(Controller_t* _controller);
		~UI_t();
		bool LogIn(const string& _name, const string& _password);
		bool LogOut();
		bool AddBook();
		bool RemoveBook();
		bool GenerateBookReport();
		bool SearchBook();
		bool AddBorrower();
		bool RemoveBorrower();
		bool SearchBorrower();
		bool ReportBorrowers();
	private:
		int m_loggedIn;
		string m_loggedInAdmin;
		Controller_t* m_controller;
};
