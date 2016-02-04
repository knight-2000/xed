/*
 * xed-plugin-loader-c.h
 * This file is part of xed
 *
 * Copyright (C) 2008 - Jesse van den Kieboom
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
 * Foundation, Inc., 51 Franklin St, Fifth Floor, 
 * Boston, MA 02110-1301, USA. 
 */

#ifndef __XED_PLUGIN_LOADER_C_H__
#define __XED_PLUGIN_LOADER_C_H__

#include <xed/xed-plugin-loader.h>

G_BEGIN_DECLS

#define XED_TYPE_PLUGIN_LOADER_C		(xed_plugin_loader_c_get_type ())
#define XED_PLUGIN_LOADER_C(obj)		(G_TYPE_CHECK_INSTANCE_CAST ((obj), XED_TYPE_PLUGIN_LOADER_C, XedPluginLoaderC))
#define XED_PLUGIN_LOADER_C_CONST(obj)	(G_TYPE_CHECK_INSTANCE_CAST ((obj), XED_TYPE_PLUGIN_LOADER_C, XedPluginLoaderC const))
#define XED_PLUGIN_LOADER_C_CLASS(klass)	(G_TYPE_CHECK_CLASS_CAST ((klass), XED_TYPE_PLUGIN_LOADER_C, XedPluginLoaderCClass))
#define XED_IS_PLUGIN_LOADER_C(obj)		(G_TYPE_CHECK_INSTANCE_TYPE ((obj), XED_TYPE_PLUGIN_LOADER_C))
#define XED_IS_PLUGIN_LOADER_C_CLASS(klass)	(G_TYPE_CHECK_CLASS_TYPE ((klass), XED_TYPE_PLUGIN_LOADER_C))
#define XED_PLUGIN_LOADER_C_GET_CLASS(obj)	(G_TYPE_INSTANCE_GET_CLASS ((obj), XED_TYPE_PLUGIN_LOADER_C, XedPluginLoaderCClass))

typedef struct _XedPluginLoaderC		XedPluginLoaderC;
typedef struct _XedPluginLoaderCClass		XedPluginLoaderCClass;
typedef struct _XedPluginLoaderCPrivate	XedPluginLoaderCPrivate;

struct _XedPluginLoaderC {
	GObject parent;
	
	XedPluginLoaderCPrivate *priv;
};

struct _XedPluginLoaderCClass {
	GObjectClass parent_class;
};

GType xed_plugin_loader_c_get_type (void) G_GNUC_CONST;
XedPluginLoaderC *xed_plugin_loader_c_new(void);

/* All the loaders must implement this function */
G_MODULE_EXPORT GType register_xed_plugin_loader (GTypeModule * module);

G_END_DECLS

#endif /* __XED_PLUGIN_LOADER_C_H__ */
