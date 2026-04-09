// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: discardFace
// Entry Point: 00b6acfc
// Size: 124 bytes
// Signature: undefined __thiscall discardFace(Brep * this, uint param_1)


/* Brep::discardFace(unsigned int) */

void __thiscall Brep::discardFace(Brep *this,uint param_1)

{
  Brep BVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = *(long *)(this + 0x2f68);
  lVar3 = (ulong)param_1 * 0x20;
  BVar1 = this[0x2fb6];
  *(ushort *)(lVar2 + lVar3) = *(ushort *)(lVar2 + lVar3) | 0x4000;
  if (BVar1 != (Brep)0x0) {
    lVar2 = lVar2 + (ulong)param_1 * 0x20;
    lVar3 = *(long *)(this + 0x2f98);
    lVar4 = lVar3 + (ulong)*(ushort *)(lVar2 + 10) * 0x18;
    *(short *)(lVar4 + 0x14) = *(short *)(lVar4 + 0x14) + -1;
    lVar4 = lVar3 + (ulong)*(ushort *)(lVar2 + 0x12) * 0x18;
    *(short *)(lVar4 + 0x14) = *(short *)(lVar4 + 0x14) + -1;
    lVar3 = lVar3 + (ulong)*(ushort *)(lVar2 + 0x1a) * 0x18;
    *(short *)(lVar3 + 0x14) = *(short *)(lVar3 + 0x14) + -1;
  }
  return;
}


