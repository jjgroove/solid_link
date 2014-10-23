#ifndef	__TCP_LINK_H__
#define __TCP_LINK_H__


#pragma once




namespace solid
{
	using namespace boost;

	class tcp_link
	{
	public:
		explicit tcp_link(asio::io_service &io_service);
		virtual ~tcp_link(void);


	public:
		inline asio::ip::tcp::socket&	get_socket(void);
		inline solid::type::session_id	get_session_id(void);


	private:
		asio::io_service&		m_io_service;
		asio::ip::tcp::socket	m_socket;
		solid::type::session_id	m_session_id;
	};
}


#include	"tcp_link.inl"




#endif __TCP_LINK_H__