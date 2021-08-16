#pragma once
enum TokenType
{
	Identifier,
	Integer,
	Float,
	HexNumber,
	BigFloat,
	BinaryNumber,
	Char,
	String,
	Keyword,
	LeftRoundBracket,
	RightRoundBracket,
	LeftSquareBracket,
	RightSquareBracket,
	LeftCurlyBracket,
	RightCurlyBracket,
	LessThan,
	GreaterThan,
	Equal,
	Assignment,
	Plus,
	Minus,
	Asterisk,
	Slash,
	Backslash,
	Dot,
	Comma,
	Colon,
	Semicolon,
	End,
	EndLine,
	Unexpected
};