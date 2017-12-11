/***************************************************************************/
/*                                                                         */
/*  t1decode.h                                                             */
/*                                                                         */
/*    PostScript Type 1 decoding routines (specification).                 */
/*                                                                         */
<<<<<<< HEAD   (8c932b Necessary changes to build FreeType on Android)
/*  Copyright 2000-2017 by                                                 */
/*  David Turner, Robert Wilhelm, and Werner Lemberg.                      */
/*                                                                         */
/*  This file is part of the FreeType project, and may only be used,       */
/*  modified, and distributed under the terms of the FreeType project      */
/*  license, LICENSE.TXT.  By continuing to use, modify, or distribute     */
/*  this file you indicate that you have read the license and              */
/*  understand and accept it fully.                                        */
/*                                                                         */
/***************************************************************************/


#ifndef T1DECODE_H_
#define T1DECODE_H_


#include <ft2build.h>
#include FT_INTERNAL_POSTSCRIPT_AUX_H
#include FT_INTERNAL_TYPE1_TYPES_H


FT_BEGIN_HEADER


  FT_CALLBACK_TABLE
  const T1_Decoder_FuncsRec  t1_decoder_funcs;


  FT_LOCAL( FT_Error )
  t1_decoder_parse_glyph( T1_Decoder  decoder,
                          FT_UInt     glyph_index );

  FT_LOCAL( FT_Error )
  t1_decoder_parse_charstrings( T1_Decoder  decoder,
                                FT_Byte*    base,
                                FT_UInt     len );

  FT_LOCAL( FT_Error )
  t1_decoder_init( T1_Decoder           decoder,
                   FT_Face              face,
                   FT_Size              size,
                   FT_GlyphSlot         slot,
                   FT_Byte**            glyph_names,
                   PS_Blend             blend,
                   FT_Bool              hinting,
                   FT_Render_Mode       hint_mode,
                   T1_Decoder_Callback  parse_glyph );

  FT_LOCAL( void )
  t1_decoder_done( T1_Decoder  decoder );


FT_END_HEADER

#endif /* T1DECODE_H_ */
=======
/*  Copyright 2000-2015 by                                                 */
/*  David Turner, Robert Wilhelm, and Werner Lemberg.                      */
/*                                                                         */
/*  This file is part of the FreeType project, and may only be used,       */
/*  modified, and distributed under the terms of the FreeType project      */
/*  license, LICENSE.TXT.  By continuing to use, modify, or distribute     */
/*  this file you indicate that you have read the license and              */
/*  understand and accept it fully.                                        */
/*                                                                         */
/***************************************************************************/


#ifndef __T1DECODE_H__
#define __T1DECODE_H__


#include <ft2build.h>
#include FT_INTERNAL_POSTSCRIPT_AUX_H
#include FT_INTERNAL_TYPE1_TYPES_H


FT_BEGIN_HEADER


  FT_CALLBACK_TABLE
  const T1_Decoder_FuncsRec  t1_decoder_funcs;


  FT_LOCAL( FT_Error )
  t1_decoder_parse_glyph( T1_Decoder  decoder,
                          FT_UInt     glyph_index );

  FT_LOCAL( FT_Error )
  t1_decoder_parse_charstrings( T1_Decoder  decoder,
                                FT_Byte*    base,
                                FT_UInt     len );

  FT_LOCAL( FT_Error )
  t1_decoder_init( T1_Decoder           decoder,
                   FT_Face              face,
                   FT_Size              size,
                   FT_GlyphSlot         slot,
                   FT_Byte**            glyph_names,
                   PS_Blend             blend,
                   FT_Bool              hinting,
                   FT_Render_Mode       hint_mode,
                   T1_Decoder_Callback  parse_glyph );

  FT_LOCAL( void )
  t1_decoder_done( T1_Decoder  decoder );


FT_END_HEADER

#endif /* __T1DECODE_H__ */
>>>>>>> BRANCH (48a9a2 Merge "Use -Werror in external/freetype" am: 51036df35f)


/* END */
