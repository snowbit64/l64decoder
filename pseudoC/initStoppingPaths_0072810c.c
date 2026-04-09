// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initStoppingPaths
// Entry Point: 0072810c
// Size: 148 bytes
// Signature: undefined __thiscall initStoppingPaths(DynamicObstacle * this, VehicleNavigationData * param_1)


/* DynamicObstacle::initStoppingPaths(VehicleNavigationData const&) */

void __thiscall
DynamicObstacle::initStoppingPaths(DynamicObstacle *this,VehicleNavigationData *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  float *pfVar3;
  ulong uVar4;
  uint uVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  
  puVar1 = *(undefined8 **)(this + 0x20);
  uVar6 = *(undefined4 *)(param_1 + 8);
  uVar8 = *(undefined4 *)(param_1 + 0x1c);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  uVar5 = *(uint *)(param_1 + 0x28);
  *(undefined4 *)(puVar1 + 3) = uVar6;
  *(undefined4 *)((long)puVar1 + 0x1c) = uVar8;
  *(undefined *)(puVar1 + 4) = 0;
  if (uVar5 != 0) {
    uVar2 = 0;
    pfVar3 = (float *)(param_1 + 0x40);
    uVar4 = 1;
    do {
      if ((*(ulong *)(param_1 + 0x30) >> (uVar2 & 0x3f) & 1) != 0) {
        fVar7 = *(float *)(param_1 + 8);
        fVar9 = *pfVar3;
        puVar1 = (undefined8 *)(*(long *)(this + 0x20) + uVar4 * 0x28);
        uVar4 = (ulong)((int)uVar4 + 1);
        uVar6 = *(undefined4 *)(param_1 + 0x1c);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
        uVar5 = *(uint *)(param_1 + 0x28);
        *(float *)(puVar1 + 3) = fVar7 + fVar9;
        *(undefined4 *)((long)puVar1 + 0x1c) = uVar6;
        *(undefined *)(puVar1 + 4) = 0;
      }
      uVar2 = uVar2 + 1;
      pfVar3 = pfVar3 + 3;
    } while (uVar2 != uVar5);
  }
  return;
}


