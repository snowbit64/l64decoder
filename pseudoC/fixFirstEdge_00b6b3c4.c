// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fixFirstEdge
// Entry Point: 00b6b3c4
// Size: 288 bytes
// Signature: undefined __thiscall fixFirstEdge(Brep * this, ushort param_1)


/* Brep::fixFirstEdge(unsigned short) */

void __thiscall Brep::fixFirstEdge(Brep *this,ushort param_1)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  
  puVar3 = (uint *)(*(long *)(this + 0x2f50) + (ulong)param_1 * 0xc + 4);
  uVar2 = *puVar3;
  uVar7 = (ulong)uVar2;
  if (uVar2 == 0xffffffff) {
LAB_00b6b4d8:
    *puVar3 = 0xffffffff;
    return;
  }
  lVar4 = *(long *)(this + 0x2f68);
  uVar6 = uVar7;
  if ((*(ushort *)(lVar4 + (uVar7 & 0xfffffffc) * 8) >> 0xe & 1) != 0) {
    uVar5 = (ulong)uVar2;
    while (iVar1 = *(int *)(lVar4 + uVar5 * 8 + 4), uVar6 = uVar5, iVar1 != -1) {
      uVar8 = iVar1 - 2;
      if ((iVar1 + 1U & 3) != 0) {
        uVar8 = iVar1 + 1;
      }
      uVar5 = (ulong)uVar8;
      uVar6 = uVar7;
      if ((uVar8 == uVar2) ||
         (uVar6 = uVar5, (*(ushort *)(lVar4 + (ulong)(uVar8 >> 2) * 0x20) >> 0xe & 1) == 0)) break;
    }
    if (*(int *)(lVar4 + uVar6 * 8 + 4) == -1) {
      do {
        uVar8 = (int)uVar7 - 1;
        uVar2 = (int)uVar7 + 2;
        if ((uVar8 & 3) != 0) {
          uVar2 = uVar8;
        }
        uVar2 = *(uint *)(lVar4 + (ulong)uVar2 * 8 + 4);
        uVar7 = (ulong)uVar2;
        if (uVar2 == 0xffffffff) goto LAB_00b6b4d8;
        uVar6 = uVar7;
      } while ((*(ushort *)(lVar4 + (uVar7 & 0xfffffffc) * 8) >> 0xe & 1) != 0);
    }
    else {
      uVar8 = 0xffffffff;
      if (((uint)uVar6 == uVar2) || (uVar7 = uVar6, (uint)uVar6 == 0xffffffff)) goto LAB_00b6b464;
    }
  }
  while( true ) {
    uVar8 = (uint)uVar7;
    iVar1 = *(int *)(lVar4 + uVar7 * 8 + 4);
    if (iVar1 == -1) break;
    uVar2 = iVar1 - 2;
    if ((iVar1 + 1U & 3) != 0) {
      uVar2 = iVar1 + 1;
    }
    uVar7 = (ulong)uVar2;
    if (uVar2 == (uint)uVar6) {
      *puVar3 = (uint)uVar6;
      return;
    }
  }
LAB_00b6b464:
  *puVar3 = uVar8;
  return;
}


