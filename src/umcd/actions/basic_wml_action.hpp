/*
   Copyright (C) 2013 by Pierre Talbot <ptalbot@mopong.net>
   Part of the Battle for Wesnoth Project http://www.wesnoth.org/

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY.

   See the COPYING file for more details.
*/

#ifndef UMCD_BASIC_WML_ACTION_HPP
#define UMCD_BASIC_WML_ACTION_HPP

#include "umcd/server/generic_action.hpp"
#include "umcd/wml_reply.hpp"
#include "umcd/wml_request.hpp"

template <class NetworkStream>
struct basic_wml_action
{
	typedef generic_action<wml_reply, wml_request<NetworkStream>&, const config&> type;
};

#endif // UMCD_BASIC_WML_ACTION_HPP
