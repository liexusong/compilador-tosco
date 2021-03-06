/*
 * Simple Pascal Compiler
 * Abstract Syntax Tree
 *
 * Copyright (c) 2007-2008 Leandro A. F. Pereira <leandro@hardinfo.org>
 *
 */
#ifndef __AST_H__
#define __AST_H__

#include "compiler_main.h"
#include "symbol-table.h"
#include "lex.h"

extern SymbolTable *symbol_table;

typedef struct	_ASTNode	ASTNode;

struct _ASTNode {
  TokenType token;
  gpointer data;
};

GNode          *ast(TokenList * token_list);
int		ast_test_main(int argc, char **argv);
ASTNode        *ast_node_new(TokenType token, gpointer data);

#endif	/* __AST_H__ */

