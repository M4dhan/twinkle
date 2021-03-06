/*
    Copyright (C) 2005-2009  Michel de Boer <michel@twinklephone.com>

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

// MIME-Version header
#ifndef _H_HDR_MIME_VERSION
#define _H_HDR_MIME_VERSION

#include <string>
#include "header.h"

using namespace std;

class t_hdr_mime_version : public t_header {
public:
	string	version;

	t_hdr_mime_version();
	void set_version(const string &v);
	string encode_value(void) const;
};

#endif
