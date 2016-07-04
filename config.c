/*
* This file is part of the chavrprog project.
*
* Copyright (C) 2016 Andrii Trelin (andrei.trel2010@gmail.com)
*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation; either version 2 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program; if not, write to the Free Software
* Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301 USA
*/

/* device description according to structure:
struct{
const char* name;
const unsigned char signature[3];
const int pagesize;
const int num_of_pages;
const int cfg_eeprom;
}
*/
#include "config.h"



const devconf_t confset[]={
  {"mega328",
  {0x1E, 0x95, 0x14},
  64,
  256,
  1024},

  {"mega328p",
  {0x1E, 0x95, 0x0F},
  64,
  256,
  1024},

  {"mega168",
  {0x1e, 0x94, 0x06},
  64,
  128,
  512},

  {"mega168p",
  {0x1e, 0x94, 0x0b},
  64,
  128,
  512},

  {"mega8",
  {0x1e, 0x93, 0x07},
  32,
  128,
  512},

  {"mega32u4",
  {0x1E, 0x95, 0x87},
  64,
  256,
  1024},

  {"mega16u2",
  {0x1e, 0x94, 0x89},
  64,
  128,
  512}
};
