
// Generated from SQLite.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"




class  SQLiteLexer : public antlr4::Lexer {
public:
  enum {
    SCOL = 1, DOT = 2, OPEN_PAR = 3, CLOSE_PAR = 4, COMMA = 5, ASSIGN = 6, 
    STAR = 7, PLUS = 8, MINUS = 9, TILDE = 10, PIPE2 = 11, DIV = 12, MOD = 13, 
    LT2 = 14, GT2 = 15, AMP = 16, PIPE = 17, LT = 18, LT_EQ = 19, GT = 20, 
    GT_EQ = 21, EQ = 22, NOT_EQ1 = 23, NOT_EQ2 = 24, K_ABORT = 25, K_ACTION = 26, 
    K_ADD = 27, K_AFTER = 28, K_ALL = 29, K_ALTER = 30, K_ANALYZE = 31, 
    K_AND = 32, K_AS = 33, K_ASC = 34, K_ATTACH = 35, K_AUTOINCREMENT = 36, 
    K_BEFORE = 37, K_BEGIN = 38, K_BETWEEN = 39, K_BY = 40, K_CASCADE = 41, 
    K_CASE = 42, K_CAST = 43, K_CHECK = 44, K_COLLATE = 45, K_COLUMN = 46, 
    K_COMMIT = 47, K_CONFLICT = 48, K_CONSTRAINT = 49, K_CREATE = 50, K_CROSS = 51, 
    K_CURRENT_DATE = 52, K_CURRENT_TIME = 53, K_CURRENT_TIMESTAMP = 54, 
    K_DATABASE = 55, K_DEFAULT = 56, K_DEFERRABLE = 57, K_DEFERRED = 58, 
    K_DELETE = 59, K_DESC = 60, K_DETACH = 61, K_DISTINCT = 62, K_DROP = 63, 
    K_EACH = 64, K_ELSE = 65, K_END = 66, K_ESCAPE = 67, K_EXCEPT = 68, 
    K_EXCLUSIVE = 69, K_EXISTS = 70, K_EXPLAIN = 71, K_FAIL = 72, K_FOR = 73, 
    K_FOREIGN = 74, K_FROM = 75, K_FULL = 76, K_GLOB = 77, K_GROUP = 78, 
    K_HAVING = 79, K_IF = 80, K_IGNORE = 81, K_IMMEDIATE = 82, K_IN = 83, 
    K_INDEX = 84, K_INDEXED = 85, K_INITIALLY = 86, K_INNER = 87, K_INSERT = 88, 
    K_INSTEAD = 89, K_INTERSECT = 90, K_INTO = 91, K_IS = 92, K_ISNULL = 93, 
    K_JOIN = 94, K_KEY = 95, K_LEFT = 96, K_LIKE = 97, K_LIMIT = 98, K_MATCH = 99, 
    K_NATURAL = 100, K_NO = 101, K_NOT = 102, K_NOTNULL = 103, K_NULL = 104, 
    K_OF = 105, K_OFFSET = 106, K_ON = 107, K_OR = 108, K_ORDER = 109, K_OUTER = 110, 
    K_PLAN = 111, K_PRAGMA = 112, K_PRIMARY = 113, K_QUERY = 114, K_RAISE = 115, 
    K_RECURSIVE = 116, K_REFERENCES = 117, K_REGEXP = 118, K_REINDEX = 119, 
    K_RELEASE = 120, K_RENAME = 121, K_REPLACE = 122, K_RESTRICT = 123, 
    K_RIGHT = 124, K_ROLLBACK = 125, K_ROW = 126, K_SAVEPOINT = 127, K_SELECT = 128, 
    K_SET = 129, K_TABLE = 130, K_TEMP = 131, K_TEMPORARY = 132, K_THEN = 133, 
    K_TO = 134, K_TRANSACTION = 135, K_TRIGGER = 136, K_UNION = 137, K_UNIQUE = 138, 
    K_UPDATE = 139, K_USING = 140, K_VACUUM = 141, K_VALUES = 142, K_VIEW = 143, 
    K_VIRTUAL = 144, K_WHEN = 145, K_WHERE = 146, K_WITH = 147, K_WITHOUT = 148, 
    IDENTIFIER = 149, NUMERIC_LITERAL = 150, BIND_PARAMETER = 151, STRING_LITERAL = 152, 
    BLOB_LITERAL = 153, SINGLE_LINE_COMMENT = 154, MULTILINE_COMMENT = 155, 
    SPACES = 156, UNEXPECTED_CHAR = 157
  };

  SQLiteLexer(antlr4::CharStream *input);
  ~SQLiteLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

