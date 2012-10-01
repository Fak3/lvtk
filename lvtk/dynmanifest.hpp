/**
    dynmanifest.hpp - Support file for writing LV2 plugins in C++

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
   @dynmanifest.hpp
   C++ convenience wrapper class for the LV2 dynmanifest extension.
   LV2 Version: 1.4 (2012-04-17)
*/

/** FIXME: Not currently supported implemented */

#ifndef LVTK_LV2_DYNMANIFEST_HPP
#define LVTK_LV2_DYNMANIFEST_HPP

#include <lv2/lv2plug.in/ns/ext/dynmanifest/dynmanifest.h>
#include <lvtk/types.hpp>

namespace lvtk {

   /** Convenience typedef for LVTK_Dyn_Manifest_Handle */
   typedef LV2_Dyn_Manifest_Handle DynManifestHandle;

}

#endif /* LVTK_LV2_DYNMANIFEST_HPP */