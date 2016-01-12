/*
 * INET		An implementation of the TCP/IP protocol suite for the LINUX
 *		operating system.  INET is implemented using the  BSD Socket
 *		interface as the means of communication with the user level.
 *
 *		Definitions for the TCP protocol.
 *
 * Version:	@(#)tcp.h	1.0.2	04/28/93
 *
 * Author:	Fred N. van Kempen, <waltje@uWalt.NL.Mugnet.ORG>
 *
 *		This program is free software; you can redistribute it and/or
 *		modify it under the terms of the GNU General Public License
 *		as published by the Free Software Foundation; either version
 *		2 of the License, or (at your option) any later version.
 */
#ifndef _LINUX_TCP_H
#define _LINUX_TCP_H


#define HEADER_SIZE	64		/* maximum header size		*/


struct tcphdr {
  unsigned short	source;  /* ���ض˿ں� */
  unsigned short	dest;  /* Ŀ�Ķ˿ں� */
  unsigned long		seq;
  unsigned long		ack_seq;
  unsigned short	res1:4,
			doff:4,
			fin:1,
			syn:1,
			rst:1,
			psh:1,
			ack:1,
			urg:1,
			res2:2;
  unsigned short	window;
  unsigned short	check;
  unsigned short	urg_ptr;
};


/* http://www.2cto.com/net/201209/157585.html */

enum {
  TCP_ESTABLISHED = 1, /* ����һ���򿪵����� */
  TCP_SYN_SENT, /* �ٷ������������ȴ�ƥ����������� */
  TCP_SYN_RECV, /* ���յ��ͷ���һ�����������ȴ��Է������������ȷ�� */
#if 0
  TCP_CLOSING, /* not a valid state, just a seperator so we can use
		  < tcp_closing or > tcp_closing for checks. */
#endif
  TCP_FIN_WAIT1, /* �ȴ�Զ��TCP�����ж����󣬻���ǰ�������ж������ȷ�� */
  TCP_FIN_WAIT2, /* ��Զ��TCP�ȴ������ж����� */
  TCP_TIME_WAIT, /* �ȴ��㹻��ʱ����ȷ��Զ��TCP���յ������ж������ȷ�� */
  TCP_CLOSE,	 /* û���κ�����״̬ */
  TCP_CLOSE_WAIT, /* �ȴ��ӱ����û������������ж����� */
  TCP_LAST_ACK,	 /* �ȴ�ԭ���ķ���Զ��TCP�������ж������ȷ�� */
  TCP_LISTEN  /* ��������Զ����TCP�˿ڵ��������� */
};

#endif	/* _LINUX_TCP_H */
