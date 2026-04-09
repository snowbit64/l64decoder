// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Lexeme
// Entry Point: 00ee59b8
// Size: 24 bytes
// Signature: undefined __thiscall Lexeme(Lexeme * this, Location * param_1, Type param_2, char * param_3, ulong param_4)


/* Luau::Lexeme::Lexeme(Luau::Location const&, Luau::Lexeme::Type, char const*, unsigned long) */

void __thiscall
Luau::Lexeme::Lexeme(Lexeme *this,Location *param_1,Type param_2,char *param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(Type *)this = param_2;
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)param_1;
  *(int *)(this + 0x14) = (int)param_4;
  *(char **)(this + 0x18) = param_3;
  *(undefined8 *)(this + 0xc) = uVar2;
  *(undefined8 *)(this + 4) = uVar1;
  return;
}


