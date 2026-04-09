// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: finalizeSlicedFindPathPartial
// Entry Point: 00dd5d14
// Size: 452 bytes
// Signature: undefined __thiscall finalizeSlicedFindPathPartial(dtNavMeshQuery * this, uint * param_1, int param_2, uint * param_3, int * param_4, int param_5)


/* dtNavMeshQuery::finalizeSlicedFindPathPartial(unsigned int const*, int, unsigned int*, int*, int)
    */

uint __thiscall
dtNavMeshQuery::finalizeSlicedFindPathPartial
          (dtNavMeshQuery *this,uint *param_1,int param_2,uint *param_3,int *param_4,int param_5)

{
  uint *puVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  
  *param_4 = 0;
  if (param_2 == 0) {
    return 0x80000000;
  }
  puVar7 = (undefined8 *)(this + 8);
  if (*(int *)puVar7 < 0) {
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x10) = 0;
    *puVar7 = 0;
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined8 *)(this + 0x18) = 0;
    return 0x80000000;
  }
  if (*(uint *)(this + 0x1c) == *(uint *)(this + 0x20)) {
    uVar4 = 1;
    *param_3 = *(uint *)(this + 0x1c);
  }
  else {
    uVar4 = (ulong)(uint)param_2;
    do {
      if ((int)uVar4 < 1) {
        uVar3 = *(ulong *)(this + 0x10);
        *(uint *)(this + 8) = *(uint *)(this + 8) | 0x40;
        break;
      }
      uVar3 = dtNodePool::findNode(*(dtNodePool **)(this + 0x50),param_1[uVar4 - 1]);
      uVar4 = uVar4 - 1;
    } while (uVar3 == 0);
    uVar4 = 0;
    do {
      uVar5 = uVar3;
      uVar2 = *(uint *)(uVar5 + 0x14);
      uVar3 = 0;
      if ((uVar2 & 0x3fffffff) != 0) {
        uVar3 = **(long **)(this + 0x50) + (ulong)((uVar2 & 0x3fffffff) - 1) * 0x1c;
      }
      if (uVar4 != 0) {
        uVar4 = (ulong)((int)(uVar4 - **(long **)(this + 0x50) >> 2) * -0x49249249 + 1);
      }
      *(uint *)(uVar5 + 0x14) = uVar2 & 0xc0000000 | (uint)uVar4 & 0x3fffffff;
      uVar4 = uVar5;
    } while (uVar3 != 0);
    uVar4 = 0;
    if (param_5 < 2) {
      param_5 = 1;
    }
    plVar6 = *(long **)(this + 0x50);
    do {
      param_3[uVar4] = *(uint *)(uVar5 + 0x18);
      if (param_5 - 1 == uVar4) {
        uVar4 = (ulong)((int)uVar4 + 1);
        *(uint *)puVar7 = *(uint *)puVar7 | 0x10;
        break;
      }
      puVar1 = (uint *)(uVar5 + 0x14);
      uVar4 = uVar4 + 1;
      uVar5 = 0;
      if ((*puVar1 & 0x3fffffff) != 0) {
        uVar5 = *plVar6 + (ulong)((*puVar1 & 0x3fffffff) - 1) * 0x1c;
      }
    } while (uVar5 != 0);
  }
  uVar2 = *(uint *)puVar7;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *puVar7 = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *param_4 = (int)uVar4;
  return uVar2 & 0xffffff | 0x40000000;
}


