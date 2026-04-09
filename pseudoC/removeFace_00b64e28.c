// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeFace
// Entry Point: 00b64e28
// Size: 212 bytes
// Signature: undefined __thiscall removeFace(Brep * this, uint param_1)


/* Brep::removeFace(unsigned int) */

void __thiscall Brep::removeFace(Brep *this,uint param_1)

{
  long lVar1;
  uint uVar2;
  ushort uVar3;
  long lVar4;
  long lVar5;
  uint *puVar6;
  ulong uVar7;
  
  uVar7 = (ulong)param_1;
  discardFace(this,param_1);
  lVar5 = *(long *)(this + 0x2f68);
  lVar4 = *(long *)(this + 0x2f50);
  lVar1 = lVar5 + uVar7 * 0x20;
  uVar2 = *(uint *)(lVar1 + 0xc);
  if (uVar2 != 0xffffffff) {
    uVar3 = *(ushort *)(lVar1 + 8);
    *(undefined4 *)(lVar5 + (ulong)uVar2 * 8 + 4) = 0xffffffff;
    *(uint *)(lVar4 + (ulong)uVar3 * 0xc + 4) = *(uint *)(lVar1 + 0xc);
  }
  uVar2 = *(uint *)(lVar1 + 0x14);
  if (uVar2 != 0xffffffff) {
    uVar3 = *(ushort *)(lVar5 + uVar7 * 0x20 + 0x10);
    *(undefined4 *)(lVar5 + (ulong)uVar2 * 8 + 4) = 0xffffffff;
    *(uint *)(lVar4 + (ulong)uVar3 * 0xc + 4) = *(uint *)(lVar1 + 0x14);
  }
  lVar1 = lVar5 + uVar7 * 0x20;
  puVar6 = (uint *)(lVar1 + 0x1c);
  uVar2 = *puVar6;
  if (uVar2 != 0xffffffff) {
    uVar3 = *(ushort *)(lVar1 + 0x18);
    *(undefined4 *)(lVar5 + (ulong)uVar2 * 8 + 4) = 0xffffffff;
    *(uint *)(lVar4 + (ulong)uVar3 * 0xc + 4) = *puVar6;
  }
  return;
}


