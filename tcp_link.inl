namespace solid
{
	boost::asio::ip::tcp::socket& tcp_link::get_socket(void)
	{
		return m_socket;
	}




	solid::type::session_id tcp_link::get_session_id(void)
	{
		return m_session_id;
	}
}