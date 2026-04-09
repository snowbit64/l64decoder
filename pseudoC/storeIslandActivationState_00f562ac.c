// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: storeIslandActivationState
// Entry Point: 00f562ac
// Size: 140 bytes
// Signature: undefined __thiscall storeIslandActivationState(btSimulationIslandManager * this, btCollisionWorld * param_1)


/* btSimulationIslandManager::storeIslandActivationState(btCollisionWorld*) */

void __thiscall
btSimulationIslandManager::storeIslandActivationState
          (btSimulationIslandManager *this,btCollisionWorld *param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  uint *puVar9;
  uint uVar10;
  ulong uVar11;
  
  uVar1 = *(uint *)(param_1 + 0xc);
  if (0 < (int)uVar1) {
    uVar3 = 0;
    uVar4 = 0;
    lVar5 = *(long *)(this + 0x18);
    lVar6 = *(long *)(param_1 + 0x18);
    do {
      lVar7 = *(long *)(lVar6 + uVar3 * 8);
      if ((*(byte *)(lVar7 + 0xe0) & 3) == 0) {
        puVar9 = (uint *)(lVar5 + (long)(int)uVar4 * 8);
        uVar2 = *puVar9;
        uVar10 = uVar4;
        if (uVar2 != uVar4) {
          do {
            uVar11 = -(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3;
            *puVar9 = *(uint *)(lVar5 + uVar11);
            uVar10 = *(uint *)(lVar5 + uVar11);
            puVar9 = (uint *)(lVar5 + (long)(int)uVar10 * 8);
            uVar2 = *puVar9;
          } while (uVar10 != uVar2);
        }
        lVar8 = (long)(int)uVar4;
        uVar4 = uVar4 + 1;
        *(uint *)(lVar7 + 0xe4) = uVar10;
        *(int *)(lVar5 + lVar8 * 8 + 4) = (int)uVar3;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar1);
  }
  return;
}


