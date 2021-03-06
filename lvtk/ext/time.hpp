/*
    time.hpp - Support file for writing LV2 plugins in C++

    Copyright (C) 2012 Michael Fisher <mfisher31@gmail.com>

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 01222-1307  USA
*/
/**
   @file time.hpp
*/
/**
   @page time Time Extension
   C++ convenience header for LV2 time<br />
   LV2 Version Support: >= 1.0 (2012-04-17)<br />

   This is a vocabulary for precisely describing a position in time and
   the passage of time itself, in both real and musical terms.

   In addition to real time (e.g. seconds), two units of time are
   used: "frames" and "beats". A frame is a numbered quantum of time.
   Frame time is related to real-time by the "frame rate" or
   "sample rate", time:framesPerSecond. A beat is a single pulse of
   musical time. Beat time is related to real-time by the "tempo",
   time:beatsPerMinute.

   Musical time additionally has a "meter" which describes passage of
   time in terms of musical "bars". A bar is a higher level grouping of
   beats. The meter describes how many beats are in one bar.

   @link http://lv2plug.in/ns/ext/time/
*/

#ifndef LVTK_TIME_HPP
#define LVTK_TIME_HPP

#include <lv2/lv2plug.in/ns/ext/time/time.h>

namespace lvtk {

} /* namespace lvtk */

#endif /* LVTK_TIME_HPP */
