/*
	This file is part of martink project.
	
	Implementation by Daniel Otte (daniel.otte@rub.de) Copyright (C) 2008  

	martink firmware project is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	martink firmware is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with martink firmware.  If not, see <http://www.gnu.org/licenses/>.

	LibK project on github: https://github.com/mkschreder
*/

#include "gf256mul.h"

unsigned char gf256mul(unsigned char a, unsigned char b, unsigned char reducer){
	unsigned char t,ret=0;
	while(a){
					if(a&1)
									ret ^= b;
					t=a&0x80;
					b<<=1;
					if(t)
									b^=reducer;
					a>>=1;
	}
	return ret;
}
