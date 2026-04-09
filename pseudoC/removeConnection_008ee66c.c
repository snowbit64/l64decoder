// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeConnection
// Entry Point: 008ee66c
// Size: 256 bytes
// Signature: undefined __thiscall removeConnection(BaseTerrainSyncer * this, uint param_1)


/* BaseTerrainSyncer::removeConnection(unsigned int) */

void __thiscall BaseTerrainSyncer::removeConnection(BaseTerrainSyncer *this,uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  void **ppvVar10;
  ulong uVar11;
  
  lVar6 = *(long *)this;
  iVar7 = (int)((ulong)(*(long *)(this + 8) - lVar6) >> 5);
  iVar8 = iVar7 + -1;
  if (0 < iVar7) {
    iVar7 = 0;
    do {
      iVar1 = iVar7 + iVar8;
      if (iVar1 < 0) {
        iVar1 = iVar1 + 1;
      }
      uVar2 = iVar1 >> 1;
      uVar11 = (ulong)uVar2;
      uVar3 = *(uint *)(lVar6 + (-(ulong)(uVar2 >> 0x1f) & 0xffffffe000000000 | uVar11 << 5));
      if (uVar3 < param_1) {
        iVar7 = uVar2 + 1;
      }
      else {
        if (uVar3 <= param_1) {
          ppvVar10 = *(void ***)(lVar6 + uVar11 * 0x20 + 0x10);
          if (ppvVar10 != (void **)0x0) {
            if (*ppvVar10 != (void *)0x0) {
              operator_delete__(*ppvVar10);
            }
            operator_delete(ppvVar10);
            lVar6 = *(long *)this;
          }
          ppvVar10 = *(void ***)(lVar6 + uVar11 * 0x20 + 0x18);
          if (ppvVar10 != (void **)0x0) {
            if (*ppvVar10 != (void *)0x0) {
              operator_delete__(*ppvVar10);
            }
            operator_delete(ppvVar10);
            lVar6 = *(long *)this;
          }
          puVar9 = *(undefined4 **)(this + 8);
          puVar4 = (undefined4 *)(lVar6 + uVar11 * 0x20);
          while (puVar5 = puVar4 + 8, puVar5 != puVar9) {
            puVar5[-8] = *puVar5;
            *(undefined8 *)(puVar5 + -4) = *(undefined8 *)(puVar5 + 4);
            *(undefined8 *)(puVar5 + -6) = *(undefined8 *)(puVar5 + 2);
            *(undefined8 *)(puVar5 + -2) = *(undefined8 *)(puVar5 + 6);
            puVar4 = puVar5;
          }
          *(undefined4 **)(this + 8) = puVar4;
          return;
        }
        iVar8 = uVar2 - 1;
      }
    } while (iVar7 <= iVar8);
  }
  return;
}


