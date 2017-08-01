/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    NUM = 258,
    OPER1 = 259,
    OPER2 = 260,
    ID = 261,
    INT = 262,
    STR = 263,
    STRING = 264,
    MAIN = 265,
    BEGN = 266,
    END = 267,
    DECL = 268,
    ENDDECL = 269,
    ASG = 270,
    READ = 271,
    PRINT = 272,
    RELOP = 273,
    LOGOP = 274,
    NEGOP = 275,
    IF = 276,
    ELSE = 277,
    THEN = 278,
    ENDIF = 279,
    WHILE = 280,
    DO = 281,
    ENDWHILE = 282,
    RETURN = 283,
    SYSCREA = 284,
    SYSOPEN = 285,
    SYSWRIT = 286,
    SYSSEEK = 287,
    SYSREAD = 288,
    SYSCLOS = 289,
    SYSDELE = 290,
    SYSFORK = 291,
    SYSEXEC = 292,
    SYSEXIT = 293,
    SYSGPID = 294,
    SYSGPPID = 295,
    SYSWAIT = 296,
    SYSSIGNAL = 297,
    BREAK = 298,
    CONTINUE = 299,
    BREAKPOINT = 300,
    UMIN = 301
  };
#endif
/* Tokens.  */
#define NUM 258
#define OPER1 259
#define OPER2 260
#define ID 261
#define INT 262
#define STR 263
#define STRING 264
#define MAIN 265
#define BEGN 266
#define END 267
#define DECL 268
#define ENDDECL 269
#define ASG 270
#define READ 271
#define PRINT 272
#define RELOP 273
#define LOGOP 274
#define NEGOP 275
#define IF 276
#define ELSE 277
#define THEN 278
#define ENDIF 279
#define WHILE 280
#define DO 281
#define ENDWHILE 282
#define RETURN 283
#define SYSCREA 284
#define SYSOPEN 285
#define SYSWRIT 286
#define SYSSEEK 287
#define SYSREAD 288
#define SYSCLOS 289
#define SYSDELE 290
#define SYSFORK 291
#define SYSEXEC 292
#define SYSEXIT 293
#define SYSGPID 294
#define SYSGPPID 295
#define SYSWAIT 296
#define SYSSIGNAL 297
#define BREAK 298
#define CONTINUE 299
#define BREAKPOINT 300
#define UMIN 301

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 8 "apl.y" /* yacc.c:1909  */

	struct tree *n;
	struct ArgStruct *arg;

#line 151 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
