// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: markVertexRegionDirty
// Entry Point: 008ee014
// Size: 300 bytes
// Signature: undefined __thiscall markVertexRegionDirty(BaseTerrainSyncer * this, int param_1, int param_2, uint param_3, uint param_4)


/* BaseTerrainSyncer::markVertexRegionDirty(int, int, unsigned int, unsigned int) */

void __thiscall
BaseTerrainSyncer::markVertexRegionDirty
          (BaseTerrainSyncer *this,int param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  uint *puVar12;
  ulong uVar13;
  long *plVar14;
  
  if (this[0x40] == (BaseTerrainSyncer)0x0) {
    lVar11 = *(long *)this;
    uVar3 = param_1 & (param_1 >> 0x1f ^ 0xffffffffU);
    uVar4 = param_2 & (param_2 >> 0x1f ^ 0xffffffffU);
    uVar10 = (ulong)uVar4;
    uVar1 = param_3 + param_1;
    lVar8 = *(long *)(this + 8) - lVar11;
    uVar2 = param_4 + param_2;
    if (lVar8 != 0) {
      uVar13 = 0;
      do {
        plVar14 = *(long **)(lVar11 + uVar13 * 0x20 + 0x10);
        uVar5 = *(uint *)(plVar14 + 1);
        if ((int)uVar1 <= (int)*(uint *)(plVar14 + 1)) {
          uVar5 = uVar1;
        }
        uVar7 = *(uint *)((long)plVar14 + 0xc);
        if ((int)uVar2 <= (int)*(uint *)((long)plVar14 + 0xc)) {
          uVar7 = uVar2;
        }
        if (uVar3 < uVar5 && uVar4 < uVar7) {
          lVar9 = uVar7 - uVar10;
          puVar12 = (uint *)(*plVar14 + uVar10 * 8 + 4);
          do {
            uVar7 = puVar12[-1];
            if (uVar7 == 0xffffffff) {
              puVar12[-1] = uVar3;
              *puVar12 = uVar5;
            }
            else {
              uVar6 = uVar3;
              if (uVar7 <= uVar3) {
                uVar6 = uVar7;
              }
              uVar7 = uVar5;
              if (uVar5 <= *puVar12) {
                uVar7 = *puVar12;
              }
              puVar12[-1] = uVar6;
              *puVar12 = uVar7;
            }
            puVar12 = puVar12 + 2;
            lVar9 = lVar9 + -1;
          } while (lVar9 != 0);
        }
        uVar13 = uVar13 + 1;
      } while ((uVar13 & 0xffffffff) < (ulong)(lVar8 >> 5));
    }
    plVar14 = *(long **)(this + 0x18);
    uVar5 = *(uint *)(plVar14 + 1);
    if ((int)uVar1 <= (int)*(uint *)(plVar14 + 1)) {
      uVar5 = uVar1;
    }
    uVar1 = *(uint *)((long)plVar14 + 0xc);
    if ((int)uVar2 <= (int)*(uint *)((long)plVar14 + 0xc)) {
      uVar1 = uVar2;
    }
    if ((uVar3 < uVar5) && (uVar4 < uVar1)) {
      lVar11 = uVar1 - uVar10;
      puVar12 = (uint *)(*plVar14 + uVar10 * 8 + 4);
      do {
        uVar1 = puVar12[-1];
        if (uVar1 == 0xffffffff) {
          puVar12[-1] = uVar3;
          *puVar12 = uVar5;
        }
        else {
          uVar2 = uVar3;
          if (uVar1 <= uVar3) {
            uVar2 = uVar1;
          }
          uVar1 = uVar5;
          if (uVar5 <= *puVar12) {
            uVar1 = *puVar12;
          }
          puVar12[-1] = uVar2;
          *puVar12 = uVar1;
        }
        puVar12 = puVar12 + 2;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
  }
  return;
}


