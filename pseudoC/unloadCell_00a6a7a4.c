// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unloadCell
// Entry Point: 00a6a7a4
// Size: 156 bytes
// Signature: undefined __thiscall unloadCell(FoliageTransformGroup * this, GridCellSharedData * param_1)


/* FoliageTransformGroup::unloadCell(LocalGeometryTransformGroup::GridCellSharedData const*) */

void __thiscall
FoliageTransformGroup::unloadCell(FoliageTransformGroup *this,GridCellSharedData *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  GsShape *this_00;
  
  uVar1 = *(uint *)(this + 0x248);
  this_00 = *(GsShape **)param_1;
  iVar2 = 0;
  if (uVar1 != 0) {
    iVar2 = (int)*(short *)(param_1 + 10) / (int)uVar1;
  }
  iVar2 = (int)*(short *)(param_1 + 10) - iVar2 * uVar1;
  iVar3 = 0;
  if (uVar1 != 0) {
    iVar3 = (int)*(short *)(param_1 + 8) / (int)uVar1;
  }
  iVar3 = (int)*(short *)(param_1 + 8) - iVar3 * uVar1;
  lVar4 = (ulong)((uVar1 & iVar3 >> 0x1f) + iVar3 + ((uVar1 & iVar2 >> 0x1f) + iVar2) * uVar1) * 4;
  *(int *)(this + 0x260) = *(int *)(this + 0x260) - *(int *)(*(long *)(this + 600) + lVar4);
  *(undefined4 *)(*(long *)(this + 600) + lVar4) = 0;
  GsShape::raiseShapeFlag(this_00,0x400);
  lVar4 = *(long *)(this_00 + 0x170);
  FoliageCellGeometry::releaseResources();
  if (*(char *)(lVar4 + 0xad) != '\0') {
    BuddyAllocator::free(*(BuddyAllocator **)(this + 0x268),*(uint *)(lVar4 + 0xb0));
    *(undefined *)(lVar4 + 0xad) = 0;
  }
  return;
}


