class Controller_t
{
	public:
		Controller_t(BorrowerDB_t* _borrowerDB, BookDB_t* _bookDB, AdminDB_t* _adminDB);	
		~Controller_t();
		void ProcessCommand(Command_t* m_command);
	private:
		BorrowerDB_t* m_borrowerDB;
		BookDB_t* m_bookDB;
		AdminDB_t* m_adminDB;
};
