#include "stdafx.h"
#include "tcp_link.h"
#include <boost/asio.hpp>




namespace solid
{
	tcp_link::tcp_link(asio::io_service &io_service)
		: m_io_service(io_service)
		, m_socket(m_io_service)
		, m_session_id(solid::type::invalid_session_id)
	{
	}




	tcp_link::~tcp_link()
	{
	}
}

