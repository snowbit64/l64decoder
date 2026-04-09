// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: mergeIslands
// Entry Point: 009b6f9c
// Size: 440 bytes
// Signature: undefined __thiscall mergeIslands(Bt2RaycastVehicle * this, btSimulationIslandManager * param_1)


/* Bt2RaycastVehicle::mergeIslands(btSimulationIslandManager*) const */

void __thiscall
Bt2RaycastVehicle::mergeIslands(Bt2RaycastVehicle *this,btSimulationIslandManager *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  uint *puVar7;
  ulong uVar8;
  uint uVar9;
  
  uVar2 = 1;
  lVar3 = *(long *)(this + 8);
  do {
    if (*(long *)(this + (ulong)uVar2 * 8 + 8) == 0) break;
    uVar5 = *(uint *)(lVar3 + 0xe4);
    lVar4 = *(long *)(param_1 + 0x18);
    uVar9 = *(uint *)(*(long *)(this + (ulong)uVar2 * 8 + 8) + 0xe4);
    puVar7 = (uint *)(lVar4 + (long)(int)uVar5 * 8);
    uVar1 = *puVar7;
    if (uVar1 != uVar5) {
      do {
        uVar6 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3;
        *puVar7 = *(uint *)(lVar4 + uVar6);
        uVar5 = *(uint *)(lVar4 + uVar6);
        puVar7 = (uint *)(lVar4 + (long)(int)uVar5 * 8);
        uVar1 = *puVar7;
      } while (uVar5 != uVar1);
    }
    puVar7 = (uint *)(lVar4 + (long)(int)uVar9 * 8);
    uVar1 = *puVar7;
    if (uVar1 != uVar9) {
      do {
        uVar6 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3;
        *puVar7 = *(uint *)(lVar4 + uVar6);
        uVar9 = *(uint *)(lVar4 + uVar6);
        puVar7 = (uint *)(lVar4 + (long)(int)uVar9 * 8);
        uVar1 = *puVar7;
      } while (uVar9 != uVar1);
    }
    if (uVar5 != uVar9) {
      puVar7 = (uint *)(lVar4 + (long)(int)uVar5 * 8);
      lVar4 = lVar4 + (long)(int)uVar9 * 8;
      *puVar7 = uVar9;
      *(uint *)(lVar4 + 4) = *(int *)(lVar4 + 4) + puVar7[1];
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 != 6);
  uVar2 = *(uint *)(this + 0x3c);
  if (0 < (int)uVar2) {
    uVar6 = 0;
    lVar3 = *(long *)(this + 0x48);
    do {
      lVar4 = *(long *)(lVar3 + uVar6 * 0x1a0 + 0x20);
      if ((lVar4 != 0) && ((*(byte *)(lVar4 + 0xe0) & 7) == 0)) {
        uVar9 = *(uint *)(lVar4 + 0xe4);
        uVar5 = *(uint *)(*(long *)(this + (ulong)*(uint *)(lVar3 + uVar6 * 0x1a0 + 0x180) * 8 + 8)
                         + 0xe4);
        lVar4 = *(long *)(param_1 + 0x18);
        puVar7 = (uint *)(lVar4 + (long)(int)uVar5 * 8);
        uVar1 = *puVar7;
        if (uVar1 != uVar5) {
          do {
            uVar8 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3;
            *puVar7 = *(uint *)(lVar4 + uVar8);
            uVar5 = *(uint *)(lVar4 + uVar8);
            puVar7 = (uint *)(lVar4 + (long)(int)uVar5 * 8);
            uVar1 = *puVar7;
          } while (uVar5 != uVar1);
        }
        puVar7 = (uint *)(lVar4 + (long)(int)uVar9 * 8);
        uVar1 = *puVar7;
        if (uVar1 != uVar9) {
          do {
            uVar8 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3;
            *puVar7 = *(uint *)(lVar4 + uVar8);
            uVar9 = *(uint *)(lVar4 + uVar8);
            puVar7 = (uint *)(lVar4 + (long)(int)uVar9 * 8);
            uVar1 = *puVar7;
          } while (uVar9 != uVar1);
        }
        if (uVar5 != uVar9) {
          puVar7 = (uint *)(lVar4 + (long)(int)uVar5 * 8);
          lVar4 = lVar4 + (long)(int)uVar9 * 8;
          *puVar7 = uVar9;
          *(uint *)(lVar4 + 4) = *(int *)(lVar4 + 4) + puVar7[1];
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar2);
  }
  return;
}


