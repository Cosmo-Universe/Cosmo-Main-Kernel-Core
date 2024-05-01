/**
 * Return codes for the kernel
 * 2023 - 2024 are reserved for the kernel.
 * Cosmo Universe reserves 2025 - 2048 for the kernel. All rights reserved.
 * Code written by CEO Duy Nam Schlitz.
 * This code by using without permission is illegal. This software is protected by the GNU General Public License v3.0.
 * This code is protected by the Govement and Registration System of the Cosmo Universe Laborotory Internationally Society (Association) (CULIS) (c) 2023.
 * This software is a part of the Cosmo Universe Operating System (CUOS) (c) 2023.
 * The vars and constants are parts of the kernel and the kernel is a part of the CUOS.
*/


#include <iostream>
#include <string>
#include <variant>

// Main kernel constants

struct rdi_expr_types {
    int type;
    int index;
    expr d_expr;
};

struct expr {
    std::string name;
    rdi_expr_types type;
    std::variant<int, float, double, char, std::string, bool, long, short, long long, long double, long int, long short, long double int, long double short, long double long> value;
};

#define regdex = -1;

#define NULL = 0;
#define rdegs = 180 / 3.1415926535897932384626433832795;
#define dregs = 3.1415926535897932384626433832795 / 180;
#define PI = 3.1415926535897932384626433832795;
#define E = 2.7182818284590452353602874713527;
#define PHI = 1.6180339887498948482045868343656;
#define G = 6.67408e-11;
#define H = 6.626070040e-34;
#define HBAR = 1.054571800e-34;
#define C = 299792458;
#define EPSILON = 8.854187817e-12;
#define MU = 1.2566370614e-6;
#define R = 8.3144598;
#define K = 1.38064852e-23;
#define NA = 6.022140857e23;
#define GCONST = 9.80665;
#define ATM = 101325;
#define G0 = 9.80665;

// Typographical constants
#define NEWLINE "\n";
#define TAB "\t";
#define SPACE " ";
#define COMMA ",";
#define COLON ":";
#define SEMICOLON ";";
#define PERIOD ".";
#define EXCLAMATION "!";
#define QUESTION "?";
#define QUOTE "\"";
#define APOSTROPHE "'";
#define BACKSLASH "\\";
#define SLASH "/";
#define UNDERSCORE "_";
#define DASH "-";
#define PLUS "+";
#define MINUS "-";
#define EQUAL "=";
#define ASTERISK "*";
#define PERCENT "%";
#define AMPERSAND "&";
#define CARET "^";
#define TILDE "~";
#define VERTICALBAR "|";
#define LEFTBRACKET "[";
#define RIGHTBRACKET "]";
#define LEFTPARENTHESIS "(";
#define RIGHTPARENTHESIS ")";
#define LEFTCURLYBRACE "{";
#define RIGHTCURLYBRACE "}";
#define LESSTHAN "<";
#define GREATERTHAN ">";
#define DOLLARSIGN "$";
#define POUNDSIGN "#";
#define ATSIGN "@";
#define BACKTICK "`";
#define LEFTARROW "<-";
#define RIGHTARROW "->";
#define LEFTDOUBLEARROW "<<";
#define RIGHTDOUBLEARROW ">>";

// Define the types of variables. TYPE (in rdi_expr_types)
#define INT 0;
#define FLOAT 1;
#define DOUBLE 2;
#define CHAR 3;
#define STRING 4;
#define BOOL 5;
#define LONG 6;
#define SHORT 7;
#define LONGLONG 8;
#define LONGDOUBLE 9;
#define LONGINT 10;
#define LONGSHORT 11;
#define LONGDOUBLEINT 12;
#define LONGDOUBLESHORT 13;
#define LONGDOUBLELONG 14;

// Define the types of registers. TYPE INDEX (in regdex)
int RAX = 0;
int RBX = 1;
int RCX = 2;
int RDX = 3;
int RSI = 4;
int RDI = 5;
int RSP = 6;
int RBP = 7;
int SYSRET = 8;
int RIP = 9;
int RFLAGS = 10;
int FLAGS = 11;
int CON = 12;
int rdi_expr_types = 13;
int EXIT = 0;
int ID = 0;
int TYPE = 1;