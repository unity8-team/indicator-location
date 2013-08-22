/*
 * Copyright 2013 Canonical Ltd.
 *
 * Authors:
 *   Charles Kerr <charles.kerr@canonical.com>
 *
 * This program is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 3, as published
 * by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranties of
 * MERCHANTABILITY, SATISFACTORY QUALITY, or FITNESS FOR A PARTICULAR
 * PURPOSE.  See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __INDICATOR_LOCATION_UTILS_H__
#define __INDICATOR_LOCATION_UTILS_H__

#include <glib.h>
#include <gio/gio.h>

struct GObjectDeleter
{
  void operator()(GObject            * o) { g_object_unref (o); }

  void operator()(GMenu              * o) { operator()(G_OBJECT(o)); }
  void operator()(GDBusConnection    * o) { operator()(G_OBJECT(o)); }
  void operator()(GSimpleActionGroup * o) { operator()(G_OBJECT(o)); }
};

#endif /* __INDICATOR_LOCATION_UTILS_H__ */

