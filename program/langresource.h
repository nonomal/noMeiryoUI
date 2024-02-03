/*
noMeiryoUI (C) 2005,2012-2024 Tatsuhiko Shoji
The sources for noMeiryoUI are distributed under the MIT open source license
*/

#ifndef LANGRESOURCE_H
#define LANGRESOURCE_H

#include <tchar.h>

#define FONT_FACE 0
#define TITLE 1
#define MENU_FILE 2
#define MENU_FILE_LOAD 3
#define MENU_FILE_SAVE 4
#define MENU_FILE_SET_QUIT 5
#define MENU_FILE_QUIT 6
#define MENU_PRESET 7
#define MENU_PRESET_8 8
#define MENU_PRESET_10 9
#define MENU_TOOLS 10
#define MENU_TOOLS_THREAD 11
#define MENU_TOOLS_SEVEN 12
#define MENU_HELP 13
#define MENU_HELP_HELP 14
#define MENU_HELP_ABOUT 15
#define DLG_ALL_FONT 16
#define DLG_TITLE_BAR 17
#define DLG_ICON 18
#define DLG_PALETTE 19
#define DLG_HINT 20
#define DLG_MESSAGE 21
#define DLG_MENU 22
#define DLG_SELECT 23
#define DLG_SET_ALL 24
#define DLG_SET 25
#define DLG_EXIT 26
#define DLG_FONT_SEL 27
#define DLG_FONT_NAME 28
#define DLG_STYLE 29
#define DLG_SIZE 30
#define DLG_UNDERLINE 31
#define DLG_STRIKE 32
#define DLG_CHARSET 33
#define DLG_OK 34
#define DLG_CANCEL 35
#define DLG_CHARSET_ANSI 36
#define DLG_CHARSET_BALTIC 37
#define DLG_CHARSET_BIG5 38
#define DLG_CHARSET_DEFAULT 39
#define DLG_CHARSET_EASTEUROPE 40
#define DLG_CHARSET_GB2312 41
#define DLG_CHARSET_GREEK 42
#define DLG_CHARSET_HANGUL 43
#define DLG_CHARSET_MAC 44
#define DLG_CHARSET_OEM 45
#define DLG_CHARSET_RUSSIAN 46
#define DLG_CHARSET_SHIFTJIS 47
#define DLG_CHARSET_SYMBOL 48
#define DLG_CHARSET_TURKISH 49
#define DLG_CHARSET_VIETNAMESE 50
#define DLG_CHARSET_JOHAB 51
#define DLG_CHARSET_ARABIC 52
#define DLG_CHARSET_HEBREW 53
#define DLG_CHARSET_THAI 54
#define DLG_STYLE_NORMAL 55
#define DLG_STYLE_ITALIC 56
#define DLG_STYLE_BOLD 57
#define DLG_STYLE_BOLD_ITALIC 58
#define MSG_SETTING_FILE 59
#define MSG_ALL_FILE 60
#define MSG_LOAD_FAIL 61
#define MSG_SAVE_FAIL 62
#define MSG_ERROR 63
#define MSG_ABOUT 64
#define MSG_NO_FONT 65
#define MSG_NO_STYLE 66
#define MSG_NO_SIZE 67
#define MSG_NO_CHARSET 68
#define MSG_TRANSLATE 69
#define FONT_CHARSET 70
#define DLG_APPLY 71
#define DLG_ALL_GROUP 72
#define DLG_INDIVIDUAL_GROUP 73
#define DLG_STYLE_MEDIUM 74
#define DLG_STYLE_SEMI_BOLD 75
#define DLG_STYLE_BOOK 76
#define DLG_STYLE_OBLIQUE 77
#define DLG_STYLE_LIGHT 78
#define DLG_STYLE_EXTRA_LIGHT 79
#define DLG_STYLE_SEMI_LIGHT 80
#define DLG_STYLE_SLANTED 81
#define DLG_CHECK_BOLD 82
#define DLG_CHECK_ITALIC 83
#define MSG_WARNING 84
#define MSG_WIN11_22H2RESTRICTION 85
#define MENU_CHOICE_APP_FONT 86

extern void readResourceFile(TCHAR *file);

#endif
