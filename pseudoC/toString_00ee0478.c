// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: toString
// Entry Point: 00ee0478
// Size: 84 bytes
// Signature: undefined __thiscall toString(Luau * this, Op param_1)


/* Luau::toString(Luau::AstExprUnary::Op) */

void __thiscall Luau::toString(Luau *this,Op param_1)

{
  int iVar1;
  undefined2 *in_x8;
  
  iVar1 = (int)this;
  if (iVar1 == 0) {
    *(undefined *)in_x8 = 6;
    *(undefined4 *)((long)in_x8 + 1) = 0x746f6e;
    return;
  }
  if (iVar1 != 2) {
    if (iVar1 == 1) {
      *in_x8 = 0x2d02;
      *(undefined *)(in_x8 + 1) = 0;
      return;
    }
    *in_x8 = 0;
    return;
  }
  *in_x8 = 0x2302;
  *(undefined *)(in_x8 + 1) = 0;
  return;
}


