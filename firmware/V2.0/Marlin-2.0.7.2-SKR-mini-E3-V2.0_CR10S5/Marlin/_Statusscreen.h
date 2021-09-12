/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */

/**
 * Made with Marlin Bitmap Converter
 * https://marlinfw.org/tools/u8glib/converter.html
 *
 * This bitmap from the file 'cr10s5-status-logo.bmp'
 */
#pragma once

#define STATUS_SCREEN_X 88
#define STATUS_LOGO_WIDTH 40

const unsigned char status_logo_bmp[] PROGMEM = {
    B00000000, B00000000, B00000000, B00000000, B00000000, // ........................................
    B00000000, B00000000, B00000000, B00000000, B00000000, // ........................................
    B00000000, B00000000, B00000000, B00000000, B00000000, // ........................................
    B00000000, B00000000, B00000000, B00000000, B00000000, // ........................................
    B00000000, B00000000, B00000000, B00000000, B00000000, // ........................................
    B00000000, B00000000, B00000000, B00000000, B00000000, // ........................................
    B00111100, B11110000, B11000111, B10011111, B00111110, // ..####..####....##...####..#####..#####.
    B01100110, B10011001, B11000100, B11010001, B00100000, // .##..##.#..##..###...#..##.#...#..#.....
    B11000000, B10011000, B01000100, B11010000, B00111100, // ##......#..##....#...#..##.#......####..
    B11000000, B11110000, B01001100, B11011111, B00000110, // ##......####.....#..##..##.#####.....##.
    B11000000, B10110000, B01000100, B11000001, B00000110, // ##......#.##.....#...#..##.....#.....##.
    B01100110, B10011000, B01000100, B11110001, B00100110, // .##..##.#..##....#...#..####...#..#..##.
    B00111100, B10001101, B11110111, B10011111, B00111100, // ..####..#...##.#####.####..#####..####..
    B00000000, B00000000, B00000000, B00000000, B00000000, // ........................................
    B00000000, B00000000, B00000000, B00000000, B00000000, // ........................................
    B00000000, B00000000, B00000000, B00000000, B00000000, // ........................................
    B00000000, B00000000, B00000000, B00000000, B00000000, // ........................................
    B00000000, B00000000, B00000000, B00000000, B00000000, // ........................................
    B00000000, B00000000, B00000000, B00000000, B00000000  // ........................................
};

//
// Use default bitmaps
//
#define STATUS_HOTEND_ANIM
#define STATUS_BED_ANIM
#define STATUS_HEATERS_XSPACE 20
#if HOTENDS < 2
#define STATUS_HEATERS_X 48
#define STATUS_BED_X 72
#else
#define STATUS_HEATERS_X 40
#define STATUS_BED_X 80
#endif