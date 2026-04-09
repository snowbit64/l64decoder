// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: finalizeSlicedFindPath
// Entry Point: 00dd5be4
// Size: 304 bytes
// Signature: undefined __thiscall finalizeSlicedFindPath(dtNavMeshQuery * this, uint * param_1, int * param_2, int param_3)


/* dtNavMeshQuery::finalizeSlicedFindPath(unsigned int*, int*, int) */

uint __thiscall
dtNavMeshQuery::finalizeSlicedFindPath(dtNavMeshQuery *this,uint *param_1,int *param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  
  *param_2 = 0;
  puVar3 = (undefined8 *)(this + 8);
  if ((int)*(uint *)puVar3 < 0) {
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x10) = 0;
    *puVar3 = 0;
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined8 *)(this + 0x18) = 0;
    return 0x80000000;
  }
  if (*(uint *)(this + 0x1c) == *(uint *)(this + 0x20)) {
    uVar4 = 1;
    *param_1 = *(uint *)(this + 0x1c);
  }
  else {
    if (*(uint *)(*(ulong *)(this + 0x10) + 0x18) != *(uint *)(this + 0x20)) {
      *(uint *)puVar3 = *(uint *)puVar3 | 0x40;
    }
    uVar4 = *(ulong *)(this + 0x10);
    uVar7 = 0;
    do {
      uVar5 = uVar4;
      uVar2 = *(uint *)(uVar5 + 0x14);
      uVar4 = 0;
      if ((uVar2 & 0x3fffffff) != 0) {
        uVar4 = **(long **)(this + 0x50) + (ulong)((uVar2 & 0x3fffffff) - 1) * 0x1c;
      }
      if (uVar7 != 0) {
        uVar7 = (ulong)((int)(uVar7 - **(long **)(this + 0x50) >> 2) * -0x49249249 + 1);
      }
      *(uint *)(uVar5 + 0x14) = uVar2 & 0xc0000000 | (uint)uVar7 & 0x3fffffff;
      uVar7 = uVar5;
    } while (uVar4 != 0);
    plVar6 = *(long **)(this + 0x50);
    if (param_3 < 2) {
      param_3 = 1;
    }
    uVar4 = 0;
    do {
      param_1[uVar4] = *(uint *)(uVar5 + 0x18);
      if (param_3 - 1 == uVar4) {
        uVar4 = (ulong)((int)uVar4 + 1);
        *(uint *)puVar3 = *(uint *)puVar3 | 0x10;
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
  uVar2 = *(uint *)puVar3;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *puVar3 = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *param_2 = (int)uVar4;
  return uVar2 & 0xffffff | 0x40000000;
}


