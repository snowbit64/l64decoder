// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Lexer
// Entry Point: 00ee676c
// Size: 48 bytes
// Signature: undefined __thiscall Lexer(Lexer * this, char * param_1, ulong param_2, AstNameTable * param_3)


/* Luau::Lexer::Lexer(char const*, unsigned long, Luau::AstNameTable&) */

void __thiscall Luau::Lexer::Lexer(Lexer *this,char *param_1,ulong param_2,AstNameTable *param_3)

{
  *(char **)this = param_1;
  *(ulong *)(this + 8) = param_2;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(AstNameTable **)(this + 0x50) = param_3;
  *(undefined2 *)(this + 0x58) = 0x100;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  return;
}


