#ifndef MSDFGEN_DLL

#pragma once

/*
 * MULTI-CHANNEL SIGNED DISTANCE FIELD GENERATOR v1.6 (2019-04-08) - extensions
 * ----------------------------------------------------------------------------
 * A utility by Viktor Chlumsky, (c) 2014 - 2019
 *
 * The extension module provides ways to easily load input and save output using popular formats.
 *
 * Third party dependencies in extension module:
 * - FreeType 2
 *   (to load input font files)
 * - TinyXML 2 by Lee Thomason
 *   (to aid in parsing input SVG files)
 * - LodePNG by Lode Vandevenne
 *   (to save output PNG images)
 *
 */

#include "ext/save-png.h"
#include "ext/import-svg.h"
#include "ext/import-font.h"

#endif
