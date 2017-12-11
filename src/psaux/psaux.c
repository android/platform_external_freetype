/***************************************************************************/
/*                                                                         */
/*  psaux.c                                                                */
/*                                                                         */
/*    FreeType auxiliary PostScript driver component (body only).          */
/*                                                                         */
<<<<<<< HEAD   (8c932b Necessary changes to build FreeType on Android)
/*  Copyright 1996-2017 by                                                 */
=======
/*  Copyright 1996-2015 by                                                 */
>>>>>>> BRANCH (48a9a2 Merge "Use -Werror in external/freetype" am: 51036df35f)
/*  David Turner, Robert Wilhelm, and Werner Lemberg.                      */
/*                                                                         */
/*  This file is part of the FreeType project, and may only be used,       */
/*  modified, and distributed under the terms of the FreeType project      */
/*  license, LICENSE.TXT.  By continuing to use, modify, or distribute     */
/*  this file you indicate that you have read the license and              */
/*  understand and accept it fully.                                        */
/*                                                                         */
/***************************************************************************/


#define FT_MAKE_OPTION_SINGLE_OBJECT

#include <ft2build.h>
#include "psobjs.c"
#include "psauxmod.c"
#include "t1decode.c"
#include "t1cmap.c"

#ifndef T1_CONFIG_OPTION_NO_AFM
#include "afmparse.c"
#endif

#include "psconv.c"


/* END */
