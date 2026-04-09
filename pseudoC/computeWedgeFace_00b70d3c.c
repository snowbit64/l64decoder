// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: computeWedgeFace
// Entry Point: 00b70d3c
// Size: 280 bytes
// Signature: undefined __cdecl computeWedgeFace(uint param_1, float * param_2)


/* Brep::computeWedgeFace(unsigned int, float*) const */

void Brep::computeWedgeFace(uint param_1,float *param_2)

{
  int iVar1;
  float *in_x2;
  undefined8 *in_x8;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  
  iVar1 = (int)param_2;
  lVar5 = *(long *)((ulong)param_1 + 0x2f68);
  fVar10 = 1.0;
  lVar2 = *(long *)((ulong)param_1 + 0x2f98);
  fVar18 = *in_x2;
  fVar21 = in_x2[1];
  uVar3 = (ulong)*(ushort *)(lVar5 + (ulong)(iVar1 << 2 | 1) * 8 + 2);
  puVar8 = (undefined8 *)(lVar2 + uVar3 * 0x18);
  uVar4 = (ulong)*(ushort *)(lVar5 + (ulong)(iVar1 << 2 | 2) * 8 + 2);
  uVar6 = (ulong)*(ushort *)(lVar5 + (ulong)(iVar1 << 2 | 3) * 8 + 2);
  fVar11 = (1.0 - fVar18) - fVar21;
  puVar9 = (undefined8 *)(lVar2 + uVar4 * 0x18);
  puVar7 = (undefined8 *)(lVar2 + uVar6 * 0x18);
  uVar14 = *(undefined4 *)(puVar8 + 1);
  *in_x8 = *puVar8;
  *(undefined4 *)(in_x8 + 1) = uVar14;
  uVar16 = *puVar9;
  uVar17 = *puVar7;
  fVar12 = (float)*in_x8 * fVar11 + (float)uVar16 * fVar18 + (float)uVar17 * fVar21;
  fVar13 = (float)((ulong)*in_x8 >> 0x20) * fVar11 + (float)((ulong)uVar16 >> 0x20) * fVar18 +
           (float)((ulong)uVar17 >> 0x20) * fVar21;
  uVar14 = NEON_fmadd(*(undefined4 *)(puVar9 + 1),fVar18,fVar11 * *(float *)(in_x8 + 1));
  fVar15 = (float)NEON_fmadd(*(undefined4 *)(puVar7 + 1),fVar21,uVar14);
  fVar19 = (float)NEON_fmadd(fVar15,fVar15,fVar13 * fVar13 + fVar12 * fVar12);
  if (1e-06 < fVar19) {
    fVar10 = 1.0 / SQRT(fVar19);
  }
  *in_x8 = CONCAT44(fVar13 * fVar10,fVar12 * fVar10);
  *(float *)(in_x8 + 1) = fVar15 * fVar10;
  uVar17 = *(undefined8 *)(lVar2 + uVar3 * 0x18 + 0xc);
  uVar20 = *(undefined8 *)(lVar2 + uVar4 * 0x18 + 0xc);
  uVar16 = *(undefined8 *)(lVar2 + uVar6 * 0x18 + 0xc);
  *(ulong *)((long)in_x8 + 0xc) =
       CONCAT44((float)((ulong)uVar17 >> 0x20) * fVar11 + fVar18 * (float)((ulong)uVar20 >> 0x20) +
                fVar21 * (float)((ulong)uVar16 >> 0x20),
                (float)uVar17 * fVar11 + fVar18 * (float)uVar20 + fVar21 * (float)uVar16);
  return;
}


