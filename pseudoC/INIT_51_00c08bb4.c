// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_51
// Entry Point: 00c08bb4
// Size: 72 bytes
// Signature: undefined _INIT_51(void)


void _INIT_51(void)

{
  Preprocessor::Charset::setChars
            ((Charset *)PreprocessorDesc::s_defaultOperatorCharset,
             PreprocessorDesc::DEFAULT_OPERATOR_STRING);
  Preprocessor::Charset::setChars
            ((Charset *)PreprocessorDesc::s_defaultOperatorExtCharset,(uchar *)"()[]{}");
  Preprocessor::Charset::setChars
            ((Charset *)PreprocessorDesc::s_defaultIdentifierCharset,
             (uchar *)&PreprocessorDesc::DEFAULT_IDENTIFIER_STRING);
  return;
}


