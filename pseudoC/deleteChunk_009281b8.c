// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deleteChunk
// Entry Point: 009281b8
// Size: 348 bytes
// Signature: undefined __cdecl deleteChunk(uint param_1, GsShape * param_2)


/* DestructionGeometry::deleteChunk(unsigned int, GsShape*) */

void DestructionGeometry::deleteChunk(uint param_1,GsShape *param_2)

{
  void *__dest;
  uint uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  DestructionGeometry *this;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  uint *puVar10;
  
  this = (DestructionGeometry *)(ulong)param_1;
  uVar8 = (ulong)param_2 & 0xffffffff;
  DestructionGeometryShared::getChunk(*(DestructionGeometryShared **)(this + 0x70),(uint)param_2);
  lVar9 = *(long *)(this + 0xd8);
  iVar5 = *(int *)(lVar9 + uVar8 * 0x94 + 0xc);
  if (iVar5 == 2) {
    iVar5 = *(int *)(this + 0xcc);
    iVar4 = DestructionChunk::getNumIndices();
    puVar10 = (uint *)(lVar9 + uVar8 * 0x94 + 4);
    uVar1 = *puVar10;
    uVar2 = iVar5 - (iVar4 + uVar1);
    if (uVar2 != 0) {
      __dest = (void *)(*(long *)(this + 0xa8) + (ulong)uVar1 * 2);
      uVar6 = DestructionChunk::getNumIndices();
      memmove(__dest,(void *)((long)__dest + (uVar6 & 0xffffffff) * 2),(ulong)uVar2 << 1);
      iVar5 = DestructionGeometryShared::getNumChunks();
      if (iVar5 != 0) {
        lVar9 = 0;
        uVar6 = 0;
        do {
          bVar3 = true;
          if (*(int *)(*(long *)(this + 0xd8) + lVar9 + 0xc) == 2) {
            bVar3 = uVar8 * 0x94 - lVar9 == 0;
          }
          if ((!bVar3) && (*puVar10 < *(uint *)(*(long *)(this + 0xd8) + lVar9 + 4))) {
            iVar5 = DestructionChunk::getNumIndices();
            *(int *)(*(long *)(this + 0xd8) + lVar9 + 4) =
                 *(int *)(*(long *)(this + 0xd8) + lVar9 + 4) - iVar5;
          }
          uVar6 = uVar6 + 1;
          uVar7 = DestructionGeometryShared::getNumChunks();
          lVar9 = lVar9 + 0x94;
        } while (uVar6 < (uVar7 & 0xffffffff));
      }
      this[0xd0] = (DestructionGeometry)0x1;
    }
    iVar5 = DestructionChunk::getNumIndices();
    *(int *)(this + 0xcc) = *(int *)(this + 0xcc) - iVar5;
  }
  else if ((iVar5 == 1) &&
          (removeChunkFromStartIndexBuffer(this,(uint)param_2),
          this[0x78] == (DestructionGeometry)0x0)) {
    this[0x78] = (DestructionGeometry)0x1;
  }
  return;
}


