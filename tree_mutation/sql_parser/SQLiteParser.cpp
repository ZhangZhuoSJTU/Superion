
// Generated from SQLite.g4 by ANTLR 4.7


#include "SQLiteVisitor.h"

#include "SQLiteParser.h"


using namespace antlrcpp;
using namespace antlr4;

SQLiteParser::SQLiteParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

SQLiteParser::~SQLiteParser() {
  delete _interpreter;
}

std::string SQLiteParser::getGrammarFileName() const {
  return "SQLite.g4";
}

const std::vector<std::string>& SQLiteParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& SQLiteParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ParseContext ------------------------------------------------------------------

SQLiteParser::ParseContext::ParseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SQLiteParser::ParseContext::EOF() {
  return getToken(SQLiteParser::EOF, 0);
}

std::vector<SQLiteParser::Sql_stmt_listContext *> SQLiteParser::ParseContext::sql_stmt_list() {
  return getRuleContexts<SQLiteParser::Sql_stmt_listContext>();
}

SQLiteParser::Sql_stmt_listContext* SQLiteParser::ParseContext::sql_stmt_list(size_t i) {
  return getRuleContext<SQLiteParser::Sql_stmt_listContext>(i);
}

std::vector<SQLiteParser::ErrorContext *> SQLiteParser::ParseContext::error() {
  return getRuleContexts<SQLiteParser::ErrorContext>();
}

SQLiteParser::ErrorContext* SQLiteParser::ParseContext::error(size_t i) {
  return getRuleContext<SQLiteParser::ErrorContext>(i);
}


size_t SQLiteParser::ParseContext::getRuleIndex() const {
  return SQLiteParser::RuleParse;
}

antlrcpp::Any SQLiteParser::ParseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLiteVisitor*>(visitor))
    return parserVisitor->visitParse(this);
  else
    return visitor->visitChildren(this);
}

SQLiteParser::ParseContext* SQLiteParser::parse() {
  ParseContext *_localctx = _tracker.createInstance<ParseContext>(_ctx, getState());
  enterRule(_localctx, 0, SQLiteParser::RuleParse);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(168);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SQLiteParser::SCOL)
      | (1ULL << SQLiteParser::K_ALTER)
      | (1ULL << SQLiteParser::K_ANALYZE)
      | (1ULL << SQLiteParser::K_ATTACH)
      | (1ULL << SQLiteParser::K_BEGIN)
      | (1ULL << SQLiteParser::K_COMMIT)
      | (1ULL << SQLiteParser::K_CREATE)
      | (1ULL << SQLiteParser::K_DELETE)
      | (1ULL << SQLiteParser::K_DETACH)
      | (1ULL << SQLiteParser::K_DROP))) != 0) || ((((_la - 66) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 66)) & ((1ULL << (SQLiteParser::K_END - 66))
      | (1ULL << (SQLiteParser::K_EXPLAIN - 66))
      | (1ULL << (SQLiteParser::K_INSERT - 66))
      | (1ULL << (SQLiteParser::K_PRAGMA - 66))
      | (1ULL << (SQLiteParser::K_REINDEX - 66))
      | (1ULL << (SQLiteParser::K_RELEASE - 66))
      | (1ULL << (SQLiteParser::K_REPLACE - 66))
      | (1ULL << (SQLiteParser::K_ROLLBACK - 66))
      | (1ULL << (SQLiteParser::K_SAVEPOINT - 66))
      | (1ULL << (SQLiteParser::K_SELECT - 66)))) != 0) || ((((_la - 139) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 139)) & ((1ULL << (SQLiteParser::K_UPDATE - 139))
      | (1ULL << (SQLiteParser::K_VACUUM - 139))
      | (1ULL << (SQLiteParser::K_VALUES - 139))
      | (1ULL << (SQLiteParser::K_WITH - 139))
      | (1ULL << (SQLiteParser::UNEXPECTED_CHAR - 139)))) != 0)) {
      setState(166);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case SQLiteParser::SCOL:
        case SQLiteParser::K_ALTER:
        case SQLiteParser::K_ANALYZE:
        case SQLiteParser::K_ATTACH:
        case SQLiteParser::K_BEGIN:
        case SQLiteParser::K_COMMIT:
        case SQLiteParser::K_CREATE:
        case SQLiteParser::K_DELETE:
        case SQLiteParser::K_DETACH:
        case SQLiteParser::K_DROP:
        case SQLiteParser::K_END:
        case SQLiteParser::K_EXPLAIN:
        case SQLiteParser::K_INSERT:
        case SQLiteParser::K_PRAGMA:
        case SQLiteParser::K_REINDEX:
        case SQLiteParser::K_RELEASE:
        case SQLiteParser::K_REPLACE:
        case SQLiteParser::K_ROLLBACK:
        case SQLiteParser::K_SAVEPOINT:
        case SQLiteParser::K_SELECT:
        case SQLiteParser::K_UPDATE:
        case SQLiteParser::K_VACUUM:
        case SQLiteParser::K_VALUES:
        case SQLiteParser::K_WITH: {
          setState(164);
          sql_stmt_list();
          break;
        }

        case SQLiteParser::UNEXPECTED_CHAR: {
          setState(165);
          error();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(170);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(171);
    match(SQLiteParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ErrorContext ------------------------------------------------------------------

SQLiteParser::ErrorContext::ErrorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SQLiteParser::ErrorContext::UNEXPECTED_CHAR() {
  return getToken(SQLiteParser::UNEXPECTED_CHAR, 0);
}


size_t SQLiteParser::ErrorContext::getRuleIndex() const {
  return SQLiteParser::RuleError;
}

antlrcpp::Any SQLiteParser::ErrorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLiteVisitor*>(visitor))
    return parserVisitor->visitError(this);
  else
    return visitor->visitChildren(this);
}

SQLiteParser::ErrorContext* SQLiteParser::error() {
  ErrorContext *_localctx = _tracker.createInstance<ErrorContext>(_ctx, getState());
  enterRule(_localctx, 2, SQLiteParser::RuleError);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(173);
    dynamic_cast<ErrorContext *>(_localctx)->unexpected_charToken = match(SQLiteParser::UNEXPECTED_CHAR);
     
         throw new RuntimeException("UNEXPECTED_CHAR=" + (dynamic_cast<ErrorContext *>(_localctx)->unexpected_charToken != nullptr ? dynamic_cast<ErrorContext *>(_localctx)->unexpected_charToken->getText() : "")); 
       
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Sql_stmt_listContext ------------------------------------------------------------------

SQLiteParser::Sql_stmt_listContext::Sql_stmt_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SQLiteParser::Sql_stmtContext *> SQLiteParser::Sql_stmt_listContext::sql_stmt() {
  return getRuleContexts<SQLiteParser::Sql_stmtContext>();
}

SQLiteParser::Sql_stmtContext* SQLiteParser::Sql_stmt_listContext::sql_stmt(size_t i) {
  return getRuleContext<SQLiteParser::Sql_stmtContext>(i);
}


size_t SQLiteParser::Sql_stmt_listContext::getRuleIndex() const {
  return SQLiteParser::RuleSql_stmt_list;
}

antlrcpp::Any SQLiteParser::Sql_stmt_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLiteVisitor*>(visitor))
    return parserVisitor->visitSql_stmt_list(this);
  else
    return visitor->visitChildren(this);
}

SQLiteParser::Sql_stmt_listContext* SQLiteParser::sql_stmt_list() {
  Sql_stmt_listContext *_localctx = _tracker.createInstance<Sql_stmt_listContext>(_ctx, getState());
  enterRule(_localctx, 4, SQLiteParser::RuleSql_stmt_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(179);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SQLiteParser::SCOL) {
      setState(176);
      match(SQLiteParser::SCOL);
      setState(181);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(182);
    sql_stmt();
    setState(191);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(184); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(183);
          match(SQLiteParser::SCOL);
          setState(186); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while (_la == SQLiteParser::SCOL);
        setState(188);
        sql_stmt(); 
      }
      setState(193);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    }
    setState(197);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(194);
        match(SQLiteParser::SCOL); 
      }
      setState(199);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Sql_stmtContext ------------------------------------------------------------------

SQLiteParser::Sql_stmtContext::Sql_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SQLiteParser::Alter_table_stmtContext* SQLiteParser::Sql_stmtContext::alter_table_stmt() {
  return getRuleContext<SQLiteParser::Alter_table_stmtContext>(0);
}

SQLiteParser::Analyze_stmtContext* SQLiteParser::Sql_stmtContext::analyze_stmt() {
  return getRuleContext<SQLiteParser::Analyze_stmtContext>(0);
}

SQLiteParser::Attach_stmtContext* SQLiteParser::Sql_stmtContext::attach_stmt() {
  return getRuleContext<SQLiteParser::Attach_stmtContext>(0);
}

SQLiteParser::Begin_stmtContext* SQLiteParser::Sql_stmtContext::begin_stmt() {
  return getRuleContext<SQLiteParser::Begin_stmtContext>(0);
}

SQLiteParser::Commit_stmtContext* SQLiteParser::Sql_stmtContext::commit_stmt() {
  return getRuleContext<SQLiteParser::Commit_stmtContext>(0);
}

SQLiteParser::Compound_select_stmtContext* SQLiteParser::Sql_stmtContext::compound_select_stmt() {
  return getRuleContext<SQLiteParser::Compound_select_stmtContext>(0);
}

SQLiteParser::Create_index_stmtContext* SQLiteParser::Sql_stmtContext::create_index_stmt() {
  return getRuleContext<SQLiteParser::Create_index_stmtContext>(0);
}

SQLiteParser::Create_table_stmtContext* SQLiteParser::Sql_stmtContext::create_table_stmt() {
  return getRuleContext<SQLiteParser::Create_table_stmtContext>(0);
}

SQLiteParser::Create_trigger_stmtContext* SQLiteParser::Sql_stmtContext::create_trigger_stmt() {
  return getRuleContext<SQLiteParser::Create_trigger_stmtContext>(0);
}

SQLiteParser::Create_view_stmtContext* SQLiteParser::Sql_stmtContext::create_view_stmt() {
  return getRuleContext<SQLiteParser::Create_view_stmtContext>(0);
}

SQLiteParser::Create_virtual_table_stmtContext* SQLiteParser::Sql_stmtContext::create_virtual_table_stmt() {
  return getRuleContext<SQLiteParser::Create_virtual_table_stmtContext>(0);
}

SQLiteParser::Delete_stmtContext* SQLiteParser::Sql_stmtContext::delete_stmt() {
  return getRuleContext<SQLiteParser::Delete_stmtContext>(0);
}

SQLiteParser::Delete_stmt_limitedContext* SQLiteParser::Sql_stmtContext::delete_stmt_limited() {
  return getRuleContext<SQLiteParser::Delete_stmt_limitedContext>(0);
}

SQLiteParser::Detach_stmtContext* SQLiteParser::Sql_stmtContext::detach_stmt() {
  return getRuleContext<SQLiteParser::Detach_stmtContext>(0);
}

SQLiteParser::Drop_index_stmtContext* SQLiteParser::Sql_stmtContext::drop_index_stmt() {
  return getRuleContext<SQLiteParser::Drop_index_stmtContext>(0);
}

SQLiteParser::Drop_table_stmtContext* SQLiteParser::Sql_stmtContext::drop_table_stmt() {
  return getRuleContext<SQLiteParser::Drop_table_stmtContext>(0);
}

SQLiteParser::Drop_trigger_stmtContext* SQLiteParser::Sql_stmtContext::drop_trigger_stmt() {
  return getRuleContext<SQLiteParser::Drop_trigger_stmtContext>(0);
}

SQLiteParser::Drop_view_stmtContext* SQLiteParser::Sql_stmtContext::drop_view_stmt() {
  return getRuleContext<SQLiteParser::Drop_view_stmtContext>(0);
}

SQLiteParser::Factored_select_stmtContext* SQLiteParser::Sql_stmtContext::factored_select_stmt() {
  return getRuleContext<SQLiteParser::Factored_select_stmtContext>(0);
}

SQLiteParser::Insert_stmtContext* SQLiteParser::Sql_stmtContext::insert_stmt() {
  return getRuleContext<SQLiteParser::Insert_stmtContext>(0);
}

SQLiteParser::Pragma_stmtContext* SQLiteParser::Sql_stmtContext::pragma_stmt() {
  return getRuleContext<SQLiteParser::Pragma_stmtContext>(0);
}

SQLiteParser::Reindex_stmtContext* SQLiteParser::Sql_stmtContext::reindex_stmt() {
  return getRuleContext<SQLiteParser::Reindex_stmtContext>(0);
}

SQLiteParser::Release_stmtContext* SQLiteParser::Sql_stmtContext::release_stmt() {
  return getRuleContext<SQLiteParser::Release_stmtContext>(0);
}

SQLiteParser::Rollback_stmtContext* SQLiteParser::Sql_stmtContext::rollback_stmt() {
  return getRuleContext<SQLiteParser::Rollback_stmtContext>(0);
}

SQLiteParser::Savepoint_stmtContext* SQLiteParser::Sql_stmtContext::savepoint_stmt() {
  return getRuleContext<SQLiteParser::Savepoint_stmtContext>(0);
}

SQLiteParser::Simple_select_stmtContext* SQLiteParser::Sql_stmtContext::simple_select_stmt() {
  return getRuleContext<SQLiteParser::Simple_select_stmtContext>(0);
}

SQLiteParser::Select_stmtContext* SQLiteParser::Sql_stmtContext::select_stmt() {
  return getRuleContext<SQLiteParser::Select_stmtContext>(0);
}

SQLiteParser::Update_stmtContext* SQLiteParser::Sql_stmtContext::update_stmt() {
  return getRuleContext<SQLiteParser::Update_stmtContext>(0);
}

SQLiteParser::Update_stmt_limitedContext* SQLiteParser::Sql_stmtContext::update_stmt_limited() {
  return getRuleContext<SQLiteParser::Update_stmt_limitedContext>(0);
}

SQLiteParser::Vacuum_stmtContext* SQLiteParser::Sql_stmtContext::vacuum_stmt() {
  return getRuleContext<SQLiteParser::Vacuum_stmtContext>(0);
}

tree::TerminalNode* SQLiteParser::Sql_stmtContext::K_EXPLAIN() {
  return getToken(SQLiteParser::K_EXPLAIN, 0);
}

tree::TerminalNode* SQLiteParser::Sql_stmtContext::K_QUERY() {
  return getToken(SQLiteParser::K_QUERY, 0);
}

tree::TerminalNode* SQLiteParser::Sql_stmtContext::K_PLAN() {
  return getToken(SQLiteParser::K_PLAN, 0);
}


size_t SQLiteParser::Sql_stmtContext::getRuleIndex() const {
  return SQLiteParser::RuleSql_stmt;
}

antlrcpp::Any SQLiteParser::Sql_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLiteVisitor*>(visitor))
    return parserVisitor->visitSql_stmt(this);
  else
    return visitor->visitChildren(this);
}

SQLiteParser::Sql_stmtContext* SQLiteParser::sql_stmt() {
  Sql_stmtContext *_localctx = _tracker.createInstance<Sql_stmtContext>(_ctx, getState());
  enterRule(_localctx, 6, SQLiteParser::RuleSql_stmt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(205);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SQLiteParser::K_EXPLAIN) {
      setState(200);
      match(SQLiteParser::K_EXPLAIN);
      setState(203);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SQLiteParser::K_QUERY) {
        setState(201);
        match(SQLiteParser::K_QUERY);
        setState(202);
        match(SQLiteParser::K_PLAN);
      }
    }
    setState(237);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      setState(207);
      alter_table_stmt();
      break;
    }

    case 2: {
      setState(208);
      analyze_stmt();
      break;
    }

    case 3: {
      setState(209);
      attach_stmt();
      break;
    }

    case 4: {
      setState(210);
      begin_stmt();
      break;
    }

    case 5: {
      setState(211);
      commit_stmt();
      break;
    }

    case 6: {
      setState(212);
      compound_select_stmt();
      break;
    }

    case 7: {
      setState(213);
      create_index_stmt();
      break;
    }

    case 8: {
      setState(214);
      create_table_stmt();
      break;
    }

    case 9: {
      setState(215);
      create_trigger_stmt();
      break;
    }

    case 10: {
      setState(216);
      create_view_stmt();
      break;
    }

    case 11: {
      setState(217);
      create_virtual_table_stmt();
      break;
    }

    case 12: {
      setState(218);
      delete_stmt();
      break;
    }

    case 13: {
      setState(219);
      delete_stmt_limited();
      break;
    }

    case 14: {
      setState(220);
      detach_stmt();
      break;
    }

    case 15: {
      setState(221);
      drop_index_stmt();
      break;
    }

    case 16: {
      setState(222);
      drop_table_stmt();
      break;
    }

    case 17: {
      setState(223);
      drop_trigger_stmt();
      break;
    }

    case 18: {
      setState(224);
      drop_view_stmt();
      break;
    }

    case 19: {
      setState(225);
      factored_select_stmt();
      break;
    }

    case 20: {
      setState(226);
      insert_stmt();
      break;
    }

    case 21: {
      setState(227);
      pragma_stmt();
      break;
    }

    case 22: {
      setState(228);
      reindex_stmt();
      break;
    }

    case 23: {
      setState(229);
      release_stmt();
      break;
    }

    case 24: {
      setState(230);
      rollback_stmt();
      break;
    }

    case 25: {
      setState(231);
      savepoint_stmt();
      break;
    }

    case 26: {
      setState(232);
      simple_select_stmt();
      break;
    }

    case 27: {
      setState(233);
      select_stmt();
      break;
    }

    case 28: {
      setState(234);
      update_stmt();
      break;
    }

    case 29: {
      setState(235);
      update_stmt_limited();
      break;
    }

    case 30: {
      setState(236);
      vacuum_stmt();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Alter_table_stmtContext ------------------------------------------------------------------

SQLiteParser::Alter_table_stmtContext::Alter_table_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SQLiteParser::Alter_table_stmtContext::K_ALTER() {
  return getToken(SQLiteParser::K_ALTER, 0);
}

tree::TerminalNode* SQLiteParser::Alter_table_stmtContext::K_TABLE() {
  return getToken(SQLiteParser::K_TABLE, 0);
}

SQLiteParser::Table_nameContext* SQLiteParser::Alter_table_stmtContext::table_name() {
  return getRuleContext<SQLiteParser::Table_nameContext>(0);
}

tree::TerminalNode* SQLiteParser::Alter_table_stmtContext::K_RENAME() {
  return getToken(SQLiteParser::K_RENAME, 0);
}

tree::TerminalNode* SQLiteParser::Alter_table_stmtContext::K_TO() {
  return getToken(SQLiteParser::K_TO, 0);
}

SQLiteParser::New_table_nameContext* SQLiteParser::Alter_table_stmtContext::new_table_name() {
  return getRuleContext<SQLiteParser::New_table_nameContext>(0);
}

tree::TerminalNode* SQLiteParser::Alter_table_stmtContext::K_ADD() {
  return getToken(SQLiteParser::K_ADD, 0);
}

SQLiteParser::Column_defContext* SQLiteParser::Alter_table_stmtContext::column_def() {
  return getRuleContext<SQLiteParser::Column_defContext>(0);
}

SQLiteParser::Database_nameContext* SQLiteParser::Alter_table_stmtContext::database_name() {
  return getRuleContext<SQLiteParser::Database_nameContext>(0);
}

tree::TerminalNode* SQLiteParser::Alter_table_stmtContext::K_COLUMN() {
  return getToken(SQLiteParser::K_COLUMN, 0);
}


size_t SQLiteParser::Alter_table_stmtContext::getRuleIndex() const {
  return SQLiteParser::RuleAlter_table_stmt;
}

antlrcpp::Any SQLiteParser::Alter_table_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLiteVisitor*>(visitor))
    return parserVisitor->visitAlter_table_stmt(this);
  else
    return visitor->visitChildren(this);
}

SQLiteParser::Alter_table_stmtContext* SQLiteParser::alter_table_stmt() {
  Alter_table_stmtContext *_localctx = _tracker.createInstance<Alter_table_stmtContext>(_ctx, getState());
  enterRule(_localctx, 8, SQLiteParser::RuleAlter_table_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(239);
    match(SQLiteParser::K_ALTER);
    setState(240);
    match(SQLiteParser::K_TABLE);
    setState(244);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      setState(241);
      database_name();
      setState(242);
      match(SQLiteParser::DOT);
      break;
    }

    }
    setState(246);
    table_name();
    setState(255);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SQLiteParser::K_RENAME: {
        setState(247);
        match(SQLiteParser::K_RENAME);
        setState(248);
        match(SQLiteParser::K_TO);
        setState(249);
        new_table_name();
        break;
      }

      case SQLiteParser::K_ADD: {
        setState(250);
        match(SQLiteParser::K_ADD);
        setState(252);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
        case 1: {
          setState(251);
          match(SQLiteParser::K_COLUMN);
          break;
        }

        }
        setState(254);
        column_def();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Analyze_stmtContext ------------------------------------------------------------------

SQLiteParser::Analyze_stmtContext::Analyze_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SQLiteParser::Analyze_stmtContext::K_ANALYZE() {
  return getToken(SQLiteParser::K_ANALYZE, 0);
}

SQLiteParser::Database_nameContext* SQLiteParser::Analyze_stmtContext::database_name() {
  return getRuleContext<SQLiteParser::Database_nameContext>(0);
}

SQLiteParser::Table_or_index_nameContext* SQLiteParser::Analyze_stmtContext::table_or_index_name() {
  return getRuleContext<SQLiteParser::Table_or_index_nameContext>(0);
}


size_t SQLiteParser::Analyze_stmtContext::getRuleIndex() const {
  return SQLiteParser::RuleAnalyze_stmt;
}

antlrcpp::Any SQLiteParser::Analyze_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLiteVisitor*>(visitor))
    return parserVisitor->visitAnalyze_stmt(this);
  else
    return visitor->visitChildren(this);
}

SQLiteParser::Analyze_stmtContext* SQLiteParser::analyze_stmt() {
  Analyze_stmtContext *_localctx = _tracker.createInstance<Analyze_stmtContext>(_ctx, getState());
  enterRule(_localctx, 10, SQLiteParser::RuleAnalyze_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(257);
    match(SQLiteParser::K_ANALYZE);
    setState(264);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      setState(258);
      database_name();
      break;
    }

    case 2: {
      setState(259);
      table_or_index_name();
      break;
    }

    case 3: {
      setState(260);
      database_name();
      setState(261);
      match(SQLiteParser::DOT);
      setState(262);
      table_or_index_name();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Attach_stmtContext ------------------------------------------------------------------

SQLiteParser::Attach_stmtContext::Attach_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SQLiteParser::Attach_stmtContext::K_ATTACH() {
  return getToken(SQLiteParser::K_ATTACH, 0);
}

SQLiteParser::ExprContext* SQLiteParser::Attach_stmtContext::expr() {
  return getRuleContext<SQLiteParser::ExprContext>(0);
}

tree::TerminalNode* SQLiteParser::Attach_stmtContext::K_AS() {
  return getToken(SQLiteParser::K_AS, 0);
}

SQLiteParser::Database_nameContext* SQLiteParser::Attach_stmtContext::database_name() {
  return getRuleContext<SQLiteParser::Database_nameContext>(0);
}

tree::TerminalNode* SQLiteParser::Attach_stmtContext::K_DATABASE() {
  return getToken(SQLiteParser::K_DATABASE, 0);
}


size_t SQLiteParser::Attach_stmtContext::getRuleIndex() const {
  return SQLiteParser::RuleAttach_stmt;
}

antlrcpp::Any SQLiteParser::Attach_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLiteVisitor*>(visitor))
    return parserVisitor->visitAttach_stmt(this);
  else
    return visitor->visitChildren(this);
}

SQLiteParser::Attach_stmtContext* SQLiteParser::attach_stmt() {
  Attach_stmtContext *_localctx = _tracker.createInstance<Attach_stmtContext>(_ctx, getState());
  enterRule(_localctx, 12, SQLiteParser::RuleAttach_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(266);
    match(SQLiteParser::K_ATTACH);
    setState(268);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      setState(267);
      match(SQLiteParser::K_DATABASE);
      break;
    }

    }
    setState(270);
    expr(0);
    setState(271);
    match(SQLiteParser::K_AS);
    setState(272);
    database_name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Begin_stmtContext ------------------------------------------------------------------

SQLiteParser::Begin_stmtContext::Begin_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SQLiteParser::Begin_stmtContext::K_BEGIN() {
  return getToken(SQLiteParser::K_BEGIN, 0);
}

tree::TerminalNode* SQLiteParser::Begin_stmtContext::K_TRANSACTION() {
  return getToken(SQLiteParser::K_TRANSACTION, 0);
}

tree::TerminalNode* SQLiteParser::Begin_stmtContext::K_DEFERRED() {
  return getToken(SQLiteParser::K_DEFERRED, 0);
}

tree::TerminalNode* SQLiteParser::Begin_stmtContext::K_IMMEDIATE() {
  return getToken(SQLiteParser::K_IMMEDIATE, 0);
}

tree::TerminalNode* SQLiteParser::Begin_stmtContext::K_EXCLUSIVE() {
  return getToken(SQLiteParser::K_EXCLUSIVE, 0);
}

SQLiteParser::Transaction_nameContext* SQLiteParser::Begin_stmtContext::transaction_name() {
  return getRuleContext<SQLiteParser::Transaction_nameContext>(0);
}


size_t SQLiteParser::Begin_stmtContext::getRuleIndex() const {
  return SQLiteParser::RuleBegin_stmt;
}

antlrcpp::Any SQLiteParser::Begin_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLiteVisitor*>(visitor))
    return parserVisitor->visitBegin_stmt(this);
  else
    return visitor->visitChildren(this);
}

SQLiteParser::Begin_stmtContext* SQLiteParser::begin_stmt() {
  Begin_stmtContext *_localctx = _tracker.createInstance<Begin_stmtContext>(_ctx, getState());
  enterRule(_localctx, 14, SQLiteParser::RuleBegin_stmt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(274);
    match(SQLiteParser::K_BEGIN);
    setState(276);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 58) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 58)) & ((1ULL << (SQLiteParser::K_DEFERRED - 58))
      | (1ULL << (SQLiteParser::K_EXCLUSIVE - 58))
      | (1ULL << (SQLiteParser::K_IMMEDIATE - 58)))) != 0)) {
      setState(275);
      _la = _input->LA(1);
      if (!(((((_la - 58) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 58)) & ((1ULL << (SQLiteParser::K_DEFERRED - 58))
        | (1ULL << (SQLiteParser::K_EXCLUSIVE - 58))
        | (1ULL << (SQLiteParser::K_IMMEDIATE - 58)))) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
    }
    setState(282);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SQLiteParser::K_TRANSACTION) {
      setState(278);
      match(SQLiteParser::K_TRANSACTION);
      setState(280);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
      case 1: {
        setState(279);
        transaction_name();
        break;
      }

      }
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Commit_stmtContext ------------------------------------------------------------------

SQLiteParser::Commit_stmtContext::Commit_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SQLiteParser::Commit_stmtContext::K_COMMIT() {
  return getToken(SQLiteParser::K_COMMIT, 0);
}

tree::TerminalNode* SQLiteParser::Commit_stmtContext::K_END() {
  return getToken(SQLiteParser::K_END, 0);
}

tree::TerminalNode* SQLiteParser::Commit_stmtContext::K_TRANSACTION() {
  return getToken(SQLiteParser::K_TRANSACTION, 0);
}

SQLiteParser::Transaction_nameContext* SQLiteParser::Commit_stmtContext::transaction_name() {
  return getRuleContext<SQLiteParser::Transaction_nameContext>(0);
}


size_t SQLiteParser::Commit_stmtContext::getRuleIndex() const {
  return SQLiteParser::RuleCommit_stmt;
}

antlrcpp::Any SQLiteParser::Commit_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLiteVisitor*>(visitor))
    return parserVisitor->visitCommit_stmt(this);
  else
    return visitor->visitChildren(this);
}

SQLiteParser::Commit_stmtContext* SQLiteParser::commit_stmt() {
  Commit_stmtContext *_localctx = _tracker.createInstance<Commit_stmtContext>(_ctx, getState());
  enterRule(_localctx, 16, SQLiteParser::RuleCommit_stmt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(284);
    _la = _input->LA(1);
    if (!(_la == SQLiteParser::K_COMMIT

    || _la == SQLiteParser::K_END)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(289);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SQLiteParser::K_TRANSACTION) {
      setState(285);
      match(SQLiteParser::K_TRANSACTION);
      setState(287);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
      case 1: {
        setState(286);
        transaction_name();
        break;
      }

      }
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Compound_select_stmtContext ------------------------------------------------------------------

SQLiteParser::Compound_select_stmtContext::Compound_select_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SQLiteParser::Select_coreContext *> SQLiteParser::Compound_select_stmtContext::select_core() {
  return getRuleContexts<SQLiteParser::Select_coreContext>();
}

SQLiteParser::Select_coreContext* SQLiteParser::Compound_select_stmtContext::select_core(size_t i) {
  return getRuleContext<SQLiteParser::Select_coreContext>(i);
}

tree::TerminalNode* SQLiteParser::Compound_select_stmtContext::K_WITH() {
  return getToken(SQLiteParser::K_WITH, 0);
}

std::vector<SQLiteParser::Common_table_expressionContext *> SQLiteParser::Compound_select_stmtContext::common_table_expression() {
  return getRuleContexts<SQLiteParser::Common_table_expressionContext>();
}

SQLiteParser::Common_table_expressionContext* SQLiteParser::Compound_select_stmtContext::common_table_expression(size_t i) {
  return getRuleContext<SQLiteParser::Common_table_expressionContext>(i);
}

tree::TerminalNode* SQLiteParser::Compound_select_stmtContext::K_ORDER() {
  return getToken(SQLiteParser::K_ORDER, 0);
}

tree::TerminalNode* SQLiteParser::Compound_select_stmtContext::K_BY() {
  return getToken(SQLiteParser::K_BY, 0);
}

std::vector<SQLiteParser::Ordering_termContext *> SQLiteParser::Compound_select_stmtContext::ordering_term() {
  return getRuleContexts<SQLiteParser::Ordering_termContext>();
}

SQLiteParser::Ordering_termContext* SQLiteParser::Compound_select_stmtContext::ordering_term(size_t i) {
  return getRuleContext<SQLiteParser::Ordering_termContext>(i);
}

tree::TerminalNode* SQLiteParser::Compound_select_stmtContext::K_LIMIT() {
  return getToken(SQLiteParser::K_LIMIT, 0);
}

std::vector<SQLiteParser::ExprContext *> SQLiteParser::Compound_select_stmtContext::expr() {
  return getRuleContexts<SQLiteParser::ExprContext>();
}

SQLiteParser::ExprContext* SQLiteParser::Compound_select_stmtContext::expr(size_t i) {
  return getRuleContext<SQLiteParser::ExprContext>(i);
}

std::vector<tree::TerminalNode *> SQLiteParser::Compound_select_stmtContext::K_UNION() {
  return getTokens(SQLiteParser::K_UNION);
}

tree::TerminalNode* SQLiteParser::Compound_select_stmtContext::K_UNION(size_t i) {
  return getToken(SQLiteParser::K_UNION, i);
}

std::vector<tree::TerminalNode *> SQLiteParser::Compound_select_stmtContext::K_INTERSECT() {
  return getTokens(SQLiteParser::K_INTERSECT);
}

tree::TerminalNode* SQLiteParser::Compound_select_stmtContext::K_INTERSECT(size_t i) {
  return getToken(SQLiteParser::K_INTERSECT, i);
}

std::vector<tree::TerminalNode *> SQLiteParser::Compound_select_stmtContext::K_EXCEPT() {
  return getTokens(SQLiteParser::K_EXCEPT);
}

tree::TerminalNode* SQLiteParser::Compound_select_stmtContext::K_EXCEPT(size_t i) {
  return getToken(SQLiteParser::K_EXCEPT, i);
}

tree::TerminalNode* SQLiteParser::Compound_select_stmtContext::K_RECURSIVE() {
  return getToken(SQLiteParser::K_RECURSIVE, 0);
}

tree::TerminalNode* SQLiteParser::Compound_select_stmtContext::K_OFFSET() {
  return getToken(SQLiteParser::K_OFFSET, 0);
}

std::vector<tree::TerminalNode *> SQLiteParser::Compound_select_stmtContext::K_ALL() {
  return getTokens(SQLiteParser::K_ALL);
}

tree::TerminalNode* SQLiteParser::Compound_select_stmtContext::K_ALL(size_t i) {
  return getToken(SQLiteParser::K_ALL, i);
}


size_t SQLiteParser::Compound_select_stmtContext::getRuleIndex() const {
  return SQLiteParser::RuleCompound_select_stmt;
}

antlrcpp::Any SQLiteParser::Compound_select_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLiteVisitor*>(visitor))
    return parserVisitor->visitCompound_select_stmt(this);
  else
    return visitor->visitChildren(this);
}

SQLiteParser::Compound_select_stmtContext* SQLiteParser::compound_select_stmt() {
  Compound_select_stmtContext *_localctx = _tracker.createInstance<Compound_select_stmtContext>(_ctx, getState());
  enterRule(_localctx, 18, SQLiteParser::RuleCompound_select_stmt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(303);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SQLiteParser::K_WITH) {
      setState(291);
      match(SQLiteParser::K_WITH);
      setState(293);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
      case 1: {
        setState(292);
        match(SQLiteParser::K_RECURSIVE);
        break;
      }

      }
      setState(295);
      common_table_expression();
      setState(300);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SQLiteParser::COMMA) {
        setState(296);
        match(SQLiteParser::COMMA);
        setState(297);
        common_table_expression();
        setState(302);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(305);
    select_core();
    setState(315); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(312);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case SQLiteParser::K_UNION: {
          setState(306);
          match(SQLiteParser::K_UNION);
          setState(308);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == SQLiteParser::K_ALL) {
            setState(307);
            match(SQLiteParser::K_ALL);
          }
          break;
        }

        case SQLiteParser::K_INTERSECT: {
          setState(310);
          match(SQLiteParser::K_INTERSECT);
          break;
        }

        case SQLiteParser::K_EXCEPT: {
          setState(311);
          match(SQLiteParser::K_EXCEPT);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(314);
      select_core();
      setState(317); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == SQLiteParser::K_EXCEPT

    || _la == SQLiteParser::K_INTERSECT || _la == SQLiteParser::K_UNION);
    setState(329);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SQLiteParser::K_ORDER) {
      setState(319);
      match(SQLiteParser::K_ORDER);
      setState(320);
      match(SQLiteParser::K_BY);
      setState(321);
      ordering_term();
      setState(326);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SQLiteParser::COMMA) {
        setState(322);
        match(SQLiteParser::COMMA);
        setState(323);
        ordering_term();
        setState(328);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(337);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SQLiteParser::K_LIMIT) {
      setState(331);
      match(SQLiteParser::K_LIMIT);
      setState(332);
      expr(0);
      setState(335);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SQLiteParser::COMMA || _la == SQLiteParser::K_OFFSET) {
        setState(333);
        _la = _input->LA(1);
        if (!(_la == SQLiteParser::COMMA || _la == SQLiteParser::K_OFFSET)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(334);
        expr(0);
      }
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Create_index_stmtContext ------------------------------------------------------------------

SQLiteParser::Create_index_stmtContext::Create_index_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SQLiteParser::Create_index_stmtContext::K_CREATE() {
  return getToken(SQLiteParser::K_CREATE, 0);
}

tree::TerminalNode* SQLiteParser::Create_index_stmtContext::K_INDEX() {
  return getToken(SQLiteParser::K_INDEX, 0);
}

SQLiteParser::Index_nameContext* SQLiteParser::Create_index_stmtContext::index_name() {
  return getRuleContext<SQLiteParser::Index_nameContext>(0);
}

tree::TerminalNode* SQLiteParser::Create_index_stmtContext::K_ON() {
  return getToken(SQLiteParser::K_ON, 0);
}

SQLiteParser::Table_nameContext* SQLiteParser::Create_index_stmtContext::table_name() {
  return getRuleContext<SQLiteParser::Table_nameContext>(0);
}

std::vector<SQLiteParser::Indexed_columnContext *> SQLiteParser::Create_index_stmtContext::indexed_column() {
  return getRuleContexts<SQLiteParser::Indexed_columnContext>();
}

SQLiteParser::Indexed_columnContext* SQLiteParser::Create_index_stmtContext::indexed_column(size_t i) {
  return getRuleContext<SQLiteParser::Indexed_columnContext>(i);
}

tree::TerminalNode* SQLiteParser::Create_index_stmtContext::K_UNIQUE() {
  return getToken(SQLiteParser::K_UNIQUE, 0);
}

tree::TerminalNode* SQLiteParser::Create_index_stmtContext::K_IF() {
  return getToken(SQLiteParser::K_IF, 0);
}

tree::TerminalNode* SQLiteParser::Create_index_stmtContext::K_NOT() {
  return getToken(SQLiteParser::K_NOT, 0);
}

tree::TerminalNode* SQLiteParser::Create_index_stmtContext::K_EXISTS() {
  return getToken(SQLiteParser::K_EXISTS, 0);
}

SQLiteParser::Database_nameContext* SQLiteParser::Create_index_stmtContext::database_name() {
  return getRuleContext<SQLiteParser::Database_nameContext>(0);
}

tree::TerminalNode* SQLiteParser::Create_index_stmtContext::K_WHERE() {
  return getToken(SQLiteParser::K_WHERE, 0);
}

SQLiteParser::ExprContext* SQLiteParser::Create_index_stmtContext::expr() {
  return getRuleContext<SQLiteParser::ExprContext>(0);
}


size_t SQLiteParser::Create_index_stmtContext::getRuleIndex() const {
  return SQLiteParser::RuleCreate_index_stmt;
}

antlrcpp::Any SQLiteParser::Create_index_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLiteVisitor*>(visitor))
    return parserVisitor->visitCreate_index_stmt(this);
  else
    return visitor->visitChildren(this);
}

SQLiteParser::Create_index_stmtContext* SQLiteParser::create_index_stmt() {
  Create_index_stmtContext *_localctx = _tracker.createInstance<Create_index_stmtContext>(_ctx, getState());
  enterRule(_localctx, 20, SQLiteParser::RuleCreate_index_stmt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(339);
    match(SQLiteParser::K_CREATE);
    setState(341);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SQLiteParser::K_UNIQUE) {
      setState(340);
      match(SQLiteParser::K_UNIQUE);
    }
    setState(343);
    match(SQLiteParser::K_INDEX);
    setState(347);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx)) {
    case 1: {
      setState(344);
      match(SQLiteParser::K_IF);
      setState(345);
      match(SQLiteParser::K_NOT);
      setState(346);
      match(SQLiteParser::K_EXISTS);
      break;
    }

    }
    setState(352);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx)) {
    case 1: {
      setState(349);
      database_name();
      setState(350);
      match(SQLiteParser::DOT);
      break;
    }

    }
    setState(354);
    index_name();
    setState(355);
    match(SQLiteParser::K_ON);
    setState(356);
    table_name();
    setState(357);
    match(SQLiteParser::OPEN_PAR);
    setState(358);
    indexed_column();
    setState(363);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SQLiteParser::COMMA) {
      setState(359);
      match(SQLiteParser::COMMA);
      setState(360);
      indexed_column();
      setState(365);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(366);
    match(SQLiteParser::CLOSE_PAR);
    setState(369);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SQLiteParser::K_WHERE) {
      setState(367);
      match(SQLiteParser::K_WHERE);
      setState(368);
      expr(0);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Create_table_stmtContext ------------------------------------------------------------------

SQLiteParser::Create_table_stmtContext::Create_table_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SQLiteParser::Create_table_stmtContext::K_CREATE() {
  return getToken(SQLiteParser::K_CREATE, 0);
}

tree::TerminalNode* SQLiteParser::Create_table_stmtContext::K_TABLE() {
  return getToken(SQLiteParser::K_TABLE, 0);
}

SQLiteParser::Table_nameContext* SQLiteParser::Create_table_stmtContext::table_name() {
  return getRuleContext<SQLiteParser::Table_nameContext>(0);
}

std::vector<SQLiteParser::Column_defContext *> SQLiteParser::Create_table_stmtContext::column_def() {
  return getRuleContexts<SQLiteParser::Column_defContext>();
}

SQLiteParser::Column_defContext* SQLiteParser::Create_table_stmtContext::column_def(size_t i) {
  return getRuleContext<SQLiteParser::Column_defContext>(i);
}

tree::TerminalNode* SQLiteParser::Create_table_stmtContext::K_AS() {
  return getToken(SQLiteParser::K_AS, 0);
}

SQLiteParser::Select_stmtContext* SQLiteParser::Create_table_stmtContext::select_stmt() {
  return getRuleContext<SQLiteParser::Select_stmtContext>(0);
}

tree::TerminalNode* SQLiteParser::Create_table_stmtContext::K_IF() {
  return getToken(SQLiteParser::K_IF, 0);
}

tree::TerminalNode* SQLiteParser::Create_table_stmtContext::K_NOT() {
  return getToken(SQLiteParser::K_NOT, 0);
}

tree::TerminalNode* SQLiteParser::Create_table_stmtContext::K_EXISTS() {
  return getToken(SQLiteParser::K_EXISTS, 0);
}

SQLiteParser::Database_nameContext* SQLiteParser::Create_table_stmtContext::database_name() {
  return getRuleContext<SQLiteParser::Database_nameContext>(0);
}

tree::TerminalNode* SQLiteParser::Create_table_stmtContext::K_TEMP() {
  return getToken(SQLiteParser::K_TEMP, 0);
}

tree::TerminalNode* SQLiteParser::Create_table_stmtContext::K_TEMPORARY() {
  return getToken(SQLiteParser::K_TEMPORARY, 0);
}

std::vector<SQLiteParser::Table_constraintContext *> SQLiteParser::Create_table_stmtContext::table_constraint() {
  return getRuleContexts<SQLiteParser::Table_constraintContext>();
}

SQLiteParser::Table_constraintContext* SQLiteParser::Create_table_stmtContext::table_constraint(size_t i) {
  return getRuleContext<SQLiteParser::Table_constraintContext>(i);
}

tree::TerminalNode* SQLiteParser::Create_table_stmtContext::K_WITHOUT() {
  return getToken(SQLiteParser::K_WITHOUT, 0);
}

tree::TerminalNode* SQLiteParser::Create_table_stmtContext::IDENTIFIER() {
  return getToken(SQLiteParser::IDENTIFIER, 0);
}


size_t SQLiteParser::Create_table_stmtContext::getRuleIndex() const {
  return SQLiteParser::RuleCreate_table_stmt;
}

antlrcpp::Any SQLiteParser::Create_table_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLiteVisitor*>(visitor))
    return parserVisitor->visitCreate_table_stmt(this);
  else
    return visitor->visitChildren(this);
}

SQLiteParser::Create_table_stmtContext* SQLiteParser::create_table_stmt() {
  Create_table_stmtContext *_localctx = _tracker.createInstance<Create_table_stmtContext>(_ctx, getState());
  enterRule(_localctx, 22, SQLiteParser::RuleCreate_table_stmt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(371);
    match(SQLiteParser::K_CREATE);
    setState(373);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SQLiteParser::K_TEMP

    || _la == SQLiteParser::K_TEMPORARY) {
      setState(372);
      _la = _input->LA(1);
      if (!(_la == SQLiteParser::K_TEMP

      || _la == SQLiteParser::K_TEMPORARY)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
    }
    setState(375);
    match(SQLiteParser::K_TABLE);
    setState(379);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx)) {
    case 1: {
      setState(376);
      match(SQLiteParser::K_IF);
      setState(377);
      match(SQLiteParser::K_NOT);
      setState(378);
      match(SQLiteParser::K_EXISTS);
      break;
    }

    }
    setState(384);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx)) {
    case 1: {
      setState(381);
      database_name();
      setState(382);
      match(SQLiteParser::DOT);
      break;
    }

    }
    setState(386);
    table_name();
    setState(410);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SQLiteParser::OPEN_PAR: {
        setState(387);
        match(SQLiteParser::OPEN_PAR);
        setState(388);
        column_def();
        setState(393);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(389);
            match(SQLiteParser::COMMA);
            setState(390);
            column_def(); 
          }
          setState(395);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx);
        }
        setState(400);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == SQLiteParser::COMMA) {
          setState(396);
          match(SQLiteParser::COMMA);
          setState(397);
          table_constraint();
          setState(402);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(403);
        match(SQLiteParser::CLOSE_PAR);
        setState(406);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SQLiteParser::K_WITHOUT) {
          setState(404);
          match(SQLiteParser::K_WITHOUT);
          setState(405);
          match(SQLiteParser::IDENTIFIER);
        }
        break;
      }

      case SQLiteParser::K_AS: {
        setState(408);
        match(SQLiteParser::K_AS);
        setState(409);
        select_stmt();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Create_trigger_stmtContext ------------------------------------------------------------------

SQLiteParser::Create_trigger_stmtContext::Create_trigger_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SQLiteParser::Create_trigger_stmtContext::K_CREATE() {
  return getToken(SQLiteParser::K_CREATE, 0);
}

tree::TerminalNode* SQLiteParser::Create_trigger_stmtContext::K_TRIGGER() {
  return getToken(SQLiteParser::K_TRIGGER, 0);
}

SQLiteParser::Trigger_nameContext* SQLiteParser::Create_trigger_stmtContext::trigger_name() {
  return getRuleContext<SQLiteParser::Trigger_nameContext>(0);
}

tree::TerminalNode* SQLiteParser::Create_trigger_stmtContext::K_ON() {
  return getToken(SQLiteParser::K_ON, 0);
}

SQLiteParser::Table_nameContext* SQLiteParser::Create_trigger_stmtContext::table_name() {
  return getRuleContext<SQLiteParser::Table_nameContext>(0);
}

tree::TerminalNode* SQLiteParser::Create_trigger_stmtContext::K_BEGIN() {
  return getToken(SQLiteParser::K_BEGIN, 0);
}

tree::TerminalNode* SQLiteParser::Create_trigger_stmtContext::K_END() {
  return getToken(SQLiteParser::K_END, 0);
}

tree::TerminalNode* SQLiteParser::Create_trigger_stmtContext::K_DELETE() {
  return getToken(SQLiteParser::K_DELETE, 0);
}

tree::TerminalNode* SQLiteParser::Create_trigger_stmtContext::K_INSERT() {
  return getToken(SQLiteParser::K_INSERT, 0);
}

tree::TerminalNode* SQLiteParser::Create_trigger_stmtContext::K_UPDATE() {
  return getToken(SQLiteParser::K_UPDATE, 0);
}

tree::TerminalNode* SQLiteParser::Create_trigger_stmtContext::K_IF() {
  return getToken(SQLiteParser::K_IF, 0);
}

tree::TerminalNode* SQLiteParser::Create_trigger_stmtContext::K_NOT() {
  return getToken(SQLiteParser::K_NOT, 0);
}

tree::TerminalNode* SQLiteParser::Create_trigger_stmtContext::K_EXISTS() {
  return getToken(SQLiteParser::K_EXISTS, 0);
}

std::vector<SQLiteParser::Database_nameContext *> SQLiteParser::Create_trigger_stmtContext::database_name() {
  return getRuleContexts<SQLiteParser::Database_nameContext>();
}

SQLiteParser::Database_nameContext* SQLiteParser::Create_trigger_stmtContext::database_name(size_t i) {
  return getRuleContext<SQLiteParser::Database_nameContext>(i);
}

tree::TerminalNode* SQLiteParser::Create_trigger_stmtContext::K_BEFORE() {
  return getToken(SQLiteParser::K_BEFORE, 0);
}

tree::TerminalNode* SQLiteParser::Create_trigger_stmtContext::K_AFTER() {
  return getToken(SQLiteParser::K_AFTER, 0);
}

tree::TerminalNode* SQLiteParser::Create_trigger_stmtContext::K_INSTEAD() {
  return getToken(SQLiteParser::K_INSTEAD, 0);
}

std::vector<tree::TerminalNode *> SQLiteParser::Create_trigger_stmtContext::K_OF() {
  return getTokens(SQLiteParser::K_OF);
}

tree::TerminalNode* SQLiteParser::Create_trigger_stmtContext::K_OF(size_t i) {
  return getToken(SQLiteParser::K_OF, i);
}

tree::TerminalNode* SQLiteParser::Create_trigger_stmtContext::K_FOR() {
  return getToken(SQLiteParser::K_FOR, 0);
}

tree::TerminalNode* SQLiteParser::Create_trigger_stmtContext::K_EACH() {
  return getToken(SQLiteParser::K_EACH, 0);
}

tree::TerminalNode* SQLiteParser::Create_trigger_stmtContext::K_ROW() {
  return getToken(SQLiteParser::K_ROW, 0);
}

tree::TerminalNode* SQLiteParser::Create_trigger_stmtContext::K_WHEN() {
  return getToken(SQLiteParser::K_WHEN, 0);
}

SQLiteParser::ExprContext* SQLiteParser::Create_trigger_stmtContext::expr() {
  return getRuleContext<SQLiteParser::ExprContext>(0);
}

tree::TerminalNode* SQLiteParser::Create_trigger_stmtContext::K_TEMP() {
  return getToken(SQLiteParser::K_TEMP, 0);
}

tree::TerminalNode* SQLiteParser::Create_trigger_stmtContext::K_TEMPORARY() {
  return getToken(SQLiteParser::K_TEMPORARY, 0);
}

std::vector<SQLiteParser::Column_nameContext *> SQLiteParser::Create_trigger_stmtContext::column_name() {
  return getRuleContexts<SQLiteParser::Column_nameContext>();
}

SQLiteParser::Column_nameContext* SQLiteParser::Create_trigger_stmtContext::column_name(size_t i) {
  return getRuleContext<SQLiteParser::Column_nameContext>(i);
}

std::vector<SQLiteParser::Update_stmtContext *> SQLiteParser::Create_trigger_stmtContext::update_stmt() {
  return getRuleContexts<SQLiteParser::Update_stmtContext>();
}

SQLiteParser::Update_stmtContext* SQLiteParser::Create_trigger_stmtContext::update_stmt(size_t i) {
  return getRuleContext<SQLiteParser::Update_stmtContext>(i);
}

std::vector<SQLiteParser::Insert_stmtContext *> SQLiteParser::Create_trigger_stmtContext::insert_stmt() {
  return getRuleContexts<SQLiteParser::Insert_stmtContext>();
}

SQLiteParser::Insert_stmtContext* SQLiteParser::Create_trigger_stmtContext::insert_stmt(size_t i) {
  return getRuleContext<SQLiteParser::Insert_stmtContext>(i);
}

std::vector<SQLiteParser::Delete_stmtContext *> SQLiteParser::Create_trigger_stmtContext::delete_stmt() {
  return getRuleContexts<SQLiteParser::Delete_stmtContext>();
}

SQLiteParser::Delete_stmtContext* SQLiteParser::Create_trigger_stmtContext::delete_stmt(size_t i) {
  return getRuleContext<SQLiteParser::Delete_stmtContext>(i);
}

std::vector<SQLiteParser::Select_stmtContext *> SQLiteParser::Create_trigger_stmtContext::select_stmt() {
  return getRuleContexts<SQLiteParser::Select_stmtContext>();
}

SQLiteParser::Select_stmtContext* SQLiteParser::Create_trigger_stmtContext::select_stmt(size_t i) {
  return getRuleContext<SQLiteParser::Select_stmtContext>(i);
}


size_t SQLiteParser::Create_trigger_stmtContext::getRuleIndex() const {
  return SQLiteParser::RuleCreate_trigger_stmt;
}

antlrcpp::Any SQLiteParser::Create_trigger_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLiteVisitor*>(visitor))
    return parserVisitor->visitCreate_trigger_stmt(this);
  else
    return visitor->visitChildren(this);
}

SQLiteParser::Create_trigger_stmtContext* SQLiteParser::create_trigger_stmt() {
  Create_trigger_stmtContext *_localctx = _tracker.createInstance<Create_trigger_stmtContext>(_ctx, getState());
  enterRule(_localctx, 24, SQLiteParser::RuleCreate_trigger_stmt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(412);
    match(SQLiteParser::K_CREATE);
    setState(414);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SQLiteParser::K_TEMP

    || _la == SQLiteParser::K_TEMPORARY) {
      setState(413);
      _la = _input->LA(1);
      if (!(_la == SQLiteParser::K_TEMP

      || _la == SQLiteParser::K_TEMPORARY)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
    }
    setState(416);
    match(SQLiteParser::K_TRIGGER);
    setState(420);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx)) {
    case 1: {
      setState(417);
      match(SQLiteParser::K_IF);
      setState(418);
      match(SQLiteParser::K_NOT);
      setState(419);
      match(SQLiteParser::K_EXISTS);
      break;
    }

    }
    setState(425);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx)) {
    case 1: {
      setState(422);
      database_name();
      setState(423);
      match(SQLiteParser::DOT);
      break;
    }

    }
    setState(427);
    trigger_name();
    setState(432);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SQLiteParser::K_BEFORE: {
        setState(428);
        match(SQLiteParser::K_BEFORE);
        break;
      }

      case SQLiteParser::K_AFTER: {
        setState(429);
        match(SQLiteParser::K_AFTER);
        break;
      }

      case SQLiteParser::K_INSTEAD: {
        setState(430);
        match(SQLiteParser::K_INSTEAD);
        setState(431);
        match(SQLiteParser::K_OF);
        break;
      }

      case SQLiteParser::K_DELETE:
      case SQLiteParser::K_INSERT:
      case SQLiteParser::K_UPDATE: {
        break;
      }

    default:
      break;
    }
    setState(448);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SQLiteParser::K_DELETE: {
        setState(434);
        match(SQLiteParser::K_DELETE);
        break;
      }

      case SQLiteParser::K_INSERT: {
        setState(435);
        match(SQLiteParser::K_INSERT);
        break;
      }

      case SQLiteParser::K_UPDATE: {
        setState(436);
        match(SQLiteParser::K_UPDATE);
        setState(446);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SQLiteParser::K_OF) {
          setState(437);
          match(SQLiteParser::K_OF);
          setState(438);
          column_name();
          setState(443);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == SQLiteParser::COMMA) {
            setState(439);
            match(SQLiteParser::COMMA);
            setState(440);
            column_name();
            setState(445);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(450);
    match(SQLiteParser::K_ON);
    setState(454);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 48, _ctx)) {
    case 1: {
      setState(451);
      database_name();
      setState(452);
      match(SQLiteParser::DOT);
      break;
    }

    }
    setState(456);
    table_name();
    setState(460);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SQLiteParser::K_FOR) {
      setState(457);
      match(SQLiteParser::K_FOR);
      setState(458);
      match(SQLiteParser::K_EACH);
      setState(459);
      match(SQLiteParser::K_ROW);
    }
    setState(464);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SQLiteParser::K_WHEN) {
      setState(462);
      match(SQLiteParser::K_WHEN);
      setState(463);
      expr(0);
    }
    setState(466);
    match(SQLiteParser::K_BEGIN);
    setState(475); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(471);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 51, _ctx)) {
      case 1: {
        setState(467);
        update_stmt();
        break;
      }

      case 2: {
        setState(468);
        insert_stmt();
        break;
      }

      case 3: {
        setState(469);
        delete_stmt();
        break;
      }

      case 4: {
        setState(470);
        select_stmt();
        break;
      }

      }
      setState(473);
      match(SQLiteParser::SCOL);
      setState(477); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == SQLiteParser::K_DELETE || ((((_la - 88) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 88)) & ((1ULL << (SQLiteParser::K_INSERT - 88))
      | (1ULL << (SQLiteParser::K_REPLACE - 88))
      | (1ULL << (SQLiteParser::K_SELECT - 88))
      | (1ULL << (SQLiteParser::K_UPDATE - 88))
      | (1ULL << (SQLiteParser::K_VALUES - 88))
      | (1ULL << (SQLiteParser::K_WITH - 88)))) != 0));
    setState(479);
    match(SQLiteParser::K_END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Create_view_stmtContext ------------------------------------------------------------------

SQLiteParser::Create_view_stmtContext::Create_view_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SQLiteParser::Create_view_stmtContext::K_CREATE() {
  return getToken(SQLiteParser::K_CREATE, 0);
}

tree::TerminalNode* SQLiteParser::Create_view_stmtContext::K_VIEW() {
  return getToken(SQLiteParser::K_VIEW, 0);
}

SQLiteParser::View_nameContext* SQLiteParser::Create_view_stmtContext::view_name() {
  return getRuleContext<SQLiteParser::View_nameContext>(0);
}

tree::TerminalNode* SQLiteParser::Create_view_stmtContext::K_AS() {
  return getToken(SQLiteParser::K_AS, 0);
}

SQLiteParser::Select_stmtContext* SQLiteParser::Create_view_stmtContext::select_stmt() {
  return getRuleContext<SQLiteParser::Select_stmtContext>(0);
}

tree::TerminalNode* SQLiteParser::Create_view_stmtContext::K_IF() {
  return getToken(SQLiteParser::K_IF, 0);
}

tree::TerminalNode* SQLiteParser::Create_view_stmtContext::K_NOT() {
  return getToken(SQLiteParser::K_NOT, 0);
}

tree::TerminalNode* SQLiteParser::Create_view_stmtContext::K_EXISTS() {
  return getToken(SQLiteParser::K_EXISTS, 0);
}

SQLiteParser::Database_nameContext* SQLiteParser::Create_view_stmtContext::database_name() {
  return getRuleContext<SQLiteParser::Database_nameContext>(0);
}

tree::TerminalNode* SQLiteParser::Create_view_stmtContext::K_TEMP() {
  return getToken(SQLiteParser::K_TEMP, 0);
}

tree::TerminalNode* SQLiteParser::Create_view_stmtContext::K_TEMPORARY() {
  return getToken(SQLiteParser::K_TEMPORARY, 0);
}


size_t SQLiteParser::Create_view_stmtContext::getRuleIndex() const {
  return SQLiteParser::RuleCreate_view_stmt;
}

antlrcpp::Any SQLiteParser::Create_view_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLiteVisitor*>(visitor))
    return parserVisitor->visitCreate_view_stmt(this);
  else
    return visitor->visitChildren(this);
}

SQLiteParser::Create_view_stmtContext* SQLiteParser::create_view_stmt() {
  Create_view_stmtContext *_localctx = _tracker.createInstance<Create_view_stmtContext>(_ctx, getState());
  enterRule(_localctx, 26, SQLiteParser::RuleCreate_view_stmt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(481);
    match(SQLiteParser::K_CREATE);
    setState(483);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SQLiteParser::K_TEMP

    || _la == SQLiteParser::K_TEMPORARY) {
      setState(482);
      _la = _input->LA(1);
      if (!(_la == SQLiteParser::K_TEMP

      || _la == SQLiteParser::K_TEMPORARY)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
    }
    setState(485);
    match(SQLiteParser::K_VIEW);
    setState(489);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 54, _ctx)) {
    case 1: {
      setState(486);
      match(SQLiteParser::K_IF);
      setState(487);
      match(SQLiteParser::K_NOT);
      setState(488);
      match(SQLiteParser::K_EXISTS);
      break;
    }

    }
    setState(494);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 55, _ctx)) {
    case 1: {
      setState(491);
      database_name();
      setState(492);
      match(SQLiteParser::DOT);
      break;
    }

    }
    setState(496);
    view_name();
    setState(497);
    match(SQLiteParser::K_AS);
    setState(498);
    select_stmt();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Create_virtual_table_stmtContext ------------------------------------------------------------------

SQLiteParser::Create_virtual_table_stmtContext::Create_virtual_table_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SQLiteParser::Create_virtual_table_stmtContext::K_CREATE() {
  return getToken(SQLiteParser::K_CREATE, 0);
}

tree::TerminalNode* SQLiteParser::Create_virtual_table_stmtContext::K_VIRTUAL() {
  return getToken(SQLiteParser::K_VIRTUAL, 0);
}

tree::TerminalNode* SQLiteParser::Create_virtual_table_stmtContext::K_TABLE() {
  return getToken(SQLiteParser::K_TABLE, 0);
}

SQLiteParser::Table_nameContext* SQLiteParser::Create_virtual_table_stmtContext::table_name() {
  return getRuleContext<SQLiteParser::Table_nameContext>(0);
}

tree::TerminalNode* SQLiteParser::Create_virtual_table_stmtContext::K_USING() {
  return getToken(SQLiteParser::K_USING, 0);
}

SQLiteParser::Module_nameContext* SQLiteParser::Create_virtual_table_stmtContext::module_name() {
  return getRuleContext<SQLiteParser::Module_nameContext>(0);
}

tree::TerminalNode* SQLiteParser::Create_virtual_table_stmtContext::K_IF() {
  return getToken(SQLiteParser::K_IF, 0);
}

tree::TerminalNode* SQLiteParser::Create_virtual_table_stmtContext::K_NOT() {
  return getToken(SQLiteParser::K_NOT, 0);
}

tree::TerminalNode* SQLiteParser::Create_virtual_table_stmtContext::K_EXISTS() {
  return getToken(SQLiteParser::K_EXISTS, 0);
}

SQLiteParser::Database_nameContext* SQLiteParser::Create_virtual_table_stmtContext::database_name() {
  return getRuleContext<SQLiteParser::Database_nameContext>(0);
}

std::vector<SQLiteParser::Module_argumentContext *> SQLiteParser::Create_virtual_table_stmtContext::module_argument() {
  return getRuleContexts<SQLiteParser::Module_argumentContext>();
}

SQLiteParser::Module_argumentContext* SQLiteParser::Create_virtual_table_stmtContext::module_argument(size_t i) {
  return getRuleContext<SQLiteParser::Module_argumentContext>(i);
}


size_t SQLiteParser::Create_virtual_table_stmtContext::getRuleIndex() const {
  return SQLiteParser::RuleCreate_virtual_table_stmt;
}

antlrcpp::Any SQLiteParser::Create_virtual_table_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLiteVisitor*>(visitor))
    return parserVisitor->visitCreate_virtual_table_stmt(this);
  else
    return visitor->visitChildren(this);
}

SQLiteParser::Create_virtual_table_stmtContext* SQLiteParser::create_virtual_table_stmt() {
  Create_virtual_table_stmtContext *_localctx = _tracker.createInstance<Create_virtual_table_stmtContext>(_ctx, getState());
  enterRule(_localctx, 28, SQLiteParser::RuleCreate_virtual_table_stmt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(500);
    match(SQLiteParser::K_CREATE);
    setState(501);
    match(SQLiteParser::K_VIRTUAL);
    setState(502);
    match(SQLiteParser::K_TABLE);
    setState(506);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 56, _ctx)) {
    case 1: {
      setState(503);
      match(SQLiteParser::K_IF);
      setState(504);
      match(SQLiteParser::K_NOT);
      setState(505);
      match(SQLiteParser::K_EXISTS);
      break;
    }

    }
    setState(511);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 57, _ctx)) {
    case 1: {
      setState(508);
      database_name();
      setState(509);
      match(SQLiteParser::DOT);
      break;
    }

    }
    setState(513);
    table_name();
    setState(514);
    match(SQLiteParser::K_USING);
    setState(515);
    module_name();
    setState(527);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SQLiteParser::OPEN_PAR) {
      setState(516);
      match(SQLiteParser::OPEN_PAR);
      setState(517);
      module_argument();
      setState(522);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SQLiteParser::COMMA) {
        setState(518);
        match(SQLiteParser::COMMA);
        setState(519);
        module_argument();
        setState(524);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(525);
      match(SQLiteParser::CLOSE_PAR);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Delete_stmtContext ------------------------------------------------------------------

SQLiteParser::Delete_stmtContext::Delete_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SQLiteParser::Delete_stmtContext::K_DELETE() {
  return getToken(SQLiteParser::K_DELETE, 0);
}

tree::TerminalNode* SQLiteParser::Delete_stmtContext::K_FROM() {
  return getToken(SQLiteParser::K_FROM, 0);
}

SQLiteParser::Qualified_table_nameContext* SQLiteParser::Delete_stmtContext::qualified_table_name() {
  return getRuleContext<SQLiteParser::Qualified_table_nameContext>(0);
}

SQLiteParser::With_clauseContext* SQLiteParser::Delete_stmtContext::with_clause() {
  return getRuleContext<SQLiteParser::With_clauseContext>(0);
}

tree::TerminalNode* SQLiteParser::Delete_stmtContext::K_WHERE() {
  return getToken(SQLiteParser::K_WHERE, 0);
}

SQLiteParser::ExprContext* SQLiteParser::Delete_stmtContext::expr() {
  return getRuleContext<SQLiteParser::ExprContext>(0);
}


size_t SQLiteParser::Delete_stmtContext::getRuleIndex() const {
  return SQLiteParser::RuleDelete_stmt;
}

antlrcpp::Any SQLiteParser::Delete_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLiteVisitor*>(visitor))
    return parserVisitor->visitDelete_stmt(this);
  else
    return visitor->visitChildren(this);
}

SQLiteParser::Delete_stmtContext* SQLiteParser::delete_stmt() {
  Delete_stmtContext *_localctx = _tracker.createInstance<Delete_stmtContext>(_ctx, getState());
  enterRule(_localctx, 30, SQLiteParser::RuleDelete_stmt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(530);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SQLiteParser::K_WITH) {
      setState(529);
      with_clause();
    }
    setState(532);
    match(SQLiteParser::K_DELETE);
    setState(533);
    match(SQLiteParser::K_FROM);
    setState(534);
    qualified_table_name();
    setState(537);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SQLiteParser::K_WHERE) {
      setState(535);
      match(SQLiteParser::K_WHERE);
      setState(536);
      expr(0);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Delete_stmt_limitedContext ------------------------------------------------------------------

SQLiteParser::Delete_stmt_limitedContext::Delete_stmt_limitedContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SQLiteParser::Delete_stmt_limitedContext::K_DELETE() {
  return getToken(SQLiteParser::K_DELETE, 0);
}

tree::TerminalNode* SQLiteParser::Delete_stmt_limitedContext::K_FROM() {
  return getToken(SQLiteParser::K_FROM, 0);
}

SQLiteParser::Qualified_table_nameContext* SQLiteParser::Delete_stmt_limitedContext::qualified_table_name() {
  return getRuleContext<SQLiteParser::Qualified_table_nameContext>(0);
}

SQLiteParser::With_clauseContext* SQLiteParser::Delete_stmt_limitedContext::with_clause() {
  return getRuleContext<SQLiteParser::With_clauseContext>(0);
}

tree::TerminalNode* SQLiteParser::Delete_stmt_limitedContext::K_WHERE() {
  return getToken(SQLiteParser::K_WHERE, 0);
}

std::vector<SQLiteParser::ExprContext *> SQLiteParser::Delete_stmt_limitedContext::expr() {
  return getRuleContexts<SQLiteParser::ExprContext>();
}

SQLiteParser::ExprContext* SQLiteParser::Delete_stmt_limitedContext::expr(size_t i) {
  return getRuleContext<SQLiteParser::ExprContext>(i);
}

tree::TerminalNode* SQLiteParser::Delete_stmt_limitedContext::K_LIMIT() {
  return getToken(SQLiteParser::K_LIMIT, 0);
}

tree::TerminalNode* SQLiteParser::Delete_stmt_limitedContext::K_ORDER() {
  return getToken(SQLiteParser::K_ORDER, 0);
}

tree::TerminalNode* SQLiteParser::Delete_stmt_limitedContext::K_BY() {
  return getToken(SQLiteParser::K_BY, 0);
}

std::vector<SQLiteParser::Ordering_termContext *> SQLiteParser::Delete_stmt_limitedContext::ordering_term() {
  return getRuleContexts<SQLiteParser::Ordering_termContext>();
}

SQLiteParser::Ordering_termContext* SQLiteParser::Delete_stmt_limitedContext::ordering_term(size_t i) {
  return getRuleContext<SQLiteParser::Ordering_termContext>(i);
}

tree::TerminalNode* SQLiteParser::Delete_stmt_limitedContext::K_OFFSET() {
  return getToken(SQLiteParser::K_OFFSET, 0);
}


size_t SQLiteParser::Delete_stmt_limitedContext::getRuleIndex() const {
  return SQLiteParser::RuleDelete_stmt_limited;
}

antlrcpp::Any SQLiteParser::Delete_stmt_limitedContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLiteVisitor*>(visitor))
    return parserVisitor->visitDelete_stmt_limited(this);
  else
    return visitor->visitChildren(this);
}

SQLiteParser::Delete_stmt_limitedContext* SQLiteParser::delete_stmt_limited() {
  Delete_stmt_limitedContext *_localctx = _tracker.createInstance<Delete_stmt_limitedContext>(_ctx, getState());
  enterRule(_localctx, 32, SQLiteParser::RuleDelete_stmt_limited);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(540);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SQLiteParser::K_WITH) {
      setState(539);
      with_clause();
    }
    setState(542);
    match(SQLiteParser::K_DELETE);
    setState(543);
    match(SQLiteParser::K_FROM);
    setState(544);
    qualified_table_name();
    setState(547);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SQLiteParser::K_WHERE) {
      setState(545);
      match(SQLiteParser::K_WHERE);
      setState(546);
      expr(0);
    }
    setState(567);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SQLiteParser::K_LIMIT

    || _la == SQLiteParser::K_ORDER) {
      setState(559);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SQLiteParser::K_ORDER) {
        setState(549);
        match(SQLiteParser::K_ORDER);
        setState(550);
        match(SQLiteParser::K_BY);
        setState(551);
        ordering_term();
        setState(556);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == SQLiteParser::COMMA) {
          setState(552);
          match(SQLiteParser::COMMA);
          setState(553);
          ordering_term();
          setState(558);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
      }
      setState(561);
      match(SQLiteParser::K_LIMIT);
      setState(562);
      expr(0);
      setState(565);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SQLiteParser::COMMA || _la == SQLiteParser::K_OFFSET) {
        setState(563);
        _la = _input->LA(1);
        if (!(_la == SQLiteParser::COMMA || _la == SQLiteParser::K_OFFSET)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(564);
        expr(0);
      }
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Detach_stmtContext ------------------------------------------------------------------

SQLiteParser::Detach_stmtContext::Detach_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SQLiteParser::Detach_stmtContext::K_DETACH() {
  return getToken(SQLiteParser::K_DETACH, 0);
}

SQLiteParser::Database_nameContext* SQLiteParser::Detach_stmtContext::database_name() {
  return getRuleContext<SQLiteParser::Database_nameContext>(0);
}

tree::TerminalNode* SQLiteParser::Detach_stmtContext::K_DATABASE() {
  return getToken(SQLiteParser::K_DATABASE, 0);
}


size_t SQLiteParser::Detach_stmtContext::getRuleIndex() const {
  return SQLiteParser::RuleDetach_stmt;
}

antlrcpp::Any SQLiteParser::Detach_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLiteVisitor*>(visitor))
    return parserVisitor->visitDetach_stmt(this);
  else
    return visitor->visitChildren(this);
}

SQLiteParser::Detach_stmtContext* SQLiteParser::detach_stmt() {
  Detach_stmtContext *_localctx = _tracker.createInstance<Detach_stmtContext>(_ctx, getState());
  enterRule(_localctx, 34, SQLiteParser::RuleDetach_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(569);
    match(SQLiteParser::K_DETACH);
    setState(571);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 68, _ctx)) {
    case 1: {
      setState(570);
      match(SQLiteParser::K_DATABASE);
      break;
    }

    }
    setState(573);
    database_name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Drop_index_stmtContext ------------------------------------------------------------------

SQLiteParser::Drop_index_stmtContext::Drop_index_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SQLiteParser::Drop_index_stmtContext::K_DROP() {
  return getToken(SQLiteParser::K_DROP, 0);
}

tree::TerminalNode* SQLiteParser::Drop_index_stmtContext::K_INDEX() {
  return getToken(SQLiteParser::K_INDEX, 0);
}

SQLiteParser::Index_nameContext* SQLiteParser::Drop_index_stmtContext::index_name() {
  return getRuleContext<SQLiteParser::Index_nameContext>(0);
}

tree::TerminalNode* SQLiteParser::Drop_index_stmtContext::K_IF() {
  return getToken(SQLiteParser::K_IF, 0);
}

tree::TerminalNode* SQLiteParser::Drop_index_stmtContext::K_EXISTS() {
  return getToken(SQLiteParser::K_EXISTS, 0);
}

SQLiteParser::Database_nameContext* SQLiteParser::Drop_index_stmtContext::database_name() {
  return getRuleContext<SQLiteParser::Database_nameContext>(0);
}


size_t SQLiteParser::Drop_index_stmtContext::getRuleIndex() const {
  return SQLiteParser::RuleDrop_index_stmt;
}

antlrcpp::Any SQLiteParser::Drop_index_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLiteVisitor*>(visitor))
    return parserVisitor->visitDrop_index_stmt(this);
  else
    return visitor->visitChildren(this);
}

SQLiteParser::Drop_index_stmtContext* SQLiteParser::drop_index_stmt() {
  Drop_index_stmtContext *_localctx = _tracker.createInstance<Drop_index_stmtContext>(_ctx, getState());
  enterRule(_localctx, 36, SQLiteParser::RuleDrop_index_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(575);
    match(SQLiteParser::K_DROP);
    setState(576);
    match(SQLiteParser::K_INDEX);
    setState(579);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 69, _ctx)) {
    case 1: {
      setState(577);
      match(SQLiteParser::K_IF);
      setState(578);
      match(SQLiteParser::K_EXISTS);
      break;
    }

    }
    setState(584);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 70, _ctx)) {
    case 1: {
      setState(581);
      database_name();
      setState(582);
      match(SQLiteParser::DOT);
      break;
    }

    }
    setState(586);
    index_name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Drop_table_stmtContext ------------------------------------------------------------------

SQLiteParser::Drop_table_stmtContext::Drop_table_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SQLiteParser::Drop_table_stmtContext::K_DROP() {
  return getToken(SQLiteParser::K_DROP, 0);
}

tree::TerminalNode* SQLiteParser::Drop_table_stmtContext::K_TABLE() {
  return getToken(SQLiteParser::K_TABLE, 0);
}

SQLiteParser::Table_nameContext* SQLiteParser::Drop_table_stmtContext::table_name() {
  return getRuleContext<SQLiteParser::Table_nameContext>(0);
}

tree::TerminalNode* SQLiteParser::Drop_table_stmtContext::K_IF() {
  return getToken(SQLiteParser::K_IF, 0);
}

tree::TerminalNode* SQLiteParser::Drop_table_stmtContext::K_EXISTS() {
  return getToken(SQLiteParser::K_EXISTS, 0);
}

SQLiteParser::Database_nameContext* SQLiteParser::Drop_table_stmtContext::database_name() {
  return getRuleContext<SQLiteParser::Database_nameContext>(0);
}


size_t SQLiteParser::Drop_table_stmtContext::getRuleIndex() const {
  return SQLiteParser::RuleDrop_table_stmt;
}

antlrcpp::Any SQLiteParser::Drop_table_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLiteVisitor*>(visitor))
    return parserVisitor->visitDrop_table_stmt(this);
  else
    return visitor->visitChildren(this);
}

SQLiteParser::Drop_table_stmtContext* SQLiteParser::drop_table_stmt() {
  Drop_table_stmtContext *_localctx = _tracker.createInstance<Drop_table_stmtContext>(_ctx, getState());
  enterRule(_localctx, 38, SQLiteParser::RuleDrop_table_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(588);
    match(SQLiteParser::K_DROP);
    setState(589);
    match(SQLiteParser::K_TABLE);
    setState(592);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 71, _ctx)) {
    case 1: {
      setState(590);
      match(SQLiteParser::K_IF);
      setState(591);
      match(SQLiteParser::K_EXISTS);
      break;
    }

    }
    setState(597);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 72, _ctx)) {
    case 1: {
      setState(594);
      database_name();
      setState(595);
      match(SQLiteParser::DOT);
      break;
    }

    }
    setState(599);
    table_name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Drop_trigger_stmtContext ------------------------------------------------------------------

SQLiteParser::Drop_trigger_stmtContext::Drop_trigger_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SQLiteParser::Drop_trigger_stmtContext::K_DROP() {
  return getToken(SQLiteParser::K_DROP, 0);
}

tree::TerminalNode* SQLiteParser::Drop_trigger_stmtContext::K_TRIGGER() {
  return getToken(SQLiteParser::K_TRIGGER, 0);
}

SQLiteParser::Trigger_nameContext* SQLiteParser::Drop_trigger_stmtContext::trigger_name() {
  return getRuleContext<SQLiteParser::Trigger_nameContext>(0);
}

tree::TerminalNode* SQLiteParser::Drop_trigger_stmtContext::K_IF() {
  return getToken(SQLiteParser::K_IF, 0);
}

tree::TerminalNode* SQLiteParser::Drop_trigger_stmtContext::K_EXISTS() {
  return getToken(SQLiteParser::K_EXISTS, 0);
}

SQLiteParser::Database_nameContext* SQLiteParser::Drop_trigger_stmtContext::database_name() {
  return getRuleContext<SQLiteParser::Database_nameContext>(0);
}


size_t SQLiteParser::Drop_trigger_stmtContext::getRuleIndex() const {
  return SQLiteParser::RuleDrop_trigger_stmt;
}

antlrcpp::Any SQLiteParser::Drop_trigger_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLiteVisitor*>(visitor))
    return parserVisitor->visitDrop_trigger_stmt(this);
  else
    return visitor->visitChildren(this);
}

SQLiteParser::Drop_trigger_stmtContext* SQLiteParser::drop_trigger_stmt() {
  Drop_trigger_stmtContext *_localctx = _tracker.createInstance<Drop_trigger_stmtContext>(_ctx, getState());
  enterRule(_localctx, 40, SQLiteParser::RuleDrop_trigger_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(601);
    match(SQLiteParser::K_DROP);
    setState(602);
    match(SQLiteParser::K_TRIGGER);
    setState(605);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 73, _ctx)) {
    case 1: {
      setState(603);
      match(SQLiteParser::K_IF);
      setState(604);
      match(SQLiteParser::K_EXISTS);
      break;
    }

    }
    setState(610);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 74, _ctx)) {
    case 1: {
      setState(607);
      database_name();
      setState(608);
      match(SQLiteParser::DOT);
      break;
    }

    }
    setState(612);
    trigger_name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Drop_view_stmtContext ------------------------------------------------------------------

SQLiteParser::Drop_view_stmtContext::Drop_view_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SQLiteParser::Drop_view_stmtContext::K_DROP() {
  return getToken(SQLiteParser::K_DROP, 0);
}

tree::TerminalNode* SQLiteParser::Drop_view_stmtContext::K_VIEW() {
  return getToken(SQLiteParser::K_VIEW, 0);
}

SQLiteParser::View_nameContext* SQLiteParser::Drop_view_stmtContext::view_name() {
  return getRuleContext<SQLiteParser::View_nameContext>(0);
}

tree::TerminalNode* SQLiteParser::Drop_view_stmtContext::K_IF() {
  return getToken(SQLiteParser::K_IF, 0);
}

tree::TerminalNode* SQLiteParser::Drop_view_stmtContext::K_EXISTS() {
  return getToken(SQLiteParser::K_EXISTS, 0);
}

SQLiteParser::Database_nameContext* SQLiteParser::Drop_view_stmtContext::database_name() {
  return getRuleContext<SQLiteParser::Database_nameContext>(0);
}


size_t SQLiteParser::Drop_view_stmtContext::getRuleIndex() const {
  return SQLiteParser::RuleDrop_view_stmt;
}

antlrcpp::Any SQLiteParser::Drop_view_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLiteVisitor*>(visitor))
    return parserVisitor->visitDrop_view_stmt(this);
  else
    return visitor->visitChildren(this);
}

SQLiteParser::Drop_view_stmtContext* SQLiteParser::drop_view_stmt() {
  Drop_view_stmtContext *_localctx = _tracker.createInstance<Drop_view_stmtContext>(_ctx, getState());
  enterRule(_localctx, 42, SQLiteParser::RuleDrop_view_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(614);
    match(SQLiteParser::K_DROP);
    setState(615);
    match(SQLiteParser::K_VIEW);
    setState(618);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 75, _ctx)) {
    case 1: {
      setState(616);
      match(SQLiteParser::K_IF);
      setState(617);
      match(SQLiteParser::K_EXISTS);
      break;
    }

    }
    setState(623);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 76, _ctx)) {
    case 1: {
      setState(620);
      database_name();
      setState(621);
      match(SQLiteParser::DOT);
      break;
    }

    }
    setState(625);
    view_name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Factored_select_stmtContext ------------------------------------------------------------------

SQLiteParser::Factored_select_stmtContext::Factored_select_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SQLiteParser::Select_coreContext *> SQLiteParser::Factored_select_stmtContext::select_core() {
  return getRuleContexts<SQLiteParser::Select_coreContext>();
}

SQLiteParser::Select_coreContext* SQLiteParser::Factored_select_stmtContext::select_core(size_t i) {
  return getRuleContext<SQLiteParser::Select_coreContext>(i);
}

tree::TerminalNode* SQLiteParser::Factored_select_stmtContext::K_WITH() {
  return getToken(SQLiteParser::K_WITH, 0);
}

std::vector<SQLiteParser::Common_table_expressionContext *> SQLiteParser::Factored_select_stmtContext::common_table_expression() {
  return getRuleContexts<SQLiteParser::Common_table_expressionContext>();
}

SQLiteParser::Common_table_expressionContext* SQLiteParser::Factored_select_stmtContext::common_table_expression(size_t i) {
  return getRuleContext<SQLiteParser::Common_table_expressionContext>(i);
}

std::vector<SQLiteParser::Compound_operatorContext *> SQLiteParser::Factored_select_stmtContext::compound_operator() {
  return getRuleContexts<SQLiteParser::Compound_operatorContext>();
}

SQLiteParser::Compound_operatorContext* SQLiteParser::Factored_select_stmtContext::compound_operator(size_t i) {
  return getRuleContext<SQLiteParser::Compound_operatorContext>(i);
}

tree::TerminalNode* SQLiteParser::Factored_select_stmtContext::K_ORDER() {
  return getToken(SQLiteParser::K_ORDER, 0);
}

tree::TerminalNode* SQLiteParser::Factored_select_stmtContext::K_BY() {
  return getToken(SQLiteParser::K_BY, 0);
}

std::vector<SQLiteParser::Ordering_termContext *> SQLiteParser::Factored_select_stmtContext::ordering_term() {
  return getRuleContexts<SQLiteParser::Ordering_termContext>();
}

SQLiteParser::Ordering_termContext* SQLiteParser::Factored_select_stmtContext::ordering_term(size_t i) {
  return getRuleContext<SQLiteParser::Ordering_termContext>(i);
}

tree::TerminalNode* SQLiteParser::Factored_select_stmtContext::K_LIMIT() {
  return getToken(SQLiteParser::K_LIMIT, 0);
}

std::vector<SQLiteParser::ExprContext *> SQLiteParser::Factored_select_stmtContext::expr() {
  return getRuleContexts<SQLiteParser::ExprContext>();
}

SQLiteParser::ExprContext* SQLiteParser::Factored_select_stmtContext::expr(size_t i) {
  return getRuleContext<SQLiteParser::ExprContext>(i);
}

tree::TerminalNode* SQLiteParser::Factored_select_stmtContext::K_RECURSIVE() {
  return getToken(SQLiteParser::K_RECURSIVE, 0);
}

tree::TerminalNode* SQLiteParser::Factored_select_stmtContext::K_OFFSET() {
  return getToken(SQLiteParser::K_OFFSET, 0);
}


size_t SQLiteParser::Factored_select_stmtContext::getRuleIndex() const {
  return SQLiteParser::RuleFactored_select_stmt;
}

antlrcpp::Any SQLiteParser::Factored_select_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLiteVisitor*>(visitor))
    return parserVisitor->visitFactored_select_stmt(this);
  else
    return visitor->visitChildren(this);
}

SQLiteParser::Factored_select_stmtContext* SQLiteParser::factored_select_stmt() {
  Factored_select_stmtContext *_localctx = _tracker.createInstance<Factored_select_stmtContext>(_ctx, getState());
  enterRule(_localctx, 44, SQLiteParser::RuleFactored_select_stmt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(639);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SQLiteParser::K_WITH) {
      setState(627);
      match(SQLiteParser::K_WITH);
      setState(629);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 77, _ctx)) {
      case 1: {
        setState(628);
        match(SQLiteParser::K_RECURSIVE);
        break;
      }

      }
      setState(631);
      common_table_expression();
      setState(636);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SQLiteParser::COMMA) {
        setState(632);
        match(SQLiteParser::COMMA);
        setState(633);
        common_table_expression();
        setState(638);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(641);
    select_core();
    setState(647);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SQLiteParser::K_EXCEPT

    || _la == SQLiteParser::K_INTERSECT || _la == SQLiteParser::K_UNION) {
      setState(642);
      compound_operator();
      setState(643);
      select_core();
      setState(649);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(660);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SQLiteParser::K_ORDER) {
      setState(650);
      match(SQLiteParser::K_ORDER);
      setState(651);
      match(SQLiteParser::K_BY);
      setState(652);
      ordering_term();
      setState(657);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SQLiteParser::COMMA) {
        setState(653);
        match(SQLiteParser::COMMA);
        setState(654);
        ordering_term();
        setState(659);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(668);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SQLiteParser::K_LIMIT) {
      setState(662);
      match(SQLiteParser::K_LIMIT);
      setState(663);
      expr(0);
      setState(666);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SQLiteParser::COMMA || _la == SQLiteParser::K_OFFSET) {
        setState(664);
        _la = _input->LA(1);
        if (!(_la == SQLiteParser::COMMA || _la == SQLiteParser::K_OFFSET)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(665);
        expr(0);
      }
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Insert_stmtContext ------------------------------------------------------------------

SQLiteParser::Insert_stmtContext::Insert_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SQLiteParser::Insert_stmtContext::K_INTO() {
  return getToken(SQLiteParser::K_INTO, 0);
}

SQLiteParser::Table_nameContext* SQLiteParser::Insert_stmtContext::table_name() {
  return getRuleContext<SQLiteParser::Table_nameContext>(0);
}

tree::TerminalNode* SQLiteParser::Insert_stmtContext::K_INSERT() {
  return getToken(SQLiteParser::K_INSERT, 0);
}

tree::TerminalNode* SQLiteParser::Insert_stmtContext::K_REPLACE() {
  return getToken(SQLiteParser::K_REPLACE, 0);
}

tree::TerminalNode* SQLiteParser::Insert_stmtContext::K_OR() {
  return getToken(SQLiteParser::K_OR, 0);
}

tree::TerminalNode* SQLiteParser::Insert_stmtContext::K_ROLLBACK() {
  return getToken(SQLiteParser::K_ROLLBACK, 0);
}

tree::TerminalNode* SQLiteParser::Insert_stmtContext::K_ABORT() {
  return getToken(SQLiteParser::K_ABORT, 0);
}

tree::TerminalNode* SQLiteParser::Insert_stmtContext::K_FAIL() {
  return getToken(SQLiteParser::K_FAIL, 0);
}

tree::TerminalNode* SQLiteParser::Insert_stmtContext::K_IGNORE() {
  return getToken(SQLiteParser::K_IGNORE, 0);
}

tree::TerminalNode* SQLiteParser::Insert_stmtContext::K_VALUES() {
  return getToken(SQLiteParser::K_VALUES, 0);
}

std::vector<SQLiteParser::ExprContext *> SQLiteParser::Insert_stmtContext::expr() {
  return getRuleContexts<SQLiteParser::ExprContext>();
}

SQLiteParser::ExprContext* SQLiteParser::Insert_stmtContext::expr(size_t i) {
  return getRuleContext<SQLiteParser::ExprContext>(i);
}

SQLiteParser::Select_stmtContext* SQLiteParser::Insert_stmtContext::select_stmt() {
  return getRuleContext<SQLiteParser::Select_stmtContext>(0);
}

tree::TerminalNode* SQLiteParser::Insert_stmtContext::K_DEFAULT() {
  return getToken(SQLiteParser::K_DEFAULT, 0);
}

SQLiteParser::With_clauseContext* SQLiteParser::Insert_stmtContext::with_clause() {
  return getRuleContext<SQLiteParser::With_clauseContext>(0);
}

SQLiteParser::Database_nameContext* SQLiteParser::Insert_stmtContext::database_name() {
  return getRuleContext<SQLiteParser::Database_nameContext>(0);
}

std::vector<SQLiteParser::Column_nameContext *> SQLiteParser::Insert_stmtContext::column_name() {
  return getRuleContexts<SQLiteParser::Column_nameContext>();
}

SQLiteParser::Column_nameContext* SQLiteParser::Insert_stmtContext::column_name(size_t i) {
  return getRuleContext<SQLiteParser::Column_nameContext>(i);
}


size_t SQLiteParser::Insert_stmtContext::getRuleIndex() const {
  return SQLiteParser::RuleInsert_stmt;
}

antlrcpp::Any SQLiteParser::Insert_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLiteVisitor*>(visitor))
    return parserVisitor->visitInsert_stmt(this);
  else
    return visitor->visitChildren(this);
}

SQLiteParser::Insert_stmtContext* SQLiteParser::insert_stmt() {
  Insert_stmtContext *_localctx = _tracker.createInstance<Insert_stmtContext>(_ctx, getState());
  enterRule(_localctx, 46, SQLiteParser::RuleInsert_stmt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(671);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SQLiteParser::K_WITH) {
      setState(670);
      with_clause();
    }
    setState(690);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 86, _ctx)) {
    case 1: {
      setState(673);
      match(SQLiteParser::K_INSERT);
      break;
    }

    case 2: {
      setState(674);
      match(SQLiteParser::K_REPLACE);
      break;
    }

    case 3: {
      setState(675);
      match(SQLiteParser::K_INSERT);
      setState(676);
      match(SQLiteParser::K_OR);
      setState(677);
      match(SQLiteParser::K_REPLACE);
      break;
    }

    case 4: {
      setState(678);
      match(SQLiteParser::K_INSERT);
      setState(679);
      match(SQLiteParser::K_OR);
      setState(680);
      match(SQLiteParser::K_ROLLBACK);
      break;
    }

    case 5: {
      setState(681);
      match(SQLiteParser::K_INSERT);
      setState(682);
      match(SQLiteParser::K_OR);
      setState(683);
      match(SQLiteParser::K_ABORT);
      break;
    }

    case 6: {
      setState(684);
      match(SQLiteParser::K_INSERT);
      setState(685);
      match(SQLiteParser::K_OR);
      setState(686);
      match(SQLiteParser::K_FAIL);
      break;
    }

    case 7: {
      setState(687);
      match(SQLiteParser::K_INSERT);
      setState(688);
      match(SQLiteParser::K_OR);
      setState(689);
      match(SQLiteParser::K_IGNORE);
      break;
    }

    }
    setState(692);
    match(SQLiteParser::K_INTO);
    setState(696);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 87, _ctx)) {
    case 1: {
      setState(693);
      database_name();
      setState(694);
      match(SQLiteParser::DOT);
      break;
    }

    }
    setState(698);
    table_name();
    setState(710);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SQLiteParser::OPEN_PAR) {
      setState(699);
      match(SQLiteParser::OPEN_PAR);
      setState(700);
      column_name();
      setState(705);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SQLiteParser::COMMA) {
        setState(701);
        match(SQLiteParser::COMMA);
        setState(702);
        column_name();
        setState(707);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(708);
      match(SQLiteParser::CLOSE_PAR);
    }
    setState(743);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 93, _ctx)) {
    case 1: {
      setState(712);
      match(SQLiteParser::K_VALUES);
      setState(713);
      match(SQLiteParser::OPEN_PAR);
      setState(714);
      expr(0);
      setState(719);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SQLiteParser::COMMA) {
        setState(715);
        match(SQLiteParser::COMMA);
        setState(716);
        expr(0);
        setState(721);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(722);
      match(SQLiteParser::CLOSE_PAR);
      setState(737);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SQLiteParser::COMMA) {
        setState(723);
        match(SQLiteParser::COMMA);
        setState(724);
        match(SQLiteParser::OPEN_PAR);
        setState(725);
        expr(0);
        setState(730);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == SQLiteParser::COMMA) {
          setState(726);
          match(SQLiteParser::COMMA);
          setState(727);
          expr(0);
          setState(732);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(733);
        match(SQLiteParser::CLOSE_PAR);
        setState(739);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    case 2: {
      setState(740);
      select_stmt();
      break;
    }

    case 3: {
      setState(741);
      match(SQLiteParser::K_DEFAULT);
      setState(742);
      match(SQLiteParser::K_VALUES);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pragma_stmtContext ------------------------------------------------------------------

SQLiteParser::Pragma_stmtContext::Pragma_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SQLiteParser::Pragma_stmtContext::K_PRAGMA() {
  return getToken(SQLiteParser::K_PRAGMA, 0);
}

SQLiteParser::Pragma_nameContext* SQLiteParser::Pragma_stmtContext::pragma_name() {
  return getRuleContext<SQLiteParser::Pragma_nameContext>(0);
}

SQLiteParser::Database_nameContext* SQLiteParser::Pragma_stmtContext::database_name() {
  return getRuleContext<SQLiteParser::Database_nameContext>(0);
}

SQLiteParser::Pragma_valueContext* SQLiteParser::Pragma_stmtContext::pragma_value() {
  return getRuleContext<SQLiteParser::Pragma_valueContext>(0);
}


size_t SQLiteParser::Pragma_stmtContext::getRuleIndex() const {
  return SQLiteParser::RulePragma_stmt;
}

antlrcpp::Any SQLiteParser::Pragma_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLiteVisitor*>(visitor))
    return parserVisitor->visitPragma_stmt(this);
  else
    return visitor->visitChildren(this);
}

SQLiteParser::Pragma_stmtContext* SQLiteParser::pragma_stmt() {
  Pragma_stmtContext *_localctx = _tracker.createInstance<Pragma_stmtContext>(_ctx, getState());
  enterRule(_localctx, 48, SQLiteParser::RulePragma_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(745);
    match(SQLiteParser::K_PRAGMA);
    setState(749);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 94, _ctx)) {
    case 1: {
      setState(746);
      database_name();
      setState(747);
      match(SQLiteParser::DOT);
      break;
    }

    }
    setState(751);
    pragma_name();
    setState(758);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SQLiteParser::ASSIGN: {
        setState(752);
        match(SQLiteParser::ASSIGN);
        setState(753);
        pragma_value();
        break;
      }

      case SQLiteParser::OPEN_PAR: {
        setState(754);
        match(SQLiteParser::OPEN_PAR);
        setState(755);
        pragma_value();
        setState(756);
        match(SQLiteParser::CLOSE_PAR);
        break;
      }

      case SQLiteParser::EOF:
      case SQLiteParser::SCOL:
      case SQLiteParser::K_ALTER:
      case SQLiteParser::K_ANALYZE:
      case SQLiteParser::K_ATTACH:
      case SQLiteParser::K_BEGIN:
      case SQLiteParser::K_COMMIT:
      case SQLiteParser::K_CREATE:
      case SQLiteParser::K_DELETE:
      case SQLiteParser::K_DETACH:
      case SQLiteParser::K_DROP:
      case SQLiteParser::K_END:
      case SQLiteParser::K_EXPLAIN:
      case SQLiteParser::K_INSERT:
      case SQLiteParser::K_PRAGMA:
      case SQLiteParser::K_REINDEX:
      case SQLiteParser::K_RELEASE:
      case SQLiteParser::K_REPLACE:
      case SQLiteParser::K_ROLLBACK:
      case SQLiteParser::K_SAVEPOINT:
      case SQLiteParser::K_SELECT:
      case SQLiteParser::K_UPDATE:
      case SQLiteParser::K_VACUUM:
      case SQLiteParser::K_VALUES:
      case SQLiteParser::K_WITH:
      case SQLiteParser::UNEXPECTED_CHAR: {
        break;
      }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Reindex_stmtContext ------------------------------------------------------------------

SQLiteParser::Reindex_stmtContext::Reindex_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SQLiteParser::Reindex_stmtContext::K_REINDEX() {
  return getToken(SQLiteParser::K_REINDEX, 0);
}

SQLiteParser::Collation_nameContext* SQLiteParser::Reindex_stmtContext::collation_name() {
  return getRuleContext<SQLiteParser::Collation_nameContext>(0);
}

SQLiteParser::Table_nameContext* SQLiteParser::Reindex_stmtContext::table_name() {
  return getRuleContext<SQLiteParser::Table_nameContext>(0);
}

SQLiteParser::Index_nameContext* SQLiteParser::Reindex_stmtContext::index_name() {
  return getRuleContext<SQLiteParser::Index_nameContext>(0);
}

SQLiteParser::Database_nameContext* SQLiteParser::Reindex_stmtContext::database_name() {
  return getRuleContext<SQLiteParser::Database_nameContext>(0);
}


size_t SQLiteParser::Reindex_stmtContext::getRuleIndex() const {
  return SQLiteParser::RuleReindex_stmt;
}

antlrcpp::Any SQLiteParser::Reindex_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLiteVisitor*>(visitor))
    return parserVisitor->visitReindex_stmt(this);
  else
    return visitor->visitChildren(this);
}

SQLiteParser::Reindex_stmtContext* SQLiteParser::reindex_stmt() {
  Reindex_stmtContext *_localctx = _tracker.createInstance<Reindex_stmtContext>(_ctx, getState());
  enterRule(_localctx, 50, SQLiteParser::RuleReindex_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(760);
    match(SQLiteParser::K_REINDEX);
    setState(771);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 98, _ctx)) {
    case 1: {
      setState(761);
      collation_name();
      break;
    }

    case 2: {
      setState(765);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 96, _ctx)) {
      case 1: {
        setState(762);
        database_name();
        setState(763);
        match(SQLiteParser::DOT);
        break;
      }

      }
      setState(769);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 97, _ctx)) {
      case 1: {
        setState(767);
        table_name();
        break;
      }

      case 2: {
        setState(768);
        index_name();
        break;
      }

      }
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Release_stmtContext ------------------------------------------------------------------

SQLiteParser::Release_stmtContext::Release_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SQLiteParser::Release_stmtContext::K_RELEASE() {
  return getToken(SQLiteParser::K_RELEASE, 0);
}

SQLiteParser::Savepoint_nameContext* SQLiteParser::Release_stmtContext::savepoint_name() {
  return getRuleContext<SQLiteParser::Savepoint_nameContext>(0);
}

tree::TerminalNode* SQLiteParser::Release_stmtContext::K_SAVEPOINT() {
  return getToken(SQLiteParser::K_SAVEPOINT, 0);
}


size_t SQLiteParser::Release_stmtContext::getRuleIndex() const {
  return SQLiteParser::RuleRelease_stmt;
}

antlrcpp::Any SQLiteParser::Release_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLiteVisitor*>(visitor))
    return parserVisitor->visitRelease_stmt(this);
  else
    return visitor->visitChildren(this);
}

SQLiteParser::Release_stmtContext* SQLiteParser::release_stmt() {
  Release_stmtContext *_localctx = _tracker.createInstance<Release_stmtContext>(_ctx, getState());
  enterRule(_localctx, 52, SQLiteParser::RuleRelease_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(773);
    match(SQLiteParser::K_RELEASE);
    setState(775);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 99, _ctx)) {
    case 1: {
      setState(774);
      match(SQLiteParser::K_SAVEPOINT);
      break;
    }

    }
    setState(777);
    savepoint_name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Rollback_stmtContext ------------------------------------------------------------------

SQLiteParser::Rollback_stmtContext::Rollback_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SQLiteParser::Rollback_stmtContext::K_ROLLBACK() {
  return getToken(SQLiteParser::K_ROLLBACK, 0);
}

tree::TerminalNode* SQLiteParser::Rollback_stmtContext::K_TRANSACTION() {
  return getToken(SQLiteParser::K_TRANSACTION, 0);
}

tree::TerminalNode* SQLiteParser::Rollback_stmtContext::K_TO() {
  return getToken(SQLiteParser::K_TO, 0);
}

SQLiteParser::Savepoint_nameContext* SQLiteParser::Rollback_stmtContext::savepoint_name() {
  return getRuleContext<SQLiteParser::Savepoint_nameContext>(0);
}

SQLiteParser::Transaction_nameContext* SQLiteParser::Rollback_stmtContext::transaction_name() {
  return getRuleContext<SQLiteParser::Transaction_nameContext>(0);
}

tree::TerminalNode* SQLiteParser::Rollback_stmtContext::K_SAVEPOINT() {
  return getToken(SQLiteParser::K_SAVEPOINT, 0);
}


size_t SQLiteParser::Rollback_stmtContext::getRuleIndex() const {
  return SQLiteParser::RuleRollback_stmt;
}

antlrcpp::Any SQLiteParser::Rollback_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLiteVisitor*>(visitor))
    return parserVisitor->visitRollback_stmt(this);
  else
    return visitor->visitChildren(this);
}

SQLiteParser::Rollback_stmtContext* SQLiteParser::rollback_stmt() {
  Rollback_stmtContext *_localctx = _tracker.createInstance<Rollback_stmtContext>(_ctx, getState());
  enterRule(_localctx, 54, SQLiteParser::RuleRollback_stmt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(779);
    match(SQLiteParser::K_ROLLBACK);
    setState(784);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SQLiteParser::K_TRANSACTION) {
      setState(780);
      match(SQLiteParser::K_TRANSACTION);
      setState(782);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 100, _ctx)) {
      case 1: {
        setState(781);
        transaction_name();
        break;
      }

      }
    }
    setState(791);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SQLiteParser::K_TO) {
      setState(786);
      match(SQLiteParser::K_TO);
      setState(788);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 102, _ctx)) {
      case 1: {
        setState(787);
        match(SQLiteParser::K_SAVEPOINT);
        break;
      }

      }
      setState(790);
      savepoint_name();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Savepoint_stmtContext ------------------------------------------------------------------

SQLiteParser::Savepoint_stmtContext::Savepoint_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SQLiteParser::Savepoint_stmtContext::K_SAVEPOINT() {
  return getToken(SQLiteParser::K_SAVEPOINT, 0);
}

SQLiteParser::Savepoint_nameContext* SQLiteParser::Savepoint_stmtContext::savepoint_name() {
  return getRuleContext<SQLiteParser::Savepoint_nameContext>(0);
}


size_t SQLiteParser::Savepoint_stmtContext::getRuleIndex() const {
  return SQLiteParser::RuleSavepoint_stmt;
}

antlrcpp::Any SQLiteParser::Savepoint_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLiteVisitor*>(visitor))
    return parserVisitor->visitSavepoint_stmt(this);
  else
    return visitor->visitChildren(this);
}

SQLiteParser::Savepoint_stmtContext* SQLiteParser::savepoint_stmt() {
  Savepoint_stmtContext *_localctx = _tracker.createInstance<Savepoint_stmtContext>(_ctx, getState());
  enterRule(_localctx, 56, SQLiteParser::RuleSavepoint_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(793);
    match(SQLiteParser::K_SAVEPOINT);
    setState(794);
    savepoint_name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Simple_select_stmtContext ------------------------------------------------------------------

SQLiteParser::Simple_select_stmtContext::Simple_select_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SQLiteParser::Select_coreContext* SQLiteParser::Simple_select_stmtContext::select_core() {
  return getRuleContext<SQLiteParser::Select_coreContext>(0);
}

tree::TerminalNode* SQLiteParser::Simple_select_stmtContext::K_WITH() {
  return getToken(SQLiteParser::K_WITH, 0);
}

std::vector<SQLiteParser::Common_table_expressionContext *> SQLiteParser::Simple_select_stmtContext::common_table_expression() {
  return getRuleContexts<SQLiteParser::Common_table_expressionContext>();
}

SQLiteParser::Common_table_expressionContext* SQLiteParser::Simple_select_stmtContext::common_table_expression(size_t i) {
  return getRuleContext<SQLiteParser::Common_table_expressionContext>(i);
}

tree::TerminalNode* SQLiteParser::Simple_select_stmtContext::K_ORDER() {
  return getToken(SQLiteParser::K_ORDER, 0);
}

tree::TerminalNode* SQLiteParser::Simple_select_stmtContext::K_BY() {
  return getToken(SQLiteParser::K_BY, 0);
}

std::vector<SQLiteParser::Ordering_termContext *> SQLiteParser::Simple_select_stmtContext::ordering_term() {
  return getRuleContexts<SQLiteParser::Ordering_termContext>();
}

SQLiteParser::Ordering_termContext* SQLiteParser::Simple_select_stmtContext::ordering_term(size_t i) {
  return getRuleContext<SQLiteParser::Ordering_termContext>(i);
}

tree::TerminalNode* SQLiteParser::Simple_select_stmtContext::K_LIMIT() {
  return getToken(SQLiteParser::K_LIMIT, 0);
}

std::vector<SQLiteParser::ExprContext *> SQLiteParser::Simple_select_stmtContext::expr() {
  return getRuleContexts<SQLiteParser::ExprContext>();
}

SQLiteParser::ExprContext* SQLiteParser::Simple_select_stmtContext::expr(size_t i) {
  return getRuleContext<SQLiteParser::ExprContext>(i);
}

tree::TerminalNode* SQLiteParser::Simple_select_stmtContext::K_RECURSIVE() {
  return getToken(SQLiteParser::K_RECURSIVE, 0);
}

tree::TerminalNode* SQLiteParser::Simple_select_stmtContext::K_OFFSET() {
  return getToken(SQLiteParser::K_OFFSET, 0);
}


size_t SQLiteParser::Simple_select_stmtContext::getRuleIndex() const {
  return SQLiteParser::RuleSimple_select_stmt;
}

antlrcpp::Any SQLiteParser::Simple_select_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLiteVisitor*>(visitor))
    return parserVisitor->visitSimple_select_stmt(this);
  else
    return visitor->visitChildren(this);
}

SQLiteParser::Simple_select_stmtContext* SQLiteParser::simple_select_stmt() {
  Simple_select_stmtContext *_localctx = _tracker.createInstance<Simple_select_stmtContext>(_ctx, getState());
  enterRule(_localctx, 58, SQLiteParser::RuleSimple_select_stmt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(808);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SQLiteParser::K_WITH) {
      setState(796);
      match(SQLiteParser::K_WITH);
      setState(798);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 104, _ctx)) {
      case 1: {
        setState(797);
        match(SQLiteParser::K_RECURSIVE);
        break;
      }

      }
      setState(800);
      common_table_expression();
      setState(805);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SQLiteParser::COMMA) {
        setState(801);
        match(SQLiteParser::COMMA);
        setState(802);
        common_table_expression();
        setState(807);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(810);
    select_core();
    setState(821);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SQLiteParser::K_ORDER) {
      setState(811);
      match(SQLiteParser::K_ORDER);
      setState(812);
      match(SQLiteParser::K_BY);
      setState(813);
      ordering_term();
      setState(818);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SQLiteParser::COMMA) {
        setState(814);
        match(SQLiteParser::COMMA);
        setState(815);
        ordering_term();
        setState(820);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(829);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SQLiteParser::K_LIMIT) {
      setState(823);
      match(SQLiteParser::K_LIMIT);
      setState(824);
      expr(0);
      setState(827);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SQLiteParser::COMMA || _la == SQLiteParser::K_OFFSET) {
        setState(825);
        _la = _input->LA(1);
        if (!(_la == SQLiteParser::COMMA || _la == SQLiteParser::K_OFFSET)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(826);
        expr(0);
      }
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Select_stmtContext ------------------------------------------------------------------

SQLiteParser::Select_stmtContext::Select_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SQLiteParser::Select_or_valuesContext *> SQLiteParser::Select_stmtContext::select_or_values() {
  return getRuleContexts<SQLiteParser::Select_or_valuesContext>();
}

SQLiteParser::Select_or_valuesContext* SQLiteParser::Select_stmtContext::select_or_values(size_t i) {
  return getRuleContext<SQLiteParser::Select_or_valuesContext>(i);
}

tree::TerminalNode* SQLiteParser::Select_stmtContext::K_WITH() {
  return getToken(SQLiteParser::K_WITH, 0);
}

std::vector<SQLiteParser::Common_table_expressionContext *> SQLiteParser::Select_stmtContext::common_table_expression() {
  return getRuleContexts<SQLiteParser::Common_table_expressionContext>();
}

SQLiteParser::Common_table_expressionContext* SQLiteParser::Select_stmtContext::common_table_expression(size_t i) {
  return getRuleContext<SQLiteParser::Common_table_expressionContext>(i);
}

std::vector<SQLiteParser::Compound_operatorContext *> SQLiteParser::Select_stmtContext::compound_operator() {
  return getRuleContexts<SQLiteParser::Compound_operatorContext>();
}

SQLiteParser::Compound_operatorContext* SQLiteParser::Select_stmtContext::compound_operator(size_t i) {
  return getRuleContext<SQLiteParser::Compound_operatorContext>(i);
}

tree::TerminalNode* SQLiteParser::Select_stmtContext::K_ORDER() {
  return getToken(SQLiteParser::K_ORDER, 0);
}

tree::TerminalNode* SQLiteParser::Select_stmtContext::K_BY() {
  return getToken(SQLiteParser::K_BY, 0);
}

std::vector<SQLiteParser::Ordering_termContext *> SQLiteParser::Select_stmtContext::ordering_term() {
  return getRuleContexts<SQLiteParser::Ordering_termContext>();
}

SQLiteParser::Ordering_termContext* SQLiteParser::Select_stmtContext::ordering_term(size_t i) {
  return getRuleContext<SQLiteParser::Ordering_termContext>(i);
}

tree::TerminalNode* SQLiteParser::Select_stmtContext::K_LIMIT() {
  return getToken(SQLiteParser::K_LIMIT, 0);
}

std::vector<SQLiteParser::ExprContext *> SQLiteParser::Select_stmtContext::expr() {
  return getRuleContexts<SQLiteParser::ExprContext>();
}

SQLiteParser::ExprContext* SQLiteParser::Select_stmtContext::expr(size_t i) {
  return getRuleContext<SQLiteParser::ExprContext>(i);
}

tree::TerminalNode* SQLiteParser::Select_stmtContext::K_RECURSIVE() {
  return getToken(SQLiteParser::K_RECURSIVE, 0);
}

tree::TerminalNode* SQLiteParser::Select_stmtContext::K_OFFSET() {
  return getToken(SQLiteParser::K_OFFSET, 0);
}


size_t SQLiteParser::Select_stmtContext::getRuleIndex() const {
  return SQLiteParser::RuleSelect_stmt;
}

antlrcpp::Any SQLiteParser::Select_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLiteVisitor*>(visitor))
    return parserVisitor->visitSelect_stmt(this);
  else
    return visitor->visitChildren(this);
}

SQLiteParser::Select_stmtContext* SQLiteParser::select_stmt() {
  Select_stmtContext *_localctx = _tracker.createInstance<Select_stmtContext>(_ctx, getState());
  enterRule(_localctx, 60, SQLiteParser::RuleSelect_stmt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(843);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SQLiteParser::K_WITH) {
      setState(831);
      match(SQLiteParser::K_WITH);
      setState(833);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 111, _ctx)) {
      case 1: {
        setState(832);
        match(SQLiteParser::K_RECURSIVE);
        break;
      }

      }
      setState(835);
      common_table_expression();
      setState(840);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SQLiteParser::COMMA) {
        setState(836);
        match(SQLiteParser::COMMA);
        setState(837);
        common_table_expression();
        setState(842);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(845);
    select_or_values();
    setState(851);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SQLiteParser::K_EXCEPT

    || _la == SQLiteParser::K_INTERSECT || _la == SQLiteParser::K_UNION) {
      setState(846);
      compound_operator();
      setState(847);
      select_or_values();
      setState(853);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(864);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SQLiteParser::K_ORDER) {
      setState(854);
      match(SQLiteParser::K_ORDER);
      setState(855);
      match(SQLiteParser::K_BY);
      setState(856);
      ordering_term();
      setState(861);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SQLiteParser::COMMA) {
        setState(857);
        match(SQLiteParser::COMMA);
        setState(858);
        ordering_term();
        setState(863);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(872);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SQLiteParser::K_LIMIT) {
      setState(866);
      match(SQLiteParser::K_LIMIT);
      setState(867);
      expr(0);
      setState(870);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SQLiteParser::COMMA || _la == SQLiteParser::K_OFFSET) {
        setState(868);
        _la = _input->LA(1);
        if (!(_la == SQLiteParser::COMMA || _la == SQLiteParser::K_OFFSET)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(869);
        expr(0);
      }
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Select_or_valuesContext ------------------------------------------------------------------

SQLiteParser::Select_or_valuesContext::Select_or_valuesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SQLiteParser::Select_or_valuesContext::K_SELECT() {
  return getToken(SQLiteParser::K_SELECT, 0);
}

std::vector<SQLiteParser::Result_columnContext *> SQLiteParser::Select_or_valuesContext::result_column() {
  return getRuleContexts<SQLiteParser::Result_columnContext>();
}

SQLiteParser::Result_columnContext* SQLiteParser::Select_or_valuesContext::result_column(size_t i) {
  return getRuleContext<SQLiteParser::Result_columnContext>(i);
}

tree::TerminalNode* SQLiteParser::Select_or_valuesContext::K_FROM() {
  return getToken(SQLiteParser::K_FROM, 0);
}

tree::TerminalNode* SQLiteParser::Select_or_valuesContext::K_WHERE() {
  return getToken(SQLiteParser::K_WHERE, 0);
}

std::vector<SQLiteParser::ExprContext *> SQLiteParser::Select_or_valuesContext::expr() {
  return getRuleContexts<SQLiteParser::ExprContext>();
}

SQLiteParser::ExprContext* SQLiteParser::Select_or_valuesContext::expr(size_t i) {
  return getRuleContext<SQLiteParser::ExprContext>(i);
}

tree::TerminalNode* SQLiteParser::Select_or_valuesContext::K_GROUP() {
  return getToken(SQLiteParser::K_GROUP, 0);
}

tree::TerminalNode* SQLiteParser::Select_or_valuesContext::K_BY() {
  return getToken(SQLiteParser::K_BY, 0);
}

tree::TerminalNode* SQLiteParser::Select_or_valuesContext::K_DISTINCT() {
  return getToken(SQLiteParser::K_DISTINCT, 0);
}

tree::TerminalNode* SQLiteParser::Select_or_valuesContext::K_ALL() {
  return getToken(SQLiteParser::K_ALL, 0);
}

std::vector<SQLiteParser::Table_or_subqueryContext *> SQLiteParser::Select_or_valuesContext::table_or_subquery() {
  return getRuleContexts<SQLiteParser::Table_or_subqueryContext>();
}

SQLiteParser::Table_or_subqueryContext* SQLiteParser::Select_or_valuesContext::table_or_subquery(size_t i) {
  return getRuleContext<SQLiteParser::Table_or_subqueryContext>(i);
}

SQLiteParser::Join_clauseContext* SQLiteParser::Select_or_valuesContext::join_clause() {
  return getRuleContext<SQLiteParser::Join_clauseContext>(0);
}

tree::TerminalNode* SQLiteParser::Select_or_valuesContext::K_HAVING() {
  return getToken(SQLiteParser::K_HAVING, 0);
}

tree::TerminalNode* SQLiteParser::Select_or_valuesContext::K_VALUES() {
  return getToken(SQLiteParser::K_VALUES, 0);
}


size_t SQLiteParser::Select_or_valuesContext::getRuleIndex() const {
  return SQLiteParser::RuleSelect_or_values;
}

antlrcpp::Any SQLiteParser::Select_or_valuesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLiteVisitor*>(visitor))
    return parserVisitor->visitSelect_or_values(this);
  else
    return visitor->visitChildren(this);
}

SQLiteParser::Select_or_valuesContext* SQLiteParser::select_or_values() {
  Select_or_valuesContext *_localctx = _tracker.createInstance<Select_or_valuesContext>(_ctx, getState());
  enterRule(_localctx, 62, SQLiteParser::RuleSelect_or_values);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(948);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SQLiteParser::K_SELECT: {
        enterOuterAlt(_localctx, 1);
        setState(874);
        match(SQLiteParser::K_SELECT);
        setState(876);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 119, _ctx)) {
        case 1: {
          setState(875);
          _la = _input->LA(1);
          if (!(_la == SQLiteParser::K_ALL

          || _la == SQLiteParser::K_DISTINCT)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          break;
        }

        }
        setState(878);
        result_column();
        setState(883);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == SQLiteParser::COMMA) {
          setState(879);
          match(SQLiteParser::COMMA);
          setState(880);
          result_column();
          setState(885);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(898);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SQLiteParser::K_FROM) {
          setState(886);
          match(SQLiteParser::K_FROM);
          setState(896);
          _errHandler->sync(this);
          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 122, _ctx)) {
          case 1: {
            setState(887);
            table_or_subquery();
            setState(892);
            _errHandler->sync(this);
            _la = _input->LA(1);
            while (_la == SQLiteParser::COMMA) {
              setState(888);
              match(SQLiteParser::COMMA);
              setState(889);
              table_or_subquery();
              setState(894);
              _errHandler->sync(this);
              _la = _input->LA(1);
            }
            break;
          }

          case 2: {
            setState(895);
            join_clause();
            break;
          }

          }
        }
        setState(902);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SQLiteParser::K_WHERE) {
          setState(900);
          match(SQLiteParser::K_WHERE);
          setState(901);
          expr(0);
        }
        setState(918);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SQLiteParser::K_GROUP) {
          setState(904);
          match(SQLiteParser::K_GROUP);
          setState(905);
          match(SQLiteParser::K_BY);
          setState(906);
          expr(0);
          setState(911);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == SQLiteParser::COMMA) {
            setState(907);
            match(SQLiteParser::COMMA);
            setState(908);
            expr(0);
            setState(913);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
          setState(916);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == SQLiteParser::K_HAVING) {
            setState(914);
            match(SQLiteParser::K_HAVING);
            setState(915);
            expr(0);
          }
        }
        break;
      }

      case SQLiteParser::K_VALUES: {
        enterOuterAlt(_localctx, 2);
        setState(920);
        match(SQLiteParser::K_VALUES);
        setState(921);
        match(SQLiteParser::OPEN_PAR);
        setState(922);
        expr(0);
        setState(927);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == SQLiteParser::COMMA) {
          setState(923);
          match(SQLiteParser::COMMA);
          setState(924);
          expr(0);
          setState(929);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(930);
        match(SQLiteParser::CLOSE_PAR);
        setState(945);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == SQLiteParser::COMMA) {
          setState(931);
          match(SQLiteParser::COMMA);
          setState(932);
          match(SQLiteParser::OPEN_PAR);
          setState(933);
          expr(0);
          setState(938);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == SQLiteParser::COMMA) {
            setState(934);
            match(SQLiteParser::COMMA);
            setState(935);
            expr(0);
            setState(940);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
          setState(941);
          match(SQLiteParser::CLOSE_PAR);
          setState(947);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Update_stmtContext ------------------------------------------------------------------

SQLiteParser::Update_stmtContext::Update_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SQLiteParser::Update_stmtContext::K_UPDATE() {
  return getToken(SQLiteParser::K_UPDATE, 0);
}

SQLiteParser::Qualified_table_nameContext* SQLiteParser::Update_stmtContext::qualified_table_name() {
  return getRuleContext<SQLiteParser::Qualified_table_nameContext>(0);
}

tree::TerminalNode* SQLiteParser::Update_stmtContext::K_SET() {
  return getToken(SQLiteParser::K_SET, 0);
}

std::vector<SQLiteParser::Column_nameContext *> SQLiteParser::Update_stmtContext::column_name() {
  return getRuleContexts<SQLiteParser::Column_nameContext>();
}

SQLiteParser::Column_nameContext* SQLiteParser::Update_stmtContext::column_name(size_t i) {
  return getRuleContext<SQLiteParser::Column_nameContext>(i);
}

std::vector<SQLiteParser::ExprContext *> SQLiteParser::Update_stmtContext::expr() {
  return getRuleContexts<SQLiteParser::ExprContext>();
}

SQLiteParser::ExprContext* SQLiteParser::Update_stmtContext::expr(size_t i) {
  return getRuleContext<SQLiteParser::ExprContext>(i);
}

SQLiteParser::With_clauseContext* SQLiteParser::Update_stmtContext::with_clause() {
  return getRuleContext<SQLiteParser::With_clauseContext>(0);
}

tree::TerminalNode* SQLiteParser::Update_stmtContext::K_OR() {
  return getToken(SQLiteParser::K_OR, 0);
}

tree::TerminalNode* SQLiteParser::Update_stmtContext::K_ROLLBACK() {
  return getToken(SQLiteParser::K_ROLLBACK, 0);
}

tree::TerminalNode* SQLiteParser::Update_stmtContext::K_ABORT() {
  return getToken(SQLiteParser::K_ABORT, 0);
}

tree::TerminalNode* SQLiteParser::Update_stmtContext::K_REPLACE() {
  return getToken(SQLiteParser::K_REPLACE, 0);
}

tree::TerminalNode* SQLiteParser::Update_stmtContext::K_FAIL() {
  return getToken(SQLiteParser::K_FAIL, 0);
}

tree::TerminalNode* SQLiteParser::Update_stmtContext::K_IGNORE() {
  return getToken(SQLiteParser::K_IGNORE, 0);
}

tree::TerminalNode* SQLiteParser::Update_stmtContext::K_WHERE() {
  return getToken(SQLiteParser::K_WHERE, 0);
}


size_t SQLiteParser::Update_stmtContext::getRuleIndex() const {
  return SQLiteParser::RuleUpdate_stmt;
}

antlrcpp::Any SQLiteParser::Update_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLiteVisitor*>(visitor))
    return parserVisitor->visitUpdate_stmt(this);
  else
    return visitor->visitChildren(this);
}

SQLiteParser::Update_stmtContext* SQLiteParser::update_stmt() {
  Update_stmtContext *_localctx = _tracker.createInstance<Update_stmtContext>(_ctx, getState());
  enterRule(_localctx, 64, SQLiteParser::RuleUpdate_stmt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(951);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SQLiteParser::K_WITH) {
      setState(950);
      with_clause();
    }
    setState(953);
    match(SQLiteParser::K_UPDATE);
    setState(964);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 133, _ctx)) {
    case 1: {
      setState(954);
      match(SQLiteParser::K_OR);
      setState(955);
      match(SQLiteParser::K_ROLLBACK);
      break;
    }

    case 2: {
      setState(956);
      match(SQLiteParser::K_OR);
      setState(957);
      match(SQLiteParser::K_ABORT);
      break;
    }

    case 3: {
      setState(958);
      match(SQLiteParser::K_OR);
      setState(959);
      match(SQLiteParser::K_REPLACE);
      break;
    }

    case 4: {
      setState(960);
      match(SQLiteParser::K_OR);
      setState(961);
      match(SQLiteParser::K_FAIL);
      break;
    }

    case 5: {
      setState(962);
      match(SQLiteParser::K_OR);
      setState(963);
      match(SQLiteParser::K_IGNORE);
      break;
    }

    }
    setState(966);
    qualified_table_name();
    setState(967);
    match(SQLiteParser::K_SET);
    setState(968);
    column_name();
    setState(969);
    match(SQLiteParser::ASSIGN);
    setState(970);
    expr(0);
    setState(978);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SQLiteParser::COMMA) {
      setState(971);
      match(SQLiteParser::COMMA);
      setState(972);
      column_name();
      setState(973);
      match(SQLiteParser::ASSIGN);
      setState(974);
      expr(0);
      setState(980);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(983);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SQLiteParser::K_WHERE) {
      setState(981);
      match(SQLiteParser::K_WHERE);
      setState(982);
      expr(0);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Update_stmt_limitedContext ------------------------------------------------------------------

SQLiteParser::Update_stmt_limitedContext::Update_stmt_limitedContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SQLiteParser::Update_stmt_limitedContext::K_UPDATE() {
  return getToken(SQLiteParser::K_UPDATE, 0);
}

SQLiteParser::Qualified_table_nameContext* SQLiteParser::Update_stmt_limitedContext::qualified_table_name() {
  return getRuleContext<SQLiteParser::Qualified_table_nameContext>(0);
}

tree::TerminalNode* SQLiteParser::Update_stmt_limitedContext::K_SET() {
  return getToken(SQLiteParser::K_SET, 0);
}

std::vector<SQLiteParser::Column_nameContext *> SQLiteParser::Update_stmt_limitedContext::column_name() {
  return getRuleContexts<SQLiteParser::Column_nameContext>();
}

SQLiteParser::Column_nameContext* SQLiteParser::Update_stmt_limitedContext::column_name(size_t i) {
  return getRuleContext<SQLiteParser::Column_nameContext>(i);
}

std::vector<SQLiteParser::ExprContext *> SQLiteParser::Update_stmt_limitedContext::expr() {
  return getRuleContexts<SQLiteParser::ExprContext>();
}

SQLiteParser::ExprContext* SQLiteParser::Update_stmt_limitedContext::expr(size_t i) {
  return getRuleContext<SQLiteParser::ExprContext>(i);
}

SQLiteParser::With_clauseContext* SQLiteParser::Update_stmt_limitedContext::with_clause() {
  return getRuleContext<SQLiteParser::With_clauseContext>(0);
}

tree::TerminalNode* SQLiteParser::Update_stmt_limitedContext::K_OR() {
  return getToken(SQLiteParser::K_OR, 0);
}

tree::TerminalNode* SQLiteParser::Update_stmt_limitedContext::K_ROLLBACK() {
  return getToken(SQLiteParser::K_ROLLBACK, 0);
}

tree::TerminalNode* SQLiteParser::Update_stmt_limitedContext::K_ABORT() {
  return getToken(SQLiteParser::K_ABORT, 0);
}

tree::TerminalNode* SQLiteParser::Update_stmt_limitedContext::K_REPLACE() {
  return getToken(SQLiteParser::K_REPLACE, 0);
}

tree::TerminalNode* SQLiteParser::Update_stmt_limitedContext::K_FAIL() {
  return getToken(SQLiteParser::K_FAIL, 0);
}

tree::TerminalNode* SQLiteParser::Update_stmt_limitedContext::K_IGNORE() {
  return getToken(SQLiteParser::K_IGNORE, 0);
}

tree::TerminalNode* SQLiteParser::Update_stmt_limitedContext::K_WHERE() {
  return getToken(SQLiteParser::K_WHERE, 0);
}

tree::TerminalNode* SQLiteParser::Update_stmt_limitedContext::K_LIMIT() {
  return getToken(SQLiteParser::K_LIMIT, 0);
}

tree::TerminalNode* SQLiteParser::Update_stmt_limitedContext::K_ORDER() {
  return getToken(SQLiteParser::K_ORDER, 0);
}

tree::TerminalNode* SQLiteParser::Update_stmt_limitedContext::K_BY() {
  return getToken(SQLiteParser::K_BY, 0);
}

std::vector<SQLiteParser::Ordering_termContext *> SQLiteParser::Update_stmt_limitedContext::ordering_term() {
  return getRuleContexts<SQLiteParser::Ordering_termContext>();
}

SQLiteParser::Ordering_termContext* SQLiteParser::Update_stmt_limitedContext::ordering_term(size_t i) {
  return getRuleContext<SQLiteParser::Ordering_termContext>(i);
}

tree::TerminalNode* SQLiteParser::Update_stmt_limitedContext::K_OFFSET() {
  return getToken(SQLiteParser::K_OFFSET, 0);
}


size_t SQLiteParser::Update_stmt_limitedContext::getRuleIndex() const {
  return SQLiteParser::RuleUpdate_stmt_limited;
}

antlrcpp::Any SQLiteParser::Update_stmt_limitedContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLiteVisitor*>(visitor))
    return parserVisitor->visitUpdate_stmt_limited(this);
  else
    return visitor->visitChildren(this);
}

SQLiteParser::Update_stmt_limitedContext* SQLiteParser::update_stmt_limited() {
  Update_stmt_limitedContext *_localctx = _tracker.createInstance<Update_stmt_limitedContext>(_ctx, getState());
  enterRule(_localctx, 66, SQLiteParser::RuleUpdate_stmt_limited);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(986);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SQLiteParser::K_WITH) {
      setState(985);
      with_clause();
    }
    setState(988);
    match(SQLiteParser::K_UPDATE);
    setState(999);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 137, _ctx)) {
    case 1: {
      setState(989);
      match(SQLiteParser::K_OR);
      setState(990);
      match(SQLiteParser::K_ROLLBACK);
      break;
    }

    case 2: {
      setState(991);
      match(SQLiteParser::K_OR);
      setState(992);
      match(SQLiteParser::K_ABORT);
      break;
    }

    case 3: {
      setState(993);
      match(SQLiteParser::K_OR);
      setState(994);
      match(SQLiteParser::K_REPLACE);
      break;
    }

    case 4: {
      setState(995);
      match(SQLiteParser::K_OR);
      setState(996);
      match(SQLiteParser::K_FAIL);
      break;
    }

    case 5: {
      setState(997);
      match(SQLiteParser::K_OR);
      setState(998);
      match(SQLiteParser::K_IGNORE);
      break;
    }

    }
    setState(1001);
    qualified_table_name();
    setState(1002);
    match(SQLiteParser::K_SET);
    setState(1003);
    column_name();
    setState(1004);
    match(SQLiteParser::ASSIGN);
    setState(1005);
    expr(0);
    setState(1013);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SQLiteParser::COMMA) {
      setState(1006);
      match(SQLiteParser::COMMA);
      setState(1007);
      column_name();
      setState(1008);
      match(SQLiteParser::ASSIGN);
      setState(1009);
      expr(0);
      setState(1015);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1018);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SQLiteParser::K_WHERE) {
      setState(1016);
      match(SQLiteParser::K_WHERE);
      setState(1017);
      expr(0);
    }
    setState(1038);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SQLiteParser::K_LIMIT

    || _la == SQLiteParser::K_ORDER) {
      setState(1030);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SQLiteParser::K_ORDER) {
        setState(1020);
        match(SQLiteParser::K_ORDER);
        setState(1021);
        match(SQLiteParser::K_BY);
        setState(1022);
        ordering_term();
        setState(1027);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == SQLiteParser::COMMA) {
          setState(1023);
          match(SQLiteParser::COMMA);
          setState(1024);
          ordering_term();
          setState(1029);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
      }
      setState(1032);
      match(SQLiteParser::K_LIMIT);
      setState(1033);
      expr(0);
      setState(1036);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SQLiteParser::COMMA || _la == SQLiteParser::K_OFFSET) {
        setState(1034);
        _la = _input->LA(1);
        if (!(_la == SQLiteParser::COMMA || _la == SQLiteParser::K_OFFSET)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(1035);
        expr(0);
      }
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Vacuum_stmtContext ------------------------------------------------------------------

SQLiteParser::Vacuum_stmtContext::Vacuum_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SQLiteParser::Vacuum_stmtContext::K_VACUUM() {
  return getToken(SQLiteParser::K_VACUUM, 0);
}


size_t SQLiteParser::Vacuum_stmtContext::getRuleIndex() const {
  return SQLiteParser::RuleVacuum_stmt;
}

antlrcpp::Any SQLiteParser::Vacuum_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLiteVisitor*>(visitor))
    return parserVisitor->visitVacuum_stmt(this);
  else
    return visitor->visitChildren(this);
}

SQLiteParser::Vacuum_stmtContext* SQLiteParser::vacuum_stmt() {
  Vacuum_stmtContext *_localctx = _tracker.createInstance<Vacuum_stmtContext>(_ctx, getState());
  enterRule(_localctx, 68, SQLiteParser::RuleVacuum_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1040);
    match(SQLiteParser::K_VACUUM);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Column_defContext ------------------------------------------------------------------

SQLiteParser::Column_defContext::Column_defContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SQLiteParser::Column_nameContext* SQLiteParser::Column_defContext::column_name() {
  return getRuleContext<SQLiteParser::Column_nameContext>(0);
}

SQLiteParser::Type_nameContext* SQLiteParser::Column_defContext::type_name() {
  return getRuleContext<SQLiteParser::Type_nameContext>(0);
}

std::vector<SQLiteParser::Column_constraintContext *> SQLiteParser::Column_defContext::column_constraint() {
  return getRuleContexts<SQLiteParser::Column_constraintContext>();
}

SQLiteParser::Column_constraintContext* SQLiteParser::Column_defContext::column_constraint(size_t i) {
  return getRuleContext<SQLiteParser::Column_constraintContext>(i);
}


size_t SQLiteParser::Column_defContext::getRuleIndex() const {
  return SQLiteParser::RuleColumn_def;
}

antlrcpp::Any SQLiteParser::Column_defContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLiteVisitor*>(visitor))
    return parserVisitor->visitColumn_def(this);
  else
    return visitor->visitChildren(this);
}

SQLiteParser::Column_defContext* SQLiteParser::column_def() {
  Column_defContext *_localctx = _tracker.createInstance<Column_defContext>(_ctx, getState());
  enterRule(_localctx, 70, SQLiteParser::RuleColumn_def);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1042);
    column_name();
    setState(1044);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 144, _ctx)) {
    case 1: {
      setState(1043);
      type_name();
      break;
    }

    }
    setState(1049);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SQLiteParser::K_CHECK)
      | (1ULL << SQLiteParser::K_COLLATE)
      | (1ULL << SQLiteParser::K_CONSTRAINT)
      | (1ULL << SQLiteParser::K_DEFAULT))) != 0) || ((((_la - 102) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 102)) & ((1ULL << (SQLiteParser::K_NOT - 102))
      | (1ULL << (SQLiteParser::K_NULL - 102))
      | (1ULL << (SQLiteParser::K_PRIMARY - 102))
      | (1ULL << (SQLiteParser::K_REFERENCES - 102))
      | (1ULL << (SQLiteParser::K_UNIQUE - 102)))) != 0)) {
      setState(1046);
      column_constraint();
      setState(1051);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Type_nameContext ------------------------------------------------------------------

SQLiteParser::Type_nameContext::Type_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SQLiteParser::NameContext *> SQLiteParser::Type_nameContext::name() {
  return getRuleContexts<SQLiteParser::NameContext>();
}

SQLiteParser::NameContext* SQLiteParser::Type_nameContext::name(size_t i) {
  return getRuleContext<SQLiteParser::NameContext>(i);
}

std::vector<SQLiteParser::Signed_numberContext *> SQLiteParser::Type_nameContext::signed_number() {
  return getRuleContexts<SQLiteParser::Signed_numberContext>();
}

SQLiteParser::Signed_numberContext* SQLiteParser::Type_nameContext::signed_number(size_t i) {
  return getRuleContext<SQLiteParser::Signed_numberContext>(i);
}


size_t SQLiteParser::Type_nameContext::getRuleIndex() const {
  return SQLiteParser::RuleType_name;
}

antlrcpp::Any SQLiteParser::Type_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLiteVisitor*>(visitor))
    return parserVisitor->visitType_name(this);
  else
    return visitor->visitChildren(this);
}

SQLiteParser::Type_nameContext* SQLiteParser::type_name() {
  Type_nameContext *_localctx = _tracker.createInstance<Type_nameContext>(_ctx, getState());
  enterRule(_localctx, 72, SQLiteParser::RuleType_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1053); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(1052);
              name();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(1055); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 146, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
    setState(1067);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 147, _ctx)) {
    case 1: {
      setState(1057);
      match(SQLiteParser::OPEN_PAR);
      setState(1058);
      signed_number();
      setState(1059);
      match(SQLiteParser::CLOSE_PAR);
      break;
    }

    case 2: {
      setState(1061);
      match(SQLiteParser::OPEN_PAR);
      setState(1062);
      signed_number();
      setState(1063);
      match(SQLiteParser::COMMA);
      setState(1064);
      signed_number();
      setState(1065);
      match(SQLiteParser::CLOSE_PAR);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Column_constraintContext ------------------------------------------------------------------

SQLiteParser::Column_constraintContext::Column_constraintContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SQLiteParser::Column_constraintContext::K_PRIMARY() {
  return getToken(SQLiteParser::K_PRIMARY, 0);
}

tree::TerminalNode* SQLiteParser::Column_constraintContext::K_KEY() {
  return getToken(SQLiteParser::K_KEY, 0);
}

SQLiteParser::Conflict_clauseContext* SQLiteParser::Column_constraintContext::conflict_clause() {
  return getRuleContext<SQLiteParser::Conflict_clauseContext>(0);
}

tree::TerminalNode* SQLiteParser::Column_constraintContext::K_NULL() {
  return getToken(SQLiteParser::K_NULL, 0);
}

tree::TerminalNode* SQLiteParser::Column_constraintContext::K_UNIQUE() {
  return getToken(SQLiteParser::K_UNIQUE, 0);
}

tree::TerminalNode* SQLiteParser::Column_constraintContext::K_CHECK() {
  return getToken(SQLiteParser::K_CHECK, 0);
}

SQLiteParser::ExprContext* SQLiteParser::Column_constraintContext::expr() {
  return getRuleContext<SQLiteParser::ExprContext>(0);
}

tree::TerminalNode* SQLiteParser::Column_constraintContext::K_DEFAULT() {
  return getToken(SQLiteParser::K_DEFAULT, 0);
}

tree::TerminalNode* SQLiteParser::Column_constraintContext::K_COLLATE() {
  return getToken(SQLiteParser::K_COLLATE, 0);
}

SQLiteParser::Collation_nameContext* SQLiteParser::Column_constraintContext::collation_name() {
  return getRuleContext<SQLiteParser::Collation_nameContext>(0);
}

SQLiteParser::Foreign_key_clauseContext* SQLiteParser::Column_constraintContext::foreign_key_clause() {
  return getRuleContext<SQLiteParser::Foreign_key_clauseContext>(0);
}

tree::TerminalNode* SQLiteParser::Column_constraintContext::K_CONSTRAINT() {
  return getToken(SQLiteParser::K_CONSTRAINT, 0);
}

SQLiteParser::NameContext* SQLiteParser::Column_constraintContext::name() {
  return getRuleContext<SQLiteParser::NameContext>(0);
}

SQLiteParser::Signed_numberContext* SQLiteParser::Column_constraintContext::signed_number() {
  return getRuleContext<SQLiteParser::Signed_numberContext>(0);
}

SQLiteParser::Literal_valueContext* SQLiteParser::Column_constraintContext::literal_value() {
  return getRuleContext<SQLiteParser::Literal_valueContext>(0);
}

tree::TerminalNode* SQLiteParser::Column_constraintContext::K_AUTOINCREMENT() {
  return getToken(SQLiteParser::K_AUTOINCREMENT, 0);
}

tree::TerminalNode* SQLiteParser::Column_constraintContext::K_NOT() {
  return getToken(SQLiteParser::K_NOT, 0);
}

tree::TerminalNode* SQLiteParser::Column_constraintContext::K_ASC() {
  return getToken(SQLiteParser::K_ASC, 0);
}

tree::TerminalNode* SQLiteParser::Column_constraintContext::K_DESC() {
  return getToken(SQLiteParser::K_DESC, 0);
}


size_t SQLiteParser::Column_constraintContext::getRuleIndex() const {
  return SQLiteParser::RuleColumn_constraint;
}

antlrcpp::Any SQLiteParser::Column_constraintContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLiteVisitor*>(visitor))
    return parserVisitor->visitColumn_constraint(this);
  else
    return visitor->visitChildren(this);
}

SQLiteParser::Column_constraintContext* SQLiteParser::column_constraint() {
  Column_constraintContext *_localctx = _tracker.createInstance<Column_constraintContext>(_ctx, getState());
  enterRule(_localctx, 74, SQLiteParser::RuleColumn_constraint);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1071);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SQLiteParser::K_CONSTRAINT) {
      setState(1069);
      match(SQLiteParser::K_CONSTRAINT);
      setState(1070);
      name();
    }
    setState(1106);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SQLiteParser::K_PRIMARY: {
        setState(1073);
        match(SQLiteParser::K_PRIMARY);
        setState(1074);
        match(SQLiteParser::K_KEY);
        setState(1076);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SQLiteParser::K_ASC

        || _la == SQLiteParser::K_DESC) {
          setState(1075);
          _la = _input->LA(1);
          if (!(_la == SQLiteParser::K_ASC

          || _la == SQLiteParser::K_DESC)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
        }
        setState(1078);
        conflict_clause();
        setState(1080);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SQLiteParser::K_AUTOINCREMENT) {
          setState(1079);
          match(SQLiteParser::K_AUTOINCREMENT);
        }
        break;
      }

      case SQLiteParser::K_NOT:
      case SQLiteParser::K_NULL: {
        setState(1083);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SQLiteParser::K_NOT) {
          setState(1082);
          match(SQLiteParser::K_NOT);
        }
        setState(1085);
        match(SQLiteParser::K_NULL);
        setState(1086);
        conflict_clause();
        break;
      }

      case SQLiteParser::K_UNIQUE: {
        setState(1087);
        match(SQLiteParser::K_UNIQUE);
        setState(1088);
        conflict_clause();
        break;
      }

      case SQLiteParser::K_CHECK: {
        setState(1089);
        match(SQLiteParser::K_CHECK);
        setState(1090);
        match(SQLiteParser::OPEN_PAR);
        setState(1091);
        expr(0);
        setState(1092);
        match(SQLiteParser::CLOSE_PAR);
        break;
      }

      case SQLiteParser::K_DEFAULT: {
        setState(1094);
        match(SQLiteParser::K_DEFAULT);
        setState(1101);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 152, _ctx)) {
        case 1: {
          setState(1095);
          signed_number();
          break;
        }

        case 2: {
          setState(1096);
          literal_value();
          break;
        }

        case 3: {
          setState(1097);
          match(SQLiteParser::OPEN_PAR);
          setState(1098);
          expr(0);
          setState(1099);
          match(SQLiteParser::CLOSE_PAR);
          break;
        }

        }
        break;
      }

      case SQLiteParser::K_COLLATE: {
        setState(1103);
        match(SQLiteParser::K_COLLATE);
        setState(1104);
        collation_name();
        break;
      }

      case SQLiteParser::K_REFERENCES: {
        setState(1105);
        foreign_key_clause();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Conflict_clauseContext ------------------------------------------------------------------

SQLiteParser::Conflict_clauseContext::Conflict_clauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SQLiteParser::Conflict_clauseContext::K_ON() {
  return getToken(SQLiteParser::K_ON, 0);
}

tree::TerminalNode* SQLiteParser::Conflict_clauseContext::K_CONFLICT() {
  return getToken(SQLiteParser::K_CONFLICT, 0);
}

tree::TerminalNode* SQLiteParser::Conflict_clauseContext::K_ROLLBACK() {
  return getToken(SQLiteParser::K_ROLLBACK, 0);
}

tree::TerminalNode* SQLiteParser::Conflict_clauseContext::K_ABORT() {
  return getToken(SQLiteParser::K_ABORT, 0);
}

tree::TerminalNode* SQLiteParser::Conflict_clauseContext::K_FAIL() {
  return getToken(SQLiteParser::K_FAIL, 0);
}

tree::TerminalNode* SQLiteParser::Conflict_clauseContext::K_IGNORE() {
  return getToken(SQLiteParser::K_IGNORE, 0);
}

tree::TerminalNode* SQLiteParser::Conflict_clauseContext::K_REPLACE() {
  return getToken(SQLiteParser::K_REPLACE, 0);
}


size_t SQLiteParser::Conflict_clauseContext::getRuleIndex() const {
  return SQLiteParser::RuleConflict_clause;
}

antlrcpp::Any SQLiteParser::Conflict_clauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLiteVisitor*>(visitor))
    return parserVisitor->visitConflict_clause(this);
  else
    return visitor->visitChildren(this);
}

SQLiteParser::Conflict_clauseContext* SQLiteParser::conflict_clause() {
  Conflict_clauseContext *_localctx = _tracker.createInstance<Conflict_clauseContext>(_ctx, getState());
  enterRule(_localctx, 76, SQLiteParser::RuleConflict_clause);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1111);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SQLiteParser::K_ON) {
      setState(1108);
      match(SQLiteParser::K_ON);
      setState(1109);
      match(SQLiteParser::K_CONFLICT);
      setState(1110);
      _la = _input->LA(1);
      if (!(_la == SQLiteParser::K_ABORT || ((((_la - 72) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 72)) & ((1ULL << (SQLiteParser::K_FAIL - 72))
        | (1ULL << (SQLiteParser::K_IGNORE - 72))
        | (1ULL << (SQLiteParser::K_REPLACE - 72))
        | (1ULL << (SQLiteParser::K_ROLLBACK - 72)))) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

SQLiteParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SQLiteParser::Literal_valueContext* SQLiteParser::ExprContext::literal_value() {
  return getRuleContext<SQLiteParser::Literal_valueContext>(0);
}

tree::TerminalNode* SQLiteParser::ExprContext::BIND_PARAMETER() {
  return getToken(SQLiteParser::BIND_PARAMETER, 0);
}

SQLiteParser::Column_nameContext* SQLiteParser::ExprContext::column_name() {
  return getRuleContext<SQLiteParser::Column_nameContext>(0);
}

SQLiteParser::Table_nameContext* SQLiteParser::ExprContext::table_name() {
  return getRuleContext<SQLiteParser::Table_nameContext>(0);
}

SQLiteParser::Database_nameContext* SQLiteParser::ExprContext::database_name() {
  return getRuleContext<SQLiteParser::Database_nameContext>(0);
}

SQLiteParser::Unary_operatorContext* SQLiteParser::ExprContext::unary_operator() {
  return getRuleContext<SQLiteParser::Unary_operatorContext>(0);
}

std::vector<SQLiteParser::ExprContext *> SQLiteParser::ExprContext::expr() {
  return getRuleContexts<SQLiteParser::ExprContext>();
}

SQLiteParser::ExprContext* SQLiteParser::ExprContext::expr(size_t i) {
  return getRuleContext<SQLiteParser::ExprContext>(i);
}

SQLiteParser::Function_nameContext* SQLiteParser::ExprContext::function_name() {
  return getRuleContext<SQLiteParser::Function_nameContext>(0);
}

tree::TerminalNode* SQLiteParser::ExprContext::K_DISTINCT() {
  return getToken(SQLiteParser::K_DISTINCT, 0);
}

tree::TerminalNode* SQLiteParser::ExprContext::K_CAST() {
  return getToken(SQLiteParser::K_CAST, 0);
}

tree::TerminalNode* SQLiteParser::ExprContext::K_AS() {
  return getToken(SQLiteParser::K_AS, 0);
}

SQLiteParser::Type_nameContext* SQLiteParser::ExprContext::type_name() {
  return getRuleContext<SQLiteParser::Type_nameContext>(0);
}

SQLiteParser::Select_stmtContext* SQLiteParser::ExprContext::select_stmt() {
  return getRuleContext<SQLiteParser::Select_stmtContext>(0);
}

tree::TerminalNode* SQLiteParser::ExprContext::K_EXISTS() {
  return getToken(SQLiteParser::K_EXISTS, 0);
}

tree::TerminalNode* SQLiteParser::ExprContext::K_NOT() {
  return getToken(SQLiteParser::K_NOT, 0);
}

tree::TerminalNode* SQLiteParser::ExprContext::K_CASE() {
  return getToken(SQLiteParser::K_CASE, 0);
}

tree::TerminalNode* SQLiteParser::ExprContext::K_END() {
  return getToken(SQLiteParser::K_END, 0);
}

std::vector<tree::TerminalNode *> SQLiteParser::ExprContext::K_WHEN() {
  return getTokens(SQLiteParser::K_WHEN);
}

tree::TerminalNode* SQLiteParser::ExprContext::K_WHEN(size_t i) {
  return getToken(SQLiteParser::K_WHEN, i);
}

std::vector<tree::TerminalNode *> SQLiteParser::ExprContext::K_THEN() {
  return getTokens(SQLiteParser::K_THEN);
}

tree::TerminalNode* SQLiteParser::ExprContext::K_THEN(size_t i) {
  return getToken(SQLiteParser::K_THEN, i);
}

tree::TerminalNode* SQLiteParser::ExprContext::K_ELSE() {
  return getToken(SQLiteParser::K_ELSE, 0);
}

SQLiteParser::Raise_functionContext* SQLiteParser::ExprContext::raise_function() {
  return getRuleContext<SQLiteParser::Raise_functionContext>(0);
}

tree::TerminalNode* SQLiteParser::ExprContext::K_IS() {
  return getToken(SQLiteParser::K_IS, 0);
}

tree::TerminalNode* SQLiteParser::ExprContext::K_IN() {
  return getToken(SQLiteParser::K_IN, 0);
}

tree::TerminalNode* SQLiteParser::ExprContext::K_LIKE() {
  return getToken(SQLiteParser::K_LIKE, 0);
}

tree::TerminalNode* SQLiteParser::ExprContext::K_GLOB() {
  return getToken(SQLiteParser::K_GLOB, 0);
}

tree::TerminalNode* SQLiteParser::ExprContext::K_MATCH() {
  return getToken(SQLiteParser::K_MATCH, 0);
}

tree::TerminalNode* SQLiteParser::ExprContext::K_REGEXP() {
  return getToken(SQLiteParser::K_REGEXP, 0);
}

tree::TerminalNode* SQLiteParser::ExprContext::K_AND() {
  return getToken(SQLiteParser::K_AND, 0);
}

tree::TerminalNode* SQLiteParser::ExprContext::K_OR() {
  return getToken(SQLiteParser::K_OR, 0);
}

tree::TerminalNode* SQLiteParser::ExprContext::K_BETWEEN() {
  return getToken(SQLiteParser::K_BETWEEN, 0);
}

tree::TerminalNode* SQLiteParser::ExprContext::K_COLLATE() {
  return getToken(SQLiteParser::K_COLLATE, 0);
}

SQLiteParser::Collation_nameContext* SQLiteParser::ExprContext::collation_name() {
  return getRuleContext<SQLiteParser::Collation_nameContext>(0);
}

tree::TerminalNode* SQLiteParser::ExprContext::K_ESCAPE() {
  return getToken(SQLiteParser::K_ESCAPE, 0);
}

tree::TerminalNode* SQLiteParser::ExprContext::K_ISNULL() {
  return getToken(SQLiteParser::K_ISNULL, 0);
}

tree::TerminalNode* SQLiteParser::ExprContext::K_NOTNULL() {
  return getToken(SQLiteParser::K_NOTNULL, 0);
}

tree::TerminalNode* SQLiteParser::ExprContext::K_NULL() {
  return getToken(SQLiteParser::K_NULL, 0);
}


size_t SQLiteParser::ExprContext::getRuleIndex() const {
  return SQLiteParser::RuleExpr;
}

antlrcpp::Any SQLiteParser::ExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLiteVisitor*>(visitor))
    return parserVisitor->visitExpr(this);
  else
    return visitor->visitChildren(this);
}


SQLiteParser::ExprContext* SQLiteParser::expr() {
   return expr(0);
}

SQLiteParser::ExprContext* SQLiteParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  SQLiteParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  SQLiteParser::ExprContext *previousContext = _localctx;
  size_t startState = 78;
  enterRecursionRule(_localctx, 78, SQLiteParser::RuleExpr, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1189);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 165, _ctx)) {
    case 1: {
      setState(1114);
      literal_value();
      break;
    }

    case 2: {
      setState(1115);
      match(SQLiteParser::BIND_PARAMETER);
      break;
    }

    case 3: {
      setState(1124);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 156, _ctx)) {
      case 1: {
        setState(1119);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 155, _ctx)) {
        case 1: {
          setState(1116);
          database_name();
          setState(1117);
          match(SQLiteParser::DOT);
          break;
        }

        }
        setState(1121);
        table_name();
        setState(1122);
        match(SQLiteParser::DOT);
        break;
      }

      }
      setState(1126);
      column_name();
      break;
    }

    case 4: {
      setState(1127);
      unary_operator();
      setState(1128);
      expr(21);
      break;
    }

    case 5: {
      setState(1130);
      function_name();
      setState(1131);
      match(SQLiteParser::OPEN_PAR);
      setState(1144);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case SQLiteParser::OPEN_PAR:
        case SQLiteParser::PLUS:
        case SQLiteParser::MINUS:
        case SQLiteParser::TILDE:
        case SQLiteParser::K_ABORT:
        case SQLiteParser::K_ACTION:
        case SQLiteParser::K_ADD:
        case SQLiteParser::K_AFTER:
        case SQLiteParser::K_ALL:
        case SQLiteParser::K_ALTER:
        case SQLiteParser::K_ANALYZE:
        case SQLiteParser::K_AND:
        case SQLiteParser::K_AS:
        case SQLiteParser::K_ASC:
        case SQLiteParser::K_ATTACH:
        case SQLiteParser::K_AUTOINCREMENT:
        case SQLiteParser::K_BEFORE:
        case SQLiteParser::K_BEGIN:
        case SQLiteParser::K_BETWEEN:
        case SQLiteParser::K_BY:
        case SQLiteParser::K_CASCADE:
        case SQLiteParser::K_CASE:
        case SQLiteParser::K_CAST:
        case SQLiteParser::K_CHECK:
        case SQLiteParser::K_COLLATE:
        case SQLiteParser::K_COLUMN:
        case SQLiteParser::K_COMMIT:
        case SQLiteParser::K_CONFLICT:
        case SQLiteParser::K_CONSTRAINT:
        case SQLiteParser::K_CREATE:
        case SQLiteParser::K_CROSS:
        case SQLiteParser::K_CURRENT_DATE:
        case SQLiteParser::K_CURRENT_TIME:
        case SQLiteParser::K_CURRENT_TIMESTAMP:
        case SQLiteParser::K_DATABASE:
        case SQLiteParser::K_DEFAULT:
        case SQLiteParser::K_DEFERRABLE:
        case SQLiteParser::K_DEFERRED:
        case SQLiteParser::K_DELETE:
        case SQLiteParser::K_DESC:
        case SQLiteParser::K_DETACH:
        case SQLiteParser::K_DISTINCT:
        case SQLiteParser::K_DROP:
        case SQLiteParser::K_EACH:
        case SQLiteParser::K_ELSE:
        case SQLiteParser::K_END:
        case SQLiteParser::K_ESCAPE:
        case SQLiteParser::K_EXCEPT:
        case SQLiteParser::K_EXCLUSIVE:
        case SQLiteParser::K_EXISTS:
        case SQLiteParser::K_EXPLAIN:
        case SQLiteParser::K_FAIL:
        case SQLiteParser::K_FOR:
        case SQLiteParser::K_FOREIGN:
        case SQLiteParser::K_FROM:
        case SQLiteParser::K_FULL:
        case SQLiteParser::K_GLOB:
        case SQLiteParser::K_GROUP:
        case SQLiteParser::K_HAVING:
        case SQLiteParser::K_IF:
        case SQLiteParser::K_IGNORE:
        case SQLiteParser::K_IMMEDIATE:
        case SQLiteParser::K_IN:
        case SQLiteParser::K_INDEX:
        case SQLiteParser::K_INDEXED:
        case SQLiteParser::K_INITIALLY:
        case SQLiteParser::K_INNER:
        case SQLiteParser::K_INSERT:
        case SQLiteParser::K_INSTEAD:
        case SQLiteParser::K_INTERSECT:
        case SQLiteParser::K_INTO:
        case SQLiteParser::K_IS:
        case SQLiteParser::K_ISNULL:
        case SQLiteParser::K_JOIN:
        case SQLiteParser::K_KEY:
        case SQLiteParser::K_LEFT:
        case SQLiteParser::K_LIKE:
        case SQLiteParser::K_LIMIT:
        case SQLiteParser::K_MATCH:
        case SQLiteParser::K_NATURAL:
        case SQLiteParser::K_NO:
        case SQLiteParser::K_NOT:
        case SQLiteParser::K_NOTNULL:
        case SQLiteParser::K_NULL:
        case SQLiteParser::K_OF:
        case SQLiteParser::K_OFFSET:
        case SQLiteParser::K_ON:
        case SQLiteParser::K_OR:
        case SQLiteParser::K_ORDER:
        case SQLiteParser::K_OUTER:
        case SQLiteParser::K_PLAN:
        case SQLiteParser::K_PRAGMA:
        case SQLiteParser::K_PRIMARY:
        case SQLiteParser::K_QUERY:
        case SQLiteParser::K_RAISE:
        case SQLiteParser::K_RECURSIVE:
        case SQLiteParser::K_REFERENCES:
        case SQLiteParser::K_REGEXP:
        case SQLiteParser::K_REINDEX:
        case SQLiteParser::K_RELEASE:
        case SQLiteParser::K_RENAME:
        case SQLiteParser::K_REPLACE:
        case SQLiteParser::K_RESTRICT:
        case SQLiteParser::K_RIGHT:
        case SQLiteParser::K_ROLLBACK:
        case SQLiteParser::K_ROW:
        case SQLiteParser::K_SAVEPOINT:
        case SQLiteParser::K_SELECT:
        case SQLiteParser::K_SET:
        case SQLiteParser::K_TABLE:
        case SQLiteParser::K_TEMP:
        case SQLiteParser::K_TEMPORARY:
        case SQLiteParser::K_THEN:
        case SQLiteParser::K_TO:
        case SQLiteParser::K_TRANSACTION:
        case SQLiteParser::K_TRIGGER:
        case SQLiteParser::K_UNION:
        case SQLiteParser::K_UNIQUE:
        case SQLiteParser::K_UPDATE:
        case SQLiteParser::K_USING:
        case SQLiteParser::K_VACUUM:
        case SQLiteParser::K_VALUES:
        case SQLiteParser::K_VIEW:
        case SQLiteParser::K_VIRTUAL:
        case SQLiteParser::K_WHEN:
        case SQLiteParser::K_WHERE:
        case SQLiteParser::K_WITH:
        case SQLiteParser::K_WITHOUT:
        case SQLiteParser::IDENTIFIER:
        case SQLiteParser::NUMERIC_LITERAL:
        case SQLiteParser::BIND_PARAMETER:
        case SQLiteParser::STRING_LITERAL:
        case SQLiteParser::BLOB_LITERAL: {
          setState(1133);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 157, _ctx)) {
          case 1: {
            setState(1132);
            match(SQLiteParser::K_DISTINCT);
            break;
          }

          }
          setState(1135);
          expr(0);
          setState(1140);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == SQLiteParser::COMMA) {
            setState(1136);
            match(SQLiteParser::COMMA);
            setState(1137);
            expr(0);
            setState(1142);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
          break;
        }

        case SQLiteParser::STAR: {
          setState(1143);
          match(SQLiteParser::STAR);
          break;
        }

        case SQLiteParser::CLOSE_PAR: {
          break;
        }

      default:
        break;
      }
      setState(1146);
      match(SQLiteParser::CLOSE_PAR);
      break;
    }

    case 6: {
      setState(1148);
      match(SQLiteParser::OPEN_PAR);
      setState(1149);
      expr(0);
      setState(1150);
      match(SQLiteParser::CLOSE_PAR);
      break;
    }

    case 7: {
      setState(1152);
      match(SQLiteParser::K_CAST);
      setState(1153);
      match(SQLiteParser::OPEN_PAR);
      setState(1154);
      expr(0);
      setState(1155);
      match(SQLiteParser::K_AS);
      setState(1156);
      type_name();
      setState(1157);
      match(SQLiteParser::CLOSE_PAR);
      break;
    }

    case 8: {
      setState(1163);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SQLiteParser::K_EXISTS

      || _la == SQLiteParser::K_NOT) {
        setState(1160);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SQLiteParser::K_NOT) {
          setState(1159);
          match(SQLiteParser::K_NOT);
        }
        setState(1162);
        match(SQLiteParser::K_EXISTS);
      }
      setState(1165);
      match(SQLiteParser::OPEN_PAR);
      setState(1166);
      select_stmt();
      setState(1167);
      match(SQLiteParser::CLOSE_PAR);
      break;
    }

    case 9: {
      setState(1169);
      match(SQLiteParser::K_CASE);
      setState(1171);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 162, _ctx)) {
      case 1: {
        setState(1170);
        expr(0);
        break;
      }

      }
      setState(1178); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(1173);
        match(SQLiteParser::K_WHEN);
        setState(1174);
        expr(0);
        setState(1175);
        match(SQLiteParser::K_THEN);
        setState(1176);
        expr(0);
        setState(1180); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == SQLiteParser::K_WHEN);
      setState(1184);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SQLiteParser::K_ELSE) {
        setState(1182);
        match(SQLiteParser::K_ELSE);
        setState(1183);
        expr(0);
      }
      setState(1186);
      match(SQLiteParser::K_END);
      break;
    }

    case 10: {
      setState(1188);
      raise_function();
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(1291);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 178, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(1289);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 177, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(1191);

          if (!(precpred(_ctx, 20))) throw FailedPredicateException(this, "precpred(_ctx, 20)");
          setState(1192);
          match(SQLiteParser::PIPE2);
          setState(1193);
          expr(21);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(1194);

          if (!(precpred(_ctx, 19))) throw FailedPredicateException(this, "precpred(_ctx, 19)");
          setState(1195);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << SQLiteParser::STAR)
            | (1ULL << SQLiteParser::DIV)
            | (1ULL << SQLiteParser::MOD))) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(1196);
          expr(20);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(1197);

          if (!(precpred(_ctx, 18))) throw FailedPredicateException(this, "precpred(_ctx, 18)");
          setState(1198);
          _la = _input->LA(1);
          if (!(_la == SQLiteParser::PLUS

          || _la == SQLiteParser::MINUS)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(1199);
          expr(19);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(1200);

          if (!(precpred(_ctx, 17))) throw FailedPredicateException(this, "precpred(_ctx, 17)");
          setState(1201);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << SQLiteParser::LT2)
            | (1ULL << SQLiteParser::GT2)
            | (1ULL << SQLiteParser::AMP)
            | (1ULL << SQLiteParser::PIPE))) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(1202);
          expr(18);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(1203);

          if (!(precpred(_ctx, 16))) throw FailedPredicateException(this, "precpred(_ctx, 16)");
          setState(1204);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << SQLiteParser::LT)
            | (1ULL << SQLiteParser::LT_EQ)
            | (1ULL << SQLiteParser::GT)
            | (1ULL << SQLiteParser::GT_EQ))) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(1205);
          expr(17);
          break;
        }

        case 6: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(1206);

          if (!(precpred(_ctx, 15))) throw FailedPredicateException(this, "precpred(_ctx, 15)");
          setState(1219);
          _errHandler->sync(this);
          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 166, _ctx)) {
          case 1: {
            setState(1207);
            match(SQLiteParser::ASSIGN);
            break;
          }

          case 2: {
            setState(1208);
            match(SQLiteParser::EQ);
            break;
          }

          case 3: {
            setState(1209);
            match(SQLiteParser::NOT_EQ1);
            break;
          }

          case 4: {
            setState(1210);
            match(SQLiteParser::NOT_EQ2);
            break;
          }

          case 5: {
            setState(1211);
            match(SQLiteParser::K_IS);
            break;
          }

          case 6: {
            setState(1212);
            match(SQLiteParser::K_IS);
            setState(1213);
            match(SQLiteParser::K_NOT);
            break;
          }

          case 7: {
            setState(1214);
            match(SQLiteParser::K_IN);
            break;
          }

          case 8: {
            setState(1215);
            match(SQLiteParser::K_LIKE);
            break;
          }

          case 9: {
            setState(1216);
            match(SQLiteParser::K_GLOB);
            break;
          }

          case 10: {
            setState(1217);
            match(SQLiteParser::K_MATCH);
            break;
          }

          case 11: {
            setState(1218);
            match(SQLiteParser::K_REGEXP);
            break;
          }

          }
          setState(1221);
          expr(16);
          break;
        }

        case 7: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(1222);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(1223);
          match(SQLiteParser::K_AND);
          setState(1224);
          expr(15);
          break;
        }

        case 8: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(1225);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(1226);
          match(SQLiteParser::K_OR);
          setState(1227);
          expr(14);
          break;
        }

        case 9: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(1228);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(1229);
          match(SQLiteParser::K_IS);
          setState(1231);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 167, _ctx)) {
          case 1: {
            setState(1230);
            match(SQLiteParser::K_NOT);
            break;
          }

          }
          setState(1233);
          expr(7);
          break;
        }

        case 10: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(1234);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(1236);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == SQLiteParser::K_NOT) {
            setState(1235);
            match(SQLiteParser::K_NOT);
          }
          setState(1238);
          match(SQLiteParser::K_BETWEEN);
          setState(1239);
          expr(0);
          setState(1240);
          match(SQLiteParser::K_AND);
          setState(1241);
          expr(6);
          break;
        }

        case 11: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(1243);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(1244);
          match(SQLiteParser::K_COLLATE);
          setState(1245);
          collation_name();
          break;
        }

        case 12: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(1246);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(1248);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == SQLiteParser::K_NOT) {
            setState(1247);
            match(SQLiteParser::K_NOT);
          }
          setState(1250);
          _la = _input->LA(1);
          if (!(((((_la - 77) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 77)) & ((1ULL << (SQLiteParser::K_GLOB - 77))
            | (1ULL << (SQLiteParser::K_LIKE - 77))
            | (1ULL << (SQLiteParser::K_MATCH - 77))
            | (1ULL << (SQLiteParser::K_REGEXP - 77)))) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(1251);
          expr(0);
          setState(1254);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 170, _ctx)) {
          case 1: {
            setState(1252);
            match(SQLiteParser::K_ESCAPE);
            setState(1253);
            expr(0);
            break;
          }

          }
          break;
        }

        case 13: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(1256);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(1261);
          _errHandler->sync(this);
          switch (_input->LA(1)) {
            case SQLiteParser::K_ISNULL: {
              setState(1257);
              match(SQLiteParser::K_ISNULL);
              break;
            }

            case SQLiteParser::K_NOTNULL: {
              setState(1258);
              match(SQLiteParser::K_NOTNULL);
              break;
            }

            case SQLiteParser::K_NOT: {
              setState(1259);
              match(SQLiteParser::K_NOT);
              setState(1260);
              match(SQLiteParser::K_NULL);
              break;
            }

          default:
            throw NoViableAltException(this);
          }
          break;
        }

        case 14: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(1263);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(1265);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == SQLiteParser::K_NOT) {
            setState(1264);
            match(SQLiteParser::K_NOT);
          }
          setState(1267);
          match(SQLiteParser::K_IN);
          setState(1287);
          _errHandler->sync(this);
          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 176, _ctx)) {
          case 1: {
            setState(1268);
            match(SQLiteParser::OPEN_PAR);
            setState(1278);
            _errHandler->sync(this);

            switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 174, _ctx)) {
            case 1: {
              setState(1269);
              select_stmt();
              break;
            }

            case 2: {
              setState(1270);
              expr(0);
              setState(1275);
              _errHandler->sync(this);
              _la = _input->LA(1);
              while (_la == SQLiteParser::COMMA) {
                setState(1271);
                match(SQLiteParser::COMMA);
                setState(1272);
                expr(0);
                setState(1277);
                _errHandler->sync(this);
                _la = _input->LA(1);
              }
              break;
            }

            }
            setState(1280);
            match(SQLiteParser::CLOSE_PAR);
            break;
          }

          case 2: {
            setState(1284);
            _errHandler->sync(this);

            switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 175, _ctx)) {
            case 1: {
              setState(1281);
              database_name();
              setState(1282);
              match(SQLiteParser::DOT);
              break;
            }

            }
            setState(1286);
            table_name();
            break;
          }

          }
          break;
        }

        } 
      }
      setState(1293);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 178, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Foreign_key_clauseContext ------------------------------------------------------------------

SQLiteParser::Foreign_key_clauseContext::Foreign_key_clauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SQLiteParser::Foreign_key_clauseContext::K_REFERENCES() {
  return getToken(SQLiteParser::K_REFERENCES, 0);
}

SQLiteParser::Foreign_tableContext* SQLiteParser::Foreign_key_clauseContext::foreign_table() {
  return getRuleContext<SQLiteParser::Foreign_tableContext>(0);
}

std::vector<SQLiteParser::Column_nameContext *> SQLiteParser::Foreign_key_clauseContext::column_name() {
  return getRuleContexts<SQLiteParser::Column_nameContext>();
}

SQLiteParser::Column_nameContext* SQLiteParser::Foreign_key_clauseContext::column_name(size_t i) {
  return getRuleContext<SQLiteParser::Column_nameContext>(i);
}

tree::TerminalNode* SQLiteParser::Foreign_key_clauseContext::K_DEFERRABLE() {
  return getToken(SQLiteParser::K_DEFERRABLE, 0);
}

std::vector<tree::TerminalNode *> SQLiteParser::Foreign_key_clauseContext::K_ON() {
  return getTokens(SQLiteParser::K_ON);
}

tree::TerminalNode* SQLiteParser::Foreign_key_clauseContext::K_ON(size_t i) {
  return getToken(SQLiteParser::K_ON, i);
}

std::vector<tree::TerminalNode *> SQLiteParser::Foreign_key_clauseContext::K_MATCH() {
  return getTokens(SQLiteParser::K_MATCH);
}

tree::TerminalNode* SQLiteParser::Foreign_key_clauseContext::K_MATCH(size_t i) {
  return getToken(SQLiteParser::K_MATCH, i);
}

std::vector<SQLiteParser::NameContext *> SQLiteParser::Foreign_key_clauseContext::name() {
  return getRuleContexts<SQLiteParser::NameContext>();
}

SQLiteParser::NameContext* SQLiteParser::Foreign_key_clauseContext::name(size_t i) {
  return getRuleContext<SQLiteParser::NameContext>(i);
}

std::vector<tree::TerminalNode *> SQLiteParser::Foreign_key_clauseContext::K_DELETE() {
  return getTokens(SQLiteParser::K_DELETE);
}

tree::TerminalNode* SQLiteParser::Foreign_key_clauseContext::K_DELETE(size_t i) {
  return getToken(SQLiteParser::K_DELETE, i);
}

std::vector<tree::TerminalNode *> SQLiteParser::Foreign_key_clauseContext::K_UPDATE() {
  return getTokens(SQLiteParser::K_UPDATE);
}

tree::TerminalNode* SQLiteParser::Foreign_key_clauseContext::K_UPDATE(size_t i) {
  return getToken(SQLiteParser::K_UPDATE, i);
}

tree::TerminalNode* SQLiteParser::Foreign_key_clauseContext::K_NOT() {
  return getToken(SQLiteParser::K_NOT, 0);
}

tree::TerminalNode* SQLiteParser::Foreign_key_clauseContext::K_INITIALLY() {
  return getToken(SQLiteParser::K_INITIALLY, 0);
}

tree::TerminalNode* SQLiteParser::Foreign_key_clauseContext::K_DEFERRED() {
  return getToken(SQLiteParser::K_DEFERRED, 0);
}

tree::TerminalNode* SQLiteParser::Foreign_key_clauseContext::K_IMMEDIATE() {
  return getToken(SQLiteParser::K_IMMEDIATE, 0);
}

std::vector<tree::TerminalNode *> SQLiteParser::Foreign_key_clauseContext::K_SET() {
  return getTokens(SQLiteParser::K_SET);
}

tree::TerminalNode* SQLiteParser::Foreign_key_clauseContext::K_SET(size_t i) {
  return getToken(SQLiteParser::K_SET, i);
}

std::vector<tree::TerminalNode *> SQLiteParser::Foreign_key_clauseContext::K_NULL() {
  return getTokens(SQLiteParser::K_NULL);
}

tree::TerminalNode* SQLiteParser::Foreign_key_clauseContext::K_NULL(size_t i) {
  return getToken(SQLiteParser::K_NULL, i);
}

std::vector<tree::TerminalNode *> SQLiteParser::Foreign_key_clauseContext::K_DEFAULT() {
  return getTokens(SQLiteParser::K_DEFAULT);
}

tree::TerminalNode* SQLiteParser::Foreign_key_clauseContext::K_DEFAULT(size_t i) {
  return getToken(SQLiteParser::K_DEFAULT, i);
}

std::vector<tree::TerminalNode *> SQLiteParser::Foreign_key_clauseContext::K_CASCADE() {
  return getTokens(SQLiteParser::K_CASCADE);
}

tree::TerminalNode* SQLiteParser::Foreign_key_clauseContext::K_CASCADE(size_t i) {
  return getToken(SQLiteParser::K_CASCADE, i);
}

std::vector<tree::TerminalNode *> SQLiteParser::Foreign_key_clauseContext::K_RESTRICT() {
  return getTokens(SQLiteParser::K_RESTRICT);
}

tree::TerminalNode* SQLiteParser::Foreign_key_clauseContext::K_RESTRICT(size_t i) {
  return getToken(SQLiteParser::K_RESTRICT, i);
}

std::vector<tree::TerminalNode *> SQLiteParser::Foreign_key_clauseContext::K_NO() {
  return getTokens(SQLiteParser::K_NO);
}

tree::TerminalNode* SQLiteParser::Foreign_key_clauseContext::K_NO(size_t i) {
  return getToken(SQLiteParser::K_NO, i);
}

std::vector<tree::TerminalNode *> SQLiteParser::Foreign_key_clauseContext::K_ACTION() {
  return getTokens(SQLiteParser::K_ACTION);
}

tree::TerminalNode* SQLiteParser::Foreign_key_clauseContext::K_ACTION(size_t i) {
  return getToken(SQLiteParser::K_ACTION, i);
}


size_t SQLiteParser::Foreign_key_clauseContext::getRuleIndex() const {
  return SQLiteParser::RuleForeign_key_clause;
}

antlrcpp::Any SQLiteParser::Foreign_key_clauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLiteVisitor*>(visitor))
    return parserVisitor->visitForeign_key_clause(this);
  else
    return visitor->visitChildren(this);
}

SQLiteParser::Foreign_key_clauseContext* SQLiteParser::foreign_key_clause() {
  Foreign_key_clauseContext *_localctx = _tracker.createInstance<Foreign_key_clauseContext>(_ctx, getState());
  enterRule(_localctx, 80, SQLiteParser::RuleForeign_key_clause);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1294);
    match(SQLiteParser::K_REFERENCES);
    setState(1295);
    foreign_table();
    setState(1307);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SQLiteParser::OPEN_PAR) {
      setState(1296);
      match(SQLiteParser::OPEN_PAR);
      setState(1297);
      column_name();
      setState(1302);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SQLiteParser::COMMA) {
        setState(1298);
        match(SQLiteParser::COMMA);
        setState(1299);
        column_name();
        setState(1304);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(1305);
      match(SQLiteParser::CLOSE_PAR);
    }
    setState(1327);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SQLiteParser::K_MATCH

    || _la == SQLiteParser::K_ON) {
      setState(1323);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case SQLiteParser::K_ON: {
          setState(1309);
          match(SQLiteParser::K_ON);
          setState(1310);
          _la = _input->LA(1);
          if (!(_la == SQLiteParser::K_DELETE || _la == SQLiteParser::K_UPDATE)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(1319);
          _errHandler->sync(this);
          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 181, _ctx)) {
          case 1: {
            setState(1311);
            match(SQLiteParser::K_SET);
            setState(1312);
            match(SQLiteParser::K_NULL);
            break;
          }

          case 2: {
            setState(1313);
            match(SQLiteParser::K_SET);
            setState(1314);
            match(SQLiteParser::K_DEFAULT);
            break;
          }

          case 3: {
            setState(1315);
            match(SQLiteParser::K_CASCADE);
            break;
          }

          case 4: {
            setState(1316);
            match(SQLiteParser::K_RESTRICT);
            break;
          }

          case 5: {
            setState(1317);
            match(SQLiteParser::K_NO);
            setState(1318);
            match(SQLiteParser::K_ACTION);
            break;
          }

          }
          break;
        }

        case SQLiteParser::K_MATCH: {
          setState(1321);
          match(SQLiteParser::K_MATCH);
          setState(1322);
          name();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(1329);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1340);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 186, _ctx)) {
    case 1: {
      setState(1331);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SQLiteParser::K_NOT) {
        setState(1330);
        match(SQLiteParser::K_NOT);
      }
      setState(1333);
      match(SQLiteParser::K_DEFERRABLE);
      setState(1338);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 185, _ctx)) {
      case 1: {
        setState(1334);
        match(SQLiteParser::K_INITIALLY);
        setState(1335);
        match(SQLiteParser::K_DEFERRED);
        break;
      }

      case 2: {
        setState(1336);
        match(SQLiteParser::K_INITIALLY);
        setState(1337);
        match(SQLiteParser::K_IMMEDIATE);
        break;
      }

      }
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Raise_functionContext ------------------------------------------------------------------

SQLiteParser::Raise_functionContext::Raise_functionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SQLiteParser::Raise_functionContext::K_RAISE() {
  return getToken(SQLiteParser::K_RAISE, 0);
}

tree::TerminalNode* SQLiteParser::Raise_functionContext::K_IGNORE() {
  return getToken(SQLiteParser::K_IGNORE, 0);
}

SQLiteParser::Error_messageContext* SQLiteParser::Raise_functionContext::error_message() {
  return getRuleContext<SQLiteParser::Error_messageContext>(0);
}

tree::TerminalNode* SQLiteParser::Raise_functionContext::K_ROLLBACK() {
  return getToken(SQLiteParser::K_ROLLBACK, 0);
}

tree::TerminalNode* SQLiteParser::Raise_functionContext::K_ABORT() {
  return getToken(SQLiteParser::K_ABORT, 0);
}

tree::TerminalNode* SQLiteParser::Raise_functionContext::K_FAIL() {
  return getToken(SQLiteParser::K_FAIL, 0);
}


size_t SQLiteParser::Raise_functionContext::getRuleIndex() const {
  return SQLiteParser::RuleRaise_function;
}

antlrcpp::Any SQLiteParser::Raise_functionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLiteVisitor*>(visitor))
    return parserVisitor->visitRaise_function(this);
  else
    return visitor->visitChildren(this);
}

SQLiteParser::Raise_functionContext* SQLiteParser::raise_function() {
  Raise_functionContext *_localctx = _tracker.createInstance<Raise_functionContext>(_ctx, getState());
  enterRule(_localctx, 82, SQLiteParser::RuleRaise_function);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1342);
    match(SQLiteParser::K_RAISE);
    setState(1343);
    match(SQLiteParser::OPEN_PAR);
    setState(1348);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SQLiteParser::K_IGNORE: {
        setState(1344);
        match(SQLiteParser::K_IGNORE);
        break;
      }

      case SQLiteParser::K_ABORT:
      case SQLiteParser::K_FAIL:
      case SQLiteParser::K_ROLLBACK: {
        setState(1345);
        _la = _input->LA(1);
        if (!(_la == SQLiteParser::K_ABORT || _la == SQLiteParser::K_FAIL

        || _la == SQLiteParser::K_ROLLBACK)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(1346);
        match(SQLiteParser::COMMA);
        setState(1347);
        error_message();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(1350);
    match(SQLiteParser::CLOSE_PAR);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Indexed_columnContext ------------------------------------------------------------------

SQLiteParser::Indexed_columnContext::Indexed_columnContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SQLiteParser::Column_nameContext* SQLiteParser::Indexed_columnContext::column_name() {
  return getRuleContext<SQLiteParser::Column_nameContext>(0);
}

tree::TerminalNode* SQLiteParser::Indexed_columnContext::K_COLLATE() {
  return getToken(SQLiteParser::K_COLLATE, 0);
}

SQLiteParser::Collation_nameContext* SQLiteParser::Indexed_columnContext::collation_name() {
  return getRuleContext<SQLiteParser::Collation_nameContext>(0);
}

tree::TerminalNode* SQLiteParser::Indexed_columnContext::K_ASC() {
  return getToken(SQLiteParser::K_ASC, 0);
}

tree::TerminalNode* SQLiteParser::Indexed_columnContext::K_DESC() {
  return getToken(SQLiteParser::K_DESC, 0);
}


size_t SQLiteParser::Indexed_columnContext::getRuleIndex() const {
  return SQLiteParser::RuleIndexed_column;
}

antlrcpp::Any SQLiteParser::Indexed_columnContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLiteVisitor*>(visitor))
    return parserVisitor->visitIndexed_column(this);
  else
    return visitor->visitChildren(this);
}

SQLiteParser::Indexed_columnContext* SQLiteParser::indexed_column() {
  Indexed_columnContext *_localctx = _tracker.createInstance<Indexed_columnContext>(_ctx, getState());
  enterRule(_localctx, 84, SQLiteParser::RuleIndexed_column);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1352);
    column_name();
    setState(1355);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SQLiteParser::K_COLLATE) {
      setState(1353);
      match(SQLiteParser::K_COLLATE);
      setState(1354);
      collation_name();
    }
    setState(1358);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SQLiteParser::K_ASC

    || _la == SQLiteParser::K_DESC) {
      setState(1357);
      _la = _input->LA(1);
      if (!(_la == SQLiteParser::K_ASC

      || _la == SQLiteParser::K_DESC)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Table_constraintContext ------------------------------------------------------------------

SQLiteParser::Table_constraintContext::Table_constraintContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SQLiteParser::Indexed_columnContext *> SQLiteParser::Table_constraintContext::indexed_column() {
  return getRuleContexts<SQLiteParser::Indexed_columnContext>();
}

SQLiteParser::Indexed_columnContext* SQLiteParser::Table_constraintContext::indexed_column(size_t i) {
  return getRuleContext<SQLiteParser::Indexed_columnContext>(i);
}

SQLiteParser::Conflict_clauseContext* SQLiteParser::Table_constraintContext::conflict_clause() {
  return getRuleContext<SQLiteParser::Conflict_clauseContext>(0);
}

tree::TerminalNode* SQLiteParser::Table_constraintContext::K_CHECK() {
  return getToken(SQLiteParser::K_CHECK, 0);
}

SQLiteParser::ExprContext* SQLiteParser::Table_constraintContext::expr() {
  return getRuleContext<SQLiteParser::ExprContext>(0);
}

tree::TerminalNode* SQLiteParser::Table_constraintContext::K_FOREIGN() {
  return getToken(SQLiteParser::K_FOREIGN, 0);
}

tree::TerminalNode* SQLiteParser::Table_constraintContext::K_KEY() {
  return getToken(SQLiteParser::K_KEY, 0);
}

std::vector<SQLiteParser::Column_nameContext *> SQLiteParser::Table_constraintContext::column_name() {
  return getRuleContexts<SQLiteParser::Column_nameContext>();
}

SQLiteParser::Column_nameContext* SQLiteParser::Table_constraintContext::column_name(size_t i) {
  return getRuleContext<SQLiteParser::Column_nameContext>(i);
}

SQLiteParser::Foreign_key_clauseContext* SQLiteParser::Table_constraintContext::foreign_key_clause() {
  return getRuleContext<SQLiteParser::Foreign_key_clauseContext>(0);
}

tree::TerminalNode* SQLiteParser::Table_constraintContext::K_CONSTRAINT() {
  return getToken(SQLiteParser::K_CONSTRAINT, 0);
}

SQLiteParser::NameContext* SQLiteParser::Table_constraintContext::name() {
  return getRuleContext<SQLiteParser::NameContext>(0);
}

tree::TerminalNode* SQLiteParser::Table_constraintContext::K_PRIMARY() {
  return getToken(SQLiteParser::K_PRIMARY, 0);
}

tree::TerminalNode* SQLiteParser::Table_constraintContext::K_UNIQUE() {
  return getToken(SQLiteParser::K_UNIQUE, 0);
}


size_t SQLiteParser::Table_constraintContext::getRuleIndex() const {
  return SQLiteParser::RuleTable_constraint;
}

antlrcpp::Any SQLiteParser::Table_constraintContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLiteVisitor*>(visitor))
    return parserVisitor->visitTable_constraint(this);
  else
    return visitor->visitChildren(this);
}

SQLiteParser::Table_constraintContext* SQLiteParser::table_constraint() {
  Table_constraintContext *_localctx = _tracker.createInstance<Table_constraintContext>(_ctx, getState());
  enterRule(_localctx, 86, SQLiteParser::RuleTable_constraint);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1362);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SQLiteParser::K_CONSTRAINT) {
      setState(1360);
      match(SQLiteParser::K_CONSTRAINT);
      setState(1361);
      name();
    }
    setState(1400);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SQLiteParser::K_PRIMARY:
      case SQLiteParser::K_UNIQUE: {
        setState(1367);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case SQLiteParser::K_PRIMARY: {
            setState(1364);
            match(SQLiteParser::K_PRIMARY);
            setState(1365);
            match(SQLiteParser::K_KEY);
            break;
          }

          case SQLiteParser::K_UNIQUE: {
            setState(1366);
            match(SQLiteParser::K_UNIQUE);
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        setState(1369);
        match(SQLiteParser::OPEN_PAR);
        setState(1370);
        indexed_column();
        setState(1375);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == SQLiteParser::COMMA) {
          setState(1371);
          match(SQLiteParser::COMMA);
          setState(1372);
          indexed_column();
          setState(1377);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(1378);
        match(SQLiteParser::CLOSE_PAR);
        setState(1379);
        conflict_clause();
        break;
      }

      case SQLiteParser::K_CHECK: {
        setState(1381);
        match(SQLiteParser::K_CHECK);
        setState(1382);
        match(SQLiteParser::OPEN_PAR);
        setState(1383);
        expr(0);
        setState(1384);
        match(SQLiteParser::CLOSE_PAR);
        break;
      }

      case SQLiteParser::K_FOREIGN: {
        setState(1386);
        match(SQLiteParser::K_FOREIGN);
        setState(1387);
        match(SQLiteParser::K_KEY);
        setState(1388);
        match(SQLiteParser::OPEN_PAR);
        setState(1389);
        column_name();
        setState(1394);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == SQLiteParser::COMMA) {
          setState(1390);
          match(SQLiteParser::COMMA);
          setState(1391);
          column_name();
          setState(1396);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(1397);
        match(SQLiteParser::CLOSE_PAR);
        setState(1398);
        foreign_key_clause();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- With_clauseContext ------------------------------------------------------------------

SQLiteParser::With_clauseContext::With_clauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SQLiteParser::With_clauseContext::K_WITH() {
  return getToken(SQLiteParser::K_WITH, 0);
}

std::vector<SQLiteParser::Cte_table_nameContext *> SQLiteParser::With_clauseContext::cte_table_name() {
  return getRuleContexts<SQLiteParser::Cte_table_nameContext>();
}

SQLiteParser::Cte_table_nameContext* SQLiteParser::With_clauseContext::cte_table_name(size_t i) {
  return getRuleContext<SQLiteParser::Cte_table_nameContext>(i);
}

std::vector<tree::TerminalNode *> SQLiteParser::With_clauseContext::K_AS() {
  return getTokens(SQLiteParser::K_AS);
}

tree::TerminalNode* SQLiteParser::With_clauseContext::K_AS(size_t i) {
  return getToken(SQLiteParser::K_AS, i);
}

std::vector<SQLiteParser::Select_stmtContext *> SQLiteParser::With_clauseContext::select_stmt() {
  return getRuleContexts<SQLiteParser::Select_stmtContext>();
}

SQLiteParser::Select_stmtContext* SQLiteParser::With_clauseContext::select_stmt(size_t i) {
  return getRuleContext<SQLiteParser::Select_stmtContext>(i);
}

tree::TerminalNode* SQLiteParser::With_clauseContext::K_RECURSIVE() {
  return getToken(SQLiteParser::K_RECURSIVE, 0);
}


size_t SQLiteParser::With_clauseContext::getRuleIndex() const {
  return SQLiteParser::RuleWith_clause;
}

antlrcpp::Any SQLiteParser::With_clauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLiteVisitor*>(visitor))
    return parserVisitor->visitWith_clause(this);
  else
    return visitor->visitChildren(this);
}

SQLiteParser::With_clauseContext* SQLiteParser::with_clause() {
  With_clauseContext *_localctx = _tracker.createInstance<With_clauseContext>(_ctx, getState());
  enterRule(_localctx, 88, SQLiteParser::RuleWith_clause);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1402);
    match(SQLiteParser::K_WITH);
    setState(1404);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 195, _ctx)) {
    case 1: {
      setState(1403);
      match(SQLiteParser::K_RECURSIVE);
      break;
    }

    }
    setState(1406);
    cte_table_name();
    setState(1407);
    match(SQLiteParser::K_AS);
    setState(1408);
    match(SQLiteParser::OPEN_PAR);
    setState(1409);
    select_stmt();
    setState(1410);
    match(SQLiteParser::CLOSE_PAR);
    setState(1420);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SQLiteParser::COMMA) {
      setState(1411);
      match(SQLiteParser::COMMA);
      setState(1412);
      cte_table_name();
      setState(1413);
      match(SQLiteParser::K_AS);
      setState(1414);
      match(SQLiteParser::OPEN_PAR);
      setState(1415);
      select_stmt();
      setState(1416);
      match(SQLiteParser::CLOSE_PAR);
      setState(1422);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Qualified_table_nameContext ------------------------------------------------------------------

SQLiteParser::Qualified_table_nameContext::Qualified_table_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SQLiteParser::Table_nameContext* SQLiteParser::Qualified_table_nameContext::table_name() {
  return getRuleContext<SQLiteParser::Table_nameContext>(0);
}

SQLiteParser::Database_nameContext* SQLiteParser::Qualified_table_nameContext::database_name() {
  return getRuleContext<SQLiteParser::Database_nameContext>(0);
}

tree::TerminalNode* SQLiteParser::Qualified_table_nameContext::K_INDEXED() {
  return getToken(SQLiteParser::K_INDEXED, 0);
}

tree::TerminalNode* SQLiteParser::Qualified_table_nameContext::K_BY() {
  return getToken(SQLiteParser::K_BY, 0);
}

SQLiteParser::Index_nameContext* SQLiteParser::Qualified_table_nameContext::index_name() {
  return getRuleContext<SQLiteParser::Index_nameContext>(0);
}

tree::TerminalNode* SQLiteParser::Qualified_table_nameContext::K_NOT() {
  return getToken(SQLiteParser::K_NOT, 0);
}


size_t SQLiteParser::Qualified_table_nameContext::getRuleIndex() const {
  return SQLiteParser::RuleQualified_table_name;
}

antlrcpp::Any SQLiteParser::Qualified_table_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLiteVisitor*>(visitor))
    return parserVisitor->visitQualified_table_name(this);
  else
    return visitor->visitChildren(this);
}

SQLiteParser::Qualified_table_nameContext* SQLiteParser::qualified_table_name() {
  Qualified_table_nameContext *_localctx = _tracker.createInstance<Qualified_table_nameContext>(_ctx, getState());
  enterRule(_localctx, 90, SQLiteParser::RuleQualified_table_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1426);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 197, _ctx)) {
    case 1: {
      setState(1423);
      database_name();
      setState(1424);
      match(SQLiteParser::DOT);
      break;
    }

    }
    setState(1428);
    table_name();
    setState(1434);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SQLiteParser::K_INDEXED: {
        setState(1429);
        match(SQLiteParser::K_INDEXED);
        setState(1430);
        match(SQLiteParser::K_BY);
        setState(1431);
        index_name();
        break;
      }

      case SQLiteParser::K_NOT: {
        setState(1432);
        match(SQLiteParser::K_NOT);
        setState(1433);
        match(SQLiteParser::K_INDEXED);
        break;
      }

      case SQLiteParser::EOF:
      case SQLiteParser::SCOL:
      case SQLiteParser::K_ALTER:
      case SQLiteParser::K_ANALYZE:
      case SQLiteParser::K_ATTACH:
      case SQLiteParser::K_BEGIN:
      case SQLiteParser::K_COMMIT:
      case SQLiteParser::K_CREATE:
      case SQLiteParser::K_DELETE:
      case SQLiteParser::K_DETACH:
      case SQLiteParser::K_DROP:
      case SQLiteParser::K_END:
      case SQLiteParser::K_EXPLAIN:
      case SQLiteParser::K_INSERT:
      case SQLiteParser::K_LIMIT:
      case SQLiteParser::K_ORDER:
      case SQLiteParser::K_PRAGMA:
      case SQLiteParser::K_REINDEX:
      case SQLiteParser::K_RELEASE:
      case SQLiteParser::K_REPLACE:
      case SQLiteParser::K_ROLLBACK:
      case SQLiteParser::K_SAVEPOINT:
      case SQLiteParser::K_SELECT:
      case SQLiteParser::K_SET:
      case SQLiteParser::K_UPDATE:
      case SQLiteParser::K_VACUUM:
      case SQLiteParser::K_VALUES:
      case SQLiteParser::K_WHERE:
      case SQLiteParser::K_WITH:
      case SQLiteParser::UNEXPECTED_CHAR: {
        break;
      }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Ordering_termContext ------------------------------------------------------------------

SQLiteParser::Ordering_termContext::Ordering_termContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SQLiteParser::ExprContext* SQLiteParser::Ordering_termContext::expr() {
  return getRuleContext<SQLiteParser::ExprContext>(0);
}

tree::TerminalNode* SQLiteParser::Ordering_termContext::K_COLLATE() {
  return getToken(SQLiteParser::K_COLLATE, 0);
}

SQLiteParser::Collation_nameContext* SQLiteParser::Ordering_termContext::collation_name() {
  return getRuleContext<SQLiteParser::Collation_nameContext>(0);
}

tree::TerminalNode* SQLiteParser::Ordering_termContext::K_ASC() {
  return getToken(SQLiteParser::K_ASC, 0);
}

tree::TerminalNode* SQLiteParser::Ordering_termContext::K_DESC() {
  return getToken(SQLiteParser::K_DESC, 0);
}


size_t SQLiteParser::Ordering_termContext::getRuleIndex() const {
  return SQLiteParser::RuleOrdering_term;
}

antlrcpp::Any SQLiteParser::Ordering_termContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLiteVisitor*>(visitor))
    return parserVisitor->visitOrdering_term(this);
  else
    return visitor->visitChildren(this);
}

SQLiteParser::Ordering_termContext* SQLiteParser::ordering_term() {
  Ordering_termContext *_localctx = _tracker.createInstance<Ordering_termContext>(_ctx, getState());
  enterRule(_localctx, 92, SQLiteParser::RuleOrdering_term);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1436);
    expr(0);
    setState(1439);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SQLiteParser::K_COLLATE) {
      setState(1437);
      match(SQLiteParser::K_COLLATE);
      setState(1438);
      collation_name();
    }
    setState(1442);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SQLiteParser::K_ASC

    || _la == SQLiteParser::K_DESC) {
      setState(1441);
      _la = _input->LA(1);
      if (!(_la == SQLiteParser::K_ASC

      || _la == SQLiteParser::K_DESC)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pragma_valueContext ------------------------------------------------------------------

SQLiteParser::Pragma_valueContext::Pragma_valueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SQLiteParser::Signed_numberContext* SQLiteParser::Pragma_valueContext::signed_number() {
  return getRuleContext<SQLiteParser::Signed_numberContext>(0);
}

SQLiteParser::NameContext* SQLiteParser::Pragma_valueContext::name() {
  return getRuleContext<SQLiteParser::NameContext>(0);
}

tree::TerminalNode* SQLiteParser::Pragma_valueContext::STRING_LITERAL() {
  return getToken(SQLiteParser::STRING_LITERAL, 0);
}


size_t SQLiteParser::Pragma_valueContext::getRuleIndex() const {
  return SQLiteParser::RulePragma_value;
}

antlrcpp::Any SQLiteParser::Pragma_valueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLiteVisitor*>(visitor))
    return parserVisitor->visitPragma_value(this);
  else
    return visitor->visitChildren(this);
}

SQLiteParser::Pragma_valueContext* SQLiteParser::pragma_value() {
  Pragma_valueContext *_localctx = _tracker.createInstance<Pragma_valueContext>(_ctx, getState());
  enterRule(_localctx, 94, SQLiteParser::RulePragma_value);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1447);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 201, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1444);
      signed_number();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1445);
      name();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1446);
      match(SQLiteParser::STRING_LITERAL);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Common_table_expressionContext ------------------------------------------------------------------

SQLiteParser::Common_table_expressionContext::Common_table_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SQLiteParser::Table_nameContext* SQLiteParser::Common_table_expressionContext::table_name() {
  return getRuleContext<SQLiteParser::Table_nameContext>(0);
}

tree::TerminalNode* SQLiteParser::Common_table_expressionContext::K_AS() {
  return getToken(SQLiteParser::K_AS, 0);
}

SQLiteParser::Select_stmtContext* SQLiteParser::Common_table_expressionContext::select_stmt() {
  return getRuleContext<SQLiteParser::Select_stmtContext>(0);
}

std::vector<SQLiteParser::Column_nameContext *> SQLiteParser::Common_table_expressionContext::column_name() {
  return getRuleContexts<SQLiteParser::Column_nameContext>();
}

SQLiteParser::Column_nameContext* SQLiteParser::Common_table_expressionContext::column_name(size_t i) {
  return getRuleContext<SQLiteParser::Column_nameContext>(i);
}


size_t SQLiteParser::Common_table_expressionContext::getRuleIndex() const {
  return SQLiteParser::RuleCommon_table_expression;
}

antlrcpp::Any SQLiteParser::Common_table_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLiteVisitor*>(visitor))
    return parserVisitor->visitCommon_table_expression(this);
  else
    return visitor->visitChildren(this);
}

SQLiteParser::Common_table_expressionContext* SQLiteParser::common_table_expression() {
  Common_table_expressionContext *_localctx = _tracker.createInstance<Common_table_expressionContext>(_ctx, getState());
  enterRule(_localctx, 96, SQLiteParser::RuleCommon_table_expression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1449);
    table_name();
    setState(1461);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SQLiteParser::OPEN_PAR) {
      setState(1450);
      match(SQLiteParser::OPEN_PAR);
      setState(1451);
      column_name();
      setState(1456);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SQLiteParser::COMMA) {
        setState(1452);
        match(SQLiteParser::COMMA);
        setState(1453);
        column_name();
        setState(1458);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(1459);
      match(SQLiteParser::CLOSE_PAR);
    }
    setState(1463);
    match(SQLiteParser::K_AS);
    setState(1464);
    match(SQLiteParser::OPEN_PAR);
    setState(1465);
    select_stmt();
    setState(1466);
    match(SQLiteParser::CLOSE_PAR);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Result_columnContext ------------------------------------------------------------------

SQLiteParser::Result_columnContext::Result_columnContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SQLiteParser::Table_nameContext* SQLiteParser::Result_columnContext::table_name() {
  return getRuleContext<SQLiteParser::Table_nameContext>(0);
}

SQLiteParser::ExprContext* SQLiteParser::Result_columnContext::expr() {
  return getRuleContext<SQLiteParser::ExprContext>(0);
}

SQLiteParser::Column_aliasContext* SQLiteParser::Result_columnContext::column_alias() {
  return getRuleContext<SQLiteParser::Column_aliasContext>(0);
}

tree::TerminalNode* SQLiteParser::Result_columnContext::K_AS() {
  return getToken(SQLiteParser::K_AS, 0);
}


size_t SQLiteParser::Result_columnContext::getRuleIndex() const {
  return SQLiteParser::RuleResult_column;
}

antlrcpp::Any SQLiteParser::Result_columnContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLiteVisitor*>(visitor))
    return parserVisitor->visitResult_column(this);
  else
    return visitor->visitChildren(this);
}

SQLiteParser::Result_columnContext* SQLiteParser::result_column() {
  Result_columnContext *_localctx = _tracker.createInstance<Result_columnContext>(_ctx, getState());
  enterRule(_localctx, 98, SQLiteParser::RuleResult_column);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1480);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 206, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1468);
      match(SQLiteParser::STAR);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1469);
      table_name();
      setState(1470);
      match(SQLiteParser::DOT);
      setState(1471);
      match(SQLiteParser::STAR);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1473);
      expr(0);
      setState(1478);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SQLiteParser::K_AS || _la == SQLiteParser::IDENTIFIER

      || _la == SQLiteParser::STRING_LITERAL) {
        setState(1475);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SQLiteParser::K_AS) {
          setState(1474);
          match(SQLiteParser::K_AS);
        }
        setState(1477);
        column_alias();
      }
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Table_or_subqueryContext ------------------------------------------------------------------

SQLiteParser::Table_or_subqueryContext::Table_or_subqueryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SQLiteParser::Table_nameContext* SQLiteParser::Table_or_subqueryContext::table_name() {
  return getRuleContext<SQLiteParser::Table_nameContext>(0);
}

SQLiteParser::Database_nameContext* SQLiteParser::Table_or_subqueryContext::database_name() {
  return getRuleContext<SQLiteParser::Database_nameContext>(0);
}

SQLiteParser::Table_aliasContext* SQLiteParser::Table_or_subqueryContext::table_alias() {
  return getRuleContext<SQLiteParser::Table_aliasContext>(0);
}

tree::TerminalNode* SQLiteParser::Table_or_subqueryContext::K_INDEXED() {
  return getToken(SQLiteParser::K_INDEXED, 0);
}

tree::TerminalNode* SQLiteParser::Table_or_subqueryContext::K_BY() {
  return getToken(SQLiteParser::K_BY, 0);
}

SQLiteParser::Index_nameContext* SQLiteParser::Table_or_subqueryContext::index_name() {
  return getRuleContext<SQLiteParser::Index_nameContext>(0);
}

tree::TerminalNode* SQLiteParser::Table_or_subqueryContext::K_NOT() {
  return getToken(SQLiteParser::K_NOT, 0);
}

tree::TerminalNode* SQLiteParser::Table_or_subqueryContext::K_AS() {
  return getToken(SQLiteParser::K_AS, 0);
}

std::vector<SQLiteParser::Table_or_subqueryContext *> SQLiteParser::Table_or_subqueryContext::table_or_subquery() {
  return getRuleContexts<SQLiteParser::Table_or_subqueryContext>();
}

SQLiteParser::Table_or_subqueryContext* SQLiteParser::Table_or_subqueryContext::table_or_subquery(size_t i) {
  return getRuleContext<SQLiteParser::Table_or_subqueryContext>(i);
}

SQLiteParser::Join_clauseContext* SQLiteParser::Table_or_subqueryContext::join_clause() {
  return getRuleContext<SQLiteParser::Join_clauseContext>(0);
}

SQLiteParser::Select_stmtContext* SQLiteParser::Table_or_subqueryContext::select_stmt() {
  return getRuleContext<SQLiteParser::Select_stmtContext>(0);
}


size_t SQLiteParser::Table_or_subqueryContext::getRuleIndex() const {
  return SQLiteParser::RuleTable_or_subquery;
}

antlrcpp::Any SQLiteParser::Table_or_subqueryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLiteVisitor*>(visitor))
    return parserVisitor->visitTable_or_subquery(this);
  else
    return visitor->visitChildren(this);
}

SQLiteParser::Table_or_subqueryContext* SQLiteParser::table_or_subquery() {
  Table_or_subqueryContext *_localctx = _tracker.createInstance<Table_or_subqueryContext>(_ctx, getState());
  enterRule(_localctx, 100, SQLiteParser::RuleTable_or_subquery);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1529);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 217, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1485);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 207, _ctx)) {
      case 1: {
        setState(1482);
        database_name();
        setState(1483);
        match(SQLiteParser::DOT);
        break;
      }

      }
      setState(1487);
      table_name();
      setState(1492);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 209, _ctx)) {
      case 1: {
        setState(1489);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 208, _ctx)) {
        case 1: {
          setState(1488);
          match(SQLiteParser::K_AS);
          break;
        }

        }
        setState(1491);
        table_alias();
        break;
      }

      }
      setState(1499);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case SQLiteParser::K_INDEXED: {
          setState(1494);
          match(SQLiteParser::K_INDEXED);
          setState(1495);
          match(SQLiteParser::K_BY);
          setState(1496);
          index_name();
          break;
        }

        case SQLiteParser::K_NOT: {
          setState(1497);
          match(SQLiteParser::K_NOT);
          setState(1498);
          match(SQLiteParser::K_INDEXED);
          break;
        }

        case SQLiteParser::EOF:
        case SQLiteParser::SCOL:
        case SQLiteParser::CLOSE_PAR:
        case SQLiteParser::COMMA:
        case SQLiteParser::K_ALTER:
        case SQLiteParser::K_ANALYZE:
        case SQLiteParser::K_ATTACH:
        case SQLiteParser::K_BEGIN:
        case SQLiteParser::K_COMMIT:
        case SQLiteParser::K_CREATE:
        case SQLiteParser::K_CROSS:
        case SQLiteParser::K_DELETE:
        case SQLiteParser::K_DETACH:
        case SQLiteParser::K_DROP:
        case SQLiteParser::K_END:
        case SQLiteParser::K_EXCEPT:
        case SQLiteParser::K_EXPLAIN:
        case SQLiteParser::K_GROUP:
        case SQLiteParser::K_INNER:
        case SQLiteParser::K_INSERT:
        case SQLiteParser::K_INTERSECT:
        case SQLiteParser::K_JOIN:
        case SQLiteParser::K_LEFT:
        case SQLiteParser::K_LIMIT:
        case SQLiteParser::K_NATURAL:
        case SQLiteParser::K_ON:
        case SQLiteParser::K_ORDER:
        case SQLiteParser::K_PRAGMA:
        case SQLiteParser::K_REINDEX:
        case SQLiteParser::K_RELEASE:
        case SQLiteParser::K_REPLACE:
        case SQLiteParser::K_ROLLBACK:
        case SQLiteParser::K_SAVEPOINT:
        case SQLiteParser::K_SELECT:
        case SQLiteParser::K_UNION:
        case SQLiteParser::K_UPDATE:
        case SQLiteParser::K_USING:
        case SQLiteParser::K_VACUUM:
        case SQLiteParser::K_VALUES:
        case SQLiteParser::K_WHERE:
        case SQLiteParser::K_WITH:
        case SQLiteParser::UNEXPECTED_CHAR: {
          break;
        }

      default:
        break;
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1501);
      match(SQLiteParser::OPEN_PAR);
      setState(1511);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 212, _ctx)) {
      case 1: {
        setState(1502);
        table_or_subquery();
        setState(1507);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == SQLiteParser::COMMA) {
          setState(1503);
          match(SQLiteParser::COMMA);
          setState(1504);
          table_or_subquery();
          setState(1509);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

      case 2: {
        setState(1510);
        join_clause();
        break;
      }

      }
      setState(1513);
      match(SQLiteParser::CLOSE_PAR);
      setState(1518);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 214, _ctx)) {
      case 1: {
        setState(1515);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 213, _ctx)) {
        case 1: {
          setState(1514);
          match(SQLiteParser::K_AS);
          break;
        }

        }
        setState(1517);
        table_alias();
        break;
      }

      }
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1520);
      match(SQLiteParser::OPEN_PAR);
      setState(1521);
      select_stmt();
      setState(1522);
      match(SQLiteParser::CLOSE_PAR);
      setState(1527);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 216, _ctx)) {
      case 1: {
        setState(1524);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 215, _ctx)) {
        case 1: {
          setState(1523);
          match(SQLiteParser::K_AS);
          break;
        }

        }
        setState(1526);
        table_alias();
        break;
      }

      }
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Join_clauseContext ------------------------------------------------------------------

SQLiteParser::Join_clauseContext::Join_clauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SQLiteParser::Table_or_subqueryContext *> SQLiteParser::Join_clauseContext::table_or_subquery() {
  return getRuleContexts<SQLiteParser::Table_or_subqueryContext>();
}

SQLiteParser::Table_or_subqueryContext* SQLiteParser::Join_clauseContext::table_or_subquery(size_t i) {
  return getRuleContext<SQLiteParser::Table_or_subqueryContext>(i);
}

std::vector<SQLiteParser::Join_operatorContext *> SQLiteParser::Join_clauseContext::join_operator() {
  return getRuleContexts<SQLiteParser::Join_operatorContext>();
}

SQLiteParser::Join_operatorContext* SQLiteParser::Join_clauseContext::join_operator(size_t i) {
  return getRuleContext<SQLiteParser::Join_operatorContext>(i);
}

std::vector<SQLiteParser::Join_constraintContext *> SQLiteParser::Join_clauseContext::join_constraint() {
  return getRuleContexts<SQLiteParser::Join_constraintContext>();
}

SQLiteParser::Join_constraintContext* SQLiteParser::Join_clauseContext::join_constraint(size_t i) {
  return getRuleContext<SQLiteParser::Join_constraintContext>(i);
}


size_t SQLiteParser::Join_clauseContext::getRuleIndex() const {
  return SQLiteParser::RuleJoin_clause;
}

antlrcpp::Any SQLiteParser::Join_clauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLiteVisitor*>(visitor))
    return parserVisitor->visitJoin_clause(this);
  else
    return visitor->visitChildren(this);
}

SQLiteParser::Join_clauseContext* SQLiteParser::join_clause() {
  Join_clauseContext *_localctx = _tracker.createInstance<Join_clauseContext>(_ctx, getState());
  enterRule(_localctx, 102, SQLiteParser::RuleJoin_clause);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1531);
    table_or_subquery();
    setState(1538);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SQLiteParser::COMMA

    || _la == SQLiteParser::K_CROSS || ((((_la - 87) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 87)) & ((1ULL << (SQLiteParser::K_INNER - 87))
      | (1ULL << (SQLiteParser::K_JOIN - 87))
      | (1ULL << (SQLiteParser::K_LEFT - 87))
      | (1ULL << (SQLiteParser::K_NATURAL - 87)))) != 0)) {
      setState(1532);
      join_operator();
      setState(1533);
      table_or_subquery();
      setState(1534);
      join_constraint();
      setState(1540);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Join_operatorContext ------------------------------------------------------------------

SQLiteParser::Join_operatorContext::Join_operatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SQLiteParser::Join_operatorContext::K_JOIN() {
  return getToken(SQLiteParser::K_JOIN, 0);
}

tree::TerminalNode* SQLiteParser::Join_operatorContext::K_NATURAL() {
  return getToken(SQLiteParser::K_NATURAL, 0);
}

tree::TerminalNode* SQLiteParser::Join_operatorContext::K_LEFT() {
  return getToken(SQLiteParser::K_LEFT, 0);
}

tree::TerminalNode* SQLiteParser::Join_operatorContext::K_INNER() {
  return getToken(SQLiteParser::K_INNER, 0);
}

tree::TerminalNode* SQLiteParser::Join_operatorContext::K_CROSS() {
  return getToken(SQLiteParser::K_CROSS, 0);
}

tree::TerminalNode* SQLiteParser::Join_operatorContext::K_OUTER() {
  return getToken(SQLiteParser::K_OUTER, 0);
}


size_t SQLiteParser::Join_operatorContext::getRuleIndex() const {
  return SQLiteParser::RuleJoin_operator;
}

antlrcpp::Any SQLiteParser::Join_operatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLiteVisitor*>(visitor))
    return parserVisitor->visitJoin_operator(this);
  else
    return visitor->visitChildren(this);
}

SQLiteParser::Join_operatorContext* SQLiteParser::join_operator() {
  Join_operatorContext *_localctx = _tracker.createInstance<Join_operatorContext>(_ctx, getState());
  enterRule(_localctx, 104, SQLiteParser::RuleJoin_operator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1554);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SQLiteParser::COMMA: {
        enterOuterAlt(_localctx, 1);
        setState(1541);
        match(SQLiteParser::COMMA);
        break;
      }

      case SQLiteParser::K_CROSS:
      case SQLiteParser::K_INNER:
      case SQLiteParser::K_JOIN:
      case SQLiteParser::K_LEFT:
      case SQLiteParser::K_NATURAL: {
        enterOuterAlt(_localctx, 2);
        setState(1543);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SQLiteParser::K_NATURAL) {
          setState(1542);
          match(SQLiteParser::K_NATURAL);
        }
        setState(1551);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case SQLiteParser::K_LEFT: {
            setState(1545);
            match(SQLiteParser::K_LEFT);
            setState(1547);
            _errHandler->sync(this);

            _la = _input->LA(1);
            if (_la == SQLiteParser::K_OUTER) {
              setState(1546);
              match(SQLiteParser::K_OUTER);
            }
            break;
          }

          case SQLiteParser::K_INNER: {
            setState(1549);
            match(SQLiteParser::K_INNER);
            break;
          }

          case SQLiteParser::K_CROSS: {
            setState(1550);
            match(SQLiteParser::K_CROSS);
            break;
          }

          case SQLiteParser::K_JOIN: {
            break;
          }

        default:
          break;
        }
        setState(1553);
        match(SQLiteParser::K_JOIN);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Join_constraintContext ------------------------------------------------------------------

SQLiteParser::Join_constraintContext::Join_constraintContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SQLiteParser::Join_constraintContext::K_ON() {
  return getToken(SQLiteParser::K_ON, 0);
}

SQLiteParser::ExprContext* SQLiteParser::Join_constraintContext::expr() {
  return getRuleContext<SQLiteParser::ExprContext>(0);
}

tree::TerminalNode* SQLiteParser::Join_constraintContext::K_USING() {
  return getToken(SQLiteParser::K_USING, 0);
}

std::vector<SQLiteParser::Column_nameContext *> SQLiteParser::Join_constraintContext::column_name() {
  return getRuleContexts<SQLiteParser::Column_nameContext>();
}

SQLiteParser::Column_nameContext* SQLiteParser::Join_constraintContext::column_name(size_t i) {
  return getRuleContext<SQLiteParser::Column_nameContext>(i);
}


size_t SQLiteParser::Join_constraintContext::getRuleIndex() const {
  return SQLiteParser::RuleJoin_constraint;
}

antlrcpp::Any SQLiteParser::Join_constraintContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLiteVisitor*>(visitor))
    return parserVisitor->visitJoin_constraint(this);
  else
    return visitor->visitChildren(this);
}

SQLiteParser::Join_constraintContext* SQLiteParser::join_constraint() {
  Join_constraintContext *_localctx = _tracker.createInstance<Join_constraintContext>(_ctx, getState());
  enterRule(_localctx, 106, SQLiteParser::RuleJoin_constraint);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1570);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SQLiteParser::K_ON: {
        setState(1556);
        match(SQLiteParser::K_ON);
        setState(1557);
        expr(0);
        break;
      }

      case SQLiteParser::K_USING: {
        setState(1558);
        match(SQLiteParser::K_USING);
        setState(1559);
        match(SQLiteParser::OPEN_PAR);
        setState(1560);
        column_name();
        setState(1565);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == SQLiteParser::COMMA) {
          setState(1561);
          match(SQLiteParser::COMMA);
          setState(1562);
          column_name();
          setState(1567);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(1568);
        match(SQLiteParser::CLOSE_PAR);
        break;
      }

      case SQLiteParser::EOF:
      case SQLiteParser::SCOL:
      case SQLiteParser::CLOSE_PAR:
      case SQLiteParser::COMMA:
      case SQLiteParser::K_ALTER:
      case SQLiteParser::K_ANALYZE:
      case SQLiteParser::K_ATTACH:
      case SQLiteParser::K_BEGIN:
      case SQLiteParser::K_COMMIT:
      case SQLiteParser::K_CREATE:
      case SQLiteParser::K_CROSS:
      case SQLiteParser::K_DELETE:
      case SQLiteParser::K_DETACH:
      case SQLiteParser::K_DROP:
      case SQLiteParser::K_END:
      case SQLiteParser::K_EXCEPT:
      case SQLiteParser::K_EXPLAIN:
      case SQLiteParser::K_GROUP:
      case SQLiteParser::K_INNER:
      case SQLiteParser::K_INSERT:
      case SQLiteParser::K_INTERSECT:
      case SQLiteParser::K_JOIN:
      case SQLiteParser::K_LEFT:
      case SQLiteParser::K_LIMIT:
      case SQLiteParser::K_NATURAL:
      case SQLiteParser::K_ORDER:
      case SQLiteParser::K_PRAGMA:
      case SQLiteParser::K_REINDEX:
      case SQLiteParser::K_RELEASE:
      case SQLiteParser::K_REPLACE:
      case SQLiteParser::K_ROLLBACK:
      case SQLiteParser::K_SAVEPOINT:
      case SQLiteParser::K_SELECT:
      case SQLiteParser::K_UNION:
      case SQLiteParser::K_UPDATE:
      case SQLiteParser::K_VACUUM:
      case SQLiteParser::K_VALUES:
      case SQLiteParser::K_WHERE:
      case SQLiteParser::K_WITH:
      case SQLiteParser::UNEXPECTED_CHAR: {
        break;
      }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Select_coreContext ------------------------------------------------------------------

SQLiteParser::Select_coreContext::Select_coreContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SQLiteParser::Select_coreContext::K_SELECT() {
  return getToken(SQLiteParser::K_SELECT, 0);
}

std::vector<SQLiteParser::Result_columnContext *> SQLiteParser::Select_coreContext::result_column() {
  return getRuleContexts<SQLiteParser::Result_columnContext>();
}

SQLiteParser::Result_columnContext* SQLiteParser::Select_coreContext::result_column(size_t i) {
  return getRuleContext<SQLiteParser::Result_columnContext>(i);
}

tree::TerminalNode* SQLiteParser::Select_coreContext::K_FROM() {
  return getToken(SQLiteParser::K_FROM, 0);
}

tree::TerminalNode* SQLiteParser::Select_coreContext::K_WHERE() {
  return getToken(SQLiteParser::K_WHERE, 0);
}

std::vector<SQLiteParser::ExprContext *> SQLiteParser::Select_coreContext::expr() {
  return getRuleContexts<SQLiteParser::ExprContext>();
}

SQLiteParser::ExprContext* SQLiteParser::Select_coreContext::expr(size_t i) {
  return getRuleContext<SQLiteParser::ExprContext>(i);
}

tree::TerminalNode* SQLiteParser::Select_coreContext::K_GROUP() {
  return getToken(SQLiteParser::K_GROUP, 0);
}

tree::TerminalNode* SQLiteParser::Select_coreContext::K_BY() {
  return getToken(SQLiteParser::K_BY, 0);
}

tree::TerminalNode* SQLiteParser::Select_coreContext::K_DISTINCT() {
  return getToken(SQLiteParser::K_DISTINCT, 0);
}

tree::TerminalNode* SQLiteParser::Select_coreContext::K_ALL() {
  return getToken(SQLiteParser::K_ALL, 0);
}

std::vector<SQLiteParser::Table_or_subqueryContext *> SQLiteParser::Select_coreContext::table_or_subquery() {
  return getRuleContexts<SQLiteParser::Table_or_subqueryContext>();
}

SQLiteParser::Table_or_subqueryContext* SQLiteParser::Select_coreContext::table_or_subquery(size_t i) {
  return getRuleContext<SQLiteParser::Table_or_subqueryContext>(i);
}

SQLiteParser::Join_clauseContext* SQLiteParser::Select_coreContext::join_clause() {
  return getRuleContext<SQLiteParser::Join_clauseContext>(0);
}

tree::TerminalNode* SQLiteParser::Select_coreContext::K_HAVING() {
  return getToken(SQLiteParser::K_HAVING, 0);
}

tree::TerminalNode* SQLiteParser::Select_coreContext::K_VALUES() {
  return getToken(SQLiteParser::K_VALUES, 0);
}


size_t SQLiteParser::Select_coreContext::getRuleIndex() const {
  return SQLiteParser::RuleSelect_core;
}

antlrcpp::Any SQLiteParser::Select_coreContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLiteVisitor*>(visitor))
    return parserVisitor->visitSelect_core(this);
  else
    return visitor->visitChildren(this);
}

SQLiteParser::Select_coreContext* SQLiteParser::select_core() {
  Select_coreContext *_localctx = _tracker.createInstance<Select_coreContext>(_ctx, getState());
  enterRule(_localctx, 108, SQLiteParser::RuleSelect_core);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1646);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SQLiteParser::K_SELECT: {
        enterOuterAlt(_localctx, 1);
        setState(1572);
        match(SQLiteParser::K_SELECT);
        setState(1574);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 225, _ctx)) {
        case 1: {
          setState(1573);
          _la = _input->LA(1);
          if (!(_la == SQLiteParser::K_ALL

          || _la == SQLiteParser::K_DISTINCT)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          break;
        }

        }
        setState(1576);
        result_column();
        setState(1581);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == SQLiteParser::COMMA) {
          setState(1577);
          match(SQLiteParser::COMMA);
          setState(1578);
          result_column();
          setState(1583);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(1596);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SQLiteParser::K_FROM) {
          setState(1584);
          match(SQLiteParser::K_FROM);
          setState(1594);
          _errHandler->sync(this);
          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 228, _ctx)) {
          case 1: {
            setState(1585);
            table_or_subquery();
            setState(1590);
            _errHandler->sync(this);
            _la = _input->LA(1);
            while (_la == SQLiteParser::COMMA) {
              setState(1586);
              match(SQLiteParser::COMMA);
              setState(1587);
              table_or_subquery();
              setState(1592);
              _errHandler->sync(this);
              _la = _input->LA(1);
            }
            break;
          }

          case 2: {
            setState(1593);
            join_clause();
            break;
          }

          }
        }
        setState(1600);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SQLiteParser::K_WHERE) {
          setState(1598);
          match(SQLiteParser::K_WHERE);
          setState(1599);
          expr(0);
        }
        setState(1616);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SQLiteParser::K_GROUP) {
          setState(1602);
          match(SQLiteParser::K_GROUP);
          setState(1603);
          match(SQLiteParser::K_BY);
          setState(1604);
          expr(0);
          setState(1609);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == SQLiteParser::COMMA) {
            setState(1605);
            match(SQLiteParser::COMMA);
            setState(1606);
            expr(0);
            setState(1611);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
          setState(1614);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == SQLiteParser::K_HAVING) {
            setState(1612);
            match(SQLiteParser::K_HAVING);
            setState(1613);
            expr(0);
          }
        }
        break;
      }

      case SQLiteParser::K_VALUES: {
        enterOuterAlt(_localctx, 2);
        setState(1618);
        match(SQLiteParser::K_VALUES);
        setState(1619);
        match(SQLiteParser::OPEN_PAR);
        setState(1620);
        expr(0);
        setState(1625);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == SQLiteParser::COMMA) {
          setState(1621);
          match(SQLiteParser::COMMA);
          setState(1622);
          expr(0);
          setState(1627);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(1628);
        match(SQLiteParser::CLOSE_PAR);
        setState(1643);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == SQLiteParser::COMMA) {
          setState(1629);
          match(SQLiteParser::COMMA);
          setState(1630);
          match(SQLiteParser::OPEN_PAR);
          setState(1631);
          expr(0);
          setState(1636);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == SQLiteParser::COMMA) {
            setState(1632);
            match(SQLiteParser::COMMA);
            setState(1633);
            expr(0);
            setState(1638);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
          setState(1639);
          match(SQLiteParser::CLOSE_PAR);
          setState(1645);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Compound_operatorContext ------------------------------------------------------------------

SQLiteParser::Compound_operatorContext::Compound_operatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SQLiteParser::Compound_operatorContext::K_UNION() {
  return getToken(SQLiteParser::K_UNION, 0);
}

tree::TerminalNode* SQLiteParser::Compound_operatorContext::K_ALL() {
  return getToken(SQLiteParser::K_ALL, 0);
}

tree::TerminalNode* SQLiteParser::Compound_operatorContext::K_INTERSECT() {
  return getToken(SQLiteParser::K_INTERSECT, 0);
}

tree::TerminalNode* SQLiteParser::Compound_operatorContext::K_EXCEPT() {
  return getToken(SQLiteParser::K_EXCEPT, 0);
}


size_t SQLiteParser::Compound_operatorContext::getRuleIndex() const {
  return SQLiteParser::RuleCompound_operator;
}

antlrcpp::Any SQLiteParser::Compound_operatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLiteVisitor*>(visitor))
    return parserVisitor->visitCompound_operator(this);
  else
    return visitor->visitChildren(this);
}

SQLiteParser::Compound_operatorContext* SQLiteParser::compound_operator() {
  Compound_operatorContext *_localctx = _tracker.createInstance<Compound_operatorContext>(_ctx, getState());
  enterRule(_localctx, 110, SQLiteParser::RuleCompound_operator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1653);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 238, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1648);
      match(SQLiteParser::K_UNION);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1649);
      match(SQLiteParser::K_UNION);
      setState(1650);
      match(SQLiteParser::K_ALL);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1651);
      match(SQLiteParser::K_INTERSECT);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1652);
      match(SQLiteParser::K_EXCEPT);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Cte_table_nameContext ------------------------------------------------------------------

SQLiteParser::Cte_table_nameContext::Cte_table_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SQLiteParser::Table_nameContext* SQLiteParser::Cte_table_nameContext::table_name() {
  return getRuleContext<SQLiteParser::Table_nameContext>(0);
}

std::vector<SQLiteParser::Column_nameContext *> SQLiteParser::Cte_table_nameContext::column_name() {
  return getRuleContexts<SQLiteParser::Column_nameContext>();
}

SQLiteParser::Column_nameContext* SQLiteParser::Cte_table_nameContext::column_name(size_t i) {
  return getRuleContext<SQLiteParser::Column_nameContext>(i);
}


size_t SQLiteParser::Cte_table_nameContext::getRuleIndex() const {
  return SQLiteParser::RuleCte_table_name;
}

antlrcpp::Any SQLiteParser::Cte_table_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLiteVisitor*>(visitor))
    return parserVisitor->visitCte_table_name(this);
  else
    return visitor->visitChildren(this);
}

SQLiteParser::Cte_table_nameContext* SQLiteParser::cte_table_name() {
  Cte_table_nameContext *_localctx = _tracker.createInstance<Cte_table_nameContext>(_ctx, getState());
  enterRule(_localctx, 112, SQLiteParser::RuleCte_table_name);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1655);
    table_name();
    setState(1667);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SQLiteParser::OPEN_PAR) {
      setState(1656);
      match(SQLiteParser::OPEN_PAR);
      setState(1657);
      column_name();
      setState(1662);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SQLiteParser::COMMA) {
        setState(1658);
        match(SQLiteParser::COMMA);
        setState(1659);
        column_name();
        setState(1664);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(1665);
      match(SQLiteParser::CLOSE_PAR);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Signed_numberContext ------------------------------------------------------------------

SQLiteParser::Signed_numberContext::Signed_numberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SQLiteParser::Signed_numberContext::NUMERIC_LITERAL() {
  return getToken(SQLiteParser::NUMERIC_LITERAL, 0);
}


size_t SQLiteParser::Signed_numberContext::getRuleIndex() const {
  return SQLiteParser::RuleSigned_number;
}

antlrcpp::Any SQLiteParser::Signed_numberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLiteVisitor*>(visitor))
    return parserVisitor->visitSigned_number(this);
  else
    return visitor->visitChildren(this);
}

SQLiteParser::Signed_numberContext* SQLiteParser::signed_number() {
  Signed_numberContext *_localctx = _tracker.createInstance<Signed_numberContext>(_ctx, getState());
  enterRule(_localctx, 114, SQLiteParser::RuleSigned_number);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1670);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SQLiteParser::PLUS

    || _la == SQLiteParser::MINUS) {
      setState(1669);
      _la = _input->LA(1);
      if (!(_la == SQLiteParser::PLUS

      || _la == SQLiteParser::MINUS)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
    }
    setState(1672);
    match(SQLiteParser::NUMERIC_LITERAL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Literal_valueContext ------------------------------------------------------------------

SQLiteParser::Literal_valueContext::Literal_valueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SQLiteParser::Literal_valueContext::NUMERIC_LITERAL() {
  return getToken(SQLiteParser::NUMERIC_LITERAL, 0);
}

tree::TerminalNode* SQLiteParser::Literal_valueContext::STRING_LITERAL() {
  return getToken(SQLiteParser::STRING_LITERAL, 0);
}

tree::TerminalNode* SQLiteParser::Literal_valueContext::BLOB_LITERAL() {
  return getToken(SQLiteParser::BLOB_LITERAL, 0);
}

tree::TerminalNode* SQLiteParser::Literal_valueContext::K_NULL() {
  return getToken(SQLiteParser::K_NULL, 0);
}

tree::TerminalNode* SQLiteParser::Literal_valueContext::K_CURRENT_TIME() {
  return getToken(SQLiteParser::K_CURRENT_TIME, 0);
}

tree::TerminalNode* SQLiteParser::Literal_valueContext::K_CURRENT_DATE() {
  return getToken(SQLiteParser::K_CURRENT_DATE, 0);
}

tree::TerminalNode* SQLiteParser::Literal_valueContext::K_CURRENT_TIMESTAMP() {
  return getToken(SQLiteParser::K_CURRENT_TIMESTAMP, 0);
}


size_t SQLiteParser::Literal_valueContext::getRuleIndex() const {
  return SQLiteParser::RuleLiteral_value;
}

antlrcpp::Any SQLiteParser::Literal_valueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLiteVisitor*>(visitor))
    return parserVisitor->visitLiteral_value(this);
  else
    return visitor->visitChildren(this);
}

SQLiteParser::Literal_valueContext* SQLiteParser::literal_value() {
  Literal_valueContext *_localctx = _tracker.createInstance<Literal_valueContext>(_ctx, getState());
  enterRule(_localctx, 116, SQLiteParser::RuleLiteral_value);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1674);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SQLiteParser::K_CURRENT_DATE)
      | (1ULL << SQLiteParser::K_CURRENT_TIME)
      | (1ULL << SQLiteParser::K_CURRENT_TIMESTAMP))) != 0) || ((((_la - 104) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 104)) & ((1ULL << (SQLiteParser::K_NULL - 104))
      | (1ULL << (SQLiteParser::NUMERIC_LITERAL - 104))
      | (1ULL << (SQLiteParser::STRING_LITERAL - 104))
      | (1ULL << (SQLiteParser::BLOB_LITERAL - 104)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Unary_operatorContext ------------------------------------------------------------------

SQLiteParser::Unary_operatorContext::Unary_operatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SQLiteParser::Unary_operatorContext::K_NOT() {
  return getToken(SQLiteParser::K_NOT, 0);
}


size_t SQLiteParser::Unary_operatorContext::getRuleIndex() const {
  return SQLiteParser::RuleUnary_operator;
}

antlrcpp::Any SQLiteParser::Unary_operatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLiteVisitor*>(visitor))
    return parserVisitor->visitUnary_operator(this);
  else
    return visitor->visitChildren(this);
}

SQLiteParser::Unary_operatorContext* SQLiteParser::unary_operator() {
  Unary_operatorContext *_localctx = _tracker.createInstance<Unary_operatorContext>(_ctx, getState());
  enterRule(_localctx, 118, SQLiteParser::RuleUnary_operator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1676);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SQLiteParser::PLUS)
      | (1ULL << SQLiteParser::MINUS)
      | (1ULL << SQLiteParser::TILDE))) != 0) || _la == SQLiteParser::K_NOT)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Error_messageContext ------------------------------------------------------------------

SQLiteParser::Error_messageContext::Error_messageContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SQLiteParser::Error_messageContext::STRING_LITERAL() {
  return getToken(SQLiteParser::STRING_LITERAL, 0);
}


size_t SQLiteParser::Error_messageContext::getRuleIndex() const {
  return SQLiteParser::RuleError_message;
}

antlrcpp::Any SQLiteParser::Error_messageContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLiteVisitor*>(visitor))
    return parserVisitor->visitError_message(this);
  else
    return visitor->visitChildren(this);
}

SQLiteParser::Error_messageContext* SQLiteParser::error_message() {
  Error_messageContext *_localctx = _tracker.createInstance<Error_messageContext>(_ctx, getState());
  enterRule(_localctx, 120, SQLiteParser::RuleError_message);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1678);
    match(SQLiteParser::STRING_LITERAL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Module_argumentContext ------------------------------------------------------------------

SQLiteParser::Module_argumentContext::Module_argumentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SQLiteParser::ExprContext* SQLiteParser::Module_argumentContext::expr() {
  return getRuleContext<SQLiteParser::ExprContext>(0);
}

SQLiteParser::Column_defContext* SQLiteParser::Module_argumentContext::column_def() {
  return getRuleContext<SQLiteParser::Column_defContext>(0);
}


size_t SQLiteParser::Module_argumentContext::getRuleIndex() const {
  return SQLiteParser::RuleModule_argument;
}

antlrcpp::Any SQLiteParser::Module_argumentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLiteVisitor*>(visitor))
    return parserVisitor->visitModule_argument(this);
  else
    return visitor->visitChildren(this);
}

SQLiteParser::Module_argumentContext* SQLiteParser::module_argument() {
  Module_argumentContext *_localctx = _tracker.createInstance<Module_argumentContext>(_ctx, getState());
  enterRule(_localctx, 122, SQLiteParser::RuleModule_argument);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1682);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 242, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1680);
      expr(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1681);
      column_def();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Column_aliasContext ------------------------------------------------------------------

SQLiteParser::Column_aliasContext::Column_aliasContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SQLiteParser::Column_aliasContext::IDENTIFIER() {
  return getToken(SQLiteParser::IDENTIFIER, 0);
}

tree::TerminalNode* SQLiteParser::Column_aliasContext::STRING_LITERAL() {
  return getToken(SQLiteParser::STRING_LITERAL, 0);
}


size_t SQLiteParser::Column_aliasContext::getRuleIndex() const {
  return SQLiteParser::RuleColumn_alias;
}

antlrcpp::Any SQLiteParser::Column_aliasContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLiteVisitor*>(visitor))
    return parserVisitor->visitColumn_alias(this);
  else
    return visitor->visitChildren(this);
}

SQLiteParser::Column_aliasContext* SQLiteParser::column_alias() {
  Column_aliasContext *_localctx = _tracker.createInstance<Column_aliasContext>(_ctx, getState());
  enterRule(_localctx, 124, SQLiteParser::RuleColumn_alias);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1684);
    _la = _input->LA(1);
    if (!(_la == SQLiteParser::IDENTIFIER

    || _la == SQLiteParser::STRING_LITERAL)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- KeywordContext ------------------------------------------------------------------

SQLiteParser::KeywordContext::KeywordContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_ABORT() {
  return getToken(SQLiteParser::K_ABORT, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_ACTION() {
  return getToken(SQLiteParser::K_ACTION, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_ADD() {
  return getToken(SQLiteParser::K_ADD, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_AFTER() {
  return getToken(SQLiteParser::K_AFTER, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_ALL() {
  return getToken(SQLiteParser::K_ALL, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_ALTER() {
  return getToken(SQLiteParser::K_ALTER, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_ANALYZE() {
  return getToken(SQLiteParser::K_ANALYZE, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_AND() {
  return getToken(SQLiteParser::K_AND, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_AS() {
  return getToken(SQLiteParser::K_AS, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_ASC() {
  return getToken(SQLiteParser::K_ASC, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_ATTACH() {
  return getToken(SQLiteParser::K_ATTACH, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_AUTOINCREMENT() {
  return getToken(SQLiteParser::K_AUTOINCREMENT, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_BEFORE() {
  return getToken(SQLiteParser::K_BEFORE, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_BEGIN() {
  return getToken(SQLiteParser::K_BEGIN, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_BETWEEN() {
  return getToken(SQLiteParser::K_BETWEEN, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_BY() {
  return getToken(SQLiteParser::K_BY, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_CASCADE() {
  return getToken(SQLiteParser::K_CASCADE, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_CASE() {
  return getToken(SQLiteParser::K_CASE, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_CAST() {
  return getToken(SQLiteParser::K_CAST, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_CHECK() {
  return getToken(SQLiteParser::K_CHECK, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_COLLATE() {
  return getToken(SQLiteParser::K_COLLATE, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_COLUMN() {
  return getToken(SQLiteParser::K_COLUMN, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_COMMIT() {
  return getToken(SQLiteParser::K_COMMIT, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_CONFLICT() {
  return getToken(SQLiteParser::K_CONFLICT, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_CONSTRAINT() {
  return getToken(SQLiteParser::K_CONSTRAINT, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_CREATE() {
  return getToken(SQLiteParser::K_CREATE, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_CROSS() {
  return getToken(SQLiteParser::K_CROSS, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_CURRENT_DATE() {
  return getToken(SQLiteParser::K_CURRENT_DATE, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_CURRENT_TIME() {
  return getToken(SQLiteParser::K_CURRENT_TIME, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_CURRENT_TIMESTAMP() {
  return getToken(SQLiteParser::K_CURRENT_TIMESTAMP, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_DATABASE() {
  return getToken(SQLiteParser::K_DATABASE, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_DEFAULT() {
  return getToken(SQLiteParser::K_DEFAULT, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_DEFERRABLE() {
  return getToken(SQLiteParser::K_DEFERRABLE, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_DEFERRED() {
  return getToken(SQLiteParser::K_DEFERRED, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_DELETE() {
  return getToken(SQLiteParser::K_DELETE, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_DESC() {
  return getToken(SQLiteParser::K_DESC, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_DETACH() {
  return getToken(SQLiteParser::K_DETACH, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_DISTINCT() {
  return getToken(SQLiteParser::K_DISTINCT, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_DROP() {
  return getToken(SQLiteParser::K_DROP, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_EACH() {
  return getToken(SQLiteParser::K_EACH, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_ELSE() {
  return getToken(SQLiteParser::K_ELSE, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_END() {
  return getToken(SQLiteParser::K_END, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_ESCAPE() {
  return getToken(SQLiteParser::K_ESCAPE, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_EXCEPT() {
  return getToken(SQLiteParser::K_EXCEPT, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_EXCLUSIVE() {
  return getToken(SQLiteParser::K_EXCLUSIVE, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_EXISTS() {
  return getToken(SQLiteParser::K_EXISTS, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_EXPLAIN() {
  return getToken(SQLiteParser::K_EXPLAIN, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_FAIL() {
  return getToken(SQLiteParser::K_FAIL, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_FOR() {
  return getToken(SQLiteParser::K_FOR, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_FOREIGN() {
  return getToken(SQLiteParser::K_FOREIGN, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_FROM() {
  return getToken(SQLiteParser::K_FROM, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_FULL() {
  return getToken(SQLiteParser::K_FULL, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_GLOB() {
  return getToken(SQLiteParser::K_GLOB, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_GROUP() {
  return getToken(SQLiteParser::K_GROUP, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_HAVING() {
  return getToken(SQLiteParser::K_HAVING, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_IF() {
  return getToken(SQLiteParser::K_IF, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_IGNORE() {
  return getToken(SQLiteParser::K_IGNORE, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_IMMEDIATE() {
  return getToken(SQLiteParser::K_IMMEDIATE, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_IN() {
  return getToken(SQLiteParser::K_IN, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_INDEX() {
  return getToken(SQLiteParser::K_INDEX, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_INDEXED() {
  return getToken(SQLiteParser::K_INDEXED, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_INITIALLY() {
  return getToken(SQLiteParser::K_INITIALLY, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_INNER() {
  return getToken(SQLiteParser::K_INNER, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_INSERT() {
  return getToken(SQLiteParser::K_INSERT, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_INSTEAD() {
  return getToken(SQLiteParser::K_INSTEAD, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_INTERSECT() {
  return getToken(SQLiteParser::K_INTERSECT, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_INTO() {
  return getToken(SQLiteParser::K_INTO, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_IS() {
  return getToken(SQLiteParser::K_IS, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_ISNULL() {
  return getToken(SQLiteParser::K_ISNULL, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_JOIN() {
  return getToken(SQLiteParser::K_JOIN, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_KEY() {
  return getToken(SQLiteParser::K_KEY, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_LEFT() {
  return getToken(SQLiteParser::K_LEFT, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_LIKE() {
  return getToken(SQLiteParser::K_LIKE, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_LIMIT() {
  return getToken(SQLiteParser::K_LIMIT, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_MATCH() {
  return getToken(SQLiteParser::K_MATCH, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_NATURAL() {
  return getToken(SQLiteParser::K_NATURAL, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_NO() {
  return getToken(SQLiteParser::K_NO, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_NOT() {
  return getToken(SQLiteParser::K_NOT, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_NOTNULL() {
  return getToken(SQLiteParser::K_NOTNULL, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_NULL() {
  return getToken(SQLiteParser::K_NULL, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_OF() {
  return getToken(SQLiteParser::K_OF, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_OFFSET() {
  return getToken(SQLiteParser::K_OFFSET, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_ON() {
  return getToken(SQLiteParser::K_ON, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_OR() {
  return getToken(SQLiteParser::K_OR, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_ORDER() {
  return getToken(SQLiteParser::K_ORDER, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_OUTER() {
  return getToken(SQLiteParser::K_OUTER, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_PLAN() {
  return getToken(SQLiteParser::K_PLAN, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_PRAGMA() {
  return getToken(SQLiteParser::K_PRAGMA, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_PRIMARY() {
  return getToken(SQLiteParser::K_PRIMARY, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_QUERY() {
  return getToken(SQLiteParser::K_QUERY, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_RAISE() {
  return getToken(SQLiteParser::K_RAISE, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_RECURSIVE() {
  return getToken(SQLiteParser::K_RECURSIVE, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_REFERENCES() {
  return getToken(SQLiteParser::K_REFERENCES, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_REGEXP() {
  return getToken(SQLiteParser::K_REGEXP, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_REINDEX() {
  return getToken(SQLiteParser::K_REINDEX, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_RELEASE() {
  return getToken(SQLiteParser::K_RELEASE, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_RENAME() {
  return getToken(SQLiteParser::K_RENAME, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_REPLACE() {
  return getToken(SQLiteParser::K_REPLACE, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_RESTRICT() {
  return getToken(SQLiteParser::K_RESTRICT, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_RIGHT() {
  return getToken(SQLiteParser::K_RIGHT, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_ROLLBACK() {
  return getToken(SQLiteParser::K_ROLLBACK, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_ROW() {
  return getToken(SQLiteParser::K_ROW, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_SAVEPOINT() {
  return getToken(SQLiteParser::K_SAVEPOINT, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_SELECT() {
  return getToken(SQLiteParser::K_SELECT, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_SET() {
  return getToken(SQLiteParser::K_SET, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_TABLE() {
  return getToken(SQLiteParser::K_TABLE, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_TEMP() {
  return getToken(SQLiteParser::K_TEMP, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_TEMPORARY() {
  return getToken(SQLiteParser::K_TEMPORARY, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_THEN() {
  return getToken(SQLiteParser::K_THEN, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_TO() {
  return getToken(SQLiteParser::K_TO, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_TRANSACTION() {
  return getToken(SQLiteParser::K_TRANSACTION, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_TRIGGER() {
  return getToken(SQLiteParser::K_TRIGGER, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_UNION() {
  return getToken(SQLiteParser::K_UNION, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_UNIQUE() {
  return getToken(SQLiteParser::K_UNIQUE, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_UPDATE() {
  return getToken(SQLiteParser::K_UPDATE, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_USING() {
  return getToken(SQLiteParser::K_USING, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_VACUUM() {
  return getToken(SQLiteParser::K_VACUUM, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_VALUES() {
  return getToken(SQLiteParser::K_VALUES, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_VIEW() {
  return getToken(SQLiteParser::K_VIEW, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_VIRTUAL() {
  return getToken(SQLiteParser::K_VIRTUAL, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_WHEN() {
  return getToken(SQLiteParser::K_WHEN, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_WHERE() {
  return getToken(SQLiteParser::K_WHERE, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_WITH() {
  return getToken(SQLiteParser::K_WITH, 0);
}

tree::TerminalNode* SQLiteParser::KeywordContext::K_WITHOUT() {
  return getToken(SQLiteParser::K_WITHOUT, 0);
}


size_t SQLiteParser::KeywordContext::getRuleIndex() const {
  return SQLiteParser::RuleKeyword;
}

antlrcpp::Any SQLiteParser::KeywordContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLiteVisitor*>(visitor))
    return parserVisitor->visitKeyword(this);
  else
    return visitor->visitChildren(this);
}

SQLiteParser::KeywordContext* SQLiteParser::keyword() {
  KeywordContext *_localctx = _tracker.createInstance<KeywordContext>(_ctx, getState());
  enterRule(_localctx, 126, SQLiteParser::RuleKeyword);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1686);
    _la = _input->LA(1);
    if (!(((((_la - 25) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 25)) & ((1ULL << (SQLiteParser::K_ABORT - 25))
      | (1ULL << (SQLiteParser::K_ACTION - 25))
      | (1ULL << (SQLiteParser::K_ADD - 25))
      | (1ULL << (SQLiteParser::K_AFTER - 25))
      | (1ULL << (SQLiteParser::K_ALL - 25))
      | (1ULL << (SQLiteParser::K_ALTER - 25))
      | (1ULL << (SQLiteParser::K_ANALYZE - 25))
      | (1ULL << (SQLiteParser::K_AND - 25))
      | (1ULL << (SQLiteParser::K_AS - 25))
      | (1ULL << (SQLiteParser::K_ASC - 25))
      | (1ULL << (SQLiteParser::K_ATTACH - 25))
      | (1ULL << (SQLiteParser::K_AUTOINCREMENT - 25))
      | (1ULL << (SQLiteParser::K_BEFORE - 25))
      | (1ULL << (SQLiteParser::K_BEGIN - 25))
      | (1ULL << (SQLiteParser::K_BETWEEN - 25))
      | (1ULL << (SQLiteParser::K_BY - 25))
      | (1ULL << (SQLiteParser::K_CASCADE - 25))
      | (1ULL << (SQLiteParser::K_CASE - 25))
      | (1ULL << (SQLiteParser::K_CAST - 25))
      | (1ULL << (SQLiteParser::K_CHECK - 25))
      | (1ULL << (SQLiteParser::K_COLLATE - 25))
      | (1ULL << (SQLiteParser::K_COLUMN - 25))
      | (1ULL << (SQLiteParser::K_COMMIT - 25))
      | (1ULL << (SQLiteParser::K_CONFLICT - 25))
      | (1ULL << (SQLiteParser::K_CONSTRAINT - 25))
      | (1ULL << (SQLiteParser::K_CREATE - 25))
      | (1ULL << (SQLiteParser::K_CROSS - 25))
      | (1ULL << (SQLiteParser::K_CURRENT_DATE - 25))
      | (1ULL << (SQLiteParser::K_CURRENT_TIME - 25))
      | (1ULL << (SQLiteParser::K_CURRENT_TIMESTAMP - 25))
      | (1ULL << (SQLiteParser::K_DATABASE - 25))
      | (1ULL << (SQLiteParser::K_DEFAULT - 25))
      | (1ULL << (SQLiteParser::K_DEFERRABLE - 25))
      | (1ULL << (SQLiteParser::K_DEFERRED - 25))
      | (1ULL << (SQLiteParser::K_DELETE - 25))
      | (1ULL << (SQLiteParser::K_DESC - 25))
      | (1ULL << (SQLiteParser::K_DETACH - 25))
      | (1ULL << (SQLiteParser::K_DISTINCT - 25))
      | (1ULL << (SQLiteParser::K_DROP - 25))
      | (1ULL << (SQLiteParser::K_EACH - 25))
      | (1ULL << (SQLiteParser::K_ELSE - 25))
      | (1ULL << (SQLiteParser::K_END - 25))
      | (1ULL << (SQLiteParser::K_ESCAPE - 25))
      | (1ULL << (SQLiteParser::K_EXCEPT - 25))
      | (1ULL << (SQLiteParser::K_EXCLUSIVE - 25))
      | (1ULL << (SQLiteParser::K_EXISTS - 25))
      | (1ULL << (SQLiteParser::K_EXPLAIN - 25))
      | (1ULL << (SQLiteParser::K_FAIL - 25))
      | (1ULL << (SQLiteParser::K_FOR - 25))
      | (1ULL << (SQLiteParser::K_FOREIGN - 25))
      | (1ULL << (SQLiteParser::K_FROM - 25))
      | (1ULL << (SQLiteParser::K_FULL - 25))
      | (1ULL << (SQLiteParser::K_GLOB - 25))
      | (1ULL << (SQLiteParser::K_GROUP - 25))
      | (1ULL << (SQLiteParser::K_HAVING - 25))
      | (1ULL << (SQLiteParser::K_IF - 25))
      | (1ULL << (SQLiteParser::K_IGNORE - 25))
      | (1ULL << (SQLiteParser::K_IMMEDIATE - 25))
      | (1ULL << (SQLiteParser::K_IN - 25))
      | (1ULL << (SQLiteParser::K_INDEX - 25))
      | (1ULL << (SQLiteParser::K_INDEXED - 25))
      | (1ULL << (SQLiteParser::K_INITIALLY - 25))
      | (1ULL << (SQLiteParser::K_INNER - 25))
      | (1ULL << (SQLiteParser::K_INSERT - 25)))) != 0) || ((((_la - 89) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 89)) & ((1ULL << (SQLiteParser::K_INSTEAD - 89))
      | (1ULL << (SQLiteParser::K_INTERSECT - 89))
      | (1ULL << (SQLiteParser::K_INTO - 89))
      | (1ULL << (SQLiteParser::K_IS - 89))
      | (1ULL << (SQLiteParser::K_ISNULL - 89))
      | (1ULL << (SQLiteParser::K_JOIN - 89))
      | (1ULL << (SQLiteParser::K_KEY - 89))
      | (1ULL << (SQLiteParser::K_LEFT - 89))
      | (1ULL << (SQLiteParser::K_LIKE - 89))
      | (1ULL << (SQLiteParser::K_LIMIT - 89))
      | (1ULL << (SQLiteParser::K_MATCH - 89))
      | (1ULL << (SQLiteParser::K_NATURAL - 89))
      | (1ULL << (SQLiteParser::K_NO - 89))
      | (1ULL << (SQLiteParser::K_NOT - 89))
      | (1ULL << (SQLiteParser::K_NOTNULL - 89))
      | (1ULL << (SQLiteParser::K_NULL - 89))
      | (1ULL << (SQLiteParser::K_OF - 89))
      | (1ULL << (SQLiteParser::K_OFFSET - 89))
      | (1ULL << (SQLiteParser::K_ON - 89))
      | (1ULL << (SQLiteParser::K_OR - 89))
      | (1ULL << (SQLiteParser::K_ORDER - 89))
      | (1ULL << (SQLiteParser::K_OUTER - 89))
      | (1ULL << (SQLiteParser::K_PLAN - 89))
      | (1ULL << (SQLiteParser::K_PRAGMA - 89))
      | (1ULL << (SQLiteParser::K_PRIMARY - 89))
      | (1ULL << (SQLiteParser::K_QUERY - 89))
      | (1ULL << (SQLiteParser::K_RAISE - 89))
      | (1ULL << (SQLiteParser::K_RECURSIVE - 89))
      | (1ULL << (SQLiteParser::K_REFERENCES - 89))
      | (1ULL << (SQLiteParser::K_REGEXP - 89))
      | (1ULL << (SQLiteParser::K_REINDEX - 89))
      | (1ULL << (SQLiteParser::K_RELEASE - 89))
      | (1ULL << (SQLiteParser::K_RENAME - 89))
      | (1ULL << (SQLiteParser::K_REPLACE - 89))
      | (1ULL << (SQLiteParser::K_RESTRICT - 89))
      | (1ULL << (SQLiteParser::K_RIGHT - 89))
      | (1ULL << (SQLiteParser::K_ROLLBACK - 89))
      | (1ULL << (SQLiteParser::K_ROW - 89))
      | (1ULL << (SQLiteParser::K_SAVEPOINT - 89))
      | (1ULL << (SQLiteParser::K_SELECT - 89))
      | (1ULL << (SQLiteParser::K_SET - 89))
      | (1ULL << (SQLiteParser::K_TABLE - 89))
      | (1ULL << (SQLiteParser::K_TEMP - 89))
      | (1ULL << (SQLiteParser::K_TEMPORARY - 89))
      | (1ULL << (SQLiteParser::K_THEN - 89))
      | (1ULL << (SQLiteParser::K_TO - 89))
      | (1ULL << (SQLiteParser::K_TRANSACTION - 89))
      | (1ULL << (SQLiteParser::K_TRIGGER - 89))
      | (1ULL << (SQLiteParser::K_UNION - 89))
      | (1ULL << (SQLiteParser::K_UNIQUE - 89))
      | (1ULL << (SQLiteParser::K_UPDATE - 89))
      | (1ULL << (SQLiteParser::K_USING - 89))
      | (1ULL << (SQLiteParser::K_VACUUM - 89))
      | (1ULL << (SQLiteParser::K_VALUES - 89))
      | (1ULL << (SQLiteParser::K_VIEW - 89))
      | (1ULL << (SQLiteParser::K_VIRTUAL - 89))
      | (1ULL << (SQLiteParser::K_WHEN - 89))
      | (1ULL << (SQLiteParser::K_WHERE - 89))
      | (1ULL << (SQLiteParser::K_WITH - 89))
      | (1ULL << (SQLiteParser::K_WITHOUT - 89)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NameContext ------------------------------------------------------------------

SQLiteParser::NameContext::NameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SQLiteParser::Any_nameContext* SQLiteParser::NameContext::any_name() {
  return getRuleContext<SQLiteParser::Any_nameContext>(0);
}


size_t SQLiteParser::NameContext::getRuleIndex() const {
  return SQLiteParser::RuleName;
}

antlrcpp::Any SQLiteParser::NameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLiteVisitor*>(visitor))
    return parserVisitor->visitName(this);
  else
    return visitor->visitChildren(this);
}

SQLiteParser::NameContext* SQLiteParser::name() {
  NameContext *_localctx = _tracker.createInstance<NameContext>(_ctx, getState());
  enterRule(_localctx, 128, SQLiteParser::RuleName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1688);
    any_name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Function_nameContext ------------------------------------------------------------------

SQLiteParser::Function_nameContext::Function_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SQLiteParser::Any_nameContext* SQLiteParser::Function_nameContext::any_name() {
  return getRuleContext<SQLiteParser::Any_nameContext>(0);
}


size_t SQLiteParser::Function_nameContext::getRuleIndex() const {
  return SQLiteParser::RuleFunction_name;
}

antlrcpp::Any SQLiteParser::Function_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLiteVisitor*>(visitor))
    return parserVisitor->visitFunction_name(this);
  else
    return visitor->visitChildren(this);
}

SQLiteParser::Function_nameContext* SQLiteParser::function_name() {
  Function_nameContext *_localctx = _tracker.createInstance<Function_nameContext>(_ctx, getState());
  enterRule(_localctx, 130, SQLiteParser::RuleFunction_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1690);
    any_name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Database_nameContext ------------------------------------------------------------------

SQLiteParser::Database_nameContext::Database_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SQLiteParser::Any_nameContext* SQLiteParser::Database_nameContext::any_name() {
  return getRuleContext<SQLiteParser::Any_nameContext>(0);
}


size_t SQLiteParser::Database_nameContext::getRuleIndex() const {
  return SQLiteParser::RuleDatabase_name;
}

antlrcpp::Any SQLiteParser::Database_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLiteVisitor*>(visitor))
    return parserVisitor->visitDatabase_name(this);
  else
    return visitor->visitChildren(this);
}

SQLiteParser::Database_nameContext* SQLiteParser::database_name() {
  Database_nameContext *_localctx = _tracker.createInstance<Database_nameContext>(_ctx, getState());
  enterRule(_localctx, 132, SQLiteParser::RuleDatabase_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1692);
    any_name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Table_nameContext ------------------------------------------------------------------

SQLiteParser::Table_nameContext::Table_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SQLiteParser::Any_nameContext* SQLiteParser::Table_nameContext::any_name() {
  return getRuleContext<SQLiteParser::Any_nameContext>(0);
}


size_t SQLiteParser::Table_nameContext::getRuleIndex() const {
  return SQLiteParser::RuleTable_name;
}

antlrcpp::Any SQLiteParser::Table_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLiteVisitor*>(visitor))
    return parserVisitor->visitTable_name(this);
  else
    return visitor->visitChildren(this);
}

SQLiteParser::Table_nameContext* SQLiteParser::table_name() {
  Table_nameContext *_localctx = _tracker.createInstance<Table_nameContext>(_ctx, getState());
  enterRule(_localctx, 134, SQLiteParser::RuleTable_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1694);
    any_name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Table_or_index_nameContext ------------------------------------------------------------------

SQLiteParser::Table_or_index_nameContext::Table_or_index_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SQLiteParser::Any_nameContext* SQLiteParser::Table_or_index_nameContext::any_name() {
  return getRuleContext<SQLiteParser::Any_nameContext>(0);
}


size_t SQLiteParser::Table_or_index_nameContext::getRuleIndex() const {
  return SQLiteParser::RuleTable_or_index_name;
}

antlrcpp::Any SQLiteParser::Table_or_index_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLiteVisitor*>(visitor))
    return parserVisitor->visitTable_or_index_name(this);
  else
    return visitor->visitChildren(this);
}

SQLiteParser::Table_or_index_nameContext* SQLiteParser::table_or_index_name() {
  Table_or_index_nameContext *_localctx = _tracker.createInstance<Table_or_index_nameContext>(_ctx, getState());
  enterRule(_localctx, 136, SQLiteParser::RuleTable_or_index_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1696);
    any_name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- New_table_nameContext ------------------------------------------------------------------

SQLiteParser::New_table_nameContext::New_table_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SQLiteParser::Any_nameContext* SQLiteParser::New_table_nameContext::any_name() {
  return getRuleContext<SQLiteParser::Any_nameContext>(0);
}


size_t SQLiteParser::New_table_nameContext::getRuleIndex() const {
  return SQLiteParser::RuleNew_table_name;
}

antlrcpp::Any SQLiteParser::New_table_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLiteVisitor*>(visitor))
    return parserVisitor->visitNew_table_name(this);
  else
    return visitor->visitChildren(this);
}

SQLiteParser::New_table_nameContext* SQLiteParser::new_table_name() {
  New_table_nameContext *_localctx = _tracker.createInstance<New_table_nameContext>(_ctx, getState());
  enterRule(_localctx, 138, SQLiteParser::RuleNew_table_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1698);
    any_name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Column_nameContext ------------------------------------------------------------------

SQLiteParser::Column_nameContext::Column_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SQLiteParser::Any_nameContext* SQLiteParser::Column_nameContext::any_name() {
  return getRuleContext<SQLiteParser::Any_nameContext>(0);
}


size_t SQLiteParser::Column_nameContext::getRuleIndex() const {
  return SQLiteParser::RuleColumn_name;
}

antlrcpp::Any SQLiteParser::Column_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLiteVisitor*>(visitor))
    return parserVisitor->visitColumn_name(this);
  else
    return visitor->visitChildren(this);
}

SQLiteParser::Column_nameContext* SQLiteParser::column_name() {
  Column_nameContext *_localctx = _tracker.createInstance<Column_nameContext>(_ctx, getState());
  enterRule(_localctx, 140, SQLiteParser::RuleColumn_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1700);
    any_name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Collation_nameContext ------------------------------------------------------------------

SQLiteParser::Collation_nameContext::Collation_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SQLiteParser::Any_nameContext* SQLiteParser::Collation_nameContext::any_name() {
  return getRuleContext<SQLiteParser::Any_nameContext>(0);
}


size_t SQLiteParser::Collation_nameContext::getRuleIndex() const {
  return SQLiteParser::RuleCollation_name;
}

antlrcpp::Any SQLiteParser::Collation_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLiteVisitor*>(visitor))
    return parserVisitor->visitCollation_name(this);
  else
    return visitor->visitChildren(this);
}

SQLiteParser::Collation_nameContext* SQLiteParser::collation_name() {
  Collation_nameContext *_localctx = _tracker.createInstance<Collation_nameContext>(_ctx, getState());
  enterRule(_localctx, 142, SQLiteParser::RuleCollation_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1702);
    any_name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Foreign_tableContext ------------------------------------------------------------------

SQLiteParser::Foreign_tableContext::Foreign_tableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SQLiteParser::Any_nameContext* SQLiteParser::Foreign_tableContext::any_name() {
  return getRuleContext<SQLiteParser::Any_nameContext>(0);
}


size_t SQLiteParser::Foreign_tableContext::getRuleIndex() const {
  return SQLiteParser::RuleForeign_table;
}

antlrcpp::Any SQLiteParser::Foreign_tableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLiteVisitor*>(visitor))
    return parserVisitor->visitForeign_table(this);
  else
    return visitor->visitChildren(this);
}

SQLiteParser::Foreign_tableContext* SQLiteParser::foreign_table() {
  Foreign_tableContext *_localctx = _tracker.createInstance<Foreign_tableContext>(_ctx, getState());
  enterRule(_localctx, 144, SQLiteParser::RuleForeign_table);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1704);
    any_name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Index_nameContext ------------------------------------------------------------------

SQLiteParser::Index_nameContext::Index_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SQLiteParser::Any_nameContext* SQLiteParser::Index_nameContext::any_name() {
  return getRuleContext<SQLiteParser::Any_nameContext>(0);
}


size_t SQLiteParser::Index_nameContext::getRuleIndex() const {
  return SQLiteParser::RuleIndex_name;
}

antlrcpp::Any SQLiteParser::Index_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLiteVisitor*>(visitor))
    return parserVisitor->visitIndex_name(this);
  else
    return visitor->visitChildren(this);
}

SQLiteParser::Index_nameContext* SQLiteParser::index_name() {
  Index_nameContext *_localctx = _tracker.createInstance<Index_nameContext>(_ctx, getState());
  enterRule(_localctx, 146, SQLiteParser::RuleIndex_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1706);
    any_name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Trigger_nameContext ------------------------------------------------------------------

SQLiteParser::Trigger_nameContext::Trigger_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SQLiteParser::Any_nameContext* SQLiteParser::Trigger_nameContext::any_name() {
  return getRuleContext<SQLiteParser::Any_nameContext>(0);
}


size_t SQLiteParser::Trigger_nameContext::getRuleIndex() const {
  return SQLiteParser::RuleTrigger_name;
}

antlrcpp::Any SQLiteParser::Trigger_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLiteVisitor*>(visitor))
    return parserVisitor->visitTrigger_name(this);
  else
    return visitor->visitChildren(this);
}

SQLiteParser::Trigger_nameContext* SQLiteParser::trigger_name() {
  Trigger_nameContext *_localctx = _tracker.createInstance<Trigger_nameContext>(_ctx, getState());
  enterRule(_localctx, 148, SQLiteParser::RuleTrigger_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1708);
    any_name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- View_nameContext ------------------------------------------------------------------

SQLiteParser::View_nameContext::View_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SQLiteParser::Any_nameContext* SQLiteParser::View_nameContext::any_name() {
  return getRuleContext<SQLiteParser::Any_nameContext>(0);
}


size_t SQLiteParser::View_nameContext::getRuleIndex() const {
  return SQLiteParser::RuleView_name;
}

antlrcpp::Any SQLiteParser::View_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLiteVisitor*>(visitor))
    return parserVisitor->visitView_name(this);
  else
    return visitor->visitChildren(this);
}

SQLiteParser::View_nameContext* SQLiteParser::view_name() {
  View_nameContext *_localctx = _tracker.createInstance<View_nameContext>(_ctx, getState());
  enterRule(_localctx, 150, SQLiteParser::RuleView_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1710);
    any_name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Module_nameContext ------------------------------------------------------------------

SQLiteParser::Module_nameContext::Module_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SQLiteParser::Any_nameContext* SQLiteParser::Module_nameContext::any_name() {
  return getRuleContext<SQLiteParser::Any_nameContext>(0);
}


size_t SQLiteParser::Module_nameContext::getRuleIndex() const {
  return SQLiteParser::RuleModule_name;
}

antlrcpp::Any SQLiteParser::Module_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLiteVisitor*>(visitor))
    return parserVisitor->visitModule_name(this);
  else
    return visitor->visitChildren(this);
}

SQLiteParser::Module_nameContext* SQLiteParser::module_name() {
  Module_nameContext *_localctx = _tracker.createInstance<Module_nameContext>(_ctx, getState());
  enterRule(_localctx, 152, SQLiteParser::RuleModule_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1712);
    any_name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pragma_nameContext ------------------------------------------------------------------

SQLiteParser::Pragma_nameContext::Pragma_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SQLiteParser::Any_nameContext* SQLiteParser::Pragma_nameContext::any_name() {
  return getRuleContext<SQLiteParser::Any_nameContext>(0);
}


size_t SQLiteParser::Pragma_nameContext::getRuleIndex() const {
  return SQLiteParser::RulePragma_name;
}

antlrcpp::Any SQLiteParser::Pragma_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLiteVisitor*>(visitor))
    return parserVisitor->visitPragma_name(this);
  else
    return visitor->visitChildren(this);
}

SQLiteParser::Pragma_nameContext* SQLiteParser::pragma_name() {
  Pragma_nameContext *_localctx = _tracker.createInstance<Pragma_nameContext>(_ctx, getState());
  enterRule(_localctx, 154, SQLiteParser::RulePragma_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1714);
    any_name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Savepoint_nameContext ------------------------------------------------------------------

SQLiteParser::Savepoint_nameContext::Savepoint_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SQLiteParser::Any_nameContext* SQLiteParser::Savepoint_nameContext::any_name() {
  return getRuleContext<SQLiteParser::Any_nameContext>(0);
}


size_t SQLiteParser::Savepoint_nameContext::getRuleIndex() const {
  return SQLiteParser::RuleSavepoint_name;
}

antlrcpp::Any SQLiteParser::Savepoint_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLiteVisitor*>(visitor))
    return parserVisitor->visitSavepoint_name(this);
  else
    return visitor->visitChildren(this);
}

SQLiteParser::Savepoint_nameContext* SQLiteParser::savepoint_name() {
  Savepoint_nameContext *_localctx = _tracker.createInstance<Savepoint_nameContext>(_ctx, getState());
  enterRule(_localctx, 156, SQLiteParser::RuleSavepoint_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1716);
    any_name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Table_aliasContext ------------------------------------------------------------------

SQLiteParser::Table_aliasContext::Table_aliasContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SQLiteParser::Any_nameContext* SQLiteParser::Table_aliasContext::any_name() {
  return getRuleContext<SQLiteParser::Any_nameContext>(0);
}


size_t SQLiteParser::Table_aliasContext::getRuleIndex() const {
  return SQLiteParser::RuleTable_alias;
}

antlrcpp::Any SQLiteParser::Table_aliasContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLiteVisitor*>(visitor))
    return parserVisitor->visitTable_alias(this);
  else
    return visitor->visitChildren(this);
}

SQLiteParser::Table_aliasContext* SQLiteParser::table_alias() {
  Table_aliasContext *_localctx = _tracker.createInstance<Table_aliasContext>(_ctx, getState());
  enterRule(_localctx, 158, SQLiteParser::RuleTable_alias);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1718);
    any_name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Transaction_nameContext ------------------------------------------------------------------

SQLiteParser::Transaction_nameContext::Transaction_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SQLiteParser::Any_nameContext* SQLiteParser::Transaction_nameContext::any_name() {
  return getRuleContext<SQLiteParser::Any_nameContext>(0);
}


size_t SQLiteParser::Transaction_nameContext::getRuleIndex() const {
  return SQLiteParser::RuleTransaction_name;
}

antlrcpp::Any SQLiteParser::Transaction_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLiteVisitor*>(visitor))
    return parserVisitor->visitTransaction_name(this);
  else
    return visitor->visitChildren(this);
}

SQLiteParser::Transaction_nameContext* SQLiteParser::transaction_name() {
  Transaction_nameContext *_localctx = _tracker.createInstance<Transaction_nameContext>(_ctx, getState());
  enterRule(_localctx, 160, SQLiteParser::RuleTransaction_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1720);
    any_name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Any_nameContext ------------------------------------------------------------------

SQLiteParser::Any_nameContext::Any_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SQLiteParser::Any_nameContext::IDENTIFIER() {
  return getToken(SQLiteParser::IDENTIFIER, 0);
}

SQLiteParser::KeywordContext* SQLiteParser::Any_nameContext::keyword() {
  return getRuleContext<SQLiteParser::KeywordContext>(0);
}

tree::TerminalNode* SQLiteParser::Any_nameContext::STRING_LITERAL() {
  return getToken(SQLiteParser::STRING_LITERAL, 0);
}

SQLiteParser::Any_nameContext* SQLiteParser::Any_nameContext::any_name() {
  return getRuleContext<SQLiteParser::Any_nameContext>(0);
}


size_t SQLiteParser::Any_nameContext::getRuleIndex() const {
  return SQLiteParser::RuleAny_name;
}

antlrcpp::Any SQLiteParser::Any_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLiteVisitor*>(visitor))
    return parserVisitor->visitAny_name(this);
  else
    return visitor->visitChildren(this);
}

SQLiteParser::Any_nameContext* SQLiteParser::any_name() {
  Any_nameContext *_localctx = _tracker.createInstance<Any_nameContext>(_ctx, getState());
  enterRule(_localctx, 162, SQLiteParser::RuleAny_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1729);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SQLiteParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(1722);
        match(SQLiteParser::IDENTIFIER);
        break;
      }

      case SQLiteParser::K_ABORT:
      case SQLiteParser::K_ACTION:
      case SQLiteParser::K_ADD:
      case SQLiteParser::K_AFTER:
      case SQLiteParser::K_ALL:
      case SQLiteParser::K_ALTER:
      case SQLiteParser::K_ANALYZE:
      case SQLiteParser::K_AND:
      case SQLiteParser::K_AS:
      case SQLiteParser::K_ASC:
      case SQLiteParser::K_ATTACH:
      case SQLiteParser::K_AUTOINCREMENT:
      case SQLiteParser::K_BEFORE:
      case SQLiteParser::K_BEGIN:
      case SQLiteParser::K_BETWEEN:
      case SQLiteParser::K_BY:
      case SQLiteParser::K_CASCADE:
      case SQLiteParser::K_CASE:
      case SQLiteParser::K_CAST:
      case SQLiteParser::K_CHECK:
      case SQLiteParser::K_COLLATE:
      case SQLiteParser::K_COLUMN:
      case SQLiteParser::K_COMMIT:
      case SQLiteParser::K_CONFLICT:
      case SQLiteParser::K_CONSTRAINT:
      case SQLiteParser::K_CREATE:
      case SQLiteParser::K_CROSS:
      case SQLiteParser::K_CURRENT_DATE:
      case SQLiteParser::K_CURRENT_TIME:
      case SQLiteParser::K_CURRENT_TIMESTAMP:
      case SQLiteParser::K_DATABASE:
      case SQLiteParser::K_DEFAULT:
      case SQLiteParser::K_DEFERRABLE:
      case SQLiteParser::K_DEFERRED:
      case SQLiteParser::K_DELETE:
      case SQLiteParser::K_DESC:
      case SQLiteParser::K_DETACH:
      case SQLiteParser::K_DISTINCT:
      case SQLiteParser::K_DROP:
      case SQLiteParser::K_EACH:
      case SQLiteParser::K_ELSE:
      case SQLiteParser::K_END:
      case SQLiteParser::K_ESCAPE:
      case SQLiteParser::K_EXCEPT:
      case SQLiteParser::K_EXCLUSIVE:
      case SQLiteParser::K_EXISTS:
      case SQLiteParser::K_EXPLAIN:
      case SQLiteParser::K_FAIL:
      case SQLiteParser::K_FOR:
      case SQLiteParser::K_FOREIGN:
      case SQLiteParser::K_FROM:
      case SQLiteParser::K_FULL:
      case SQLiteParser::K_GLOB:
      case SQLiteParser::K_GROUP:
      case SQLiteParser::K_HAVING:
      case SQLiteParser::K_IF:
      case SQLiteParser::K_IGNORE:
      case SQLiteParser::K_IMMEDIATE:
      case SQLiteParser::K_IN:
      case SQLiteParser::K_INDEX:
      case SQLiteParser::K_INDEXED:
      case SQLiteParser::K_INITIALLY:
      case SQLiteParser::K_INNER:
      case SQLiteParser::K_INSERT:
      case SQLiteParser::K_INSTEAD:
      case SQLiteParser::K_INTERSECT:
      case SQLiteParser::K_INTO:
      case SQLiteParser::K_IS:
      case SQLiteParser::K_ISNULL:
      case SQLiteParser::K_JOIN:
      case SQLiteParser::K_KEY:
      case SQLiteParser::K_LEFT:
      case SQLiteParser::K_LIKE:
      case SQLiteParser::K_LIMIT:
      case SQLiteParser::K_MATCH:
      case SQLiteParser::K_NATURAL:
      case SQLiteParser::K_NO:
      case SQLiteParser::K_NOT:
      case SQLiteParser::K_NOTNULL:
      case SQLiteParser::K_NULL:
      case SQLiteParser::K_OF:
      case SQLiteParser::K_OFFSET:
      case SQLiteParser::K_ON:
      case SQLiteParser::K_OR:
      case SQLiteParser::K_ORDER:
      case SQLiteParser::K_OUTER:
      case SQLiteParser::K_PLAN:
      case SQLiteParser::K_PRAGMA:
      case SQLiteParser::K_PRIMARY:
      case SQLiteParser::K_QUERY:
      case SQLiteParser::K_RAISE:
      case SQLiteParser::K_RECURSIVE:
      case SQLiteParser::K_REFERENCES:
      case SQLiteParser::K_REGEXP:
      case SQLiteParser::K_REINDEX:
      case SQLiteParser::K_RELEASE:
      case SQLiteParser::K_RENAME:
      case SQLiteParser::K_REPLACE:
      case SQLiteParser::K_RESTRICT:
      case SQLiteParser::K_RIGHT:
      case SQLiteParser::K_ROLLBACK:
      case SQLiteParser::K_ROW:
      case SQLiteParser::K_SAVEPOINT:
      case SQLiteParser::K_SELECT:
      case SQLiteParser::K_SET:
      case SQLiteParser::K_TABLE:
      case SQLiteParser::K_TEMP:
      case SQLiteParser::K_TEMPORARY:
      case SQLiteParser::K_THEN:
      case SQLiteParser::K_TO:
      case SQLiteParser::K_TRANSACTION:
      case SQLiteParser::K_TRIGGER:
      case SQLiteParser::K_UNION:
      case SQLiteParser::K_UNIQUE:
      case SQLiteParser::K_UPDATE:
      case SQLiteParser::K_USING:
      case SQLiteParser::K_VACUUM:
      case SQLiteParser::K_VALUES:
      case SQLiteParser::K_VIEW:
      case SQLiteParser::K_VIRTUAL:
      case SQLiteParser::K_WHEN:
      case SQLiteParser::K_WHERE:
      case SQLiteParser::K_WITH:
      case SQLiteParser::K_WITHOUT: {
        enterOuterAlt(_localctx, 2);
        setState(1723);
        keyword();
        break;
      }

      case SQLiteParser::STRING_LITERAL: {
        enterOuterAlt(_localctx, 3);
        setState(1724);
        match(SQLiteParser::STRING_LITERAL);
        break;
      }

      case SQLiteParser::OPEN_PAR: {
        enterOuterAlt(_localctx, 4);
        setState(1725);
        match(SQLiteParser::OPEN_PAR);
        setState(1726);
        any_name();
        setState(1727);
        match(SQLiteParser::CLOSE_PAR);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool SQLiteParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 39: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool SQLiteParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 20);
    case 1: return precpred(_ctx, 19);
    case 2: return precpred(_ctx, 18);
    case 3: return precpred(_ctx, 17);
    case 4: return precpred(_ctx, 16);
    case 5: return precpred(_ctx, 15);
    case 6: return precpred(_ctx, 14);
    case 7: return precpred(_ctx, 13);
    case 8: return precpred(_ctx, 6);
    case 9: return precpred(_ctx, 5);
    case 10: return precpred(_ctx, 9);
    case 11: return precpred(_ctx, 8);
    case 12: return precpred(_ctx, 7);
    case 13: return precpred(_ctx, 4);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> SQLiteParser::_decisionToDFA;
atn::PredictionContextCache SQLiteParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN SQLiteParser::_atn;
std::vector<uint16_t> SQLiteParser::_serializedATN;

std::vector<std::string> SQLiteParser::_ruleNames = {
  "parse", "error", "sql_stmt_list", "sql_stmt", "alter_table_stmt", "analyze_stmt", 
  "attach_stmt", "begin_stmt", "commit_stmt", "compound_select_stmt", "create_index_stmt", 
  "create_table_stmt", "create_trigger_stmt", "create_view_stmt", "create_virtual_table_stmt", 
  "delete_stmt", "delete_stmt_limited", "detach_stmt", "drop_index_stmt", 
  "drop_table_stmt", "drop_trigger_stmt", "drop_view_stmt", "factored_select_stmt", 
  "insert_stmt", "pragma_stmt", "reindex_stmt", "release_stmt", "rollback_stmt", 
  "savepoint_stmt", "simple_select_stmt", "select_stmt", "select_or_values", 
  "update_stmt", "update_stmt_limited", "vacuum_stmt", "column_def", "type_name", 
  "column_constraint", "conflict_clause", "expr", "foreign_key_clause", 
  "raise_function", "indexed_column", "table_constraint", "with_clause", 
  "qualified_table_name", "ordering_term", "pragma_value", "common_table_expression", 
  "result_column", "table_or_subquery", "join_clause", "join_operator", 
  "join_constraint", "select_core", "compound_operator", "cte_table_name", 
  "signed_number", "literal_value", "unary_operator", "error_message", "module_argument", 
  "column_alias", "keyword", "name", "function_name", "database_name", "table_name", 
  "table_or_index_name", "new_table_name", "column_name", "collation_name", 
  "foreign_table", "index_name", "trigger_name", "view_name", "module_name", 
  "pragma_name", "savepoint_name", "table_alias", "transaction_name", "any_name"
};

std::vector<std::string> SQLiteParser::_literalNames = {
  "", "';'", "'.'", "'('", "')'", "','", "'='", "'*'", "'+'", "'-'", "'~'", 
  "'||'", "'/'", "'%'", "'<<'", "'>>'", "'&'", "'|'", "'<'", "'<='", "'>'", 
  "'>='", "'=='", "'!='", "'<>'"
};

std::vector<std::string> SQLiteParser::_symbolicNames = {
  "", "SCOL", "DOT", "OPEN_PAR", "CLOSE_PAR", "COMMA", "ASSIGN", "STAR", 
  "PLUS", "MINUS", "TILDE", "PIPE2", "DIV", "MOD", "LT2", "GT2", "AMP", 
  "PIPE", "LT", "LT_EQ", "GT", "GT_EQ", "EQ", "NOT_EQ1", "NOT_EQ2", "K_ABORT", 
  "K_ACTION", "K_ADD", "K_AFTER", "K_ALL", "K_ALTER", "K_ANALYZE", "K_AND", 
  "K_AS", "K_ASC", "K_ATTACH", "K_AUTOINCREMENT", "K_BEFORE", "K_BEGIN", 
  "K_BETWEEN", "K_BY", "K_CASCADE", "K_CASE", "K_CAST", "K_CHECK", "K_COLLATE", 
  "K_COLUMN", "K_COMMIT", "K_CONFLICT", "K_CONSTRAINT", "K_CREATE", "K_CROSS", 
  "K_CURRENT_DATE", "K_CURRENT_TIME", "K_CURRENT_TIMESTAMP", "K_DATABASE", 
  "K_DEFAULT", "K_DEFERRABLE", "K_DEFERRED", "K_DELETE", "K_DESC", "K_DETACH", 
  "K_DISTINCT", "K_DROP", "K_EACH", "K_ELSE", "K_END", "K_ESCAPE", "K_EXCEPT", 
  "K_EXCLUSIVE", "K_EXISTS", "K_EXPLAIN", "K_FAIL", "K_FOR", "K_FOREIGN", 
  "K_FROM", "K_FULL", "K_GLOB", "K_GROUP", "K_HAVING", "K_IF", "K_IGNORE", 
  "K_IMMEDIATE", "K_IN", "K_INDEX", "K_INDEXED", "K_INITIALLY", "K_INNER", 
  "K_INSERT", "K_INSTEAD", "K_INTERSECT", "K_INTO", "K_IS", "K_ISNULL", 
  "K_JOIN", "K_KEY", "K_LEFT", "K_LIKE", "K_LIMIT", "K_MATCH", "K_NATURAL", 
  "K_NO", "K_NOT", "K_NOTNULL", "K_NULL", "K_OF", "K_OFFSET", "K_ON", "K_OR", 
  "K_ORDER", "K_OUTER", "K_PLAN", "K_PRAGMA", "K_PRIMARY", "K_QUERY", "K_RAISE", 
  "K_RECURSIVE", "K_REFERENCES", "K_REGEXP", "K_REINDEX", "K_RELEASE", "K_RENAME", 
  "K_REPLACE", "K_RESTRICT", "K_RIGHT", "K_ROLLBACK", "K_ROW", "K_SAVEPOINT", 
  "K_SELECT", "K_SET", "K_TABLE", "K_TEMP", "K_TEMPORARY", "K_THEN", "K_TO", 
  "K_TRANSACTION", "K_TRIGGER", "K_UNION", "K_UNIQUE", "K_UPDATE", "K_USING", 
  "K_VACUUM", "K_VALUES", "K_VIEW", "K_VIRTUAL", "K_WHEN", "K_WHERE", "K_WITH", 
  "K_WITHOUT", "IDENTIFIER", "NUMERIC_LITERAL", "BIND_PARAMETER", "STRING_LITERAL", 
  "BLOB_LITERAL", "SINGLE_LINE_COMMENT", "MULTILINE_COMMENT", "SPACES", 
  "UNEXPECTED_CHAR"
};

dfa::Vocabulary SQLiteParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> SQLiteParser::_tokenNames;

SQLiteParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x9f, 0x6c6, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 
    0x9, 0x22, 0x4, 0x23, 0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 
    0x25, 0x4, 0x26, 0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 
    0x4, 0x29, 0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 0x2b, 0x4, 
    0x2c, 0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x4, 0x2e, 0x9, 0x2e, 0x4, 0x2f, 
    0x9, 0x2f, 0x4, 0x30, 0x9, 0x30, 0x4, 0x31, 0x9, 0x31, 0x4, 0x32, 0x9, 
    0x32, 0x4, 0x33, 0x9, 0x33, 0x4, 0x34, 0x9, 0x34, 0x4, 0x35, 0x9, 0x35, 
    0x4, 0x36, 0x9, 0x36, 0x4, 0x37, 0x9, 0x37, 0x4, 0x38, 0x9, 0x38, 0x4, 
    0x39, 0x9, 0x39, 0x4, 0x3a, 0x9, 0x3a, 0x4, 0x3b, 0x9, 0x3b, 0x4, 0x3c, 
    0x9, 0x3c, 0x4, 0x3d, 0x9, 0x3d, 0x4, 0x3e, 0x9, 0x3e, 0x4, 0x3f, 0x9, 
    0x3f, 0x4, 0x40, 0x9, 0x40, 0x4, 0x41, 0x9, 0x41, 0x4, 0x42, 0x9, 0x42, 
    0x4, 0x43, 0x9, 0x43, 0x4, 0x44, 0x9, 0x44, 0x4, 0x45, 0x9, 0x45, 0x4, 
    0x46, 0x9, 0x46, 0x4, 0x47, 0x9, 0x47, 0x4, 0x48, 0x9, 0x48, 0x4, 0x49, 
    0x9, 0x49, 0x4, 0x4a, 0x9, 0x4a, 0x4, 0x4b, 0x9, 0x4b, 0x4, 0x4c, 0x9, 
    0x4c, 0x4, 0x4d, 0x9, 0x4d, 0x4, 0x4e, 0x9, 0x4e, 0x4, 0x4f, 0x9, 0x4f, 
    0x4, 0x50, 0x9, 0x50, 0x4, 0x51, 0x9, 0x51, 0x4, 0x52, 0x9, 0x52, 0x4, 
    0x53, 0x9, 0x53, 0x3, 0x2, 0x3, 0x2, 0x7, 0x2, 0xa9, 0xa, 0x2, 0xc, 
    0x2, 0xe, 0x2, 0xac, 0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x4, 0x7, 0x4, 0xb4, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0xb7, 
    0xb, 0x4, 0x3, 0x4, 0x3, 0x4, 0x6, 0x4, 0xbb, 0xa, 0x4, 0xd, 0x4, 0xe, 
    0x4, 0xbc, 0x3, 0x4, 0x7, 0x4, 0xc0, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0xc3, 
    0xb, 0x4, 0x3, 0x4, 0x7, 0x4, 0xc6, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0xc9, 
    0xb, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0xce, 0xa, 0x5, 0x5, 
    0x5, 0xd0, 0xa, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0xf0, 0xa, 0x5, 0x3, 
    0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0xf7, 0xa, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 
    0xff, 0xa, 0x6, 0x3, 0x6, 0x5, 0x6, 0x102, 0xa, 0x6, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x10b, 
    0xa, 0x7, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x10f, 0xa, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x117, 0xa, 0x9, 
    0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x11b, 0xa, 0x9, 0x5, 0x9, 0x11d, 0xa, 
    0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0x122, 0xa, 0xa, 0x5, 0xa, 
    0x124, 0xa, 0xa, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0x128, 0xa, 0xb, 0x3, 
    0xb, 0x3, 0xb, 0x3, 0xb, 0x7, 0xb, 0x12d, 0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 
    0x130, 0xb, 0xb, 0x5, 0xb, 0x132, 0xa, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 
    0xb, 0x5, 0xb, 0x137, 0xa, 0xb, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0x13b, 
    0xa, 0xb, 0x3, 0xb, 0x6, 0xb, 0x13e, 0xa, 0xb, 0xd, 0xb, 0xe, 0xb, 0x13f, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x7, 0xb, 0x147, 0xa, 
    0xb, 0xc, 0xb, 0xe, 0xb, 0x14a, 0xb, 0xb, 0x5, 0xb, 0x14c, 0xa, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0x152, 0xa, 0xb, 0x5, 
    0xb, 0x154, 0xa, 0xb, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0x158, 0xa, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0x15e, 0xa, 0xc, 0x3, 
    0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0x163, 0xa, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x7, 0xc, 0x16c, 0xa, 
    0xc, 0xc, 0xc, 0xe, 0xc, 0x16f, 0xb, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x5, 0xc, 0x174, 0xa, 0xc, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0x178, 0xa, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0x17e, 0xa, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0x183, 0xa, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x7, 0xd, 0x18a, 0xa, 0xd, 0xc, 0xd, 
    0xe, 0xd, 0x18d, 0xb, 0xd, 0x3, 0xd, 0x3, 0xd, 0x7, 0xd, 0x191, 0xa, 
    0xd, 0xc, 0xd, 0xe, 0xd, 0x194, 0xb, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
    0x5, 0xd, 0x199, 0xa, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0x19d, 0xa, 
    0xd, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x1a1, 0xa, 0xe, 0x3, 0xe, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x1a7, 0xa, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x5, 0xe, 0x1ac, 0xa, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 
    0x3, 0xe, 0x5, 0xe, 0x1b3, 0xa, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x7, 0xe, 0x1bc, 0xa, 0xe, 0xc, 0xe, 
    0xe, 0xe, 0x1bf, 0xb, 0xe, 0x5, 0xe, 0x1c1, 0xa, 0xe, 0x5, 0xe, 0x1c3, 
    0xa, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x1c9, 0xa, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x1cf, 0xa, 0xe, 
    0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x1d3, 0xa, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x1da, 0xa, 0xe, 0x3, 0xe, 0x3, 0xe, 
    0x6, 0xe, 0x1de, 0xa, 0xe, 0xd, 0xe, 0xe, 0xe, 0x1df, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0x1e6, 0xa, 0xf, 0x3, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0x1ec, 0xa, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 
    0xf, 0x5, 0xf, 0x1f1, 0xa, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 
    0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 
    0x10, 0x1fd, 0xa, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 
    0x202, 0xa, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x3, 0x10, 0x3, 0x10, 0x7, 0x10, 0x20b, 0xa, 0x10, 0xc, 0x10, 0xe, 0x10, 
    0x20e, 0xb, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0x212, 0xa, 0x10, 
    0x3, 0x11, 0x5, 0x11, 0x215, 0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0x21c, 0xa, 0x11, 0x3, 0x12, 0x5, 0x12, 
    0x21f, 0xa, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x5, 0x12, 0x226, 0xa, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x7, 0x12, 0x22d, 0xa, 0x12, 0xc, 0x12, 0xe, 0x12, 0x230, 
    0xb, 0x12, 0x5, 0x12, 0x232, 0xa, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x5, 0x12, 0x238, 0xa, 0x12, 0x5, 0x12, 0x23a, 0xa, 0x12, 
    0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0x23e, 0xa, 0x13, 0x3, 0x13, 0x3, 0x13, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 0x246, 0xa, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 0x24b, 0xa, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x5, 0x15, 0x253, 
    0xa, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x5, 0x15, 0x258, 0xa, 0x15, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x5, 
    0x16, 0x260, 0xa, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x5, 0x16, 
    0x265, 0xa, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 
    0x3, 0x17, 0x5, 0x17, 0x26d, 0xa, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 
    0x5, 0x17, 0x272, 0xa, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x18, 0x3, 0x18, 
    0x5, 0x18, 0x278, 0xa, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x7, 0x18, 
    0x27d, 0xa, 0x18, 0xc, 0x18, 0xe, 0x18, 0x280, 0xb, 0x18, 0x5, 0x18, 
    0x282, 0xa, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x7, 0x18, 
    0x288, 0xa, 0x18, 0xc, 0x18, 0xe, 0x18, 0x28b, 0xb, 0x18, 0x3, 0x18, 
    0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x7, 0x18, 0x292, 0xa, 0x18, 
    0xc, 0x18, 0xe, 0x18, 0x295, 0xb, 0x18, 0x5, 0x18, 0x297, 0xa, 0x18, 
    0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x5, 0x18, 0x29d, 0xa, 0x18, 
    0x5, 0x18, 0x29f, 0xa, 0x18, 0x3, 0x19, 0x5, 0x19, 0x2a2, 0xa, 0x19, 
    0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 
    0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 
    0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x5, 0x19, 0x2b5, 0xa, 0x19, 
    0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x5, 0x19, 0x2bb, 0xa, 0x19, 
    0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x7, 0x19, 0x2c2, 
    0xa, 0x19, 0xc, 0x19, 0xe, 0x19, 0x2c5, 0xb, 0x19, 0x3, 0x19, 0x3, 0x19, 
    0x5, 0x19, 0x2c9, 0xa, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 
    0x3, 0x19, 0x7, 0x19, 0x2d0, 0xa, 0x19, 0xc, 0x19, 0xe, 0x19, 0x2d3, 
    0xb, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 
    0x19, 0x7, 0x19, 0x2db, 0xa, 0x19, 0xc, 0x19, 0xe, 0x19, 0x2de, 0xb, 
    0x19, 0x3, 0x19, 0x3, 0x19, 0x7, 0x19, 0x2e2, 0xa, 0x19, 0xc, 0x19, 
    0xe, 0x19, 0x2e5, 0xb, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x5, 0x19, 
    0x2ea, 0xa, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x5, 0x1a, 
    0x2f0, 0xa, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 
    0x3, 0x1a, 0x3, 0x1a, 0x5, 0x1a, 0x2f9, 0xa, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 
    0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x5, 0x1b, 0x300, 0xa, 0x1b, 0x3, 0x1b, 
    0x3, 0x1b, 0x5, 0x1b, 0x304, 0xa, 0x1b, 0x5, 0x1b, 0x306, 0xa, 0x1b, 
    0x3, 0x1c, 0x3, 0x1c, 0x5, 0x1c, 0x30a, 0xa, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 
    0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x5, 0x1d, 0x311, 0xa, 0x1d, 0x5, 0x1d, 
    0x313, 0xa, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x5, 0x1d, 0x317, 0xa, 0x1d, 
    0x3, 0x1d, 0x5, 0x1d, 0x31a, 0xa, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 
    0x3, 0x1f, 0x3, 0x1f, 0x5, 0x1f, 0x321, 0xa, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 
    0x3, 0x1f, 0x7, 0x1f, 0x326, 0xa, 0x1f, 0xc, 0x1f, 0xe, 0x1f, 0x329, 
    0xb, 0x1f, 0x5, 0x1f, 0x32b, 0xa, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 
    0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x7, 0x1f, 0x333, 0xa, 0x1f, 0xc, 0x1f, 
    0xe, 0x1f, 0x336, 0xb, 0x1f, 0x5, 0x1f, 0x338, 0xa, 0x1f, 0x3, 0x1f, 
    0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x5, 0x1f, 0x33e, 0xa, 0x1f, 0x5, 0x1f, 
    0x340, 0xa, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x5, 0x20, 0x344, 0xa, 0x20, 
    0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x7, 0x20, 0x349, 0xa, 0x20, 0xc, 0x20, 
    0xe, 0x20, 0x34c, 0xb, 0x20, 0x5, 0x20, 0x34e, 0xa, 0x20, 0x3, 0x20, 
    0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x7, 0x20, 0x354, 0xa, 0x20, 0xc, 0x20, 
    0xe, 0x20, 0x357, 0xb, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 
    0x3, 0x20, 0x7, 0x20, 0x35e, 0xa, 0x20, 0xc, 0x20, 0xe, 0x20, 0x361, 
    0xb, 0x20, 0x5, 0x20, 0x363, 0xa, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 
    0x3, 0x20, 0x5, 0x20, 0x369, 0xa, 0x20, 0x5, 0x20, 0x36b, 0xa, 0x20, 
    0x3, 0x21, 0x3, 0x21, 0x5, 0x21, 0x36f, 0xa, 0x21, 0x3, 0x21, 0x3, 0x21, 
    0x3, 0x21, 0x7, 0x21, 0x374, 0xa, 0x21, 0xc, 0x21, 0xe, 0x21, 0x377, 
    0xb, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x7, 0x21, 0x37d, 
    0xa, 0x21, 0xc, 0x21, 0xe, 0x21, 0x380, 0xb, 0x21, 0x3, 0x21, 0x5, 0x21, 
    0x383, 0xa, 0x21, 0x5, 0x21, 0x385, 0xa, 0x21, 0x3, 0x21, 0x3, 0x21, 
    0x5, 0x21, 0x389, 0xa, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 
    0x3, 0x21, 0x7, 0x21, 0x390, 0xa, 0x21, 0xc, 0x21, 0xe, 0x21, 0x393, 
    0xb, 0x21, 0x3, 0x21, 0x3, 0x21, 0x5, 0x21, 0x397, 0xa, 0x21, 0x5, 0x21, 
    0x399, 0xa, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 
    0x7, 0x21, 0x3a0, 0xa, 0x21, 0xc, 0x21, 0xe, 0x21, 0x3a3, 0xb, 0x21, 
    0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x7, 
    0x21, 0x3ab, 0xa, 0x21, 0xc, 0x21, 0xe, 0x21, 0x3ae, 0xb, 0x21, 0x3, 
    0x21, 0x3, 0x21, 0x7, 0x21, 0x3b2, 0xa, 0x21, 0xc, 0x21, 0xe, 0x21, 
    0x3b5, 0xb, 0x21, 0x5, 0x21, 0x3b7, 0xa, 0x21, 0x3, 0x22, 0x5, 0x22, 
    0x3ba, 0xa, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 
    0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x5, 
    0x22, 0x3c7, 0xa, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 
    0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x7, 
    0x22, 0x3d3, 0xa, 0x22, 0xc, 0x22, 0xe, 0x22, 0x3d6, 0xb, 0x22, 0x3, 
    0x22, 0x3, 0x22, 0x5, 0x22, 0x3da, 0xa, 0x22, 0x3, 0x23, 0x5, 0x23, 
    0x3dd, 0xa, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 
    0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x5, 
    0x23, 0x3ea, 0xa, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 
    0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x7, 
    0x23, 0x3f6, 0xa, 0x23, 0xc, 0x23, 0xe, 0x23, 0x3f9, 0xb, 0x23, 0x3, 
    0x23, 0x3, 0x23, 0x5, 0x23, 0x3fd, 0xa, 0x23, 0x3, 0x23, 0x3, 0x23, 
    0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x7, 0x23, 0x404, 0xa, 0x23, 0xc, 0x23, 
    0xe, 0x23, 0x407, 0xb, 0x23, 0x5, 0x23, 0x409, 0xa, 0x23, 0x3, 0x23, 
    0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x5, 0x23, 0x40f, 0xa, 0x23, 0x5, 0x23, 
    0x411, 0xa, 0x23, 0x3, 0x24, 0x3, 0x24, 0x3, 0x25, 0x3, 0x25, 0x5, 0x25, 
    0x417, 0xa, 0x25, 0x3, 0x25, 0x7, 0x25, 0x41a, 0xa, 0x25, 0xc, 0x25, 
    0xe, 0x25, 0x41d, 0xb, 0x25, 0x3, 0x26, 0x6, 0x26, 0x420, 0xa, 0x26, 
    0xd, 0x26, 0xe, 0x26, 0x421, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 
    0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x5, 
    0x26, 0x42e, 0xa, 0x26, 0x3, 0x27, 0x3, 0x27, 0x5, 0x27, 0x432, 0xa, 
    0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x5, 0x27, 0x437, 0xa, 0x27, 
    0x3, 0x27, 0x3, 0x27, 0x5, 0x27, 0x43b, 0xa, 0x27, 0x3, 0x27, 0x5, 0x27, 
    0x43e, 0xa, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 
    0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 
    0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x5, 0x27, 0x450, 
    0xa, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x5, 0x27, 0x455, 0xa, 0x27, 
    0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x5, 0x28, 0x45a, 0xa, 0x28, 0x3, 0x29, 
    0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x5, 0x29, 0x462, 
    0xa, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x5, 0x29, 0x467, 0xa, 0x29, 
    0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 
    0x29, 0x5, 0x29, 0x470, 0xa, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 
    0x7, 0x29, 0x475, 0xa, 0x29, 0xc, 0x29, 0xe, 0x29, 0x478, 0xb, 0x29, 
    0x3, 0x29, 0x5, 0x29, 0x47b, 0xa, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 
    0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 
    0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x5, 0x29, 0x48b, 
    0xa, 0x29, 0x3, 0x29, 0x5, 0x29, 0x48e, 0xa, 0x29, 0x3, 0x29, 0x3, 0x29, 
    0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x5, 0x29, 0x496, 0xa, 0x29, 
    0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x6, 0x29, 0x49d, 
    0xa, 0x29, 0xd, 0x29, 0xe, 0x29, 0x49e, 0x3, 0x29, 0x3, 0x29, 0x5, 0x29, 
    0x4a3, 0xa, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x5, 0x29, 0x4a8, 
    0xa, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 
    0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 
    0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 
    0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 
    0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x5, 0x29, 0x4c6, 0xa, 0x29, 0x3, 0x29, 
    0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 
    0x29, 0x3, 0x29, 0x3, 0x29, 0x5, 0x29, 0x4d2, 0xa, 0x29, 0x3, 0x29, 
    0x3, 0x29, 0x3, 0x29, 0x5, 0x29, 0x4d7, 0xa, 0x29, 0x3, 0x29, 0x3, 0x29, 
    0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 
    0x29, 0x3, 0x29, 0x5, 0x29, 0x4e3, 0xa, 0x29, 0x3, 0x29, 0x3, 0x29, 
    0x3, 0x29, 0x3, 0x29, 0x5, 0x29, 0x4e9, 0xa, 0x29, 0x3, 0x29, 0x3, 0x29, 
    0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x5, 0x29, 0x4f0, 0xa, 0x29, 0x3, 0x29, 
    0x3, 0x29, 0x5, 0x29, 0x4f4, 0xa, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 
    0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x7, 0x29, 0x4fc, 0xa, 0x29, 0xc, 0x29, 
    0xe, 0x29, 0x4ff, 0xb, 0x29, 0x5, 0x29, 0x501, 0xa, 0x29, 0x3, 0x29, 
    0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x5, 0x29, 0x507, 0xa, 0x29, 0x3, 0x29, 
    0x5, 0x29, 0x50a, 0xa, 0x29, 0x7, 0x29, 0x50c, 0xa, 0x29, 0xc, 0x29, 
    0xe, 0x29, 0x50f, 0xb, 0x29, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 
    0x3, 0x2a, 0x3, 0x2a, 0x7, 0x2a, 0x517, 0xa, 0x2a, 0xc, 0x2a, 0xe, 0x2a, 
    0x51a, 0xb, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x5, 0x2a, 0x51e, 0xa, 0x2a, 
    0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 
    0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x5, 0x2a, 0x52a, 0xa, 0x2a, 
    0x3, 0x2a, 0x3, 0x2a, 0x5, 0x2a, 0x52e, 0xa, 0x2a, 0x7, 0x2a, 0x530, 
    0xa, 0x2a, 0xc, 0x2a, 0xe, 0x2a, 0x533, 0xb, 0x2a, 0x3, 0x2a, 0x5, 0x2a, 
    0x536, 0xa, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 
    0x5, 0x2a, 0x53d, 0xa, 0x2a, 0x5, 0x2a, 0x53f, 0xa, 0x2a, 0x3, 0x2b, 
    0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x5, 0x2b, 0x547, 
    0xa, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x5, 
    0x2c, 0x54e, 0xa, 0x2c, 0x3, 0x2c, 0x5, 0x2c, 0x551, 0xa, 0x2c, 0x3, 
    0x2d, 0x3, 0x2d, 0x5, 0x2d, 0x555, 0xa, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 
    0x3, 0x2d, 0x5, 0x2d, 0x55a, 0xa, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 
    0x3, 0x2d, 0x7, 0x2d, 0x560, 0xa, 0x2d, 0xc, 0x2d, 0xe, 0x2d, 0x563, 
    0xb, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 
    0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 
    0x3, 0x2d, 0x3, 0x2d, 0x7, 0x2d, 0x573, 0xa, 0x2d, 0xc, 0x2d, 0xe, 0x2d, 
    0x576, 0xb, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x5, 0x2d, 0x57b, 
    0xa, 0x2d, 0x3, 0x2e, 0x3, 0x2e, 0x5, 0x2e, 0x57f, 0xa, 0x2e, 0x3, 0x2e, 
    0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 
    0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x7, 0x2e, 0x58d, 
    0xa, 0x2e, 0xc, 0x2e, 0xe, 0x2e, 0x590, 0xb, 0x2e, 0x3, 0x2f, 0x3, 0x2f, 
    0x3, 0x2f, 0x5, 0x2f, 0x595, 0xa, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 
    0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x5, 0x2f, 0x59d, 0xa, 0x2f, 0x3, 0x30, 
    0x3, 0x30, 0x3, 0x30, 0x5, 0x30, 0x5a2, 0xa, 0x30, 0x3, 0x30, 0x5, 0x30, 
    0x5a5, 0xa, 0x30, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x5, 0x31, 0x5aa, 
    0xa, 0x31, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x7, 
    0x32, 0x5b1, 0xa, 0x32, 0xc, 0x32, 0xe, 0x32, 0x5b4, 0xb, 0x32, 0x3, 
    0x32, 0x3, 0x32, 0x5, 0x32, 0x5b8, 0xa, 0x32, 0x3, 0x32, 0x3, 0x32, 
    0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 
    0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x5, 0x33, 0x5c6, 0xa, 0x33, 
    0x3, 0x33, 0x5, 0x33, 0x5c9, 0xa, 0x33, 0x5, 0x33, 0x5cb, 0xa, 0x33, 
    0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x5, 0x34, 0x5d0, 0xa, 0x34, 0x3, 0x34, 
    0x3, 0x34, 0x5, 0x34, 0x5d4, 0xa, 0x34, 0x3, 0x34, 0x5, 0x34, 0x5d7, 
    0xa, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x5, 
    0x34, 0x5de, 0xa, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 
    0x7, 0x34, 0x5e4, 0xa, 0x34, 0xc, 0x34, 0xe, 0x34, 0x5e7, 0xb, 0x34, 
    0x3, 0x34, 0x5, 0x34, 0x5ea, 0xa, 0x34, 0x3, 0x34, 0x3, 0x34, 0x5, 0x34, 
    0x5ee, 0xa, 0x34, 0x3, 0x34, 0x5, 0x34, 0x5f1, 0xa, 0x34, 0x3, 0x34, 
    0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x5, 0x34, 0x5f7, 0xa, 0x34, 0x3, 0x34, 
    0x5, 0x34, 0x5fa, 0xa, 0x34, 0x5, 0x34, 0x5fc, 0xa, 0x34, 0x3, 0x35, 
    0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x7, 0x35, 0x603, 0xa, 0x35, 
    0xc, 0x35, 0xe, 0x35, 0x606, 0xb, 0x35, 0x3, 0x36, 0x3, 0x36, 0x5, 0x36, 
    0x60a, 0xa, 0x36, 0x3, 0x36, 0x3, 0x36, 0x5, 0x36, 0x60e, 0xa, 0x36, 
    0x3, 0x36, 0x3, 0x36, 0x5, 0x36, 0x612, 0xa, 0x36, 0x3, 0x36, 0x5, 0x36, 
    0x615, 0xa, 0x36, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 
    0x3, 0x37, 0x3, 0x37, 0x7, 0x37, 0x61e, 0xa, 0x37, 0xc, 0x37, 0xe, 0x37, 
    0x621, 0xb, 0x37, 0x3, 0x37, 0x3, 0x37, 0x5, 0x37, 0x625, 0xa, 0x37, 
    0x3, 0x38, 0x3, 0x38, 0x5, 0x38, 0x629, 0xa, 0x38, 0x3, 0x38, 0x3, 0x38, 
    0x3, 0x38, 0x7, 0x38, 0x62e, 0xa, 0x38, 0xc, 0x38, 0xe, 0x38, 0x631, 
    0xb, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x7, 0x38, 0x637, 
    0xa, 0x38, 0xc, 0x38, 0xe, 0x38, 0x63a, 0xb, 0x38, 0x3, 0x38, 0x5, 0x38, 
    0x63d, 0xa, 0x38, 0x5, 0x38, 0x63f, 0xa, 0x38, 0x3, 0x38, 0x3, 0x38, 
    0x5, 0x38, 0x643, 0xa, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 
    0x3, 0x38, 0x7, 0x38, 0x64a, 0xa, 0x38, 0xc, 0x38, 0xe, 0x38, 0x64d, 
    0xb, 0x38, 0x3, 0x38, 0x3, 0x38, 0x5, 0x38, 0x651, 0xa, 0x38, 0x5, 0x38, 
    0x653, 0xa, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 
    0x7, 0x38, 0x65a, 0xa, 0x38, 0xc, 0x38, 0xe, 0x38, 0x65d, 0xb, 0x38, 
    0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x7, 
    0x38, 0x665, 0xa, 0x38, 0xc, 0x38, 0xe, 0x38, 0x668, 0xb, 0x38, 0x3, 
    0x38, 0x3, 0x38, 0x7, 0x38, 0x66c, 0xa, 0x38, 0xc, 0x38, 0xe, 0x38, 
    0x66f, 0xb, 0x38, 0x5, 0x38, 0x671, 0xa, 0x38, 0x3, 0x39, 0x3, 0x39, 
    0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x5, 0x39, 0x678, 0xa, 0x39, 0x3, 0x3a, 
    0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x7, 0x3a, 0x67f, 0xa, 0x3a, 
    0xc, 0x3a, 0xe, 0x3a, 0x682, 0xb, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x5, 0x3a, 
    0x686, 0xa, 0x3a, 0x3, 0x3b, 0x5, 0x3b, 0x689, 0xa, 0x3b, 0x3, 0x3b, 
    0x3, 0x3b, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3e, 0x3, 
    0x3e, 0x3, 0x3f, 0x3, 0x3f, 0x5, 0x3f, 0x695, 0xa, 0x3f, 0x3, 0x40, 
    0x3, 0x40, 0x3, 0x41, 0x3, 0x41, 0x3, 0x42, 0x3, 0x42, 0x3, 0x43, 0x3, 
    0x43, 0x3, 0x44, 0x3, 0x44, 0x3, 0x45, 0x3, 0x45, 0x3, 0x46, 0x3, 0x46, 
    0x3, 0x47, 0x3, 0x47, 0x3, 0x48, 0x3, 0x48, 0x3, 0x49, 0x3, 0x49, 0x3, 
    0x4a, 0x3, 0x4a, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4d, 
    0x3, 0x4d, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x50, 0x3, 
    0x50, 0x3, 0x51, 0x3, 0x51, 0x3, 0x52, 0x3, 0x52, 0x3, 0x53, 0x3, 0x53, 
    0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x5, 0x53, 0x6c4, 
    0xa, 0x53, 0x3, 0x53, 0x2, 0x3, 0x50, 0x54, 0x2, 0x4, 0x6, 0x8, 0xa, 
    0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 
    0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 
    0x3c, 0x3e, 0x40, 0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 0x4e, 0x50, 0x52, 
    0x54, 0x56, 0x58, 0x5a, 0x5c, 0x5e, 0x60, 0x62, 0x64, 0x66, 0x68, 0x6a, 
    0x6c, 0x6e, 0x70, 0x72, 0x74, 0x76, 0x78, 0x7a, 0x7c, 0x7e, 0x80, 0x82, 
    0x84, 0x86, 0x88, 0x8a, 0x8c, 0x8e, 0x90, 0x92, 0x94, 0x96, 0x98, 0x9a, 
    0x9c, 0x9e, 0xa0, 0xa2, 0xa4, 0x2, 0x14, 0x5, 0x2, 0x3c, 0x3c, 0x47, 
    0x47, 0x54, 0x54, 0x4, 0x2, 0x31, 0x31, 0x44, 0x44, 0x4, 0x2, 0x7, 0x7, 
    0x6c, 0x6c, 0x3, 0x2, 0x85, 0x86, 0x4, 0x2, 0x1f, 0x1f, 0x40, 0x40, 
    0x4, 0x2, 0x24, 0x24, 0x3e, 0x3e, 0x7, 0x2, 0x1b, 0x1b, 0x4a, 0x4a, 
    0x53, 0x53, 0x7c, 0x7c, 0x7f, 0x7f, 0x4, 0x2, 0x9, 0x9, 0xe, 0xf, 0x3, 
    0x2, 0xa, 0xb, 0x3, 0x2, 0x10, 0x13, 0x3, 0x2, 0x14, 0x17, 0x6, 0x2, 
    0x4f, 0x4f, 0x63, 0x63, 0x65, 0x65, 0x78, 0x78, 0x4, 0x2, 0x3d, 0x3d, 
    0x8d, 0x8d, 0x5, 0x2, 0x1b, 0x1b, 0x4a, 0x4a, 0x7f, 0x7f, 0x6, 0x2, 
    0x36, 0x38, 0x6a, 0x6a, 0x98, 0x98, 0x9a, 0x9b, 0x4, 0x2, 0xa, 0xc, 
    0x68, 0x68, 0x4, 0x2, 0x97, 0x97, 0x9a, 0x9a, 0x3, 0x2, 0x1b, 0x96, 
    0x2, 0x7d3, 0x2, 0xaa, 0x3, 0x2, 0x2, 0x2, 0x4, 0xaf, 0x3, 0x2, 0x2, 
    0x2, 0x6, 0xb5, 0x3, 0x2, 0x2, 0x2, 0x8, 0xcf, 0x3, 0x2, 0x2, 0x2, 0xa, 
    0xf1, 0x3, 0x2, 0x2, 0x2, 0xc, 0x103, 0x3, 0x2, 0x2, 0x2, 0xe, 0x10c, 
    0x3, 0x2, 0x2, 0x2, 0x10, 0x114, 0x3, 0x2, 0x2, 0x2, 0x12, 0x11e, 0x3, 
    0x2, 0x2, 0x2, 0x14, 0x131, 0x3, 0x2, 0x2, 0x2, 0x16, 0x155, 0x3, 0x2, 
    0x2, 0x2, 0x18, 0x175, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x19e, 0x3, 0x2, 0x2, 
    0x2, 0x1c, 0x1e3, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x1f6, 0x3, 0x2, 0x2, 0x2, 
    0x20, 0x214, 0x3, 0x2, 0x2, 0x2, 0x22, 0x21e, 0x3, 0x2, 0x2, 0x2, 0x24, 
    0x23b, 0x3, 0x2, 0x2, 0x2, 0x26, 0x241, 0x3, 0x2, 0x2, 0x2, 0x28, 0x24e, 
    0x3, 0x2, 0x2, 0x2, 0x2a, 0x25b, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x268, 0x3, 
    0x2, 0x2, 0x2, 0x2e, 0x281, 0x3, 0x2, 0x2, 0x2, 0x30, 0x2a1, 0x3, 0x2, 
    0x2, 0x2, 0x32, 0x2eb, 0x3, 0x2, 0x2, 0x2, 0x34, 0x2fa, 0x3, 0x2, 0x2, 
    0x2, 0x36, 0x307, 0x3, 0x2, 0x2, 0x2, 0x38, 0x30d, 0x3, 0x2, 0x2, 0x2, 
    0x3a, 0x31b, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x32a, 0x3, 0x2, 0x2, 0x2, 0x3e, 
    0x34d, 0x3, 0x2, 0x2, 0x2, 0x40, 0x3b6, 0x3, 0x2, 0x2, 0x2, 0x42, 0x3b9, 
    0x3, 0x2, 0x2, 0x2, 0x44, 0x3dc, 0x3, 0x2, 0x2, 0x2, 0x46, 0x412, 0x3, 
    0x2, 0x2, 0x2, 0x48, 0x414, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x41f, 0x3, 0x2, 
    0x2, 0x2, 0x4c, 0x431, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x459, 0x3, 0x2, 0x2, 
    0x2, 0x50, 0x4a7, 0x3, 0x2, 0x2, 0x2, 0x52, 0x510, 0x3, 0x2, 0x2, 0x2, 
    0x54, 0x540, 0x3, 0x2, 0x2, 0x2, 0x56, 0x54a, 0x3, 0x2, 0x2, 0x2, 0x58, 
    0x554, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x57c, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x594, 
    0x3, 0x2, 0x2, 0x2, 0x5e, 0x59e, 0x3, 0x2, 0x2, 0x2, 0x60, 0x5a9, 0x3, 
    0x2, 0x2, 0x2, 0x62, 0x5ab, 0x3, 0x2, 0x2, 0x2, 0x64, 0x5ca, 0x3, 0x2, 
    0x2, 0x2, 0x66, 0x5fb, 0x3, 0x2, 0x2, 0x2, 0x68, 0x5fd, 0x3, 0x2, 0x2, 
    0x2, 0x6a, 0x614, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x624, 0x3, 0x2, 0x2, 0x2, 
    0x6e, 0x670, 0x3, 0x2, 0x2, 0x2, 0x70, 0x677, 0x3, 0x2, 0x2, 0x2, 0x72, 
    0x679, 0x3, 0x2, 0x2, 0x2, 0x74, 0x688, 0x3, 0x2, 0x2, 0x2, 0x76, 0x68c, 
    0x3, 0x2, 0x2, 0x2, 0x78, 0x68e, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x690, 0x3, 
    0x2, 0x2, 0x2, 0x7c, 0x694, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x696, 0x3, 0x2, 
    0x2, 0x2, 0x80, 0x698, 0x3, 0x2, 0x2, 0x2, 0x82, 0x69a, 0x3, 0x2, 0x2, 
    0x2, 0x84, 0x69c, 0x3, 0x2, 0x2, 0x2, 0x86, 0x69e, 0x3, 0x2, 0x2, 0x2, 
    0x88, 0x6a0, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x6a2, 0x3, 0x2, 0x2, 0x2, 0x8c, 
    0x6a4, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x6a6, 0x3, 0x2, 0x2, 0x2, 0x90, 0x6a8, 
    0x3, 0x2, 0x2, 0x2, 0x92, 0x6aa, 0x3, 0x2, 0x2, 0x2, 0x94, 0x6ac, 0x3, 
    0x2, 0x2, 0x2, 0x96, 0x6ae, 0x3, 0x2, 0x2, 0x2, 0x98, 0x6b0, 0x3, 0x2, 
    0x2, 0x2, 0x9a, 0x6b2, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x6b4, 0x3, 0x2, 0x2, 
    0x2, 0x9e, 0x6b6, 0x3, 0x2, 0x2, 0x2, 0xa0, 0x6b8, 0x3, 0x2, 0x2, 0x2, 
    0xa2, 0x6ba, 0x3, 0x2, 0x2, 0x2, 0xa4, 0x6c3, 0x3, 0x2, 0x2, 0x2, 0xa6, 
    0xa9, 0x5, 0x6, 0x4, 0x2, 0xa7, 0xa9, 0x5, 0x4, 0x3, 0x2, 0xa8, 0xa6, 
    0x3, 0x2, 0x2, 0x2, 0xa8, 0xa7, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xac, 0x3, 
    0x2, 0x2, 0x2, 0xaa, 0xa8, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xab, 0x3, 0x2, 
    0x2, 0x2, 0xab, 0xad, 0x3, 0x2, 0x2, 0x2, 0xac, 0xaa, 0x3, 0x2, 0x2, 
    0x2, 0xad, 0xae, 0x7, 0x2, 0x2, 0x3, 0xae, 0x3, 0x3, 0x2, 0x2, 0x2, 
    0xaf, 0xb0, 0x7, 0x9f, 0x2, 0x2, 0xb0, 0xb1, 0x8, 0x3, 0x1, 0x2, 0xb1, 
    0x5, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xb4, 0x7, 0x3, 0x2, 0x2, 0xb3, 0xb2, 
    0x3, 0x2, 0x2, 0x2, 0xb4, 0xb7, 0x3, 0x2, 0x2, 0x2, 0xb5, 0xb3, 0x3, 
    0x2, 0x2, 0x2, 0xb5, 0xb6, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xb8, 0x3, 0x2, 
    0x2, 0x2, 0xb7, 0xb5, 0x3, 0x2, 0x2, 0x2, 0xb8, 0xc1, 0x5, 0x8, 0x5, 
    0x2, 0xb9, 0xbb, 0x7, 0x3, 0x2, 0x2, 0xba, 0xb9, 0x3, 0x2, 0x2, 0x2, 
    0xbb, 0xbc, 0x3, 0x2, 0x2, 0x2, 0xbc, 0xba, 0x3, 0x2, 0x2, 0x2, 0xbc, 
    0xbd, 0x3, 0x2, 0x2, 0x2, 0xbd, 0xbe, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xc0, 
    0x5, 0x8, 0x5, 0x2, 0xbf, 0xba, 0x3, 0x2, 0x2, 0x2, 0xc0, 0xc3, 0x3, 
    0x2, 0x2, 0x2, 0xc1, 0xbf, 0x3, 0x2, 0x2, 0x2, 0xc1, 0xc2, 0x3, 0x2, 
    0x2, 0x2, 0xc2, 0xc7, 0x3, 0x2, 0x2, 0x2, 0xc3, 0xc1, 0x3, 0x2, 0x2, 
    0x2, 0xc4, 0xc6, 0x7, 0x3, 0x2, 0x2, 0xc5, 0xc4, 0x3, 0x2, 0x2, 0x2, 
    0xc6, 0xc9, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xc5, 0x3, 0x2, 0x2, 0x2, 0xc7, 
    0xc8, 0x3, 0x2, 0x2, 0x2, 0xc8, 0x7, 0x3, 0x2, 0x2, 0x2, 0xc9, 0xc7, 
    0x3, 0x2, 0x2, 0x2, 0xca, 0xcd, 0x7, 0x49, 0x2, 0x2, 0xcb, 0xcc, 0x7, 
    0x74, 0x2, 0x2, 0xcc, 0xce, 0x7, 0x71, 0x2, 0x2, 0xcd, 0xcb, 0x3, 0x2, 
    0x2, 0x2, 0xcd, 0xce, 0x3, 0x2, 0x2, 0x2, 0xce, 0xd0, 0x3, 0x2, 0x2, 
    0x2, 0xcf, 0xca, 0x3, 0x2, 0x2, 0x2, 0xcf, 0xd0, 0x3, 0x2, 0x2, 0x2, 
    0xd0, 0xef, 0x3, 0x2, 0x2, 0x2, 0xd1, 0xf0, 0x5, 0xa, 0x6, 0x2, 0xd2, 
    0xf0, 0x5, 0xc, 0x7, 0x2, 0xd3, 0xf0, 0x5, 0xe, 0x8, 0x2, 0xd4, 0xf0, 
    0x5, 0x10, 0x9, 0x2, 0xd5, 0xf0, 0x5, 0x12, 0xa, 0x2, 0xd6, 0xf0, 0x5, 
    0x14, 0xb, 0x2, 0xd7, 0xf0, 0x5, 0x16, 0xc, 0x2, 0xd8, 0xf0, 0x5, 0x18, 
    0xd, 0x2, 0xd9, 0xf0, 0x5, 0x1a, 0xe, 0x2, 0xda, 0xf0, 0x5, 0x1c, 0xf, 
    0x2, 0xdb, 0xf0, 0x5, 0x1e, 0x10, 0x2, 0xdc, 0xf0, 0x5, 0x20, 0x11, 
    0x2, 0xdd, 0xf0, 0x5, 0x22, 0x12, 0x2, 0xde, 0xf0, 0x5, 0x24, 0x13, 
    0x2, 0xdf, 0xf0, 0x5, 0x26, 0x14, 0x2, 0xe0, 0xf0, 0x5, 0x28, 0x15, 
    0x2, 0xe1, 0xf0, 0x5, 0x2a, 0x16, 0x2, 0xe2, 0xf0, 0x5, 0x2c, 0x17, 
    0x2, 0xe3, 0xf0, 0x5, 0x2e, 0x18, 0x2, 0xe4, 0xf0, 0x5, 0x30, 0x19, 
    0x2, 0xe5, 0xf0, 0x5, 0x32, 0x1a, 0x2, 0xe6, 0xf0, 0x5, 0x34, 0x1b, 
    0x2, 0xe7, 0xf0, 0x5, 0x36, 0x1c, 0x2, 0xe8, 0xf0, 0x5, 0x38, 0x1d, 
    0x2, 0xe9, 0xf0, 0x5, 0x3a, 0x1e, 0x2, 0xea, 0xf0, 0x5, 0x3c, 0x1f, 
    0x2, 0xeb, 0xf0, 0x5, 0x3e, 0x20, 0x2, 0xec, 0xf0, 0x5, 0x42, 0x22, 
    0x2, 0xed, 0xf0, 0x5, 0x44, 0x23, 0x2, 0xee, 0xf0, 0x5, 0x46, 0x24, 
    0x2, 0xef, 0xd1, 0x3, 0x2, 0x2, 0x2, 0xef, 0xd2, 0x3, 0x2, 0x2, 0x2, 
    0xef, 0xd3, 0x3, 0x2, 0x2, 0x2, 0xef, 0xd4, 0x3, 0x2, 0x2, 0x2, 0xef, 
    0xd5, 0x3, 0x2, 0x2, 0x2, 0xef, 0xd6, 0x3, 0x2, 0x2, 0x2, 0xef, 0xd7, 
    0x3, 0x2, 0x2, 0x2, 0xef, 0xd8, 0x3, 0x2, 0x2, 0x2, 0xef, 0xd9, 0x3, 
    0x2, 0x2, 0x2, 0xef, 0xda, 0x3, 0x2, 0x2, 0x2, 0xef, 0xdb, 0x3, 0x2, 
    0x2, 0x2, 0xef, 0xdc, 0x3, 0x2, 0x2, 0x2, 0xef, 0xdd, 0x3, 0x2, 0x2, 
    0x2, 0xef, 0xde, 0x3, 0x2, 0x2, 0x2, 0xef, 0xdf, 0x3, 0x2, 0x2, 0x2, 
    0xef, 0xe0, 0x3, 0x2, 0x2, 0x2, 0xef, 0xe1, 0x3, 0x2, 0x2, 0x2, 0xef, 
    0xe2, 0x3, 0x2, 0x2, 0x2, 0xef, 0xe3, 0x3, 0x2, 0x2, 0x2, 0xef, 0xe4, 
    0x3, 0x2, 0x2, 0x2, 0xef, 0xe5, 0x3, 0x2, 0x2, 0x2, 0xef, 0xe6, 0x3, 
    0x2, 0x2, 0x2, 0xef, 0xe7, 0x3, 0x2, 0x2, 0x2, 0xef, 0xe8, 0x3, 0x2, 
    0x2, 0x2, 0xef, 0xe9, 0x3, 0x2, 0x2, 0x2, 0xef, 0xea, 0x3, 0x2, 0x2, 
    0x2, 0xef, 0xeb, 0x3, 0x2, 0x2, 0x2, 0xef, 0xec, 0x3, 0x2, 0x2, 0x2, 
    0xef, 0xed, 0x3, 0x2, 0x2, 0x2, 0xef, 0xee, 0x3, 0x2, 0x2, 0x2, 0xf0, 
    0x9, 0x3, 0x2, 0x2, 0x2, 0xf1, 0xf2, 0x7, 0x20, 0x2, 0x2, 0xf2, 0xf6, 
    0x7, 0x84, 0x2, 0x2, 0xf3, 0xf4, 0x5, 0x86, 0x44, 0x2, 0xf4, 0xf5, 0x7, 
    0x4, 0x2, 0x2, 0xf5, 0xf7, 0x3, 0x2, 0x2, 0x2, 0xf6, 0xf3, 0x3, 0x2, 
    0x2, 0x2, 0xf6, 0xf7, 0x3, 0x2, 0x2, 0x2, 0xf7, 0xf8, 0x3, 0x2, 0x2, 
    0x2, 0xf8, 0x101, 0x5, 0x88, 0x45, 0x2, 0xf9, 0xfa, 0x7, 0x7b, 0x2, 
    0x2, 0xfa, 0xfb, 0x7, 0x88, 0x2, 0x2, 0xfb, 0x102, 0x5, 0x8c, 0x47, 
    0x2, 0xfc, 0xfe, 0x7, 0x1d, 0x2, 0x2, 0xfd, 0xff, 0x7, 0x30, 0x2, 0x2, 
    0xfe, 0xfd, 0x3, 0x2, 0x2, 0x2, 0xfe, 0xff, 0x3, 0x2, 0x2, 0x2, 0xff, 
    0x100, 0x3, 0x2, 0x2, 0x2, 0x100, 0x102, 0x5, 0x48, 0x25, 0x2, 0x101, 
    0xf9, 0x3, 0x2, 0x2, 0x2, 0x101, 0xfc, 0x3, 0x2, 0x2, 0x2, 0x102, 0xb, 
    0x3, 0x2, 0x2, 0x2, 0x103, 0x10a, 0x7, 0x21, 0x2, 0x2, 0x104, 0x10b, 
    0x5, 0x86, 0x44, 0x2, 0x105, 0x10b, 0x5, 0x8a, 0x46, 0x2, 0x106, 0x107, 
    0x5, 0x86, 0x44, 0x2, 0x107, 0x108, 0x7, 0x4, 0x2, 0x2, 0x108, 0x109, 
    0x5, 0x8a, 0x46, 0x2, 0x109, 0x10b, 0x3, 0x2, 0x2, 0x2, 0x10a, 0x104, 
    0x3, 0x2, 0x2, 0x2, 0x10a, 0x105, 0x3, 0x2, 0x2, 0x2, 0x10a, 0x106, 
    0x3, 0x2, 0x2, 0x2, 0x10a, 0x10b, 0x3, 0x2, 0x2, 0x2, 0x10b, 0xd, 0x3, 
    0x2, 0x2, 0x2, 0x10c, 0x10e, 0x7, 0x25, 0x2, 0x2, 0x10d, 0x10f, 0x7, 
    0x39, 0x2, 0x2, 0x10e, 0x10d, 0x3, 0x2, 0x2, 0x2, 0x10e, 0x10f, 0x3, 
    0x2, 0x2, 0x2, 0x10f, 0x110, 0x3, 0x2, 0x2, 0x2, 0x110, 0x111, 0x5, 
    0x50, 0x29, 0x2, 0x111, 0x112, 0x7, 0x23, 0x2, 0x2, 0x112, 0x113, 0x5, 
    0x86, 0x44, 0x2, 0x113, 0xf, 0x3, 0x2, 0x2, 0x2, 0x114, 0x116, 0x7, 
    0x28, 0x2, 0x2, 0x115, 0x117, 0x9, 0x2, 0x2, 0x2, 0x116, 0x115, 0x3, 
    0x2, 0x2, 0x2, 0x116, 0x117, 0x3, 0x2, 0x2, 0x2, 0x117, 0x11c, 0x3, 
    0x2, 0x2, 0x2, 0x118, 0x11a, 0x7, 0x89, 0x2, 0x2, 0x119, 0x11b, 0x5, 
    0xa2, 0x52, 0x2, 0x11a, 0x119, 0x3, 0x2, 0x2, 0x2, 0x11a, 0x11b, 0x3, 
    0x2, 0x2, 0x2, 0x11b, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x11c, 0x118, 0x3, 
    0x2, 0x2, 0x2, 0x11c, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x11d, 0x11, 0x3, 0x2, 
    0x2, 0x2, 0x11e, 0x123, 0x9, 0x3, 0x2, 0x2, 0x11f, 0x121, 0x7, 0x89, 
    0x2, 0x2, 0x120, 0x122, 0x5, 0xa2, 0x52, 0x2, 0x121, 0x120, 0x3, 0x2, 
    0x2, 0x2, 0x121, 0x122, 0x3, 0x2, 0x2, 0x2, 0x122, 0x124, 0x3, 0x2, 
    0x2, 0x2, 0x123, 0x11f, 0x3, 0x2, 0x2, 0x2, 0x123, 0x124, 0x3, 0x2, 
    0x2, 0x2, 0x124, 0x13, 0x3, 0x2, 0x2, 0x2, 0x125, 0x127, 0x7, 0x95, 
    0x2, 0x2, 0x126, 0x128, 0x7, 0x76, 0x2, 0x2, 0x127, 0x126, 0x3, 0x2, 
    0x2, 0x2, 0x127, 0x128, 0x3, 0x2, 0x2, 0x2, 0x128, 0x129, 0x3, 0x2, 
    0x2, 0x2, 0x129, 0x12e, 0x5, 0x62, 0x32, 0x2, 0x12a, 0x12b, 0x7, 0x7, 
    0x2, 0x2, 0x12b, 0x12d, 0x5, 0x62, 0x32, 0x2, 0x12c, 0x12a, 0x3, 0x2, 
    0x2, 0x2, 0x12d, 0x130, 0x3, 0x2, 0x2, 0x2, 0x12e, 0x12c, 0x3, 0x2, 
    0x2, 0x2, 0x12e, 0x12f, 0x3, 0x2, 0x2, 0x2, 0x12f, 0x132, 0x3, 0x2, 
    0x2, 0x2, 0x130, 0x12e, 0x3, 0x2, 0x2, 0x2, 0x131, 0x125, 0x3, 0x2, 
    0x2, 0x2, 0x131, 0x132, 0x3, 0x2, 0x2, 0x2, 0x132, 0x133, 0x3, 0x2, 
    0x2, 0x2, 0x133, 0x13d, 0x5, 0x6e, 0x38, 0x2, 0x134, 0x136, 0x7, 0x8b, 
    0x2, 0x2, 0x135, 0x137, 0x7, 0x1f, 0x2, 0x2, 0x136, 0x135, 0x3, 0x2, 
    0x2, 0x2, 0x136, 0x137, 0x3, 0x2, 0x2, 0x2, 0x137, 0x13b, 0x3, 0x2, 
    0x2, 0x2, 0x138, 0x13b, 0x7, 0x5c, 0x2, 0x2, 0x139, 0x13b, 0x7, 0x46, 
    0x2, 0x2, 0x13a, 0x134, 0x3, 0x2, 0x2, 0x2, 0x13a, 0x138, 0x3, 0x2, 
    0x2, 0x2, 0x13a, 0x139, 0x3, 0x2, 0x2, 0x2, 0x13b, 0x13c, 0x3, 0x2, 
    0x2, 0x2, 0x13c, 0x13e, 0x5, 0x6e, 0x38, 0x2, 0x13d, 0x13a, 0x3, 0x2, 
    0x2, 0x2, 0x13e, 0x13f, 0x3, 0x2, 0x2, 0x2, 0x13f, 0x13d, 0x3, 0x2, 
    0x2, 0x2, 0x13f, 0x140, 0x3, 0x2, 0x2, 0x2, 0x140, 0x14b, 0x3, 0x2, 
    0x2, 0x2, 0x141, 0x142, 0x7, 0x6f, 0x2, 0x2, 0x142, 0x143, 0x7, 0x2a, 
    0x2, 0x2, 0x143, 0x148, 0x5, 0x5e, 0x30, 0x2, 0x144, 0x145, 0x7, 0x7, 
    0x2, 0x2, 0x145, 0x147, 0x5, 0x5e, 0x30, 0x2, 0x146, 0x144, 0x3, 0x2, 
    0x2, 0x2, 0x147, 0x14a, 0x3, 0x2, 0x2, 0x2, 0x148, 0x146, 0x3, 0x2, 
    0x2, 0x2, 0x148, 0x149, 0x3, 0x2, 0x2, 0x2, 0x149, 0x14c, 0x3, 0x2, 
    0x2, 0x2, 0x14a, 0x148, 0x3, 0x2, 0x2, 0x2, 0x14b, 0x141, 0x3, 0x2, 
    0x2, 0x2, 0x14b, 0x14c, 0x3, 0x2, 0x2, 0x2, 0x14c, 0x153, 0x3, 0x2, 
    0x2, 0x2, 0x14d, 0x14e, 0x7, 0x64, 0x2, 0x2, 0x14e, 0x151, 0x5, 0x50, 
    0x29, 0x2, 0x14f, 0x150, 0x9, 0x4, 0x2, 0x2, 0x150, 0x152, 0x5, 0x50, 
    0x29, 0x2, 0x151, 0x14f, 0x3, 0x2, 0x2, 0x2, 0x151, 0x152, 0x3, 0x2, 
    0x2, 0x2, 0x152, 0x154, 0x3, 0x2, 0x2, 0x2, 0x153, 0x14d, 0x3, 0x2, 
    0x2, 0x2, 0x153, 0x154, 0x3, 0x2, 0x2, 0x2, 0x154, 0x15, 0x3, 0x2, 0x2, 
    0x2, 0x155, 0x157, 0x7, 0x34, 0x2, 0x2, 0x156, 0x158, 0x7, 0x8c, 0x2, 
    0x2, 0x157, 0x156, 0x3, 0x2, 0x2, 0x2, 0x157, 0x158, 0x3, 0x2, 0x2, 
    0x2, 0x158, 0x159, 0x3, 0x2, 0x2, 0x2, 0x159, 0x15d, 0x7, 0x56, 0x2, 
    0x2, 0x15a, 0x15b, 0x7, 0x52, 0x2, 0x2, 0x15b, 0x15c, 0x7, 0x68, 0x2, 
    0x2, 0x15c, 0x15e, 0x7, 0x48, 0x2, 0x2, 0x15d, 0x15a, 0x3, 0x2, 0x2, 
    0x2, 0x15d, 0x15e, 0x3, 0x2, 0x2, 0x2, 0x15e, 0x162, 0x3, 0x2, 0x2, 
    0x2, 0x15f, 0x160, 0x5, 0x86, 0x44, 0x2, 0x160, 0x161, 0x7, 0x4, 0x2, 
    0x2, 0x161, 0x163, 0x3, 0x2, 0x2, 0x2, 0x162, 0x15f, 0x3, 0x2, 0x2, 
    0x2, 0x162, 0x163, 0x3, 0x2, 0x2, 0x2, 0x163, 0x164, 0x3, 0x2, 0x2, 
    0x2, 0x164, 0x165, 0x5, 0x94, 0x4b, 0x2, 0x165, 0x166, 0x7, 0x6d, 0x2, 
    0x2, 0x166, 0x167, 0x5, 0x88, 0x45, 0x2, 0x167, 0x168, 0x7, 0x5, 0x2, 
    0x2, 0x168, 0x16d, 0x5, 0x56, 0x2c, 0x2, 0x169, 0x16a, 0x7, 0x7, 0x2, 
    0x2, 0x16a, 0x16c, 0x5, 0x56, 0x2c, 0x2, 0x16b, 0x169, 0x3, 0x2, 0x2, 
    0x2, 0x16c, 0x16f, 0x3, 0x2, 0x2, 0x2, 0x16d, 0x16b, 0x3, 0x2, 0x2, 
    0x2, 0x16d, 0x16e, 0x3, 0x2, 0x2, 0x2, 0x16e, 0x170, 0x3, 0x2, 0x2, 
    0x2, 0x16f, 0x16d, 0x3, 0x2, 0x2, 0x2, 0x170, 0x173, 0x7, 0x6, 0x2, 
    0x2, 0x171, 0x172, 0x7, 0x94, 0x2, 0x2, 0x172, 0x174, 0x5, 0x50, 0x29, 
    0x2, 0x173, 0x171, 0x3, 0x2, 0x2, 0x2, 0x173, 0x174, 0x3, 0x2, 0x2, 
    0x2, 0x174, 0x17, 0x3, 0x2, 0x2, 0x2, 0x175, 0x177, 0x7, 0x34, 0x2, 
    0x2, 0x176, 0x178, 0x9, 0x5, 0x2, 0x2, 0x177, 0x176, 0x3, 0x2, 0x2, 
    0x2, 0x177, 0x178, 0x3, 0x2, 0x2, 0x2, 0x178, 0x179, 0x3, 0x2, 0x2, 
    0x2, 0x179, 0x17d, 0x7, 0x84, 0x2, 0x2, 0x17a, 0x17b, 0x7, 0x52, 0x2, 
    0x2, 0x17b, 0x17c, 0x7, 0x68, 0x2, 0x2, 0x17c, 0x17e, 0x7, 0x48, 0x2, 
    0x2, 0x17d, 0x17a, 0x3, 0x2, 0x2, 0x2, 0x17d, 0x17e, 0x3, 0x2, 0x2, 
    0x2, 0x17e, 0x182, 0x3, 0x2, 0x2, 0x2, 0x17f, 0x180, 0x5, 0x86, 0x44, 
    0x2, 0x180, 0x181, 0x7, 0x4, 0x2, 0x2, 0x181, 0x183, 0x3, 0x2, 0x2, 
    0x2, 0x182, 0x17f, 0x3, 0x2, 0x2, 0x2, 0x182, 0x183, 0x3, 0x2, 0x2, 
    0x2, 0x183, 0x184, 0x3, 0x2, 0x2, 0x2, 0x184, 0x19c, 0x5, 0x88, 0x45, 
    0x2, 0x185, 0x186, 0x7, 0x5, 0x2, 0x2, 0x186, 0x18b, 0x5, 0x48, 0x25, 
    0x2, 0x187, 0x188, 0x7, 0x7, 0x2, 0x2, 0x188, 0x18a, 0x5, 0x48, 0x25, 
    0x2, 0x189, 0x187, 0x3, 0x2, 0x2, 0x2, 0x18a, 0x18d, 0x3, 0x2, 0x2, 
    0x2, 0x18b, 0x189, 0x3, 0x2, 0x2, 0x2, 0x18b, 0x18c, 0x3, 0x2, 0x2, 
    0x2, 0x18c, 0x192, 0x3, 0x2, 0x2, 0x2, 0x18d, 0x18b, 0x3, 0x2, 0x2, 
    0x2, 0x18e, 0x18f, 0x7, 0x7, 0x2, 0x2, 0x18f, 0x191, 0x5, 0x58, 0x2d, 
    0x2, 0x190, 0x18e, 0x3, 0x2, 0x2, 0x2, 0x191, 0x194, 0x3, 0x2, 0x2, 
    0x2, 0x192, 0x190, 0x3, 0x2, 0x2, 0x2, 0x192, 0x193, 0x3, 0x2, 0x2, 
    0x2, 0x193, 0x195, 0x3, 0x2, 0x2, 0x2, 0x194, 0x192, 0x3, 0x2, 0x2, 
    0x2, 0x195, 0x198, 0x7, 0x6, 0x2, 0x2, 0x196, 0x197, 0x7, 0x96, 0x2, 
    0x2, 0x197, 0x199, 0x7, 0x97, 0x2, 0x2, 0x198, 0x196, 0x3, 0x2, 0x2, 
    0x2, 0x198, 0x199, 0x3, 0x2, 0x2, 0x2, 0x199, 0x19d, 0x3, 0x2, 0x2, 
    0x2, 0x19a, 0x19b, 0x7, 0x23, 0x2, 0x2, 0x19b, 0x19d, 0x5, 0x3e, 0x20, 
    0x2, 0x19c, 0x185, 0x3, 0x2, 0x2, 0x2, 0x19c, 0x19a, 0x3, 0x2, 0x2, 
    0x2, 0x19d, 0x19, 0x3, 0x2, 0x2, 0x2, 0x19e, 0x1a0, 0x7, 0x34, 0x2, 
    0x2, 0x19f, 0x1a1, 0x9, 0x5, 0x2, 0x2, 0x1a0, 0x19f, 0x3, 0x2, 0x2, 
    0x2, 0x1a0, 0x1a1, 0x3, 0x2, 0x2, 0x2, 0x1a1, 0x1a2, 0x3, 0x2, 0x2, 
    0x2, 0x1a2, 0x1a6, 0x7, 0x8a, 0x2, 0x2, 0x1a3, 0x1a4, 0x7, 0x52, 0x2, 
    0x2, 0x1a4, 0x1a5, 0x7, 0x68, 0x2, 0x2, 0x1a5, 0x1a7, 0x7, 0x48, 0x2, 
    0x2, 0x1a6, 0x1a3, 0x3, 0x2, 0x2, 0x2, 0x1a6, 0x1a7, 0x3, 0x2, 0x2, 
    0x2, 0x1a7, 0x1ab, 0x3, 0x2, 0x2, 0x2, 0x1a8, 0x1a9, 0x5, 0x86, 0x44, 
    0x2, 0x1a9, 0x1aa, 0x7, 0x4, 0x2, 0x2, 0x1aa, 0x1ac, 0x3, 0x2, 0x2, 
    0x2, 0x1ab, 0x1a8, 0x3, 0x2, 0x2, 0x2, 0x1ab, 0x1ac, 0x3, 0x2, 0x2, 
    0x2, 0x1ac, 0x1ad, 0x3, 0x2, 0x2, 0x2, 0x1ad, 0x1b2, 0x5, 0x96, 0x4c, 
    0x2, 0x1ae, 0x1b3, 0x7, 0x27, 0x2, 0x2, 0x1af, 0x1b3, 0x7, 0x1e, 0x2, 
    0x2, 0x1b0, 0x1b1, 0x7, 0x5b, 0x2, 0x2, 0x1b1, 0x1b3, 0x7, 0x6b, 0x2, 
    0x2, 0x1b2, 0x1ae, 0x3, 0x2, 0x2, 0x2, 0x1b2, 0x1af, 0x3, 0x2, 0x2, 
    0x2, 0x1b2, 0x1b0, 0x3, 0x2, 0x2, 0x2, 0x1b2, 0x1b3, 0x3, 0x2, 0x2, 
    0x2, 0x1b3, 0x1c2, 0x3, 0x2, 0x2, 0x2, 0x1b4, 0x1c3, 0x7, 0x3d, 0x2, 
    0x2, 0x1b5, 0x1c3, 0x7, 0x5a, 0x2, 0x2, 0x1b6, 0x1c0, 0x7, 0x8d, 0x2, 
    0x2, 0x1b7, 0x1b8, 0x7, 0x6b, 0x2, 0x2, 0x1b8, 0x1bd, 0x5, 0x8e, 0x48, 
    0x2, 0x1b9, 0x1ba, 0x7, 0x7, 0x2, 0x2, 0x1ba, 0x1bc, 0x5, 0x8e, 0x48, 
    0x2, 0x1bb, 0x1b9, 0x3, 0x2, 0x2, 0x2, 0x1bc, 0x1bf, 0x3, 0x2, 0x2, 
    0x2, 0x1bd, 0x1bb, 0x3, 0x2, 0x2, 0x2, 0x1bd, 0x1be, 0x3, 0x2, 0x2, 
    0x2, 0x1be, 0x1c1, 0x3, 0x2, 0x2, 0x2, 0x1bf, 0x1bd, 0x3, 0x2, 0x2, 
    0x2, 0x1c0, 0x1b7, 0x3, 0x2, 0x2, 0x2, 0x1c0, 0x1c1, 0x3, 0x2, 0x2, 
    0x2, 0x1c1, 0x1c3, 0x3, 0x2, 0x2, 0x2, 0x1c2, 0x1b4, 0x3, 0x2, 0x2, 
    0x2, 0x1c2, 0x1b5, 0x3, 0x2, 0x2, 0x2, 0x1c2, 0x1b6, 0x3, 0x2, 0x2, 
    0x2, 0x1c3, 0x1c4, 0x3, 0x2, 0x2, 0x2, 0x1c4, 0x1c8, 0x7, 0x6d, 0x2, 
    0x2, 0x1c5, 0x1c6, 0x5, 0x86, 0x44, 0x2, 0x1c6, 0x1c7, 0x7, 0x4, 0x2, 
    0x2, 0x1c7, 0x1c9, 0x3, 0x2, 0x2, 0x2, 0x1c8, 0x1c5, 0x3, 0x2, 0x2, 
    0x2, 0x1c8, 0x1c9, 0x3, 0x2, 0x2, 0x2, 0x1c9, 0x1ca, 0x3, 0x2, 0x2, 
    0x2, 0x1ca, 0x1ce, 0x5, 0x88, 0x45, 0x2, 0x1cb, 0x1cc, 0x7, 0x4b, 0x2, 
    0x2, 0x1cc, 0x1cd, 0x7, 0x42, 0x2, 0x2, 0x1cd, 0x1cf, 0x7, 0x80, 0x2, 
    0x2, 0x1ce, 0x1cb, 0x3, 0x2, 0x2, 0x2, 0x1ce, 0x1cf, 0x3, 0x2, 0x2, 
    0x2, 0x1cf, 0x1d2, 0x3, 0x2, 0x2, 0x2, 0x1d0, 0x1d1, 0x7, 0x93, 0x2, 
    0x2, 0x1d1, 0x1d3, 0x5, 0x50, 0x29, 0x2, 0x1d2, 0x1d0, 0x3, 0x2, 0x2, 
    0x2, 0x1d2, 0x1d3, 0x3, 0x2, 0x2, 0x2, 0x1d3, 0x1d4, 0x3, 0x2, 0x2, 
    0x2, 0x1d4, 0x1dd, 0x7, 0x28, 0x2, 0x2, 0x1d5, 0x1da, 0x5, 0x42, 0x22, 
    0x2, 0x1d6, 0x1da, 0x5, 0x30, 0x19, 0x2, 0x1d7, 0x1da, 0x5, 0x20, 0x11, 
    0x2, 0x1d8, 0x1da, 0x5, 0x3e, 0x20, 0x2, 0x1d9, 0x1d5, 0x3, 0x2, 0x2, 
    0x2, 0x1d9, 0x1d6, 0x3, 0x2, 0x2, 0x2, 0x1d9, 0x1d7, 0x3, 0x2, 0x2, 
    0x2, 0x1d9, 0x1d8, 0x3, 0x2, 0x2, 0x2, 0x1da, 0x1db, 0x3, 0x2, 0x2, 
    0x2, 0x1db, 0x1dc, 0x7, 0x3, 0x2, 0x2, 0x1dc, 0x1de, 0x3, 0x2, 0x2, 
    0x2, 0x1dd, 0x1d9, 0x3, 0x2, 0x2, 0x2, 0x1de, 0x1df, 0x3, 0x2, 0x2, 
    0x2, 0x1df, 0x1dd, 0x3, 0x2, 0x2, 0x2, 0x1df, 0x1e0, 0x3, 0x2, 0x2, 
    0x2, 0x1e0, 0x1e1, 0x3, 0x2, 0x2, 0x2, 0x1e1, 0x1e2, 0x7, 0x44, 0x2, 
    0x2, 0x1e2, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x1e3, 0x1e5, 0x7, 0x34, 0x2, 
    0x2, 0x1e4, 0x1e6, 0x9, 0x5, 0x2, 0x2, 0x1e5, 0x1e4, 0x3, 0x2, 0x2, 
    0x2, 0x1e5, 0x1e6, 0x3, 0x2, 0x2, 0x2, 0x1e6, 0x1e7, 0x3, 0x2, 0x2, 
    0x2, 0x1e7, 0x1eb, 0x7, 0x91, 0x2, 0x2, 0x1e8, 0x1e9, 0x7, 0x52, 0x2, 
    0x2, 0x1e9, 0x1ea, 0x7, 0x68, 0x2, 0x2, 0x1ea, 0x1ec, 0x7, 0x48, 0x2, 
    0x2, 0x1eb, 0x1e8, 0x3, 0x2, 0x2, 0x2, 0x1eb, 0x1ec, 0x3, 0x2, 0x2, 
    0x2, 0x1ec, 0x1f0, 0x3, 0x2, 0x2, 0x2, 0x1ed, 0x1ee, 0x5, 0x86, 0x44, 
    0x2, 0x1ee, 0x1ef, 0x7, 0x4, 0x2, 0x2, 0x1ef, 0x1f1, 0x3, 0x2, 0x2, 
    0x2, 0x1f0, 0x1ed, 0x3, 0x2, 0x2, 0x2, 0x1f0, 0x1f1, 0x3, 0x2, 0x2, 
    0x2, 0x1f1, 0x1f2, 0x3, 0x2, 0x2, 0x2, 0x1f2, 0x1f3, 0x5, 0x98, 0x4d, 
    0x2, 0x1f3, 0x1f4, 0x7, 0x23, 0x2, 0x2, 0x1f4, 0x1f5, 0x5, 0x3e, 0x20, 
    0x2, 0x1f5, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x1f6, 0x1f7, 0x7, 0x34, 0x2, 
    0x2, 0x1f7, 0x1f8, 0x7, 0x92, 0x2, 0x2, 0x1f8, 0x1fc, 0x7, 0x84, 0x2, 
    0x2, 0x1f9, 0x1fa, 0x7, 0x52, 0x2, 0x2, 0x1fa, 0x1fb, 0x7, 0x68, 0x2, 
    0x2, 0x1fb, 0x1fd, 0x7, 0x48, 0x2, 0x2, 0x1fc, 0x1f9, 0x3, 0x2, 0x2, 
    0x2, 0x1fc, 0x1fd, 0x3, 0x2, 0x2, 0x2, 0x1fd, 0x201, 0x3, 0x2, 0x2, 
    0x2, 0x1fe, 0x1ff, 0x5, 0x86, 0x44, 0x2, 0x1ff, 0x200, 0x7, 0x4, 0x2, 
    0x2, 0x200, 0x202, 0x3, 0x2, 0x2, 0x2, 0x201, 0x1fe, 0x3, 0x2, 0x2, 
    0x2, 0x201, 0x202, 0x3, 0x2, 0x2, 0x2, 0x202, 0x203, 0x3, 0x2, 0x2, 
    0x2, 0x203, 0x204, 0x5, 0x88, 0x45, 0x2, 0x204, 0x205, 0x7, 0x8e, 0x2, 
    0x2, 0x205, 0x211, 0x5, 0x9a, 0x4e, 0x2, 0x206, 0x207, 0x7, 0x5, 0x2, 
    0x2, 0x207, 0x20c, 0x5, 0x7c, 0x3f, 0x2, 0x208, 0x209, 0x7, 0x7, 0x2, 
    0x2, 0x209, 0x20b, 0x5, 0x7c, 0x3f, 0x2, 0x20a, 0x208, 0x3, 0x2, 0x2, 
    0x2, 0x20b, 0x20e, 0x3, 0x2, 0x2, 0x2, 0x20c, 0x20a, 0x3, 0x2, 0x2, 
    0x2, 0x20c, 0x20d, 0x3, 0x2, 0x2, 0x2, 0x20d, 0x20f, 0x3, 0x2, 0x2, 
    0x2, 0x20e, 0x20c, 0x3, 0x2, 0x2, 0x2, 0x20f, 0x210, 0x7, 0x6, 0x2, 
    0x2, 0x210, 0x212, 0x3, 0x2, 0x2, 0x2, 0x211, 0x206, 0x3, 0x2, 0x2, 
    0x2, 0x211, 0x212, 0x3, 0x2, 0x2, 0x2, 0x212, 0x1f, 0x3, 0x2, 0x2, 0x2, 
    0x213, 0x215, 0x5, 0x5a, 0x2e, 0x2, 0x214, 0x213, 0x3, 0x2, 0x2, 0x2, 
    0x214, 0x215, 0x3, 0x2, 0x2, 0x2, 0x215, 0x216, 0x3, 0x2, 0x2, 0x2, 
    0x216, 0x217, 0x7, 0x3d, 0x2, 0x2, 0x217, 0x218, 0x7, 0x4d, 0x2, 0x2, 
    0x218, 0x21b, 0x5, 0x5c, 0x2f, 0x2, 0x219, 0x21a, 0x7, 0x94, 0x2, 0x2, 
    0x21a, 0x21c, 0x5, 0x50, 0x29, 0x2, 0x21b, 0x219, 0x3, 0x2, 0x2, 0x2, 
    0x21b, 0x21c, 0x3, 0x2, 0x2, 0x2, 0x21c, 0x21, 0x3, 0x2, 0x2, 0x2, 0x21d, 
    0x21f, 0x5, 0x5a, 0x2e, 0x2, 0x21e, 0x21d, 0x3, 0x2, 0x2, 0x2, 0x21e, 
    0x21f, 0x3, 0x2, 0x2, 0x2, 0x21f, 0x220, 0x3, 0x2, 0x2, 0x2, 0x220, 
    0x221, 0x7, 0x3d, 0x2, 0x2, 0x221, 0x222, 0x7, 0x4d, 0x2, 0x2, 0x222, 
    0x225, 0x5, 0x5c, 0x2f, 0x2, 0x223, 0x224, 0x7, 0x94, 0x2, 0x2, 0x224, 
    0x226, 0x5, 0x50, 0x29, 0x2, 0x225, 0x223, 0x3, 0x2, 0x2, 0x2, 0x225, 
    0x226, 0x3, 0x2, 0x2, 0x2, 0x226, 0x239, 0x3, 0x2, 0x2, 0x2, 0x227, 
    0x228, 0x7, 0x6f, 0x2, 0x2, 0x228, 0x229, 0x7, 0x2a, 0x2, 0x2, 0x229, 
    0x22e, 0x5, 0x5e, 0x30, 0x2, 0x22a, 0x22b, 0x7, 0x7, 0x2, 0x2, 0x22b, 
    0x22d, 0x5, 0x5e, 0x30, 0x2, 0x22c, 0x22a, 0x3, 0x2, 0x2, 0x2, 0x22d, 
    0x230, 0x3, 0x2, 0x2, 0x2, 0x22e, 0x22c, 0x3, 0x2, 0x2, 0x2, 0x22e, 
    0x22f, 0x3, 0x2, 0x2, 0x2, 0x22f, 0x232, 0x3, 0x2, 0x2, 0x2, 0x230, 
    0x22e, 0x3, 0x2, 0x2, 0x2, 0x231, 0x227, 0x3, 0x2, 0x2, 0x2, 0x231, 
    0x232, 0x3, 0x2, 0x2, 0x2, 0x232, 0x233, 0x3, 0x2, 0x2, 0x2, 0x233, 
    0x234, 0x7, 0x64, 0x2, 0x2, 0x234, 0x237, 0x5, 0x50, 0x29, 0x2, 0x235, 
    0x236, 0x9, 0x4, 0x2, 0x2, 0x236, 0x238, 0x5, 0x50, 0x29, 0x2, 0x237, 
    0x235, 0x3, 0x2, 0x2, 0x2, 0x237, 0x238, 0x3, 0x2, 0x2, 0x2, 0x238, 
    0x23a, 0x3, 0x2, 0x2, 0x2, 0x239, 0x231, 0x3, 0x2, 0x2, 0x2, 0x239, 
    0x23a, 0x3, 0x2, 0x2, 0x2, 0x23a, 0x23, 0x3, 0x2, 0x2, 0x2, 0x23b, 0x23d, 
    0x7, 0x3f, 0x2, 0x2, 0x23c, 0x23e, 0x7, 0x39, 0x2, 0x2, 0x23d, 0x23c, 
    0x3, 0x2, 0x2, 0x2, 0x23d, 0x23e, 0x3, 0x2, 0x2, 0x2, 0x23e, 0x23f, 
    0x3, 0x2, 0x2, 0x2, 0x23f, 0x240, 0x5, 0x86, 0x44, 0x2, 0x240, 0x25, 
    0x3, 0x2, 0x2, 0x2, 0x241, 0x242, 0x7, 0x41, 0x2, 0x2, 0x242, 0x245, 
    0x7, 0x56, 0x2, 0x2, 0x243, 0x244, 0x7, 0x52, 0x2, 0x2, 0x244, 0x246, 
    0x7, 0x48, 0x2, 0x2, 0x245, 0x243, 0x3, 0x2, 0x2, 0x2, 0x245, 0x246, 
    0x3, 0x2, 0x2, 0x2, 0x246, 0x24a, 0x3, 0x2, 0x2, 0x2, 0x247, 0x248, 
    0x5, 0x86, 0x44, 0x2, 0x248, 0x249, 0x7, 0x4, 0x2, 0x2, 0x249, 0x24b, 
    0x3, 0x2, 0x2, 0x2, 0x24a, 0x247, 0x3, 0x2, 0x2, 0x2, 0x24a, 0x24b, 
    0x3, 0x2, 0x2, 0x2, 0x24b, 0x24c, 0x3, 0x2, 0x2, 0x2, 0x24c, 0x24d, 
    0x5, 0x94, 0x4b, 0x2, 0x24d, 0x27, 0x3, 0x2, 0x2, 0x2, 0x24e, 0x24f, 
    0x7, 0x41, 0x2, 0x2, 0x24f, 0x252, 0x7, 0x84, 0x2, 0x2, 0x250, 0x251, 
    0x7, 0x52, 0x2, 0x2, 0x251, 0x253, 0x7, 0x48, 0x2, 0x2, 0x252, 0x250, 
    0x3, 0x2, 0x2, 0x2, 0x252, 0x253, 0x3, 0x2, 0x2, 0x2, 0x253, 0x257, 
    0x3, 0x2, 0x2, 0x2, 0x254, 0x255, 0x5, 0x86, 0x44, 0x2, 0x255, 0x256, 
    0x7, 0x4, 0x2, 0x2, 0x256, 0x258, 0x3, 0x2, 0x2, 0x2, 0x257, 0x254, 
    0x3, 0x2, 0x2, 0x2, 0x257, 0x258, 0x3, 0x2, 0x2, 0x2, 0x258, 0x259, 
    0x3, 0x2, 0x2, 0x2, 0x259, 0x25a, 0x5, 0x88, 0x45, 0x2, 0x25a, 0x29, 
    0x3, 0x2, 0x2, 0x2, 0x25b, 0x25c, 0x7, 0x41, 0x2, 0x2, 0x25c, 0x25f, 
    0x7, 0x8a, 0x2, 0x2, 0x25d, 0x25e, 0x7, 0x52, 0x2, 0x2, 0x25e, 0x260, 
    0x7, 0x48, 0x2, 0x2, 0x25f, 0x25d, 0x3, 0x2, 0x2, 0x2, 0x25f, 0x260, 
    0x3, 0x2, 0x2, 0x2, 0x260, 0x264, 0x3, 0x2, 0x2, 0x2, 0x261, 0x262, 
    0x5, 0x86, 0x44, 0x2, 0x262, 0x263, 0x7, 0x4, 0x2, 0x2, 0x263, 0x265, 
    0x3, 0x2, 0x2, 0x2, 0x264, 0x261, 0x3, 0x2, 0x2, 0x2, 0x264, 0x265, 
    0x3, 0x2, 0x2, 0x2, 0x265, 0x266, 0x3, 0x2, 0x2, 0x2, 0x266, 0x267, 
    0x5, 0x96, 0x4c, 0x2, 0x267, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x268, 0x269, 
    0x7, 0x41, 0x2, 0x2, 0x269, 0x26c, 0x7, 0x91, 0x2, 0x2, 0x26a, 0x26b, 
    0x7, 0x52, 0x2, 0x2, 0x26b, 0x26d, 0x7, 0x48, 0x2, 0x2, 0x26c, 0x26a, 
    0x3, 0x2, 0x2, 0x2, 0x26c, 0x26d, 0x3, 0x2, 0x2, 0x2, 0x26d, 0x271, 
    0x3, 0x2, 0x2, 0x2, 0x26e, 0x26f, 0x5, 0x86, 0x44, 0x2, 0x26f, 0x270, 
    0x7, 0x4, 0x2, 0x2, 0x270, 0x272, 0x3, 0x2, 0x2, 0x2, 0x271, 0x26e, 
    0x3, 0x2, 0x2, 0x2, 0x271, 0x272, 0x3, 0x2, 0x2, 0x2, 0x272, 0x273, 
    0x3, 0x2, 0x2, 0x2, 0x273, 0x274, 0x5, 0x98, 0x4d, 0x2, 0x274, 0x2d, 
    0x3, 0x2, 0x2, 0x2, 0x275, 0x277, 0x7, 0x95, 0x2, 0x2, 0x276, 0x278, 
    0x7, 0x76, 0x2, 0x2, 0x277, 0x276, 0x3, 0x2, 0x2, 0x2, 0x277, 0x278, 
    0x3, 0x2, 0x2, 0x2, 0x278, 0x279, 0x3, 0x2, 0x2, 0x2, 0x279, 0x27e, 
    0x5, 0x62, 0x32, 0x2, 0x27a, 0x27b, 0x7, 0x7, 0x2, 0x2, 0x27b, 0x27d, 
    0x5, 0x62, 0x32, 0x2, 0x27c, 0x27a, 0x3, 0x2, 0x2, 0x2, 0x27d, 0x280, 
    0x3, 0x2, 0x2, 0x2, 0x27e, 0x27c, 0x3, 0x2, 0x2, 0x2, 0x27e, 0x27f, 
    0x3, 0x2, 0x2, 0x2, 0x27f, 0x282, 0x3, 0x2, 0x2, 0x2, 0x280, 0x27e, 
    0x3, 0x2, 0x2, 0x2, 0x281, 0x275, 0x3, 0x2, 0x2, 0x2, 0x281, 0x282, 
    0x3, 0x2, 0x2, 0x2, 0x282, 0x283, 0x3, 0x2, 0x2, 0x2, 0x283, 0x289, 
    0x5, 0x6e, 0x38, 0x2, 0x284, 0x285, 0x5, 0x70, 0x39, 0x2, 0x285, 0x286, 
    0x5, 0x6e, 0x38, 0x2, 0x286, 0x288, 0x3, 0x2, 0x2, 0x2, 0x287, 0x284, 
    0x3, 0x2, 0x2, 0x2, 0x288, 0x28b, 0x3, 0x2, 0x2, 0x2, 0x289, 0x287, 
    0x3, 0x2, 0x2, 0x2, 0x289, 0x28a, 0x3, 0x2, 0x2, 0x2, 0x28a, 0x296, 
    0x3, 0x2, 0x2, 0x2, 0x28b, 0x289, 0x3, 0x2, 0x2, 0x2, 0x28c, 0x28d, 
    0x7, 0x6f, 0x2, 0x2, 0x28d, 0x28e, 0x7, 0x2a, 0x2, 0x2, 0x28e, 0x293, 
    0x5, 0x5e, 0x30, 0x2, 0x28f, 0x290, 0x7, 0x7, 0x2, 0x2, 0x290, 0x292, 
    0x5, 0x5e, 0x30, 0x2, 0x291, 0x28f, 0x3, 0x2, 0x2, 0x2, 0x292, 0x295, 
    0x3, 0x2, 0x2, 0x2, 0x293, 0x291, 0x3, 0x2, 0x2, 0x2, 0x293, 0x294, 
    0x3, 0x2, 0x2, 0x2, 0x294, 0x297, 0x3, 0x2, 0x2, 0x2, 0x295, 0x293, 
    0x3, 0x2, 0x2, 0x2, 0x296, 0x28c, 0x3, 0x2, 0x2, 0x2, 0x296, 0x297, 
    0x3, 0x2, 0x2, 0x2, 0x297, 0x29e, 0x3, 0x2, 0x2, 0x2, 0x298, 0x299, 
    0x7, 0x64, 0x2, 0x2, 0x299, 0x29c, 0x5, 0x50, 0x29, 0x2, 0x29a, 0x29b, 
    0x9, 0x4, 0x2, 0x2, 0x29b, 0x29d, 0x5, 0x50, 0x29, 0x2, 0x29c, 0x29a, 
    0x3, 0x2, 0x2, 0x2, 0x29c, 0x29d, 0x3, 0x2, 0x2, 0x2, 0x29d, 0x29f, 
    0x3, 0x2, 0x2, 0x2, 0x29e, 0x298, 0x3, 0x2, 0x2, 0x2, 0x29e, 0x29f, 
    0x3, 0x2, 0x2, 0x2, 0x29f, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x2a0, 0x2a2, 0x5, 
    0x5a, 0x2e, 0x2, 0x2a1, 0x2a0, 0x3, 0x2, 0x2, 0x2, 0x2a1, 0x2a2, 0x3, 
    0x2, 0x2, 0x2, 0x2a2, 0x2b4, 0x3, 0x2, 0x2, 0x2, 0x2a3, 0x2b5, 0x7, 
    0x5a, 0x2, 0x2, 0x2a4, 0x2b5, 0x7, 0x7c, 0x2, 0x2, 0x2a5, 0x2a6, 0x7, 
    0x5a, 0x2, 0x2, 0x2a6, 0x2a7, 0x7, 0x6e, 0x2, 0x2, 0x2a7, 0x2b5, 0x7, 
    0x7c, 0x2, 0x2, 0x2a8, 0x2a9, 0x7, 0x5a, 0x2, 0x2, 0x2a9, 0x2aa, 0x7, 
    0x6e, 0x2, 0x2, 0x2aa, 0x2b5, 0x7, 0x7f, 0x2, 0x2, 0x2ab, 0x2ac, 0x7, 
    0x5a, 0x2, 0x2, 0x2ac, 0x2ad, 0x7, 0x6e, 0x2, 0x2, 0x2ad, 0x2b5, 0x7, 
    0x1b, 0x2, 0x2, 0x2ae, 0x2af, 0x7, 0x5a, 0x2, 0x2, 0x2af, 0x2b0, 0x7, 
    0x6e, 0x2, 0x2, 0x2b0, 0x2b5, 0x7, 0x4a, 0x2, 0x2, 0x2b1, 0x2b2, 0x7, 
    0x5a, 0x2, 0x2, 0x2b2, 0x2b3, 0x7, 0x6e, 0x2, 0x2, 0x2b3, 0x2b5, 0x7, 
    0x53, 0x2, 0x2, 0x2b4, 0x2a3, 0x3, 0x2, 0x2, 0x2, 0x2b4, 0x2a4, 0x3, 
    0x2, 0x2, 0x2, 0x2b4, 0x2a5, 0x3, 0x2, 0x2, 0x2, 0x2b4, 0x2a8, 0x3, 
    0x2, 0x2, 0x2, 0x2b4, 0x2ab, 0x3, 0x2, 0x2, 0x2, 0x2b4, 0x2ae, 0x3, 
    0x2, 0x2, 0x2, 0x2b4, 0x2b1, 0x3, 0x2, 0x2, 0x2, 0x2b5, 0x2b6, 0x3, 
    0x2, 0x2, 0x2, 0x2b6, 0x2ba, 0x7, 0x5d, 0x2, 0x2, 0x2b7, 0x2b8, 0x5, 
    0x86, 0x44, 0x2, 0x2b8, 0x2b9, 0x7, 0x4, 0x2, 0x2, 0x2b9, 0x2bb, 0x3, 
    0x2, 0x2, 0x2, 0x2ba, 0x2b7, 0x3, 0x2, 0x2, 0x2, 0x2ba, 0x2bb, 0x3, 
    0x2, 0x2, 0x2, 0x2bb, 0x2bc, 0x3, 0x2, 0x2, 0x2, 0x2bc, 0x2c8, 0x5, 
    0x88, 0x45, 0x2, 0x2bd, 0x2be, 0x7, 0x5, 0x2, 0x2, 0x2be, 0x2c3, 0x5, 
    0x8e, 0x48, 0x2, 0x2bf, 0x2c0, 0x7, 0x7, 0x2, 0x2, 0x2c0, 0x2c2, 0x5, 
    0x8e, 0x48, 0x2, 0x2c1, 0x2bf, 0x3, 0x2, 0x2, 0x2, 0x2c2, 0x2c5, 0x3, 
    0x2, 0x2, 0x2, 0x2c3, 0x2c1, 0x3, 0x2, 0x2, 0x2, 0x2c3, 0x2c4, 0x3, 
    0x2, 0x2, 0x2, 0x2c4, 0x2c6, 0x3, 0x2, 0x2, 0x2, 0x2c5, 0x2c3, 0x3, 
    0x2, 0x2, 0x2, 0x2c6, 0x2c7, 0x7, 0x6, 0x2, 0x2, 0x2c7, 0x2c9, 0x3, 
    0x2, 0x2, 0x2, 0x2c8, 0x2bd, 0x3, 0x2, 0x2, 0x2, 0x2c8, 0x2c9, 0x3, 
    0x2, 0x2, 0x2, 0x2c9, 0x2e9, 0x3, 0x2, 0x2, 0x2, 0x2ca, 0x2cb, 0x7, 
    0x90, 0x2, 0x2, 0x2cb, 0x2cc, 0x7, 0x5, 0x2, 0x2, 0x2cc, 0x2d1, 0x5, 
    0x50, 0x29, 0x2, 0x2cd, 0x2ce, 0x7, 0x7, 0x2, 0x2, 0x2ce, 0x2d0, 0x5, 
    0x50, 0x29, 0x2, 0x2cf, 0x2cd, 0x3, 0x2, 0x2, 0x2, 0x2d0, 0x2d3, 0x3, 
    0x2, 0x2, 0x2, 0x2d1, 0x2cf, 0x3, 0x2, 0x2, 0x2, 0x2d1, 0x2d2, 0x3, 
    0x2, 0x2, 0x2, 0x2d2, 0x2d4, 0x3, 0x2, 0x2, 0x2, 0x2d3, 0x2d1, 0x3, 
    0x2, 0x2, 0x2, 0x2d4, 0x2e3, 0x7, 0x6, 0x2, 0x2, 0x2d5, 0x2d6, 0x7, 
    0x7, 0x2, 0x2, 0x2d6, 0x2d7, 0x7, 0x5, 0x2, 0x2, 0x2d7, 0x2dc, 0x5, 
    0x50, 0x29, 0x2, 0x2d8, 0x2d9, 0x7, 0x7, 0x2, 0x2, 0x2d9, 0x2db, 0x5, 
    0x50, 0x29, 0x2, 0x2da, 0x2d8, 0x3, 0x2, 0x2, 0x2, 0x2db, 0x2de, 0x3, 
    0x2, 0x2, 0x2, 0x2dc, 0x2da, 0x3, 0x2, 0x2, 0x2, 0x2dc, 0x2dd, 0x3, 
    0x2, 0x2, 0x2, 0x2dd, 0x2df, 0x3, 0x2, 0x2, 0x2, 0x2de, 0x2dc, 0x3, 
    0x2, 0x2, 0x2, 0x2df, 0x2e0, 0x7, 0x6, 0x2, 0x2, 0x2e0, 0x2e2, 0x3, 
    0x2, 0x2, 0x2, 0x2e1, 0x2d5, 0x3, 0x2, 0x2, 0x2, 0x2e2, 0x2e5, 0x3, 
    0x2, 0x2, 0x2, 0x2e3, 0x2e1, 0x3, 0x2, 0x2, 0x2, 0x2e3, 0x2e4, 0x3, 
    0x2, 0x2, 0x2, 0x2e4, 0x2ea, 0x3, 0x2, 0x2, 0x2, 0x2e5, 0x2e3, 0x3, 
    0x2, 0x2, 0x2, 0x2e6, 0x2ea, 0x5, 0x3e, 0x20, 0x2, 0x2e7, 0x2e8, 0x7, 
    0x3a, 0x2, 0x2, 0x2e8, 0x2ea, 0x7, 0x90, 0x2, 0x2, 0x2e9, 0x2ca, 0x3, 
    0x2, 0x2, 0x2, 0x2e9, 0x2e6, 0x3, 0x2, 0x2, 0x2, 0x2e9, 0x2e7, 0x3, 
    0x2, 0x2, 0x2, 0x2ea, 0x31, 0x3, 0x2, 0x2, 0x2, 0x2eb, 0x2ef, 0x7, 0x72, 
    0x2, 0x2, 0x2ec, 0x2ed, 0x5, 0x86, 0x44, 0x2, 0x2ed, 0x2ee, 0x7, 0x4, 
    0x2, 0x2, 0x2ee, 0x2f0, 0x3, 0x2, 0x2, 0x2, 0x2ef, 0x2ec, 0x3, 0x2, 
    0x2, 0x2, 0x2ef, 0x2f0, 0x3, 0x2, 0x2, 0x2, 0x2f0, 0x2f1, 0x3, 0x2, 
    0x2, 0x2, 0x2f1, 0x2f8, 0x5, 0x9c, 0x4f, 0x2, 0x2f2, 0x2f3, 0x7, 0x8, 
    0x2, 0x2, 0x2f3, 0x2f9, 0x5, 0x60, 0x31, 0x2, 0x2f4, 0x2f5, 0x7, 0x5, 
    0x2, 0x2, 0x2f5, 0x2f6, 0x5, 0x60, 0x31, 0x2, 0x2f6, 0x2f7, 0x7, 0x6, 
    0x2, 0x2, 0x2f7, 0x2f9, 0x3, 0x2, 0x2, 0x2, 0x2f8, 0x2f2, 0x3, 0x2, 
    0x2, 0x2, 0x2f8, 0x2f4, 0x3, 0x2, 0x2, 0x2, 0x2f8, 0x2f9, 0x3, 0x2, 
    0x2, 0x2, 0x2f9, 0x33, 0x3, 0x2, 0x2, 0x2, 0x2fa, 0x305, 0x7, 0x79, 
    0x2, 0x2, 0x2fb, 0x306, 0x5, 0x90, 0x49, 0x2, 0x2fc, 0x2fd, 0x5, 0x86, 
    0x44, 0x2, 0x2fd, 0x2fe, 0x7, 0x4, 0x2, 0x2, 0x2fe, 0x300, 0x3, 0x2, 
    0x2, 0x2, 0x2ff, 0x2fc, 0x3, 0x2, 0x2, 0x2, 0x2ff, 0x300, 0x3, 0x2, 
    0x2, 0x2, 0x300, 0x303, 0x3, 0x2, 0x2, 0x2, 0x301, 0x304, 0x5, 0x88, 
    0x45, 0x2, 0x302, 0x304, 0x5, 0x94, 0x4b, 0x2, 0x303, 0x301, 0x3, 0x2, 
    0x2, 0x2, 0x303, 0x302, 0x3, 0x2, 0x2, 0x2, 0x304, 0x306, 0x3, 0x2, 
    0x2, 0x2, 0x305, 0x2fb, 0x3, 0x2, 0x2, 0x2, 0x305, 0x2ff, 0x3, 0x2, 
    0x2, 0x2, 0x305, 0x306, 0x3, 0x2, 0x2, 0x2, 0x306, 0x35, 0x3, 0x2, 0x2, 
    0x2, 0x307, 0x309, 0x7, 0x7a, 0x2, 0x2, 0x308, 0x30a, 0x7, 0x81, 0x2, 
    0x2, 0x309, 0x308, 0x3, 0x2, 0x2, 0x2, 0x309, 0x30a, 0x3, 0x2, 0x2, 
    0x2, 0x30a, 0x30b, 0x3, 0x2, 0x2, 0x2, 0x30b, 0x30c, 0x5, 0x9e, 0x50, 
    0x2, 0x30c, 0x37, 0x3, 0x2, 0x2, 0x2, 0x30d, 0x312, 0x7, 0x7f, 0x2, 
    0x2, 0x30e, 0x310, 0x7, 0x89, 0x2, 0x2, 0x30f, 0x311, 0x5, 0xa2, 0x52, 
    0x2, 0x310, 0x30f, 0x3, 0x2, 0x2, 0x2, 0x310, 0x311, 0x3, 0x2, 0x2, 
    0x2, 0x311, 0x313, 0x3, 0x2, 0x2, 0x2, 0x312, 0x30e, 0x3, 0x2, 0x2, 
    0x2, 0x312, 0x313, 0x3, 0x2, 0x2, 0x2, 0x313, 0x319, 0x3, 0x2, 0x2, 
    0x2, 0x314, 0x316, 0x7, 0x88, 0x2, 0x2, 0x315, 0x317, 0x7, 0x81, 0x2, 
    0x2, 0x316, 0x315, 0x3, 0x2, 0x2, 0x2, 0x316, 0x317, 0x3, 0x2, 0x2, 
    0x2, 0x317, 0x318, 0x3, 0x2, 0x2, 0x2, 0x318, 0x31a, 0x5, 0x9e, 0x50, 
    0x2, 0x319, 0x314, 0x3, 0x2, 0x2, 0x2, 0x319, 0x31a, 0x3, 0x2, 0x2, 
    0x2, 0x31a, 0x39, 0x3, 0x2, 0x2, 0x2, 0x31b, 0x31c, 0x7, 0x81, 0x2, 
    0x2, 0x31c, 0x31d, 0x5, 0x9e, 0x50, 0x2, 0x31d, 0x3b, 0x3, 0x2, 0x2, 
    0x2, 0x31e, 0x320, 0x7, 0x95, 0x2, 0x2, 0x31f, 0x321, 0x7, 0x76, 0x2, 
    0x2, 0x320, 0x31f, 0x3, 0x2, 0x2, 0x2, 0x320, 0x321, 0x3, 0x2, 0x2, 
    0x2, 0x321, 0x322, 0x3, 0x2, 0x2, 0x2, 0x322, 0x327, 0x5, 0x62, 0x32, 
    0x2, 0x323, 0x324, 0x7, 0x7, 0x2, 0x2, 0x324, 0x326, 0x5, 0x62, 0x32, 
    0x2, 0x325, 0x323, 0x3, 0x2, 0x2, 0x2, 0x326, 0x329, 0x3, 0x2, 0x2, 
    0x2, 0x327, 0x325, 0x3, 0x2, 0x2, 0x2, 0x327, 0x328, 0x3, 0x2, 0x2, 
    0x2, 0x328, 0x32b, 0x3, 0x2, 0x2, 0x2, 0x329, 0x327, 0x3, 0x2, 0x2, 
    0x2, 0x32a, 0x31e, 0x3, 0x2, 0x2, 0x2, 0x32a, 0x32b, 0x3, 0x2, 0x2, 
    0x2, 0x32b, 0x32c, 0x3, 0x2, 0x2, 0x2, 0x32c, 0x337, 0x5, 0x6e, 0x38, 
    0x2, 0x32d, 0x32e, 0x7, 0x6f, 0x2, 0x2, 0x32e, 0x32f, 0x7, 0x2a, 0x2, 
    0x2, 0x32f, 0x334, 0x5, 0x5e, 0x30, 0x2, 0x330, 0x331, 0x7, 0x7, 0x2, 
    0x2, 0x331, 0x333, 0x5, 0x5e, 0x30, 0x2, 0x332, 0x330, 0x3, 0x2, 0x2, 
    0x2, 0x333, 0x336, 0x3, 0x2, 0x2, 0x2, 0x334, 0x332, 0x3, 0x2, 0x2, 
    0x2, 0x334, 0x335, 0x3, 0x2, 0x2, 0x2, 0x335, 0x338, 0x3, 0x2, 0x2, 
    0x2, 0x336, 0x334, 0x3, 0x2, 0x2, 0x2, 0x337, 0x32d, 0x3, 0x2, 0x2, 
    0x2, 0x337, 0x338, 0x3, 0x2, 0x2, 0x2, 0x338, 0x33f, 0x3, 0x2, 0x2, 
    0x2, 0x339, 0x33a, 0x7, 0x64, 0x2, 0x2, 0x33a, 0x33d, 0x5, 0x50, 0x29, 
    0x2, 0x33b, 0x33c, 0x9, 0x4, 0x2, 0x2, 0x33c, 0x33e, 0x5, 0x50, 0x29, 
    0x2, 0x33d, 0x33b, 0x3, 0x2, 0x2, 0x2, 0x33d, 0x33e, 0x3, 0x2, 0x2, 
    0x2, 0x33e, 0x340, 0x3, 0x2, 0x2, 0x2, 0x33f, 0x339, 0x3, 0x2, 0x2, 
    0x2, 0x33f, 0x340, 0x3, 0x2, 0x2, 0x2, 0x340, 0x3d, 0x3, 0x2, 0x2, 0x2, 
    0x341, 0x343, 0x7, 0x95, 0x2, 0x2, 0x342, 0x344, 0x7, 0x76, 0x2, 0x2, 
    0x343, 0x342, 0x3, 0x2, 0x2, 0x2, 0x343, 0x344, 0x3, 0x2, 0x2, 0x2, 
    0x344, 0x345, 0x3, 0x2, 0x2, 0x2, 0x345, 0x34a, 0x5, 0x62, 0x32, 0x2, 
    0x346, 0x347, 0x7, 0x7, 0x2, 0x2, 0x347, 0x349, 0x5, 0x62, 0x32, 0x2, 
    0x348, 0x346, 0x3, 0x2, 0x2, 0x2, 0x349, 0x34c, 0x3, 0x2, 0x2, 0x2, 
    0x34a, 0x348, 0x3, 0x2, 0x2, 0x2, 0x34a, 0x34b, 0x3, 0x2, 0x2, 0x2, 
    0x34b, 0x34e, 0x3, 0x2, 0x2, 0x2, 0x34c, 0x34a, 0x3, 0x2, 0x2, 0x2, 
    0x34d, 0x341, 0x3, 0x2, 0x2, 0x2, 0x34d, 0x34e, 0x3, 0x2, 0x2, 0x2, 
    0x34e, 0x34f, 0x3, 0x2, 0x2, 0x2, 0x34f, 0x355, 0x5, 0x40, 0x21, 0x2, 
    0x350, 0x351, 0x5, 0x70, 0x39, 0x2, 0x351, 0x352, 0x5, 0x40, 0x21, 0x2, 
    0x352, 0x354, 0x3, 0x2, 0x2, 0x2, 0x353, 0x350, 0x3, 0x2, 0x2, 0x2, 
    0x354, 0x357, 0x3, 0x2, 0x2, 0x2, 0x355, 0x353, 0x3, 0x2, 0x2, 0x2, 
    0x355, 0x356, 0x3, 0x2, 0x2, 0x2, 0x356, 0x362, 0x3, 0x2, 0x2, 0x2, 
    0x357, 0x355, 0x3, 0x2, 0x2, 0x2, 0x358, 0x359, 0x7, 0x6f, 0x2, 0x2, 
    0x359, 0x35a, 0x7, 0x2a, 0x2, 0x2, 0x35a, 0x35f, 0x5, 0x5e, 0x30, 0x2, 
    0x35b, 0x35c, 0x7, 0x7, 0x2, 0x2, 0x35c, 0x35e, 0x5, 0x5e, 0x30, 0x2, 
    0x35d, 0x35b, 0x3, 0x2, 0x2, 0x2, 0x35e, 0x361, 0x3, 0x2, 0x2, 0x2, 
    0x35f, 0x35d, 0x3, 0x2, 0x2, 0x2, 0x35f, 0x360, 0x3, 0x2, 0x2, 0x2, 
    0x360, 0x363, 0x3, 0x2, 0x2, 0x2, 0x361, 0x35f, 0x3, 0x2, 0x2, 0x2, 
    0x362, 0x358, 0x3, 0x2, 0x2, 0x2, 0x362, 0x363, 0x3, 0x2, 0x2, 0x2, 
    0x363, 0x36a, 0x3, 0x2, 0x2, 0x2, 0x364, 0x365, 0x7, 0x64, 0x2, 0x2, 
    0x365, 0x368, 0x5, 0x50, 0x29, 0x2, 0x366, 0x367, 0x9, 0x4, 0x2, 0x2, 
    0x367, 0x369, 0x5, 0x50, 0x29, 0x2, 0x368, 0x366, 0x3, 0x2, 0x2, 0x2, 
    0x368, 0x369, 0x3, 0x2, 0x2, 0x2, 0x369, 0x36b, 0x3, 0x2, 0x2, 0x2, 
    0x36a, 0x364, 0x3, 0x2, 0x2, 0x2, 0x36a, 0x36b, 0x3, 0x2, 0x2, 0x2, 
    0x36b, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x36c, 0x36e, 0x7, 0x82, 0x2, 0x2, 
    0x36d, 0x36f, 0x9, 0x6, 0x2, 0x2, 0x36e, 0x36d, 0x3, 0x2, 0x2, 0x2, 
    0x36e, 0x36f, 0x3, 0x2, 0x2, 0x2, 0x36f, 0x370, 0x3, 0x2, 0x2, 0x2, 
    0x370, 0x375, 0x5, 0x64, 0x33, 0x2, 0x371, 0x372, 0x7, 0x7, 0x2, 0x2, 
    0x372, 0x374, 0x5, 0x64, 0x33, 0x2, 0x373, 0x371, 0x3, 0x2, 0x2, 0x2, 
    0x374, 0x377, 0x3, 0x2, 0x2, 0x2, 0x375, 0x373, 0x3, 0x2, 0x2, 0x2, 
    0x375, 0x376, 0x3, 0x2, 0x2, 0x2, 0x376, 0x384, 0x3, 0x2, 0x2, 0x2, 
    0x377, 0x375, 0x3, 0x2, 0x2, 0x2, 0x378, 0x382, 0x7, 0x4d, 0x2, 0x2, 
    0x379, 0x37e, 0x5, 0x66, 0x34, 0x2, 0x37a, 0x37b, 0x7, 0x7, 0x2, 0x2, 
    0x37b, 0x37d, 0x5, 0x66, 0x34, 0x2, 0x37c, 0x37a, 0x3, 0x2, 0x2, 0x2, 
    0x37d, 0x380, 0x3, 0x2, 0x2, 0x2, 0x37e, 0x37c, 0x3, 0x2, 0x2, 0x2, 
    0x37e, 0x37f, 0x3, 0x2, 0x2, 0x2, 0x37f, 0x383, 0x3, 0x2, 0x2, 0x2, 
    0x380, 0x37e, 0x3, 0x2, 0x2, 0x2, 0x381, 0x383, 0x5, 0x68, 0x35, 0x2, 
    0x382, 0x379, 0x3, 0x2, 0x2, 0x2, 0x382, 0x381, 0x3, 0x2, 0x2, 0x2, 
    0x383, 0x385, 0x3, 0x2, 0x2, 0x2, 0x384, 0x378, 0x3, 0x2, 0x2, 0x2, 
    0x384, 0x385, 0x3, 0x2, 0x2, 0x2, 0x385, 0x388, 0x3, 0x2, 0x2, 0x2, 
    0x386, 0x387, 0x7, 0x94, 0x2, 0x2, 0x387, 0x389, 0x5, 0x50, 0x29, 0x2, 
    0x388, 0x386, 0x3, 0x2, 0x2, 0x2, 0x388, 0x389, 0x3, 0x2, 0x2, 0x2, 
    0x389, 0x398, 0x3, 0x2, 0x2, 0x2, 0x38a, 0x38b, 0x7, 0x50, 0x2, 0x2, 
    0x38b, 0x38c, 0x7, 0x2a, 0x2, 0x2, 0x38c, 0x391, 0x5, 0x50, 0x29, 0x2, 
    0x38d, 0x38e, 0x7, 0x7, 0x2, 0x2, 0x38e, 0x390, 0x5, 0x50, 0x29, 0x2, 
    0x38f, 0x38d, 0x3, 0x2, 0x2, 0x2, 0x390, 0x393, 0x3, 0x2, 0x2, 0x2, 
    0x391, 0x38f, 0x3, 0x2, 0x2, 0x2, 0x391, 0x392, 0x3, 0x2, 0x2, 0x2, 
    0x392, 0x396, 0x3, 0x2, 0x2, 0x2, 0x393, 0x391, 0x3, 0x2, 0x2, 0x2, 
    0x394, 0x395, 0x7, 0x51, 0x2, 0x2, 0x395, 0x397, 0x5, 0x50, 0x29, 0x2, 
    0x396, 0x394, 0x3, 0x2, 0x2, 0x2, 0x396, 0x397, 0x3, 0x2, 0x2, 0x2, 
    0x397, 0x399, 0x3, 0x2, 0x2, 0x2, 0x398, 0x38a, 0x3, 0x2, 0x2, 0x2, 
    0x398, 0x399, 0x3, 0x2, 0x2, 0x2, 0x399, 0x3b7, 0x3, 0x2, 0x2, 0x2, 
    0x39a, 0x39b, 0x7, 0x90, 0x2, 0x2, 0x39b, 0x39c, 0x7, 0x5, 0x2, 0x2, 
    0x39c, 0x3a1, 0x5, 0x50, 0x29, 0x2, 0x39d, 0x39e, 0x7, 0x7, 0x2, 0x2, 
    0x39e, 0x3a0, 0x5, 0x50, 0x29, 0x2, 0x39f, 0x39d, 0x3, 0x2, 0x2, 0x2, 
    0x3a0, 0x3a3, 0x3, 0x2, 0x2, 0x2, 0x3a1, 0x39f, 0x3, 0x2, 0x2, 0x2, 
    0x3a1, 0x3a2, 0x3, 0x2, 0x2, 0x2, 0x3a2, 0x3a4, 0x3, 0x2, 0x2, 0x2, 
    0x3a3, 0x3a1, 0x3, 0x2, 0x2, 0x2, 0x3a4, 0x3b3, 0x7, 0x6, 0x2, 0x2, 
    0x3a5, 0x3a6, 0x7, 0x7, 0x2, 0x2, 0x3a6, 0x3a7, 0x7, 0x5, 0x2, 0x2, 
    0x3a7, 0x3ac, 0x5, 0x50, 0x29, 0x2, 0x3a8, 0x3a9, 0x7, 0x7, 0x2, 0x2, 
    0x3a9, 0x3ab, 0x5, 0x50, 0x29, 0x2, 0x3aa, 0x3a8, 0x3, 0x2, 0x2, 0x2, 
    0x3ab, 0x3ae, 0x3, 0x2, 0x2, 0x2, 0x3ac, 0x3aa, 0x3, 0x2, 0x2, 0x2, 
    0x3ac, 0x3ad, 0x3, 0x2, 0x2, 0x2, 0x3ad, 0x3af, 0x3, 0x2, 0x2, 0x2, 
    0x3ae, 0x3ac, 0x3, 0x2, 0x2, 0x2, 0x3af, 0x3b0, 0x7, 0x6, 0x2, 0x2, 
    0x3b0, 0x3b2, 0x3, 0x2, 0x2, 0x2, 0x3b1, 0x3a5, 0x3, 0x2, 0x2, 0x2, 
    0x3b2, 0x3b5, 0x3, 0x2, 0x2, 0x2, 0x3b3, 0x3b1, 0x3, 0x2, 0x2, 0x2, 
    0x3b3, 0x3b4, 0x3, 0x2, 0x2, 0x2, 0x3b4, 0x3b7, 0x3, 0x2, 0x2, 0x2, 
    0x3b5, 0x3b3, 0x3, 0x2, 0x2, 0x2, 0x3b6, 0x36c, 0x3, 0x2, 0x2, 0x2, 
    0x3b6, 0x39a, 0x3, 0x2, 0x2, 0x2, 0x3b7, 0x41, 0x3, 0x2, 0x2, 0x2, 0x3b8, 
    0x3ba, 0x5, 0x5a, 0x2e, 0x2, 0x3b9, 0x3b8, 0x3, 0x2, 0x2, 0x2, 0x3b9, 
    0x3ba, 0x3, 0x2, 0x2, 0x2, 0x3ba, 0x3bb, 0x3, 0x2, 0x2, 0x2, 0x3bb, 
    0x3c6, 0x7, 0x8d, 0x2, 0x2, 0x3bc, 0x3bd, 0x7, 0x6e, 0x2, 0x2, 0x3bd, 
    0x3c7, 0x7, 0x7f, 0x2, 0x2, 0x3be, 0x3bf, 0x7, 0x6e, 0x2, 0x2, 0x3bf, 
    0x3c7, 0x7, 0x1b, 0x2, 0x2, 0x3c0, 0x3c1, 0x7, 0x6e, 0x2, 0x2, 0x3c1, 
    0x3c7, 0x7, 0x7c, 0x2, 0x2, 0x3c2, 0x3c3, 0x7, 0x6e, 0x2, 0x2, 0x3c3, 
    0x3c7, 0x7, 0x4a, 0x2, 0x2, 0x3c4, 0x3c5, 0x7, 0x6e, 0x2, 0x2, 0x3c5, 
    0x3c7, 0x7, 0x53, 0x2, 0x2, 0x3c6, 0x3bc, 0x3, 0x2, 0x2, 0x2, 0x3c6, 
    0x3be, 0x3, 0x2, 0x2, 0x2, 0x3c6, 0x3c0, 0x3, 0x2, 0x2, 0x2, 0x3c6, 
    0x3c2, 0x3, 0x2, 0x2, 0x2, 0x3c6, 0x3c4, 0x3, 0x2, 0x2, 0x2, 0x3c6, 
    0x3c7, 0x3, 0x2, 0x2, 0x2, 0x3c7, 0x3c8, 0x3, 0x2, 0x2, 0x2, 0x3c8, 
    0x3c9, 0x5, 0x5c, 0x2f, 0x2, 0x3c9, 0x3ca, 0x7, 0x83, 0x2, 0x2, 0x3ca, 
    0x3cb, 0x5, 0x8e, 0x48, 0x2, 0x3cb, 0x3cc, 0x7, 0x8, 0x2, 0x2, 0x3cc, 
    0x3d4, 0x5, 0x50, 0x29, 0x2, 0x3cd, 0x3ce, 0x7, 0x7, 0x2, 0x2, 0x3ce, 
    0x3cf, 0x5, 0x8e, 0x48, 0x2, 0x3cf, 0x3d0, 0x7, 0x8, 0x2, 0x2, 0x3d0, 
    0x3d1, 0x5, 0x50, 0x29, 0x2, 0x3d1, 0x3d3, 0x3, 0x2, 0x2, 0x2, 0x3d2, 
    0x3cd, 0x3, 0x2, 0x2, 0x2, 0x3d3, 0x3d6, 0x3, 0x2, 0x2, 0x2, 0x3d4, 
    0x3d2, 0x3, 0x2, 0x2, 0x2, 0x3d4, 0x3d5, 0x3, 0x2, 0x2, 0x2, 0x3d5, 
    0x3d9, 0x3, 0x2, 0x2, 0x2, 0x3d6, 0x3d4, 0x3, 0x2, 0x2, 0x2, 0x3d7, 
    0x3d8, 0x7, 0x94, 0x2, 0x2, 0x3d8, 0x3da, 0x5, 0x50, 0x29, 0x2, 0x3d9, 
    0x3d7, 0x3, 0x2, 0x2, 0x2, 0x3d9, 0x3da, 0x3, 0x2, 0x2, 0x2, 0x3da, 
    0x43, 0x3, 0x2, 0x2, 0x2, 0x3db, 0x3dd, 0x5, 0x5a, 0x2e, 0x2, 0x3dc, 
    0x3db, 0x3, 0x2, 0x2, 0x2, 0x3dc, 0x3dd, 0x3, 0x2, 0x2, 0x2, 0x3dd, 
    0x3de, 0x3, 0x2, 0x2, 0x2, 0x3de, 0x3e9, 0x7, 0x8d, 0x2, 0x2, 0x3df, 
    0x3e0, 0x7, 0x6e, 0x2, 0x2, 0x3e0, 0x3ea, 0x7, 0x7f, 0x2, 0x2, 0x3e1, 
    0x3e2, 0x7, 0x6e, 0x2, 0x2, 0x3e2, 0x3ea, 0x7, 0x1b, 0x2, 0x2, 0x3e3, 
    0x3e4, 0x7, 0x6e, 0x2, 0x2, 0x3e4, 0x3ea, 0x7, 0x7c, 0x2, 0x2, 0x3e5, 
    0x3e6, 0x7, 0x6e, 0x2, 0x2, 0x3e6, 0x3ea, 0x7, 0x4a, 0x2, 0x2, 0x3e7, 
    0x3e8, 0x7, 0x6e, 0x2, 0x2, 0x3e8, 0x3ea, 0x7, 0x53, 0x2, 0x2, 0x3e9, 
    0x3df, 0x3, 0x2, 0x2, 0x2, 0x3e9, 0x3e1, 0x3, 0x2, 0x2, 0x2, 0x3e9, 
    0x3e3, 0x3, 0x2, 0x2, 0x2, 0x3e9, 0x3e5, 0x3, 0x2, 0x2, 0x2, 0x3e9, 
    0x3e7, 0x3, 0x2, 0x2, 0x2, 0x3e9, 0x3ea, 0x3, 0x2, 0x2, 0x2, 0x3ea, 
    0x3eb, 0x3, 0x2, 0x2, 0x2, 0x3eb, 0x3ec, 0x5, 0x5c, 0x2f, 0x2, 0x3ec, 
    0x3ed, 0x7, 0x83, 0x2, 0x2, 0x3ed, 0x3ee, 0x5, 0x8e, 0x48, 0x2, 0x3ee, 
    0x3ef, 0x7, 0x8, 0x2, 0x2, 0x3ef, 0x3f7, 0x5, 0x50, 0x29, 0x2, 0x3f0, 
    0x3f1, 0x7, 0x7, 0x2, 0x2, 0x3f1, 0x3f2, 0x5, 0x8e, 0x48, 0x2, 0x3f2, 
    0x3f3, 0x7, 0x8, 0x2, 0x2, 0x3f3, 0x3f4, 0x5, 0x50, 0x29, 0x2, 0x3f4, 
    0x3f6, 0x3, 0x2, 0x2, 0x2, 0x3f5, 0x3f0, 0x3, 0x2, 0x2, 0x2, 0x3f6, 
    0x3f9, 0x3, 0x2, 0x2, 0x2, 0x3f7, 0x3f5, 0x3, 0x2, 0x2, 0x2, 0x3f7, 
    0x3f8, 0x3, 0x2, 0x2, 0x2, 0x3f8, 0x3fc, 0x3, 0x2, 0x2, 0x2, 0x3f9, 
    0x3f7, 0x3, 0x2, 0x2, 0x2, 0x3fa, 0x3fb, 0x7, 0x94, 0x2, 0x2, 0x3fb, 
    0x3fd, 0x5, 0x50, 0x29, 0x2, 0x3fc, 0x3fa, 0x3, 0x2, 0x2, 0x2, 0x3fc, 
    0x3fd, 0x3, 0x2, 0x2, 0x2, 0x3fd, 0x410, 0x3, 0x2, 0x2, 0x2, 0x3fe, 
    0x3ff, 0x7, 0x6f, 0x2, 0x2, 0x3ff, 0x400, 0x7, 0x2a, 0x2, 0x2, 0x400, 
    0x405, 0x5, 0x5e, 0x30, 0x2, 0x401, 0x402, 0x7, 0x7, 0x2, 0x2, 0x402, 
    0x404, 0x5, 0x5e, 0x30, 0x2, 0x403, 0x401, 0x3, 0x2, 0x2, 0x2, 0x404, 
    0x407, 0x3, 0x2, 0x2, 0x2, 0x405, 0x403, 0x3, 0x2, 0x2, 0x2, 0x405, 
    0x406, 0x3, 0x2, 0x2, 0x2, 0x406, 0x409, 0x3, 0x2, 0x2, 0x2, 0x407, 
    0x405, 0x3, 0x2, 0x2, 0x2, 0x408, 0x3fe, 0x3, 0x2, 0x2, 0x2, 0x408, 
    0x409, 0x3, 0x2, 0x2, 0x2, 0x409, 0x40a, 0x3, 0x2, 0x2, 0x2, 0x40a, 
    0x40b, 0x7, 0x64, 0x2, 0x2, 0x40b, 0x40e, 0x5, 0x50, 0x29, 0x2, 0x40c, 
    0x40d, 0x9, 0x4, 0x2, 0x2, 0x40d, 0x40f, 0x5, 0x50, 0x29, 0x2, 0x40e, 
    0x40c, 0x3, 0x2, 0x2, 0x2, 0x40e, 0x40f, 0x3, 0x2, 0x2, 0x2, 0x40f, 
    0x411, 0x3, 0x2, 0x2, 0x2, 0x410, 0x408, 0x3, 0x2, 0x2, 0x2, 0x410, 
    0x411, 0x3, 0x2, 0x2, 0x2, 0x411, 0x45, 0x3, 0x2, 0x2, 0x2, 0x412, 0x413, 
    0x7, 0x8f, 0x2, 0x2, 0x413, 0x47, 0x3, 0x2, 0x2, 0x2, 0x414, 0x416, 
    0x5, 0x8e, 0x48, 0x2, 0x415, 0x417, 0x5, 0x4a, 0x26, 0x2, 0x416, 0x415, 
    0x3, 0x2, 0x2, 0x2, 0x416, 0x417, 0x3, 0x2, 0x2, 0x2, 0x417, 0x41b, 
    0x3, 0x2, 0x2, 0x2, 0x418, 0x41a, 0x5, 0x4c, 0x27, 0x2, 0x419, 0x418, 
    0x3, 0x2, 0x2, 0x2, 0x41a, 0x41d, 0x3, 0x2, 0x2, 0x2, 0x41b, 0x419, 
    0x3, 0x2, 0x2, 0x2, 0x41b, 0x41c, 0x3, 0x2, 0x2, 0x2, 0x41c, 0x49, 0x3, 
    0x2, 0x2, 0x2, 0x41d, 0x41b, 0x3, 0x2, 0x2, 0x2, 0x41e, 0x420, 0x5, 
    0x82, 0x42, 0x2, 0x41f, 0x41e, 0x3, 0x2, 0x2, 0x2, 0x420, 0x421, 0x3, 
    0x2, 0x2, 0x2, 0x421, 0x41f, 0x3, 0x2, 0x2, 0x2, 0x421, 0x422, 0x3, 
    0x2, 0x2, 0x2, 0x422, 0x42d, 0x3, 0x2, 0x2, 0x2, 0x423, 0x424, 0x7, 
    0x5, 0x2, 0x2, 0x424, 0x425, 0x5, 0x74, 0x3b, 0x2, 0x425, 0x426, 0x7, 
    0x6, 0x2, 0x2, 0x426, 0x42e, 0x3, 0x2, 0x2, 0x2, 0x427, 0x428, 0x7, 
    0x5, 0x2, 0x2, 0x428, 0x429, 0x5, 0x74, 0x3b, 0x2, 0x429, 0x42a, 0x7, 
    0x7, 0x2, 0x2, 0x42a, 0x42b, 0x5, 0x74, 0x3b, 0x2, 0x42b, 0x42c, 0x7, 
    0x6, 0x2, 0x2, 0x42c, 0x42e, 0x3, 0x2, 0x2, 0x2, 0x42d, 0x423, 0x3, 
    0x2, 0x2, 0x2, 0x42d, 0x427, 0x3, 0x2, 0x2, 0x2, 0x42d, 0x42e, 0x3, 
    0x2, 0x2, 0x2, 0x42e, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x42f, 0x430, 0x7, 0x33, 
    0x2, 0x2, 0x430, 0x432, 0x5, 0x82, 0x42, 0x2, 0x431, 0x42f, 0x3, 0x2, 
    0x2, 0x2, 0x431, 0x432, 0x3, 0x2, 0x2, 0x2, 0x432, 0x454, 0x3, 0x2, 
    0x2, 0x2, 0x433, 0x434, 0x7, 0x73, 0x2, 0x2, 0x434, 0x436, 0x7, 0x61, 
    0x2, 0x2, 0x435, 0x437, 0x9, 0x7, 0x2, 0x2, 0x436, 0x435, 0x3, 0x2, 
    0x2, 0x2, 0x436, 0x437, 0x3, 0x2, 0x2, 0x2, 0x437, 0x438, 0x3, 0x2, 
    0x2, 0x2, 0x438, 0x43a, 0x5, 0x4e, 0x28, 0x2, 0x439, 0x43b, 0x7, 0x26, 
    0x2, 0x2, 0x43a, 0x439, 0x3, 0x2, 0x2, 0x2, 0x43a, 0x43b, 0x3, 0x2, 
    0x2, 0x2, 0x43b, 0x455, 0x3, 0x2, 0x2, 0x2, 0x43c, 0x43e, 0x7, 0x68, 
    0x2, 0x2, 0x43d, 0x43c, 0x3, 0x2, 0x2, 0x2, 0x43d, 0x43e, 0x3, 0x2, 
    0x2, 0x2, 0x43e, 0x43f, 0x3, 0x2, 0x2, 0x2, 0x43f, 0x440, 0x7, 0x6a, 
    0x2, 0x2, 0x440, 0x455, 0x5, 0x4e, 0x28, 0x2, 0x441, 0x442, 0x7, 0x8c, 
    0x2, 0x2, 0x442, 0x455, 0x5, 0x4e, 0x28, 0x2, 0x443, 0x444, 0x7, 0x2e, 
    0x2, 0x2, 0x444, 0x445, 0x7, 0x5, 0x2, 0x2, 0x445, 0x446, 0x5, 0x50, 
    0x29, 0x2, 0x446, 0x447, 0x7, 0x6, 0x2, 0x2, 0x447, 0x455, 0x3, 0x2, 
    0x2, 0x2, 0x448, 0x44f, 0x7, 0x3a, 0x2, 0x2, 0x449, 0x450, 0x5, 0x74, 
    0x3b, 0x2, 0x44a, 0x450, 0x5, 0x76, 0x3c, 0x2, 0x44b, 0x44c, 0x7, 0x5, 
    0x2, 0x2, 0x44c, 0x44d, 0x5, 0x50, 0x29, 0x2, 0x44d, 0x44e, 0x7, 0x6, 
    0x2, 0x2, 0x44e, 0x450, 0x3, 0x2, 0x2, 0x2, 0x44f, 0x449, 0x3, 0x2, 
    0x2, 0x2, 0x44f, 0x44a, 0x3, 0x2, 0x2, 0x2, 0x44f, 0x44b, 0x3, 0x2, 
    0x2, 0x2, 0x450, 0x455, 0x3, 0x2, 0x2, 0x2, 0x451, 0x452, 0x7, 0x2f, 
    0x2, 0x2, 0x452, 0x455, 0x5, 0x90, 0x49, 0x2, 0x453, 0x455, 0x5, 0x52, 
    0x2a, 0x2, 0x454, 0x433, 0x3, 0x2, 0x2, 0x2, 0x454, 0x43d, 0x3, 0x2, 
    0x2, 0x2, 0x454, 0x441, 0x3, 0x2, 0x2, 0x2, 0x454, 0x443, 0x3, 0x2, 
    0x2, 0x2, 0x454, 0x448, 0x3, 0x2, 0x2, 0x2, 0x454, 0x451, 0x3, 0x2, 
    0x2, 0x2, 0x454, 0x453, 0x3, 0x2, 0x2, 0x2, 0x455, 0x4d, 0x3, 0x2, 0x2, 
    0x2, 0x456, 0x457, 0x7, 0x6d, 0x2, 0x2, 0x457, 0x458, 0x7, 0x32, 0x2, 
    0x2, 0x458, 0x45a, 0x9, 0x8, 0x2, 0x2, 0x459, 0x456, 0x3, 0x2, 0x2, 
    0x2, 0x459, 0x45a, 0x3, 0x2, 0x2, 0x2, 0x45a, 0x4f, 0x3, 0x2, 0x2, 0x2, 
    0x45b, 0x45c, 0x8, 0x29, 0x1, 0x2, 0x45c, 0x4a8, 0x5, 0x76, 0x3c, 0x2, 
    0x45d, 0x4a8, 0x7, 0x99, 0x2, 0x2, 0x45e, 0x45f, 0x5, 0x86, 0x44, 0x2, 
    0x45f, 0x460, 0x7, 0x4, 0x2, 0x2, 0x460, 0x462, 0x3, 0x2, 0x2, 0x2, 
    0x461, 0x45e, 0x3, 0x2, 0x2, 0x2, 0x461, 0x462, 0x3, 0x2, 0x2, 0x2, 
    0x462, 0x463, 0x3, 0x2, 0x2, 0x2, 0x463, 0x464, 0x5, 0x88, 0x45, 0x2, 
    0x464, 0x465, 0x7, 0x4, 0x2, 0x2, 0x465, 0x467, 0x3, 0x2, 0x2, 0x2, 
    0x466, 0x461, 0x3, 0x2, 0x2, 0x2, 0x466, 0x467, 0x3, 0x2, 0x2, 0x2, 
    0x467, 0x468, 0x3, 0x2, 0x2, 0x2, 0x468, 0x4a8, 0x5, 0x8e, 0x48, 0x2, 
    0x469, 0x46a, 0x5, 0x78, 0x3d, 0x2, 0x46a, 0x46b, 0x5, 0x50, 0x29, 0x17, 
    0x46b, 0x4a8, 0x3, 0x2, 0x2, 0x2, 0x46c, 0x46d, 0x5, 0x84, 0x43, 0x2, 
    0x46d, 0x47a, 0x7, 0x5, 0x2, 0x2, 0x46e, 0x470, 0x7, 0x40, 0x2, 0x2, 
    0x46f, 0x46e, 0x3, 0x2, 0x2, 0x2, 0x46f, 0x470, 0x3, 0x2, 0x2, 0x2, 
    0x470, 0x471, 0x3, 0x2, 0x2, 0x2, 0x471, 0x476, 0x5, 0x50, 0x29, 0x2, 
    0x472, 0x473, 0x7, 0x7, 0x2, 0x2, 0x473, 0x475, 0x5, 0x50, 0x29, 0x2, 
    0x474, 0x472, 0x3, 0x2, 0x2, 0x2, 0x475, 0x478, 0x3, 0x2, 0x2, 0x2, 
    0x476, 0x474, 0x3, 0x2, 0x2, 0x2, 0x476, 0x477, 0x3, 0x2, 0x2, 0x2, 
    0x477, 0x47b, 0x3, 0x2, 0x2, 0x2, 0x478, 0x476, 0x3, 0x2, 0x2, 0x2, 
    0x479, 0x47b, 0x7, 0x9, 0x2, 0x2, 0x47a, 0x46f, 0x3, 0x2, 0x2, 0x2, 
    0x47a, 0x479, 0x3, 0x2, 0x2, 0x2, 0x47a, 0x47b, 0x3, 0x2, 0x2, 0x2, 
    0x47b, 0x47c, 0x3, 0x2, 0x2, 0x2, 0x47c, 0x47d, 0x7, 0x6, 0x2, 0x2, 
    0x47d, 0x4a8, 0x3, 0x2, 0x2, 0x2, 0x47e, 0x47f, 0x7, 0x5, 0x2, 0x2, 
    0x47f, 0x480, 0x5, 0x50, 0x29, 0x2, 0x480, 0x481, 0x7, 0x6, 0x2, 0x2, 
    0x481, 0x4a8, 0x3, 0x2, 0x2, 0x2, 0x482, 0x483, 0x7, 0x2d, 0x2, 0x2, 
    0x483, 0x484, 0x7, 0x5, 0x2, 0x2, 0x484, 0x485, 0x5, 0x50, 0x29, 0x2, 
    0x485, 0x486, 0x7, 0x23, 0x2, 0x2, 0x486, 0x487, 0x5, 0x4a, 0x26, 0x2, 
    0x487, 0x488, 0x7, 0x6, 0x2, 0x2, 0x488, 0x4a8, 0x3, 0x2, 0x2, 0x2, 
    0x489, 0x48b, 0x7, 0x68, 0x2, 0x2, 0x48a, 0x489, 0x3, 0x2, 0x2, 0x2, 
    0x48a, 0x48b, 0x3, 0x2, 0x2, 0x2, 0x48b, 0x48c, 0x3, 0x2, 0x2, 0x2, 
    0x48c, 0x48e, 0x7, 0x48, 0x2, 0x2, 0x48d, 0x48a, 0x3, 0x2, 0x2, 0x2, 
    0x48d, 0x48e, 0x3, 0x2, 0x2, 0x2, 0x48e, 0x48f, 0x3, 0x2, 0x2, 0x2, 
    0x48f, 0x490, 0x7, 0x5, 0x2, 0x2, 0x490, 0x491, 0x5, 0x3e, 0x20, 0x2, 
    0x491, 0x492, 0x7, 0x6, 0x2, 0x2, 0x492, 0x4a8, 0x3, 0x2, 0x2, 0x2, 
    0x493, 0x495, 0x7, 0x2c, 0x2, 0x2, 0x494, 0x496, 0x5, 0x50, 0x29, 0x2, 
    0x495, 0x494, 0x3, 0x2, 0x2, 0x2, 0x495, 0x496, 0x3, 0x2, 0x2, 0x2, 
    0x496, 0x49c, 0x3, 0x2, 0x2, 0x2, 0x497, 0x498, 0x7, 0x93, 0x2, 0x2, 
    0x498, 0x499, 0x5, 0x50, 0x29, 0x2, 0x499, 0x49a, 0x7, 0x87, 0x2, 0x2, 
    0x49a, 0x49b, 0x5, 0x50, 0x29, 0x2, 0x49b, 0x49d, 0x3, 0x2, 0x2, 0x2, 
    0x49c, 0x497, 0x3, 0x2, 0x2, 0x2, 0x49d, 0x49e, 0x3, 0x2, 0x2, 0x2, 
    0x49e, 0x49c, 0x3, 0x2, 0x2, 0x2, 0x49e, 0x49f, 0x3, 0x2, 0x2, 0x2, 
    0x49f, 0x4a2, 0x3, 0x2, 0x2, 0x2, 0x4a0, 0x4a1, 0x7, 0x43, 0x2, 0x2, 
    0x4a1, 0x4a3, 0x5, 0x50, 0x29, 0x2, 0x4a2, 0x4a0, 0x3, 0x2, 0x2, 0x2, 
    0x4a2, 0x4a3, 0x3, 0x2, 0x2, 0x2, 0x4a3, 0x4a4, 0x3, 0x2, 0x2, 0x2, 
    0x4a4, 0x4a5, 0x7, 0x44, 0x2, 0x2, 0x4a5, 0x4a8, 0x3, 0x2, 0x2, 0x2, 
    0x4a6, 0x4a8, 0x5, 0x54, 0x2b, 0x2, 0x4a7, 0x45b, 0x3, 0x2, 0x2, 0x2, 
    0x4a7, 0x45d, 0x3, 0x2, 0x2, 0x2, 0x4a7, 0x466, 0x3, 0x2, 0x2, 0x2, 
    0x4a7, 0x469, 0x3, 0x2, 0x2, 0x2, 0x4a7, 0x46c, 0x3, 0x2, 0x2, 0x2, 
    0x4a7, 0x47e, 0x3, 0x2, 0x2, 0x2, 0x4a7, 0x482, 0x3, 0x2, 0x2, 0x2, 
    0x4a7, 0x48d, 0x3, 0x2, 0x2, 0x2, 0x4a7, 0x493, 0x3, 0x2, 0x2, 0x2, 
    0x4a7, 0x4a6, 0x3, 0x2, 0x2, 0x2, 0x4a8, 0x50d, 0x3, 0x2, 0x2, 0x2, 
    0x4a9, 0x4aa, 0xc, 0x16, 0x2, 0x2, 0x4aa, 0x4ab, 0x7, 0xd, 0x2, 0x2, 
    0x4ab, 0x50c, 0x5, 0x50, 0x29, 0x17, 0x4ac, 0x4ad, 0xc, 0x15, 0x2, 0x2, 
    0x4ad, 0x4ae, 0x9, 0x9, 0x2, 0x2, 0x4ae, 0x50c, 0x5, 0x50, 0x29, 0x16, 
    0x4af, 0x4b0, 0xc, 0x14, 0x2, 0x2, 0x4b0, 0x4b1, 0x9, 0xa, 0x2, 0x2, 
    0x4b1, 0x50c, 0x5, 0x50, 0x29, 0x15, 0x4b2, 0x4b3, 0xc, 0x13, 0x2, 0x2, 
    0x4b3, 0x4b4, 0x9, 0xb, 0x2, 0x2, 0x4b4, 0x50c, 0x5, 0x50, 0x29, 0x14, 
    0x4b5, 0x4b6, 0xc, 0x12, 0x2, 0x2, 0x4b6, 0x4b7, 0x9, 0xc, 0x2, 0x2, 
    0x4b7, 0x50c, 0x5, 0x50, 0x29, 0x13, 0x4b8, 0x4c5, 0xc, 0x11, 0x2, 0x2, 
    0x4b9, 0x4c6, 0x7, 0x8, 0x2, 0x2, 0x4ba, 0x4c6, 0x7, 0x18, 0x2, 0x2, 
    0x4bb, 0x4c6, 0x7, 0x19, 0x2, 0x2, 0x4bc, 0x4c6, 0x7, 0x1a, 0x2, 0x2, 
    0x4bd, 0x4c6, 0x7, 0x5e, 0x2, 0x2, 0x4be, 0x4bf, 0x7, 0x5e, 0x2, 0x2, 
    0x4bf, 0x4c6, 0x7, 0x68, 0x2, 0x2, 0x4c0, 0x4c6, 0x7, 0x55, 0x2, 0x2, 
    0x4c1, 0x4c6, 0x7, 0x63, 0x2, 0x2, 0x4c2, 0x4c6, 0x7, 0x4f, 0x2, 0x2, 
    0x4c3, 0x4c6, 0x7, 0x65, 0x2, 0x2, 0x4c4, 0x4c6, 0x7, 0x78, 0x2, 0x2, 
    0x4c5, 0x4b9, 0x3, 0x2, 0x2, 0x2, 0x4c5, 0x4ba, 0x3, 0x2, 0x2, 0x2, 
    0x4c5, 0x4bb, 0x3, 0x2, 0x2, 0x2, 0x4c5, 0x4bc, 0x3, 0x2, 0x2, 0x2, 
    0x4c5, 0x4bd, 0x3, 0x2, 0x2, 0x2, 0x4c5, 0x4be, 0x3, 0x2, 0x2, 0x2, 
    0x4c5, 0x4c0, 0x3, 0x2, 0x2, 0x2, 0x4c5, 0x4c1, 0x3, 0x2, 0x2, 0x2, 
    0x4c5, 0x4c2, 0x3, 0x2, 0x2, 0x2, 0x4c5, 0x4c3, 0x3, 0x2, 0x2, 0x2, 
    0x4c5, 0x4c4, 0x3, 0x2, 0x2, 0x2, 0x4c6, 0x4c7, 0x3, 0x2, 0x2, 0x2, 
    0x4c7, 0x50c, 0x5, 0x50, 0x29, 0x12, 0x4c8, 0x4c9, 0xc, 0x10, 0x2, 0x2, 
    0x4c9, 0x4ca, 0x7, 0x22, 0x2, 0x2, 0x4ca, 0x50c, 0x5, 0x50, 0x29, 0x11, 
    0x4cb, 0x4cc, 0xc, 0xf, 0x2, 0x2, 0x4cc, 0x4cd, 0x7, 0x6e, 0x2, 0x2, 
    0x4cd, 0x50c, 0x5, 0x50, 0x29, 0x10, 0x4ce, 0x4cf, 0xc, 0x8, 0x2, 0x2, 
    0x4cf, 0x4d1, 0x7, 0x5e, 0x2, 0x2, 0x4d0, 0x4d2, 0x7, 0x68, 0x2, 0x2, 
    0x4d1, 0x4d0, 0x3, 0x2, 0x2, 0x2, 0x4d1, 0x4d2, 0x3, 0x2, 0x2, 0x2, 
    0x4d2, 0x4d3, 0x3, 0x2, 0x2, 0x2, 0x4d3, 0x50c, 0x5, 0x50, 0x29, 0x9, 
    0x4d4, 0x4d6, 0xc, 0x7, 0x2, 0x2, 0x4d5, 0x4d7, 0x7, 0x68, 0x2, 0x2, 
    0x4d6, 0x4d5, 0x3, 0x2, 0x2, 0x2, 0x4d6, 0x4d7, 0x3, 0x2, 0x2, 0x2, 
    0x4d7, 0x4d8, 0x3, 0x2, 0x2, 0x2, 0x4d8, 0x4d9, 0x7, 0x29, 0x2, 0x2, 
    0x4d9, 0x4da, 0x5, 0x50, 0x29, 0x2, 0x4da, 0x4db, 0x7, 0x22, 0x2, 0x2, 
    0x4db, 0x4dc, 0x5, 0x50, 0x29, 0x8, 0x4dc, 0x50c, 0x3, 0x2, 0x2, 0x2, 
    0x4dd, 0x4de, 0xc, 0xb, 0x2, 0x2, 0x4de, 0x4df, 0x7, 0x2f, 0x2, 0x2, 
    0x4df, 0x50c, 0x5, 0x90, 0x49, 0x2, 0x4e0, 0x4e2, 0xc, 0xa, 0x2, 0x2, 
    0x4e1, 0x4e3, 0x7, 0x68, 0x2, 0x2, 0x4e2, 0x4e1, 0x3, 0x2, 0x2, 0x2, 
    0x4e2, 0x4e3, 0x3, 0x2, 0x2, 0x2, 0x4e3, 0x4e4, 0x3, 0x2, 0x2, 0x2, 
    0x4e4, 0x4e5, 0x9, 0xd, 0x2, 0x2, 0x4e5, 0x4e8, 0x5, 0x50, 0x29, 0x2, 
    0x4e6, 0x4e7, 0x7, 0x45, 0x2, 0x2, 0x4e7, 0x4e9, 0x5, 0x50, 0x29, 0x2, 
    0x4e8, 0x4e6, 0x3, 0x2, 0x2, 0x2, 0x4e8, 0x4e9, 0x3, 0x2, 0x2, 0x2, 
    0x4e9, 0x50c, 0x3, 0x2, 0x2, 0x2, 0x4ea, 0x4ef, 0xc, 0x9, 0x2, 0x2, 
    0x4eb, 0x4f0, 0x7, 0x5f, 0x2, 0x2, 0x4ec, 0x4f0, 0x7, 0x69, 0x2, 0x2, 
    0x4ed, 0x4ee, 0x7, 0x68, 0x2, 0x2, 0x4ee, 0x4f0, 0x7, 0x6a, 0x2, 0x2, 
    0x4ef, 0x4eb, 0x3, 0x2, 0x2, 0x2, 0x4ef, 0x4ec, 0x3, 0x2, 0x2, 0x2, 
    0x4ef, 0x4ed, 0x3, 0x2, 0x2, 0x2, 0x4f0, 0x50c, 0x3, 0x2, 0x2, 0x2, 
    0x4f1, 0x4f3, 0xc, 0x6, 0x2, 0x2, 0x4f2, 0x4f4, 0x7, 0x68, 0x2, 0x2, 
    0x4f3, 0x4f2, 0x3, 0x2, 0x2, 0x2, 0x4f3, 0x4f4, 0x3, 0x2, 0x2, 0x2, 
    0x4f4, 0x4f5, 0x3, 0x2, 0x2, 0x2, 0x4f5, 0x509, 0x7, 0x55, 0x2, 0x2, 
    0x4f6, 0x500, 0x7, 0x5, 0x2, 0x2, 0x4f7, 0x501, 0x5, 0x3e, 0x20, 0x2, 
    0x4f8, 0x4fd, 0x5, 0x50, 0x29, 0x2, 0x4f9, 0x4fa, 0x7, 0x7, 0x2, 0x2, 
    0x4fa, 0x4fc, 0x5, 0x50, 0x29, 0x2, 0x4fb, 0x4f9, 0x3, 0x2, 0x2, 0x2, 
    0x4fc, 0x4ff, 0x3, 0x2, 0x2, 0x2, 0x4fd, 0x4fb, 0x3, 0x2, 0x2, 0x2, 
    0x4fd, 0x4fe, 0x3, 0x2, 0x2, 0x2, 0x4fe, 0x501, 0x3, 0x2, 0x2, 0x2, 
    0x4ff, 0x4fd, 0x3, 0x2, 0x2, 0x2, 0x500, 0x4f7, 0x3, 0x2, 0x2, 0x2, 
    0x500, 0x4f8, 0x3, 0x2, 0x2, 0x2, 0x500, 0x501, 0x3, 0x2, 0x2, 0x2, 
    0x501, 0x502, 0x3, 0x2, 0x2, 0x2, 0x502, 0x50a, 0x7, 0x6, 0x2, 0x2, 
    0x503, 0x504, 0x5, 0x86, 0x44, 0x2, 0x504, 0x505, 0x7, 0x4, 0x2, 0x2, 
    0x505, 0x507, 0x3, 0x2, 0x2, 0x2, 0x506, 0x503, 0x3, 0x2, 0x2, 0x2, 
    0x506, 0x507, 0x3, 0x2, 0x2, 0x2, 0x507, 0x508, 0x3, 0x2, 0x2, 0x2, 
    0x508, 0x50a, 0x5, 0x88, 0x45, 0x2, 0x509, 0x4f6, 0x3, 0x2, 0x2, 0x2, 
    0x509, 0x506, 0x3, 0x2, 0x2, 0x2, 0x50a, 0x50c, 0x3, 0x2, 0x2, 0x2, 
    0x50b, 0x4a9, 0x3, 0x2, 0x2, 0x2, 0x50b, 0x4ac, 0x3, 0x2, 0x2, 0x2, 
    0x50b, 0x4af, 0x3, 0x2, 0x2, 0x2, 0x50b, 0x4b2, 0x3, 0x2, 0x2, 0x2, 
    0x50b, 0x4b5, 0x3, 0x2, 0x2, 0x2, 0x50b, 0x4b8, 0x3, 0x2, 0x2, 0x2, 
    0x50b, 0x4c8, 0x3, 0x2, 0x2, 0x2, 0x50b, 0x4cb, 0x3, 0x2, 0x2, 0x2, 
    0x50b, 0x4ce, 0x3, 0x2, 0x2, 0x2, 0x50b, 0x4d4, 0x3, 0x2, 0x2, 0x2, 
    0x50b, 0x4dd, 0x3, 0x2, 0x2, 0x2, 0x50b, 0x4e0, 0x3, 0x2, 0x2, 0x2, 
    0x50b, 0x4ea, 0x3, 0x2, 0x2, 0x2, 0x50b, 0x4f1, 0x3, 0x2, 0x2, 0x2, 
    0x50c, 0x50f, 0x3, 0x2, 0x2, 0x2, 0x50d, 0x50b, 0x3, 0x2, 0x2, 0x2, 
    0x50d, 0x50e, 0x3, 0x2, 0x2, 0x2, 0x50e, 0x51, 0x3, 0x2, 0x2, 0x2, 0x50f, 
    0x50d, 0x3, 0x2, 0x2, 0x2, 0x510, 0x511, 0x7, 0x77, 0x2, 0x2, 0x511, 
    0x51d, 0x5, 0x92, 0x4a, 0x2, 0x512, 0x513, 0x7, 0x5, 0x2, 0x2, 0x513, 
    0x518, 0x5, 0x8e, 0x48, 0x2, 0x514, 0x515, 0x7, 0x7, 0x2, 0x2, 0x515, 
    0x517, 0x5, 0x8e, 0x48, 0x2, 0x516, 0x514, 0x3, 0x2, 0x2, 0x2, 0x517, 
    0x51a, 0x3, 0x2, 0x2, 0x2, 0x518, 0x516, 0x3, 0x2, 0x2, 0x2, 0x518, 
    0x519, 0x3, 0x2, 0x2, 0x2, 0x519, 0x51b, 0x3, 0x2, 0x2, 0x2, 0x51a, 
    0x518, 0x3, 0x2, 0x2, 0x2, 0x51b, 0x51c, 0x7, 0x6, 0x2, 0x2, 0x51c, 
    0x51e, 0x3, 0x2, 0x2, 0x2, 0x51d, 0x512, 0x3, 0x2, 0x2, 0x2, 0x51d, 
    0x51e, 0x3, 0x2, 0x2, 0x2, 0x51e, 0x531, 0x3, 0x2, 0x2, 0x2, 0x51f, 
    0x520, 0x7, 0x6d, 0x2, 0x2, 0x520, 0x529, 0x9, 0xe, 0x2, 0x2, 0x521, 
    0x522, 0x7, 0x83, 0x2, 0x2, 0x522, 0x52a, 0x7, 0x6a, 0x2, 0x2, 0x523, 
    0x524, 0x7, 0x83, 0x2, 0x2, 0x524, 0x52a, 0x7, 0x3a, 0x2, 0x2, 0x525, 
    0x52a, 0x7, 0x2b, 0x2, 0x2, 0x526, 0x52a, 0x7, 0x7d, 0x2, 0x2, 0x527, 
    0x528, 0x7, 0x67, 0x2, 0x2, 0x528, 0x52a, 0x7, 0x1c, 0x2, 0x2, 0x529, 
    0x521, 0x3, 0x2, 0x2, 0x2, 0x529, 0x523, 0x3, 0x2, 0x2, 0x2, 0x529, 
    0x525, 0x3, 0x2, 0x2, 0x2, 0x529, 0x526, 0x3, 0x2, 0x2, 0x2, 0x529, 
    0x527, 0x3, 0x2, 0x2, 0x2, 0x52a, 0x52e, 0x3, 0x2, 0x2, 0x2, 0x52b, 
    0x52c, 0x7, 0x65, 0x2, 0x2, 0x52c, 0x52e, 0x5, 0x82, 0x42, 0x2, 0x52d, 
    0x51f, 0x3, 0x2, 0x2, 0x2, 0x52d, 0x52b, 0x3, 0x2, 0x2, 0x2, 0x52e, 
    0x530, 0x3, 0x2, 0x2, 0x2, 0x52f, 0x52d, 0x3, 0x2, 0x2, 0x2, 0x530, 
    0x533, 0x3, 0x2, 0x2, 0x2, 0x531, 0x52f, 0x3, 0x2, 0x2, 0x2, 0x531, 
    0x532, 0x3, 0x2, 0x2, 0x2, 0x532, 0x53e, 0x3, 0x2, 0x2, 0x2, 0x533, 
    0x531, 0x3, 0x2, 0x2, 0x2, 0x534, 0x536, 0x7, 0x68, 0x2, 0x2, 0x535, 
    0x534, 0x3, 0x2, 0x2, 0x2, 0x535, 0x536, 0x3, 0x2, 0x2, 0x2, 0x536, 
    0x537, 0x3, 0x2, 0x2, 0x2, 0x537, 0x53c, 0x7, 0x3b, 0x2, 0x2, 0x538, 
    0x539, 0x7, 0x58, 0x2, 0x2, 0x539, 0x53d, 0x7, 0x3c, 0x2, 0x2, 0x53a, 
    0x53b, 0x7, 0x58, 0x2, 0x2, 0x53b, 0x53d, 0x7, 0x54, 0x2, 0x2, 0x53c, 
    0x538, 0x3, 0x2, 0x2, 0x2, 0x53c, 0x53a, 0x3, 0x2, 0x2, 0x2, 0x53c, 
    0x53d, 0x3, 0x2, 0x2, 0x2, 0x53d, 0x53f, 0x3, 0x2, 0x2, 0x2, 0x53e, 
    0x535, 0x3, 0x2, 0x2, 0x2, 0x53e, 0x53f, 0x3, 0x2, 0x2, 0x2, 0x53f, 
    0x53, 0x3, 0x2, 0x2, 0x2, 0x540, 0x541, 0x7, 0x75, 0x2, 0x2, 0x541, 
    0x546, 0x7, 0x5, 0x2, 0x2, 0x542, 0x547, 0x7, 0x53, 0x2, 0x2, 0x543, 
    0x544, 0x9, 0xf, 0x2, 0x2, 0x544, 0x545, 0x7, 0x7, 0x2, 0x2, 0x545, 
    0x547, 0x5, 0x7a, 0x3e, 0x2, 0x546, 0x542, 0x3, 0x2, 0x2, 0x2, 0x546, 
    0x543, 0x3, 0x2, 0x2, 0x2, 0x547, 0x548, 0x3, 0x2, 0x2, 0x2, 0x548, 
    0x549, 0x7, 0x6, 0x2, 0x2, 0x549, 0x55, 0x3, 0x2, 0x2, 0x2, 0x54a, 0x54d, 
    0x5, 0x8e, 0x48, 0x2, 0x54b, 0x54c, 0x7, 0x2f, 0x2, 0x2, 0x54c, 0x54e, 
    0x5, 0x90, 0x49, 0x2, 0x54d, 0x54b, 0x3, 0x2, 0x2, 0x2, 0x54d, 0x54e, 
    0x3, 0x2, 0x2, 0x2, 0x54e, 0x550, 0x3, 0x2, 0x2, 0x2, 0x54f, 0x551, 
    0x9, 0x7, 0x2, 0x2, 0x550, 0x54f, 0x3, 0x2, 0x2, 0x2, 0x550, 0x551, 
    0x3, 0x2, 0x2, 0x2, 0x551, 0x57, 0x3, 0x2, 0x2, 0x2, 0x552, 0x553, 0x7, 
    0x33, 0x2, 0x2, 0x553, 0x555, 0x5, 0x82, 0x42, 0x2, 0x554, 0x552, 0x3, 
    0x2, 0x2, 0x2, 0x554, 0x555, 0x3, 0x2, 0x2, 0x2, 0x555, 0x57a, 0x3, 
    0x2, 0x2, 0x2, 0x556, 0x557, 0x7, 0x73, 0x2, 0x2, 0x557, 0x55a, 0x7, 
    0x61, 0x2, 0x2, 0x558, 0x55a, 0x7, 0x8c, 0x2, 0x2, 0x559, 0x556, 0x3, 
    0x2, 0x2, 0x2, 0x559, 0x558, 0x3, 0x2, 0x2, 0x2, 0x55a, 0x55b, 0x3, 
    0x2, 0x2, 0x2, 0x55b, 0x55c, 0x7, 0x5, 0x2, 0x2, 0x55c, 0x561, 0x5, 
    0x56, 0x2c, 0x2, 0x55d, 0x55e, 0x7, 0x7, 0x2, 0x2, 0x55e, 0x560, 0x5, 
    0x56, 0x2c, 0x2, 0x55f, 0x55d, 0x3, 0x2, 0x2, 0x2, 0x560, 0x563, 0x3, 
    0x2, 0x2, 0x2, 0x561, 0x55f, 0x3, 0x2, 0x2, 0x2, 0x561, 0x562, 0x3, 
    0x2, 0x2, 0x2, 0x562, 0x564, 0x3, 0x2, 0x2, 0x2, 0x563, 0x561, 0x3, 
    0x2, 0x2, 0x2, 0x564, 0x565, 0x7, 0x6, 0x2, 0x2, 0x565, 0x566, 0x5, 
    0x4e, 0x28, 0x2, 0x566, 0x57b, 0x3, 0x2, 0x2, 0x2, 0x567, 0x568, 0x7, 
    0x2e, 0x2, 0x2, 0x568, 0x569, 0x7, 0x5, 0x2, 0x2, 0x569, 0x56a, 0x5, 
    0x50, 0x29, 0x2, 0x56a, 0x56b, 0x7, 0x6, 0x2, 0x2, 0x56b, 0x57b, 0x3, 
    0x2, 0x2, 0x2, 0x56c, 0x56d, 0x7, 0x4c, 0x2, 0x2, 0x56d, 0x56e, 0x7, 
    0x61, 0x2, 0x2, 0x56e, 0x56f, 0x7, 0x5, 0x2, 0x2, 0x56f, 0x574, 0x5, 
    0x8e, 0x48, 0x2, 0x570, 0x571, 0x7, 0x7, 0x2, 0x2, 0x571, 0x573, 0x5, 
    0x8e, 0x48, 0x2, 0x572, 0x570, 0x3, 0x2, 0x2, 0x2, 0x573, 0x576, 0x3, 
    0x2, 0x2, 0x2, 0x574, 0x572, 0x3, 0x2, 0x2, 0x2, 0x574, 0x575, 0x3, 
    0x2, 0x2, 0x2, 0x575, 0x577, 0x3, 0x2, 0x2, 0x2, 0x576, 0x574, 0x3, 
    0x2, 0x2, 0x2, 0x577, 0x578, 0x7, 0x6, 0x2, 0x2, 0x578, 0x579, 0x5, 
    0x52, 0x2a, 0x2, 0x579, 0x57b, 0x3, 0x2, 0x2, 0x2, 0x57a, 0x559, 0x3, 
    0x2, 0x2, 0x2, 0x57a, 0x567, 0x3, 0x2, 0x2, 0x2, 0x57a, 0x56c, 0x3, 
    0x2, 0x2, 0x2, 0x57b, 0x59, 0x3, 0x2, 0x2, 0x2, 0x57c, 0x57e, 0x7, 0x95, 
    0x2, 0x2, 0x57d, 0x57f, 0x7, 0x76, 0x2, 0x2, 0x57e, 0x57d, 0x3, 0x2, 
    0x2, 0x2, 0x57e, 0x57f, 0x3, 0x2, 0x2, 0x2, 0x57f, 0x580, 0x3, 0x2, 
    0x2, 0x2, 0x580, 0x581, 0x5, 0x72, 0x3a, 0x2, 0x581, 0x582, 0x7, 0x23, 
    0x2, 0x2, 0x582, 0x583, 0x7, 0x5, 0x2, 0x2, 0x583, 0x584, 0x5, 0x3e, 
    0x20, 0x2, 0x584, 0x58e, 0x7, 0x6, 0x2, 0x2, 0x585, 0x586, 0x7, 0x7, 
    0x2, 0x2, 0x586, 0x587, 0x5, 0x72, 0x3a, 0x2, 0x587, 0x588, 0x7, 0x23, 
    0x2, 0x2, 0x588, 0x589, 0x7, 0x5, 0x2, 0x2, 0x589, 0x58a, 0x5, 0x3e, 
    0x20, 0x2, 0x58a, 0x58b, 0x7, 0x6, 0x2, 0x2, 0x58b, 0x58d, 0x3, 0x2, 
    0x2, 0x2, 0x58c, 0x585, 0x3, 0x2, 0x2, 0x2, 0x58d, 0x590, 0x3, 0x2, 
    0x2, 0x2, 0x58e, 0x58c, 0x3, 0x2, 0x2, 0x2, 0x58e, 0x58f, 0x3, 0x2, 
    0x2, 0x2, 0x58f, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x590, 0x58e, 0x3, 0x2, 0x2, 
    0x2, 0x591, 0x592, 0x5, 0x86, 0x44, 0x2, 0x592, 0x593, 0x7, 0x4, 0x2, 
    0x2, 0x593, 0x595, 0x3, 0x2, 0x2, 0x2, 0x594, 0x591, 0x3, 0x2, 0x2, 
    0x2, 0x594, 0x595, 0x3, 0x2, 0x2, 0x2, 0x595, 0x596, 0x3, 0x2, 0x2, 
    0x2, 0x596, 0x59c, 0x5, 0x88, 0x45, 0x2, 0x597, 0x598, 0x7, 0x57, 0x2, 
    0x2, 0x598, 0x599, 0x7, 0x2a, 0x2, 0x2, 0x599, 0x59d, 0x5, 0x94, 0x4b, 
    0x2, 0x59a, 0x59b, 0x7, 0x68, 0x2, 0x2, 0x59b, 0x59d, 0x7, 0x57, 0x2, 
    0x2, 0x59c, 0x597, 0x3, 0x2, 0x2, 0x2, 0x59c, 0x59a, 0x3, 0x2, 0x2, 
    0x2, 0x59c, 0x59d, 0x3, 0x2, 0x2, 0x2, 0x59d, 0x5d, 0x3, 0x2, 0x2, 0x2, 
    0x59e, 0x5a1, 0x5, 0x50, 0x29, 0x2, 0x59f, 0x5a0, 0x7, 0x2f, 0x2, 0x2, 
    0x5a0, 0x5a2, 0x5, 0x90, 0x49, 0x2, 0x5a1, 0x59f, 0x3, 0x2, 0x2, 0x2, 
    0x5a1, 0x5a2, 0x3, 0x2, 0x2, 0x2, 0x5a2, 0x5a4, 0x3, 0x2, 0x2, 0x2, 
    0x5a3, 0x5a5, 0x9, 0x7, 0x2, 0x2, 0x5a4, 0x5a3, 0x3, 0x2, 0x2, 0x2, 
    0x5a4, 0x5a5, 0x3, 0x2, 0x2, 0x2, 0x5a5, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x5a6, 
    0x5aa, 0x5, 0x74, 0x3b, 0x2, 0x5a7, 0x5aa, 0x5, 0x82, 0x42, 0x2, 0x5a8, 
    0x5aa, 0x7, 0x9a, 0x2, 0x2, 0x5a9, 0x5a6, 0x3, 0x2, 0x2, 0x2, 0x5a9, 
    0x5a7, 0x3, 0x2, 0x2, 0x2, 0x5a9, 0x5a8, 0x3, 0x2, 0x2, 0x2, 0x5aa, 
    0x61, 0x3, 0x2, 0x2, 0x2, 0x5ab, 0x5b7, 0x5, 0x88, 0x45, 0x2, 0x5ac, 
    0x5ad, 0x7, 0x5, 0x2, 0x2, 0x5ad, 0x5b2, 0x5, 0x8e, 0x48, 0x2, 0x5ae, 
    0x5af, 0x7, 0x7, 0x2, 0x2, 0x5af, 0x5b1, 0x5, 0x8e, 0x48, 0x2, 0x5b0, 
    0x5ae, 0x3, 0x2, 0x2, 0x2, 0x5b1, 0x5b4, 0x3, 0x2, 0x2, 0x2, 0x5b2, 
    0x5b0, 0x3, 0x2, 0x2, 0x2, 0x5b2, 0x5b3, 0x3, 0x2, 0x2, 0x2, 0x5b3, 
    0x5b5, 0x3, 0x2, 0x2, 0x2, 0x5b4, 0x5b2, 0x3, 0x2, 0x2, 0x2, 0x5b5, 
    0x5b6, 0x7, 0x6, 0x2, 0x2, 0x5b6, 0x5b8, 0x3, 0x2, 0x2, 0x2, 0x5b7, 
    0x5ac, 0x3, 0x2, 0x2, 0x2, 0x5b7, 0x5b8, 0x3, 0x2, 0x2, 0x2, 0x5b8, 
    0x5b9, 0x3, 0x2, 0x2, 0x2, 0x5b9, 0x5ba, 0x7, 0x23, 0x2, 0x2, 0x5ba, 
    0x5bb, 0x7, 0x5, 0x2, 0x2, 0x5bb, 0x5bc, 0x5, 0x3e, 0x20, 0x2, 0x5bc, 
    0x5bd, 0x7, 0x6, 0x2, 0x2, 0x5bd, 0x63, 0x3, 0x2, 0x2, 0x2, 0x5be, 0x5cb, 
    0x7, 0x9, 0x2, 0x2, 0x5bf, 0x5c0, 0x5, 0x88, 0x45, 0x2, 0x5c0, 0x5c1, 
    0x7, 0x4, 0x2, 0x2, 0x5c1, 0x5c2, 0x7, 0x9, 0x2, 0x2, 0x5c2, 0x5cb, 
    0x3, 0x2, 0x2, 0x2, 0x5c3, 0x5c8, 0x5, 0x50, 0x29, 0x2, 0x5c4, 0x5c6, 
    0x7, 0x23, 0x2, 0x2, 0x5c5, 0x5c4, 0x3, 0x2, 0x2, 0x2, 0x5c5, 0x5c6, 
    0x3, 0x2, 0x2, 0x2, 0x5c6, 0x5c7, 0x3, 0x2, 0x2, 0x2, 0x5c7, 0x5c9, 
    0x5, 0x7e, 0x40, 0x2, 0x5c8, 0x5c5, 0x3, 0x2, 0x2, 0x2, 0x5c8, 0x5c9, 
    0x3, 0x2, 0x2, 0x2, 0x5c9, 0x5cb, 0x3, 0x2, 0x2, 0x2, 0x5ca, 0x5be, 
    0x3, 0x2, 0x2, 0x2, 0x5ca, 0x5bf, 0x3, 0x2, 0x2, 0x2, 0x5ca, 0x5c3, 
    0x3, 0x2, 0x2, 0x2, 0x5cb, 0x65, 0x3, 0x2, 0x2, 0x2, 0x5cc, 0x5cd, 0x5, 
    0x86, 0x44, 0x2, 0x5cd, 0x5ce, 0x7, 0x4, 0x2, 0x2, 0x5ce, 0x5d0, 0x3, 
    0x2, 0x2, 0x2, 0x5cf, 0x5cc, 0x3, 0x2, 0x2, 0x2, 0x5cf, 0x5d0, 0x3, 
    0x2, 0x2, 0x2, 0x5d0, 0x5d1, 0x3, 0x2, 0x2, 0x2, 0x5d1, 0x5d6, 0x5, 
    0x88, 0x45, 0x2, 0x5d2, 0x5d4, 0x7, 0x23, 0x2, 0x2, 0x5d3, 0x5d2, 0x3, 
    0x2, 0x2, 0x2, 0x5d3, 0x5d4, 0x3, 0x2, 0x2, 0x2, 0x5d4, 0x5d5, 0x3, 
    0x2, 0x2, 0x2, 0x5d5, 0x5d7, 0x5, 0xa0, 0x51, 0x2, 0x5d6, 0x5d3, 0x3, 
    0x2, 0x2, 0x2, 0x5d6, 0x5d7, 0x3, 0x2, 0x2, 0x2, 0x5d7, 0x5dd, 0x3, 
    0x2, 0x2, 0x2, 0x5d8, 0x5d9, 0x7, 0x57, 0x2, 0x2, 0x5d9, 0x5da, 0x7, 
    0x2a, 0x2, 0x2, 0x5da, 0x5de, 0x5, 0x94, 0x4b, 0x2, 0x5db, 0x5dc, 0x7, 
    0x68, 0x2, 0x2, 0x5dc, 0x5de, 0x7, 0x57, 0x2, 0x2, 0x5dd, 0x5d8, 0x3, 
    0x2, 0x2, 0x2, 0x5dd, 0x5db, 0x3, 0x2, 0x2, 0x2, 0x5dd, 0x5de, 0x3, 
    0x2, 0x2, 0x2, 0x5de, 0x5fc, 0x3, 0x2, 0x2, 0x2, 0x5df, 0x5e9, 0x7, 
    0x5, 0x2, 0x2, 0x5e0, 0x5e5, 0x5, 0x66, 0x34, 0x2, 0x5e1, 0x5e2, 0x7, 
    0x7, 0x2, 0x2, 0x5e2, 0x5e4, 0x5, 0x66, 0x34, 0x2, 0x5e3, 0x5e1, 0x3, 
    0x2, 0x2, 0x2, 0x5e4, 0x5e7, 0x3, 0x2, 0x2, 0x2, 0x5e5, 0x5e3, 0x3, 
    0x2, 0x2, 0x2, 0x5e5, 0x5e6, 0x3, 0x2, 0x2, 0x2, 0x5e6, 0x5ea, 0x3, 
    0x2, 0x2, 0x2, 0x5e7, 0x5e5, 0x3, 0x2, 0x2, 0x2, 0x5e8, 0x5ea, 0x5, 
    0x68, 0x35, 0x2, 0x5e9, 0x5e0, 0x3, 0x2, 0x2, 0x2, 0x5e9, 0x5e8, 0x3, 
    0x2, 0x2, 0x2, 0x5ea, 0x5eb, 0x3, 0x2, 0x2, 0x2, 0x5eb, 0x5f0, 0x7, 
    0x6, 0x2, 0x2, 0x5ec, 0x5ee, 0x7, 0x23, 0x2, 0x2, 0x5ed, 0x5ec, 0x3, 
    0x2, 0x2, 0x2, 0x5ed, 0x5ee, 0x3, 0x2, 0x2, 0x2, 0x5ee, 0x5ef, 0x3, 
    0x2, 0x2, 0x2, 0x5ef, 0x5f1, 0x5, 0xa0, 0x51, 0x2, 0x5f0, 0x5ed, 0x3, 
    0x2, 0x2, 0x2, 0x5f0, 0x5f1, 0x3, 0x2, 0x2, 0x2, 0x5f1, 0x5fc, 0x3, 
    0x2, 0x2, 0x2, 0x5f2, 0x5f3, 0x7, 0x5, 0x2, 0x2, 0x5f3, 0x5f4, 0x5, 
    0x3e, 0x20, 0x2, 0x5f4, 0x5f9, 0x7, 0x6, 0x2, 0x2, 0x5f5, 0x5f7, 0x7, 
    0x23, 0x2, 0x2, 0x5f6, 0x5f5, 0x3, 0x2, 0x2, 0x2, 0x5f6, 0x5f7, 0x3, 
    0x2, 0x2, 0x2, 0x5f7, 0x5f8, 0x3, 0x2, 0x2, 0x2, 0x5f8, 0x5fa, 0x5, 
    0xa0, 0x51, 0x2, 0x5f9, 0x5f6, 0x3, 0x2, 0x2, 0x2, 0x5f9, 0x5fa, 0x3, 
    0x2, 0x2, 0x2, 0x5fa, 0x5fc, 0x3, 0x2, 0x2, 0x2, 0x5fb, 0x5cf, 0x3, 
    0x2, 0x2, 0x2, 0x5fb, 0x5df, 0x3, 0x2, 0x2, 0x2, 0x5fb, 0x5f2, 0x3, 
    0x2, 0x2, 0x2, 0x5fc, 0x67, 0x3, 0x2, 0x2, 0x2, 0x5fd, 0x604, 0x5, 0x66, 
    0x34, 0x2, 0x5fe, 0x5ff, 0x5, 0x6a, 0x36, 0x2, 0x5ff, 0x600, 0x5, 0x66, 
    0x34, 0x2, 0x600, 0x601, 0x5, 0x6c, 0x37, 0x2, 0x601, 0x603, 0x3, 0x2, 
    0x2, 0x2, 0x602, 0x5fe, 0x3, 0x2, 0x2, 0x2, 0x603, 0x606, 0x3, 0x2, 
    0x2, 0x2, 0x604, 0x602, 0x3, 0x2, 0x2, 0x2, 0x604, 0x605, 0x3, 0x2, 
    0x2, 0x2, 0x605, 0x69, 0x3, 0x2, 0x2, 0x2, 0x606, 0x604, 0x3, 0x2, 0x2, 
    0x2, 0x607, 0x615, 0x7, 0x7, 0x2, 0x2, 0x608, 0x60a, 0x7, 0x66, 0x2, 
    0x2, 0x609, 0x608, 0x3, 0x2, 0x2, 0x2, 0x609, 0x60a, 0x3, 0x2, 0x2, 
    0x2, 0x60a, 0x611, 0x3, 0x2, 0x2, 0x2, 0x60b, 0x60d, 0x7, 0x62, 0x2, 
    0x2, 0x60c, 0x60e, 0x7, 0x70, 0x2, 0x2, 0x60d, 0x60c, 0x3, 0x2, 0x2, 
    0x2, 0x60d, 0x60e, 0x3, 0x2, 0x2, 0x2, 0x60e, 0x612, 0x3, 0x2, 0x2, 
    0x2, 0x60f, 0x612, 0x7, 0x59, 0x2, 0x2, 0x610, 0x612, 0x7, 0x35, 0x2, 
    0x2, 0x611, 0x60b, 0x3, 0x2, 0x2, 0x2, 0x611, 0x60f, 0x3, 0x2, 0x2, 
    0x2, 0x611, 0x610, 0x3, 0x2, 0x2, 0x2, 0x611, 0x612, 0x3, 0x2, 0x2, 
    0x2, 0x612, 0x613, 0x3, 0x2, 0x2, 0x2, 0x613, 0x615, 0x7, 0x60, 0x2, 
    0x2, 0x614, 0x607, 0x3, 0x2, 0x2, 0x2, 0x614, 0x609, 0x3, 0x2, 0x2, 
    0x2, 0x615, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x616, 0x617, 0x7, 0x6d, 0x2, 
    0x2, 0x617, 0x625, 0x5, 0x50, 0x29, 0x2, 0x618, 0x619, 0x7, 0x8e, 0x2, 
    0x2, 0x619, 0x61a, 0x7, 0x5, 0x2, 0x2, 0x61a, 0x61f, 0x5, 0x8e, 0x48, 
    0x2, 0x61b, 0x61c, 0x7, 0x7, 0x2, 0x2, 0x61c, 0x61e, 0x5, 0x8e, 0x48, 
    0x2, 0x61d, 0x61b, 0x3, 0x2, 0x2, 0x2, 0x61e, 0x621, 0x3, 0x2, 0x2, 
    0x2, 0x61f, 0x61d, 0x3, 0x2, 0x2, 0x2, 0x61f, 0x620, 0x3, 0x2, 0x2, 
    0x2, 0x620, 0x622, 0x3, 0x2, 0x2, 0x2, 0x621, 0x61f, 0x3, 0x2, 0x2, 
    0x2, 0x622, 0x623, 0x7, 0x6, 0x2, 0x2, 0x623, 0x625, 0x3, 0x2, 0x2, 
    0x2, 0x624, 0x616, 0x3, 0x2, 0x2, 0x2, 0x624, 0x618, 0x3, 0x2, 0x2, 
    0x2, 0x624, 0x625, 0x3, 0x2, 0x2, 0x2, 0x625, 0x6d, 0x3, 0x2, 0x2, 0x2, 
    0x626, 0x628, 0x7, 0x82, 0x2, 0x2, 0x627, 0x629, 0x9, 0x6, 0x2, 0x2, 
    0x628, 0x627, 0x3, 0x2, 0x2, 0x2, 0x628, 0x629, 0x3, 0x2, 0x2, 0x2, 
    0x629, 0x62a, 0x3, 0x2, 0x2, 0x2, 0x62a, 0x62f, 0x5, 0x64, 0x33, 0x2, 
    0x62b, 0x62c, 0x7, 0x7, 0x2, 0x2, 0x62c, 0x62e, 0x5, 0x64, 0x33, 0x2, 
    0x62d, 0x62b, 0x3, 0x2, 0x2, 0x2, 0x62e, 0x631, 0x3, 0x2, 0x2, 0x2, 
    0x62f, 0x62d, 0x3, 0x2, 0x2, 0x2, 0x62f, 0x630, 0x3, 0x2, 0x2, 0x2, 
    0x630, 0x63e, 0x3, 0x2, 0x2, 0x2, 0x631, 0x62f, 0x3, 0x2, 0x2, 0x2, 
    0x632, 0x63c, 0x7, 0x4d, 0x2, 0x2, 0x633, 0x638, 0x5, 0x66, 0x34, 0x2, 
    0x634, 0x635, 0x7, 0x7, 0x2, 0x2, 0x635, 0x637, 0x5, 0x66, 0x34, 0x2, 
    0x636, 0x634, 0x3, 0x2, 0x2, 0x2, 0x637, 0x63a, 0x3, 0x2, 0x2, 0x2, 
    0x638, 0x636, 0x3, 0x2, 0x2, 0x2, 0x638, 0x639, 0x3, 0x2, 0x2, 0x2, 
    0x639, 0x63d, 0x3, 0x2, 0x2, 0x2, 0x63a, 0x638, 0x3, 0x2, 0x2, 0x2, 
    0x63b, 0x63d, 0x5, 0x68, 0x35, 0x2, 0x63c, 0x633, 0x3, 0x2, 0x2, 0x2, 
    0x63c, 0x63b, 0x3, 0x2, 0x2, 0x2, 0x63d, 0x63f, 0x3, 0x2, 0x2, 0x2, 
    0x63e, 0x632, 0x3, 0x2, 0x2, 0x2, 0x63e, 0x63f, 0x3, 0x2, 0x2, 0x2, 
    0x63f, 0x642, 0x3, 0x2, 0x2, 0x2, 0x640, 0x641, 0x7, 0x94, 0x2, 0x2, 
    0x641, 0x643, 0x5, 0x50, 0x29, 0x2, 0x642, 0x640, 0x3, 0x2, 0x2, 0x2, 
    0x642, 0x643, 0x3, 0x2, 0x2, 0x2, 0x643, 0x652, 0x3, 0x2, 0x2, 0x2, 
    0x644, 0x645, 0x7, 0x50, 0x2, 0x2, 0x645, 0x646, 0x7, 0x2a, 0x2, 0x2, 
    0x646, 0x64b, 0x5, 0x50, 0x29, 0x2, 0x647, 0x648, 0x7, 0x7, 0x2, 0x2, 
    0x648, 0x64a, 0x5, 0x50, 0x29, 0x2, 0x649, 0x647, 0x3, 0x2, 0x2, 0x2, 
    0x64a, 0x64d, 0x3, 0x2, 0x2, 0x2, 0x64b, 0x649, 0x3, 0x2, 0x2, 0x2, 
    0x64b, 0x64c, 0x3, 0x2, 0x2, 0x2, 0x64c, 0x650, 0x3, 0x2, 0x2, 0x2, 
    0x64d, 0x64b, 0x3, 0x2, 0x2, 0x2, 0x64e, 0x64f, 0x7, 0x51, 0x2, 0x2, 
    0x64f, 0x651, 0x5, 0x50, 0x29, 0x2, 0x650, 0x64e, 0x3, 0x2, 0x2, 0x2, 
    0x650, 0x651, 0x3, 0x2, 0x2, 0x2, 0x651, 0x653, 0x3, 0x2, 0x2, 0x2, 
    0x652, 0x644, 0x3, 0x2, 0x2, 0x2, 0x652, 0x653, 0x3, 0x2, 0x2, 0x2, 
    0x653, 0x671, 0x3, 0x2, 0x2, 0x2, 0x654, 0x655, 0x7, 0x90, 0x2, 0x2, 
    0x655, 0x656, 0x7, 0x5, 0x2, 0x2, 0x656, 0x65b, 0x5, 0x50, 0x29, 0x2, 
    0x657, 0x658, 0x7, 0x7, 0x2, 0x2, 0x658, 0x65a, 0x5, 0x50, 0x29, 0x2, 
    0x659, 0x657, 0x3, 0x2, 0x2, 0x2, 0x65a, 0x65d, 0x3, 0x2, 0x2, 0x2, 
    0x65b, 0x659, 0x3, 0x2, 0x2, 0x2, 0x65b, 0x65c, 0x3, 0x2, 0x2, 0x2, 
    0x65c, 0x65e, 0x3, 0x2, 0x2, 0x2, 0x65d, 0x65b, 0x3, 0x2, 0x2, 0x2, 
    0x65e, 0x66d, 0x7, 0x6, 0x2, 0x2, 0x65f, 0x660, 0x7, 0x7, 0x2, 0x2, 
    0x660, 0x661, 0x7, 0x5, 0x2, 0x2, 0x661, 0x666, 0x5, 0x50, 0x29, 0x2, 
    0x662, 0x663, 0x7, 0x7, 0x2, 0x2, 0x663, 0x665, 0x5, 0x50, 0x29, 0x2, 
    0x664, 0x662, 0x3, 0x2, 0x2, 0x2, 0x665, 0x668, 0x3, 0x2, 0x2, 0x2, 
    0x666, 0x664, 0x3, 0x2, 0x2, 0x2, 0x666, 0x667, 0x3, 0x2, 0x2, 0x2, 
    0x667, 0x669, 0x3, 0x2, 0x2, 0x2, 0x668, 0x666, 0x3, 0x2, 0x2, 0x2, 
    0x669, 0x66a, 0x7, 0x6, 0x2, 0x2, 0x66a, 0x66c, 0x3, 0x2, 0x2, 0x2, 
    0x66b, 0x65f, 0x3, 0x2, 0x2, 0x2, 0x66c, 0x66f, 0x3, 0x2, 0x2, 0x2, 
    0x66d, 0x66b, 0x3, 0x2, 0x2, 0x2, 0x66d, 0x66e, 0x3, 0x2, 0x2, 0x2, 
    0x66e, 0x671, 0x3, 0x2, 0x2, 0x2, 0x66f, 0x66d, 0x3, 0x2, 0x2, 0x2, 
    0x670, 0x626, 0x3, 0x2, 0x2, 0x2, 0x670, 0x654, 0x3, 0x2, 0x2, 0x2, 
    0x671, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x672, 0x678, 0x7, 0x8b, 0x2, 0x2, 
    0x673, 0x674, 0x7, 0x8b, 0x2, 0x2, 0x674, 0x678, 0x7, 0x1f, 0x2, 0x2, 
    0x675, 0x678, 0x7, 0x5c, 0x2, 0x2, 0x676, 0x678, 0x7, 0x46, 0x2, 0x2, 
    0x677, 0x672, 0x3, 0x2, 0x2, 0x2, 0x677, 0x673, 0x3, 0x2, 0x2, 0x2, 
    0x677, 0x675, 0x3, 0x2, 0x2, 0x2, 0x677, 0x676, 0x3, 0x2, 0x2, 0x2, 
    0x678, 0x71, 0x3, 0x2, 0x2, 0x2, 0x679, 0x685, 0x5, 0x88, 0x45, 0x2, 
    0x67a, 0x67b, 0x7, 0x5, 0x2, 0x2, 0x67b, 0x680, 0x5, 0x8e, 0x48, 0x2, 
    0x67c, 0x67d, 0x7, 0x7, 0x2, 0x2, 0x67d, 0x67f, 0x5, 0x8e, 0x48, 0x2, 
    0x67e, 0x67c, 0x3, 0x2, 0x2, 0x2, 0x67f, 0x682, 0x3, 0x2, 0x2, 0x2, 
    0x680, 0x67e, 0x3, 0x2, 0x2, 0x2, 0x680, 0x681, 0x3, 0x2, 0x2, 0x2, 
    0x681, 0x683, 0x3, 0x2, 0x2, 0x2, 0x682, 0x680, 0x3, 0x2, 0x2, 0x2, 
    0x683, 0x684, 0x7, 0x6, 0x2, 0x2, 0x684, 0x686, 0x3, 0x2, 0x2, 0x2, 
    0x685, 0x67a, 0x3, 0x2, 0x2, 0x2, 0x685, 0x686, 0x3, 0x2, 0x2, 0x2, 
    0x686, 0x73, 0x3, 0x2, 0x2, 0x2, 0x687, 0x689, 0x9, 0xa, 0x2, 0x2, 0x688, 
    0x687, 0x3, 0x2, 0x2, 0x2, 0x688, 0x689, 0x3, 0x2, 0x2, 0x2, 0x689, 
    0x68a, 0x3, 0x2, 0x2, 0x2, 0x68a, 0x68b, 0x7, 0x98, 0x2, 0x2, 0x68b, 
    0x75, 0x3, 0x2, 0x2, 0x2, 0x68c, 0x68d, 0x9, 0x10, 0x2, 0x2, 0x68d, 
    0x77, 0x3, 0x2, 0x2, 0x2, 0x68e, 0x68f, 0x9, 0x11, 0x2, 0x2, 0x68f, 
    0x79, 0x3, 0x2, 0x2, 0x2, 0x690, 0x691, 0x7, 0x9a, 0x2, 0x2, 0x691, 
    0x7b, 0x3, 0x2, 0x2, 0x2, 0x692, 0x695, 0x5, 0x50, 0x29, 0x2, 0x693, 
    0x695, 0x5, 0x48, 0x25, 0x2, 0x694, 0x692, 0x3, 0x2, 0x2, 0x2, 0x694, 
    0x693, 0x3, 0x2, 0x2, 0x2, 0x695, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x696, 0x697, 
    0x9, 0x12, 0x2, 0x2, 0x697, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x698, 0x699, 
    0x9, 0x13, 0x2, 0x2, 0x699, 0x81, 0x3, 0x2, 0x2, 0x2, 0x69a, 0x69b, 
    0x5, 0xa4, 0x53, 0x2, 0x69b, 0x83, 0x3, 0x2, 0x2, 0x2, 0x69c, 0x69d, 
    0x5, 0xa4, 0x53, 0x2, 0x69d, 0x85, 0x3, 0x2, 0x2, 0x2, 0x69e, 0x69f, 
    0x5, 0xa4, 0x53, 0x2, 0x69f, 0x87, 0x3, 0x2, 0x2, 0x2, 0x6a0, 0x6a1, 
    0x5, 0xa4, 0x53, 0x2, 0x6a1, 0x89, 0x3, 0x2, 0x2, 0x2, 0x6a2, 0x6a3, 
    0x5, 0xa4, 0x53, 0x2, 0x6a3, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x6a4, 0x6a5, 
    0x5, 0xa4, 0x53, 0x2, 0x6a5, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x6a6, 0x6a7, 
    0x5, 0xa4, 0x53, 0x2, 0x6a7, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x6a8, 0x6a9, 
    0x5, 0xa4, 0x53, 0x2, 0x6a9, 0x91, 0x3, 0x2, 0x2, 0x2, 0x6aa, 0x6ab, 
    0x5, 0xa4, 0x53, 0x2, 0x6ab, 0x93, 0x3, 0x2, 0x2, 0x2, 0x6ac, 0x6ad, 
    0x5, 0xa4, 0x53, 0x2, 0x6ad, 0x95, 0x3, 0x2, 0x2, 0x2, 0x6ae, 0x6af, 
    0x5, 0xa4, 0x53, 0x2, 0x6af, 0x97, 0x3, 0x2, 0x2, 0x2, 0x6b0, 0x6b1, 
    0x5, 0xa4, 0x53, 0x2, 0x6b1, 0x99, 0x3, 0x2, 0x2, 0x2, 0x6b2, 0x6b3, 
    0x5, 0xa4, 0x53, 0x2, 0x6b3, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x6b4, 0x6b5, 
    0x5, 0xa4, 0x53, 0x2, 0x6b5, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x6b6, 0x6b7, 
    0x5, 0xa4, 0x53, 0x2, 0x6b7, 0x9f, 0x3, 0x2, 0x2, 0x2, 0x6b8, 0x6b9, 
    0x5, 0xa4, 0x53, 0x2, 0x6b9, 0xa1, 0x3, 0x2, 0x2, 0x2, 0x6ba, 0x6bb, 
    0x5, 0xa4, 0x53, 0x2, 0x6bb, 0xa3, 0x3, 0x2, 0x2, 0x2, 0x6bc, 0x6c4, 
    0x7, 0x97, 0x2, 0x2, 0x6bd, 0x6c4, 0x5, 0x80, 0x41, 0x2, 0x6be, 0x6c4, 
    0x7, 0x9a, 0x2, 0x2, 0x6bf, 0x6c0, 0x7, 0x5, 0x2, 0x2, 0x6c0, 0x6c1, 
    0x5, 0xa4, 0x53, 0x2, 0x6c1, 0x6c2, 0x7, 0x6, 0x2, 0x2, 0x6c2, 0x6c4, 
    0x3, 0x2, 0x2, 0x2, 0x6c3, 0x6bc, 0x3, 0x2, 0x2, 0x2, 0x6c3, 0x6bd, 
    0x3, 0x2, 0x2, 0x2, 0x6c3, 0x6be, 0x3, 0x2, 0x2, 0x2, 0x6c3, 0x6bf, 
    0x3, 0x2, 0x2, 0x2, 0x6c4, 0xa5, 0x3, 0x2, 0x2, 0x2, 0xf6, 0xa8, 0xaa, 
    0xb5, 0xbc, 0xc1, 0xc7, 0xcd, 0xcf, 0xef, 0xf6, 0xfe, 0x101, 0x10a, 
    0x10e, 0x116, 0x11a, 0x11c, 0x121, 0x123, 0x127, 0x12e, 0x131, 0x136, 
    0x13a, 0x13f, 0x148, 0x14b, 0x151, 0x153, 0x157, 0x15d, 0x162, 0x16d, 
    0x173, 0x177, 0x17d, 0x182, 0x18b, 0x192, 0x198, 0x19c, 0x1a0, 0x1a6, 
    0x1ab, 0x1b2, 0x1bd, 0x1c0, 0x1c2, 0x1c8, 0x1ce, 0x1d2, 0x1d9, 0x1df, 
    0x1e5, 0x1eb, 0x1f0, 0x1fc, 0x201, 0x20c, 0x211, 0x214, 0x21b, 0x21e, 
    0x225, 0x22e, 0x231, 0x237, 0x239, 0x23d, 0x245, 0x24a, 0x252, 0x257, 
    0x25f, 0x264, 0x26c, 0x271, 0x277, 0x27e, 0x281, 0x289, 0x293, 0x296, 
    0x29c, 0x29e, 0x2a1, 0x2b4, 0x2ba, 0x2c3, 0x2c8, 0x2d1, 0x2dc, 0x2e3, 
    0x2e9, 0x2ef, 0x2f8, 0x2ff, 0x303, 0x305, 0x309, 0x310, 0x312, 0x316, 
    0x319, 0x320, 0x327, 0x32a, 0x334, 0x337, 0x33d, 0x33f, 0x343, 0x34a, 
    0x34d, 0x355, 0x35f, 0x362, 0x368, 0x36a, 0x36e, 0x375, 0x37e, 0x382, 
    0x384, 0x388, 0x391, 0x396, 0x398, 0x3a1, 0x3ac, 0x3b3, 0x3b6, 0x3b9, 
    0x3c6, 0x3d4, 0x3d9, 0x3dc, 0x3e9, 0x3f7, 0x3fc, 0x405, 0x408, 0x40e, 
    0x410, 0x416, 0x41b, 0x421, 0x42d, 0x431, 0x436, 0x43a, 0x43d, 0x44f, 
    0x454, 0x459, 0x461, 0x466, 0x46f, 0x476, 0x47a, 0x48a, 0x48d, 0x495, 
    0x49e, 0x4a2, 0x4a7, 0x4c5, 0x4d1, 0x4d6, 0x4e2, 0x4e8, 0x4ef, 0x4f3, 
    0x4fd, 0x500, 0x506, 0x509, 0x50b, 0x50d, 0x518, 0x51d, 0x529, 0x52d, 
    0x531, 0x535, 0x53c, 0x53e, 0x546, 0x54d, 0x550, 0x554, 0x559, 0x561, 
    0x574, 0x57a, 0x57e, 0x58e, 0x594, 0x59c, 0x5a1, 0x5a4, 0x5a9, 0x5b2, 
    0x5b7, 0x5c5, 0x5c8, 0x5ca, 0x5cf, 0x5d3, 0x5d6, 0x5dd, 0x5e5, 0x5e9, 
    0x5ed, 0x5f0, 0x5f6, 0x5f9, 0x5fb, 0x604, 0x609, 0x60d, 0x611, 0x614, 
    0x61f, 0x624, 0x628, 0x62f, 0x638, 0x63c, 0x63e, 0x642, 0x64b, 0x650, 
    0x652, 0x65b, 0x666, 0x66d, 0x670, 0x677, 0x680, 0x685, 0x688, 0x694, 
    0x6c3, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

SQLiteParser::Initializer SQLiteParser::_init;
