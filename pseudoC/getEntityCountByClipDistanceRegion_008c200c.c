// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getEntityCountByClipDistanceRegion
// Entry Point: 008c200c
// Size: 80 bytes
// Signature: undefined __thiscall getEntityCountByClipDistanceRegion(CullingGrid2D * this, uint * param_1)


/* CullingGrid2D::getEntityCountByClipDistanceRegion(unsigned int*) const */

void __thiscall CullingGrid2D::getEntityCountByClipDistanceRegion(CullingGrid2D *this,uint *param_1)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ushort *puVar5;
  
  if (*(int *)(this + 0x10) != 0) {
    uVar1 = 0;
    uVar2 = *param_1;
    uVar3 = param_1[1];
    uVar4 = param_1[2];
    puVar5 = (ushort *)(*(long *)this + 0x28);
    do {
      uVar1 = uVar1 + 1;
      uVar2 = uVar2 + puVar5[-0x10];
      uVar3 = uVar3 + puVar5[-8];
      uVar4 = uVar4 + *puVar5;
      *param_1 = uVar2;
      param_1[1] = uVar3;
      param_1[2] = uVar4;
      puVar5 = puVar5 + 0x24;
    } while (uVar1 < *(uint *)(this + 0x10));
  }
  return;
}


