// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: toString
// Entry Point: 00ee0578
// Size: 340 bytes
// Signature: undefined __thiscall toString(Luau * this, Op param_1)


/* Luau::toString(Luau::AstExprBinary::Op) */

void __thiscall Luau::toString(Luau *this,Op param_1)

{
  undefined2 *in_x8;
  
  if ((uint)this < 0xf) {
    switch((ulong)this & 0xffffffff) {
    case 0:
      *in_x8 = 0x2b02;
      *(undefined *)(in_x8 + 1) = 0;
      return;
    case 1:
      *in_x8 = 0x2d02;
      *(undefined *)(in_x8 + 1) = 0;
      return;
    case 2:
      *in_x8 = 0x2a02;
      *(undefined *)(in_x8 + 1) = 0;
      return;
    case 3:
      *in_x8 = 0x2f02;
      *(undefined *)(in_x8 + 1) = 0;
      return;
    case 4:
      *in_x8 = 0x2502;
      *(undefined *)(in_x8 + 1) = 0;
      return;
    case 5:
      *in_x8 = 0x5e02;
      *(undefined *)(in_x8 + 1) = 0;
      return;
    case 6:
      *(undefined *)in_x8 = 4;
      *(undefined2 *)((long)in_x8 + 1) = 0x2e2e;
      *(undefined *)((long)in_x8 + 3) = 0;
      return;
    case 7:
      *(undefined *)in_x8 = 4;
      *(undefined2 *)((long)in_x8 + 1) = 0x3d7e;
      *(undefined *)((long)in_x8 + 3) = 0;
      return;
    case 8:
      *(undefined *)in_x8 = 4;
      *(undefined2 *)((long)in_x8 + 1) = 0x3d3d;
      *(undefined *)((long)in_x8 + 3) = 0;
      return;
    case 9:
      *in_x8 = 0x3c02;
      *(undefined *)(in_x8 + 1) = 0;
      return;
    case 10:
      *(undefined *)in_x8 = 4;
      *(undefined2 *)((long)in_x8 + 1) = 0x3d3c;
      *(undefined *)((long)in_x8 + 3) = 0;
      return;
    case 0xb:
      *in_x8 = 0x3e02;
      *(undefined *)(in_x8 + 1) = 0;
      return;
    case 0xc:
      *(undefined *)in_x8 = 4;
      *(undefined2 *)((long)in_x8 + 1) = 0x3d3e;
      *(undefined *)((long)in_x8 + 3) = 0;
      return;
    case 0xd:
      *(undefined *)in_x8 = 6;
      *(undefined4 *)((long)in_x8 + 1) = 0x646e61;
      return;
    case 0xe:
      *(undefined *)in_x8 = 4;
      *(undefined2 *)((long)in_x8 + 1) = 0x726f;
      *(undefined *)((long)in_x8 + 3) = 0;
      return;
    }
  }
  *in_x8 = 0;
  return;
}


