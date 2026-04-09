// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: classifyFace
// Entry Point: 00b66f28
// Size: 240 bytes
// Signature: undefined __thiscall classifyFace(Brep * this, uint param_1, BrepPlane * param_2)


/* Brep::classifyFace(unsigned int, BrepPlane const&) const */

byte __thiscall Brep::classifyFace(Brep *this,uint param_1,BrepPlane *param_2)

{
  long lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  lVar8 = *(long *)(this + 0x2f50);
  lVar9 = *(long *)(this + 0x2ef0);
  lVar1 = *(long *)(this + 0x2f68) + (ulong)(param_1 << 2) * 8;
  fVar17 = *(float *)(param_2 + 0x10);
  uVar13 = *(undefined4 *)param_2;
  fVar10 = *(float *)(param_2 + 4);
  uVar15 = *(undefined4 *)(param_2 + 8);
  fVar16 = *(float *)(param_2 + 0xc);
  fVar18 = -fVar17;
  puVar2 = (undefined4 *)
           (lVar9 + (ulong)*(ushort *)(lVar8 + (ulong)*(ushort *)(lVar1 + 8) * 0xc) * 0x10);
  puVar3 = (undefined4 *)
           (lVar9 + (ulong)*(ushort *)(lVar8 + (ulong)*(ushort *)(lVar1 + 0x10) * 0xc) * 0x10);
  puVar4 = (undefined4 *)
           (lVar9 + (ulong)*(ushort *)(lVar8 + (ulong)*(ushort *)(lVar1 + 0x18) * 0xc) * 0x10);
  uVar11 = NEON_fmadd(uVar13,*puVar2,fVar10 * (float)puVar2[1]);
  fVar12 = (float)NEON_fmadd(uVar15,puVar2[2],uVar11);
  uVar11 = NEON_fmadd(uVar13,*puVar3,fVar10 * (float)puVar3[1]);
  fVar12 = fVar12 + fVar16;
  fVar14 = (float)NEON_fmadd(uVar15,puVar3[2],uVar11);
  fVar14 = fVar14 + fVar16;
  uVar11 = NEON_fmadd(uVar13,*puVar4,fVar10 * (float)puVar4[1]);
  bVar5 = 2;
  if (fVar12 <= fVar17 || fVar12 < fVar18) {
    bVar5 = fVar12 < fVar18;
  }
  fVar10 = (float)NEON_fmadd(uVar15,puVar4[2],uVar11);
  fVar10 = fVar10 + fVar16;
  bVar6 = 2;
  if (fVar14 <= fVar17 || fVar14 < fVar18) {
    bVar6 = fVar14 < fVar18;
  }
  bVar7 = 2;
  if (fVar10 <= fVar17 || fVar10 < fVar18) {
    bVar7 = fVar10 < fVar18;
  }
  return bVar7 | bVar6 | bVar5;
}


