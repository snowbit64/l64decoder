// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setLostServerPacket
// Entry Point: 0085a9c8
// Size: 224 bytes
// Signature: undefined __thiscall setLostServerPacket(DensityMapSyncer * this, uint param_1, uint param_2)


/* DensityMapSyncer::setLostServerPacket(unsigned int, unsigned int) */

void __thiscall
DensityMapSyncer::setLostServerPacket(DensityMapSyncer *this,uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  uint *puVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  lVar9 = *(long *)(this + 0x40);
  iVar4 = (int)((ulong)(*(long *)(this + 0x48) - lVar9) >> 4);
  iVar5 = iVar4 + -1;
  if (iVar4 < 1) {
    return;
  }
  iVar4 = 0;
LAB_0085a9f0:
  iVar1 = iVar4 + iVar5;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 1;
  }
  uVar2 = iVar1 >> 1;
  uVar8 = *(uint *)(lVar9 + (-(ulong)(uVar2 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar2 << 4));
  if (uVar8 < param_1) {
    iVar4 = uVar2 + 1;
  }
  else {
    if (uVar8 <= param_1) {
      uVar8 = 0;
      plVar3 = *(long **)(lVar9 + (ulong)uVar2 * 0x10 + 8);
      plVar6 = plVar3 + 3;
      while (puVar7 = (uint *)((long)plVar3 + (ulong)uVar8 * 0xa4 + 0x14), *puVar7 != param_2) {
        uVar8 = uVar8 + 1;
        plVar6 = (long *)((long)plVar6 + 0xa4);
        if (0x1f < uVar8) {
          return;
        }
      }
      lVar9 = 0x28;
      do {
        uVar2 = *(uint *)plVar6;
        if (uVar2 == 0xffffffff) break;
        lVar11 = (ulong)(uVar2 >> 6 & 0x1fff) * 8;
        lVar9 = lVar9 + -1;
        lVar10 = *(long *)(*plVar3 + ((ulong)(uVar2 >> 0x13) & 0x1f) * 8);
        *(uint *)plVar6 = 0xffffffff;
        *(ulong *)(lVar10 + lVar11) = *(ulong *)(lVar10 + lVar11) | 1L << ((ulong)uVar2 & 0x3f);
        plVar6 = (long *)((long)plVar6 + 4);
      } while (lVar9 != 0);
      *puVar7 = 0xffffffff;
      return;
    }
    iVar5 = uVar2 - 1;
  }
  if (iVar5 < iVar4) {
    return;
  }
  goto LAB_0085a9f0;
}


