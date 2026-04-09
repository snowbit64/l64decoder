// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateVertexBufferPositions
// Entry Point: 00927f80
// Size: 544 bytes
// Signature: undefined __thiscall updateVertexBufferPositions(DestructionGeometry * this, uint param_1)


/* DestructionGeometry::updateVertexBufferPositions(unsigned int) */

void __thiscall
DestructionGeometry::updateVertexBufferPositions(DestructionGeometry *this,uint param_1)

{
  float *pfVar1;
  uchar *puVar2;
  uchar *puVar3;
  undefined4 *puVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined4 uVar16;
  float fVar17;
  uint local_74;
  uint local_70;
  uint local_6c;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  uVar14 = (ulong)param_1;
  DestructionGeometryShared::getChunk(*(DestructionGeometryShared **)(this + 0x70),param_1);
  lVar15 = *(long *)(this + 0xd8);
  plVar10 = (long *)DestructionGeometryShared::getVertexDeclaration();
  uVar7 = (**(code **)(*plVar10 + 0x10))(plVar10,0);
  iVar8 = DestructionChunk::getFirstVertex();
  iVar5 = *(int *)(lVar15 + uVar14 * 0x94 + 8);
  lVar11 = DestructionGeometryShared::getVertices();
  DestructionGeometryShared::getVertexAttributeByteOffsets
            (*(DestructionGeometryShared **)(this + 0x70),&local_6c,&local_70,&local_74);
  uVar9 = DestructionChunk::getNumVertices();
  if (local_6c == 0) {
    uVar12 = (ulong)((iVar5 + iVar8) * uVar7);
    puVar2 = (uchar *)(lVar11 + (ulong)(iVar8 * uVar7));
    lVar11 = *(long *)(this + 0xa0);
    if (local_70 == 0xc) {
      puVar3 = (uchar *)(lVar11 + uVar12);
      pfVar1 = (float *)(lVar15 + uVar14 * 0x94 + 0x10);
      if (local_74 == 0x20) {
        fastVertexTransformPNT(pfVar1,puVar2,puVar3,uVar9,uVar7);
      }
      else {
        fastVertexTransformPN(pfVar1,puVar2,puVar3,uVar9,uVar7);
      }
    }
    else if (uVar9 != 0) {
      lVar13 = 0;
      lVar15 = lVar15 + uVar14 * 0x94;
      do {
        puVar4 = (undefined4 *)(puVar2 + lVar13);
        pfVar1 = (float *)(uVar12 + lVar11 + 8 + lVar13);
        uVar9 = uVar9 - 1;
        lVar13 = lVar13 + (ulong)uVar7;
        uVar16 = NEON_fmadd(*puVar4,*(undefined4 *)(lVar15 + 0x10),
                            (float)puVar4[1] * *(float *)(lVar15 + 0x20));
        fVar17 = (float)NEON_fmadd(puVar4[2],*(undefined4 *)(lVar15 + 0x30),uVar16);
        pfVar1[-2] = fVar17 + *(float *)(lVar15 + 0x40);
        uVar16 = NEON_fmadd(*puVar4,*(undefined4 *)(lVar15 + 0x14),
                            (float)puVar4[1] * *(float *)(lVar15 + 0x24));
        fVar17 = (float)NEON_fmadd(puVar4[2],*(undefined4 *)(lVar15 + 0x34),uVar16);
        pfVar1[-1] = fVar17 + *(float *)(lVar15 + 0x44);
        uVar16 = NEON_fmadd(*puVar4,*(undefined4 *)(lVar15 + 0x18),
                            (float)puVar4[1] * *(float *)(lVar15 + 0x28));
        fVar17 = (float)NEON_fmadd(puVar4[2],*(undefined4 *)(lVar15 + 0x38),uVar16);
        *pfVar1 = fVar17 + *(float *)(lVar15 + 0x48);
      } while (uVar9 != 0);
    }
  }
  if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


