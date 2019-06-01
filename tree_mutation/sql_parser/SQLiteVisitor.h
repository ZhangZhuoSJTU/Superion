
// Generated from SQLite.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"
#include "SQLiteParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by SQLiteParser.
 */
class  SQLiteVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by SQLiteParser.
   */
    virtual antlrcpp::Any visitParse(SQLiteParser::ParseContext *context) = 0;

    virtual antlrcpp::Any visitError(SQLiteParser::ErrorContext *context) = 0;

    virtual antlrcpp::Any visitSql_stmt_list(SQLiteParser::Sql_stmt_listContext *context) = 0;

    virtual antlrcpp::Any visitSql_stmt(SQLiteParser::Sql_stmtContext *context) = 0;

    virtual antlrcpp::Any visitAlter_table_stmt(SQLiteParser::Alter_table_stmtContext *context) = 0;

    virtual antlrcpp::Any visitAnalyze_stmt(SQLiteParser::Analyze_stmtContext *context) = 0;

    virtual antlrcpp::Any visitAttach_stmt(SQLiteParser::Attach_stmtContext *context) = 0;

    virtual antlrcpp::Any visitBegin_stmt(SQLiteParser::Begin_stmtContext *context) = 0;

    virtual antlrcpp::Any visitCommit_stmt(SQLiteParser::Commit_stmtContext *context) = 0;

    virtual antlrcpp::Any visitCompound_select_stmt(SQLiteParser::Compound_select_stmtContext *context) = 0;

    virtual antlrcpp::Any visitCreate_index_stmt(SQLiteParser::Create_index_stmtContext *context) = 0;

    virtual antlrcpp::Any visitCreate_table_stmt(SQLiteParser::Create_table_stmtContext *context) = 0;

    virtual antlrcpp::Any visitCreate_trigger_stmt(SQLiteParser::Create_trigger_stmtContext *context) = 0;

    virtual antlrcpp::Any visitCreate_view_stmt(SQLiteParser::Create_view_stmtContext *context) = 0;

    virtual antlrcpp::Any visitCreate_virtual_table_stmt(SQLiteParser::Create_virtual_table_stmtContext *context) = 0;

    virtual antlrcpp::Any visitDelete_stmt(SQLiteParser::Delete_stmtContext *context) = 0;

    virtual antlrcpp::Any visitDelete_stmt_limited(SQLiteParser::Delete_stmt_limitedContext *context) = 0;

    virtual antlrcpp::Any visitDetach_stmt(SQLiteParser::Detach_stmtContext *context) = 0;

    virtual antlrcpp::Any visitDrop_index_stmt(SQLiteParser::Drop_index_stmtContext *context) = 0;

    virtual antlrcpp::Any visitDrop_table_stmt(SQLiteParser::Drop_table_stmtContext *context) = 0;

    virtual antlrcpp::Any visitDrop_trigger_stmt(SQLiteParser::Drop_trigger_stmtContext *context) = 0;

    virtual antlrcpp::Any visitDrop_view_stmt(SQLiteParser::Drop_view_stmtContext *context) = 0;

    virtual antlrcpp::Any visitFactored_select_stmt(SQLiteParser::Factored_select_stmtContext *context) = 0;

    virtual antlrcpp::Any visitInsert_stmt(SQLiteParser::Insert_stmtContext *context) = 0;

    virtual antlrcpp::Any visitPragma_stmt(SQLiteParser::Pragma_stmtContext *context) = 0;

    virtual antlrcpp::Any visitReindex_stmt(SQLiteParser::Reindex_stmtContext *context) = 0;

    virtual antlrcpp::Any visitRelease_stmt(SQLiteParser::Release_stmtContext *context) = 0;

    virtual antlrcpp::Any visitRollback_stmt(SQLiteParser::Rollback_stmtContext *context) = 0;

    virtual antlrcpp::Any visitSavepoint_stmt(SQLiteParser::Savepoint_stmtContext *context) = 0;

    virtual antlrcpp::Any visitSimple_select_stmt(SQLiteParser::Simple_select_stmtContext *context) = 0;

    virtual antlrcpp::Any visitSelect_stmt(SQLiteParser::Select_stmtContext *context) = 0;

    virtual antlrcpp::Any visitSelect_or_values(SQLiteParser::Select_or_valuesContext *context) = 0;

    virtual antlrcpp::Any visitUpdate_stmt(SQLiteParser::Update_stmtContext *context) = 0;

    virtual antlrcpp::Any visitUpdate_stmt_limited(SQLiteParser::Update_stmt_limitedContext *context) = 0;

    virtual antlrcpp::Any visitVacuum_stmt(SQLiteParser::Vacuum_stmtContext *context) = 0;

    virtual antlrcpp::Any visitColumn_def(SQLiteParser::Column_defContext *context) = 0;

    virtual antlrcpp::Any visitType_name(SQLiteParser::Type_nameContext *context) = 0;

    virtual antlrcpp::Any visitColumn_constraint(SQLiteParser::Column_constraintContext *context) = 0;

    virtual antlrcpp::Any visitConflict_clause(SQLiteParser::Conflict_clauseContext *context) = 0;

    virtual antlrcpp::Any visitExpr(SQLiteParser::ExprContext *context) = 0;

    virtual antlrcpp::Any visitForeign_key_clause(SQLiteParser::Foreign_key_clauseContext *context) = 0;

    virtual antlrcpp::Any visitRaise_function(SQLiteParser::Raise_functionContext *context) = 0;

    virtual antlrcpp::Any visitIndexed_column(SQLiteParser::Indexed_columnContext *context) = 0;

    virtual antlrcpp::Any visitTable_constraint(SQLiteParser::Table_constraintContext *context) = 0;

    virtual antlrcpp::Any visitWith_clause(SQLiteParser::With_clauseContext *context) = 0;

    virtual antlrcpp::Any visitQualified_table_name(SQLiteParser::Qualified_table_nameContext *context) = 0;

    virtual antlrcpp::Any visitOrdering_term(SQLiteParser::Ordering_termContext *context) = 0;

    virtual antlrcpp::Any visitPragma_value(SQLiteParser::Pragma_valueContext *context) = 0;

    virtual antlrcpp::Any visitCommon_table_expression(SQLiteParser::Common_table_expressionContext *context) = 0;

    virtual antlrcpp::Any visitResult_column(SQLiteParser::Result_columnContext *context) = 0;

    virtual antlrcpp::Any visitTable_or_subquery(SQLiteParser::Table_or_subqueryContext *context) = 0;

    virtual antlrcpp::Any visitJoin_clause(SQLiteParser::Join_clauseContext *context) = 0;

    virtual antlrcpp::Any visitJoin_operator(SQLiteParser::Join_operatorContext *context) = 0;

    virtual antlrcpp::Any visitJoin_constraint(SQLiteParser::Join_constraintContext *context) = 0;

    virtual antlrcpp::Any visitSelect_core(SQLiteParser::Select_coreContext *context) = 0;

    virtual antlrcpp::Any visitCompound_operator(SQLiteParser::Compound_operatorContext *context) = 0;

    virtual antlrcpp::Any visitCte_table_name(SQLiteParser::Cte_table_nameContext *context) = 0;

    virtual antlrcpp::Any visitSigned_number(SQLiteParser::Signed_numberContext *context) = 0;

    virtual antlrcpp::Any visitLiteral_value(SQLiteParser::Literal_valueContext *context) = 0;

    virtual antlrcpp::Any visitUnary_operator(SQLiteParser::Unary_operatorContext *context) = 0;

    virtual antlrcpp::Any visitError_message(SQLiteParser::Error_messageContext *context) = 0;

    virtual antlrcpp::Any visitModule_argument(SQLiteParser::Module_argumentContext *context) = 0;

    virtual antlrcpp::Any visitColumn_alias(SQLiteParser::Column_aliasContext *context) = 0;

    virtual antlrcpp::Any visitKeyword(SQLiteParser::KeywordContext *context) = 0;

    virtual antlrcpp::Any visitName(SQLiteParser::NameContext *context) = 0;

    virtual antlrcpp::Any visitFunction_name(SQLiteParser::Function_nameContext *context) = 0;

    virtual antlrcpp::Any visitDatabase_name(SQLiteParser::Database_nameContext *context) = 0;

    virtual antlrcpp::Any visitTable_name(SQLiteParser::Table_nameContext *context) = 0;

    virtual antlrcpp::Any visitTable_or_index_name(SQLiteParser::Table_or_index_nameContext *context) = 0;

    virtual antlrcpp::Any visitNew_table_name(SQLiteParser::New_table_nameContext *context) = 0;

    virtual antlrcpp::Any visitColumn_name(SQLiteParser::Column_nameContext *context) = 0;

    virtual antlrcpp::Any visitCollation_name(SQLiteParser::Collation_nameContext *context) = 0;

    virtual antlrcpp::Any visitForeign_table(SQLiteParser::Foreign_tableContext *context) = 0;

    virtual antlrcpp::Any visitIndex_name(SQLiteParser::Index_nameContext *context) = 0;

    virtual antlrcpp::Any visitTrigger_name(SQLiteParser::Trigger_nameContext *context) = 0;

    virtual antlrcpp::Any visitView_name(SQLiteParser::View_nameContext *context) = 0;

    virtual antlrcpp::Any visitModule_name(SQLiteParser::Module_nameContext *context) = 0;

    virtual antlrcpp::Any visitPragma_name(SQLiteParser::Pragma_nameContext *context) = 0;

    virtual antlrcpp::Any visitSavepoint_name(SQLiteParser::Savepoint_nameContext *context) = 0;

    virtual antlrcpp::Any visitTable_alias(SQLiteParser::Table_aliasContext *context) = 0;

    virtual antlrcpp::Any visitTransaction_name(SQLiteParser::Transaction_nameContext *context) = 0;

    virtual antlrcpp::Any visitAny_name(SQLiteParser::Any_nameContext *context) = 0;


};

