/*
 * Motif
 *
 * Copyright (c) 1987-2012, The Open Group. All rights reserved.
 *
 * These libraries and programs are free software; you can
 * redistribute them and/or modify them under the terms of the GNU
 * Lesser General Public License as published by the Free Software
 * Foundation; either version 2 of the License, or (at your option)
 * any later version.
 *
 * These libraries and programs are distributed in the hope that
 * they will be useful, but WITHOUT ANY WARRANTY; without even the
 * implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
 * PURPOSE. See the GNU Lesser General Public License for more
 * details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with these librararies and programs; if not, write
 * to the Free Software Foundation, Inc., 51 Franklin Street, Fifth
 * Floor, Boston, MA 02110-1301 USA
 * 
 */
/*
 * HISTORY
 */
/* $XConsortium: DragIconI.h /main/6 1995/07/14 10:25:29 drk $ */
#ifndef _XmDragIconI_h
#define _XmDragIconI_h

#include <Xm/DragIconP.h>

#ifdef __cplusplus
extern "C" {
#endif


/********    Private Function Declarations    ********/

extern void _XmDestroyDefaultDragIcon(XmDragIconObject icon) ;
extern Boolean _XmDragIconIsDirty(XmDragIconObject icon) ;
extern void _XmDragIconClean(XmDragIconObject icon1,
			     XmDragIconObject icon2,
			     XmDragIconObject icon3) ;

/********    End Private Function Declarations    ********/


#ifdef __cplusplus
}  /* Close scope of 'extern "C"' declaration which encloses file. */
#endif

#endif /* _XmDragIconI_h */
/* DON'T ADD ANYTHING AFTER THIS #endif */
