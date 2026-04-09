// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Lexeme
// Entry Point: 00ee599c
// Size: 28 bytes
// Signature: undefined __thiscall Lexeme(Lexeme * this, Location * param_1, char param_2)


/* Luau::Lexeme::Lexeme(Luau::Location const&, char) */

void __thiscall Luau::Lexeme::Lexeme(Lexeme *this,Location *param_1,char param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(uint *)this = (uint)(byte)param_2;
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)param_1;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0xc) = uVar2;
  *(undefined8 *)(this + 4) = uVar1;
  return;
}


