// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeChunkFromStartIndexBuffer
// Entry Point: 00927cf4
// Size: 288 bytes
// Signature: undefined __thiscall removeChunkFromStartIndexBuffer(DestructionGeometry * this, uint param_1)


/* DestructionGeometry::removeChunkFromStartIndexBuffer(unsigned int) */

void __thiscall
DestructionGeometry::removeChunkFromStartIndexBuffer(DestructionGeometry *this,uint param_1)

{
  void *__dest;
  uint uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  uint *puVar9;
  
  DestructionGeometryShared::getChunk(*(DestructionGeometryShared **)(this + 0x70),param_1);
  lVar8 = *(long *)(this + 0xd8);
  iVar5 = *(int *)(this + 0x90);
  iVar4 = DestructionChunk::getNumIndices();
  puVar9 = (uint *)(lVar8 + (ulong)param_1 * 0x94 + 4);
  uVar1 = *puVar9;
  uVar2 = iVar5 - (iVar4 + uVar1);
  if (uVar2 != 0) {
    __dest = (void *)(*(long *)(this + 0x80) + (ulong)uVar1 * 2);
    uVar6 = DestructionChunk::getNumIndices();
    memmove(__dest,(void *)((long)__dest + (uVar6 & 0xffffffff) * 2),(ulong)uVar2 << 1);
    iVar5 = DestructionGeometryShared::getNumChunks();
    if (iVar5 != 0) {
      lVar8 = 0;
      uVar6 = 0;
      do {
        bVar3 = true;
        if (*(int *)(*(long *)(this + 0xd8) + lVar8 + 0xc) == 1) {
          bVar3 = (ulong)param_1 * 0x94 - lVar8 == 0;
        }
        if ((!bVar3) && (*puVar9 < *(uint *)(*(long *)(this + 0xd8) + lVar8 + 4))) {
          iVar5 = DestructionChunk::getNumIndices();
          *(int *)(*(long *)(this + 0xd8) + lVar8 + 4) =
               *(int *)(*(long *)(this + 0xd8) + lVar8 + 4) - iVar5;
        }
        uVar6 = uVar6 + 1;
        uVar7 = DestructionGeometryShared::getNumChunks();
        lVar8 = lVar8 + 0x94;
      } while (uVar6 < (uVar7 & 0xffffffff));
    }
    this[0x98] = (DestructionGeometry)0x1;
  }
  iVar5 = DestructionChunk::getNumIndices();
  *(int *)(this + 0x90) = *(int *)(this + 0x90) - iVar5;
  return;
}


