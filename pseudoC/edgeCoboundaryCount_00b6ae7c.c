// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: edgeCoboundaryCount
// Entry Point: 00b6ae7c
// Size: 292 bytes
// Signature: undefined __thiscall edgeCoboundaryCount(Brep * this, uint param_1)


/* Brep::edgeCoboundaryCount(unsigned int) const */

int __thiscall Brep::edgeCoboundaryCount(Brep *this,uint param_1)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  
  lVar4 = *(long *)(this + 0x2f68);
  uVar9 = (ulong)param_1;
  uVar6 = *(uint *)(lVar4 + (ulong)param_1 * 8 + 4);
  if (uVar6 == 0xffffffff) {
    uVar5 = 0xffffffff;
    uVar8 = param_1;
  }
  else {
    uVar8 = param_1 + 2;
    if ((param_1 - 1 & 3) != 0) {
      uVar8 = param_1 - 1;
    }
    uVar9 = isOuterCone(this,*(ushort *)(lVar4 + (ulong)uVar8 * 8));
    bVar2 = (uVar9 & 1) == 0;
    lVar4 = *(long *)(this + 0x2f68);
    uVar8 = uVar6;
    if (bVar2) {
      uVar8 = param_1;
    }
    uVar9 = (ulong)uVar8;
    uVar5 = param_1;
    if (bVar2) {
      uVar5 = uVar6;
    }
  }
  uVar6 = *(uint *)(*(long *)(this + 0x2f50) + (ulong)*(ushort *)(lVar4 + uVar9 * 8) * 0xc + 4);
  if (uVar6 == uVar5) {
    uVar6 = uVar5 + 2;
    if ((uVar5 - 1 & 3) != 0) {
      uVar6 = uVar5 - 1;
    }
    uVar6 = *(uint *)(lVar4 + (ulong)uVar6 * 8 + 4);
  }
  iVar3 = 0;
  uVar7 = uVar6;
  do {
    uVar1 = uVar7 + 2;
    if ((uVar7 - 1 & 3) != 0) {
      uVar1 = uVar7 - 1;
    }
    if ((uVar1 == uVar8) || (uVar1 == uVar5)) {
      uVar7 = uVar1 + 2;
      if ((uVar1 - 1 & 3) != 0) {
        uVar7 = uVar1 - 1;
      }
    }
    else {
      iVar3 = iVar3 + ((~(uint)*(ushort *)(lVar4 + (ulong)(uVar7 >> 2) * 0x20) & 0x8000) >> 0xf);
      uVar7 = uVar1;
    }
    uVar7 = *(uint *)(lVar4 + (ulong)uVar7 * 8 + 4);
  } while (uVar7 != uVar6 && uVar7 != 0xffffffff);
  return iVar3;
}


