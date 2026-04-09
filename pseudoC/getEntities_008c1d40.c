// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getEntities
// Entry Point: 008c1d40
// Size: 468 bytes
// Signature: undefined __cdecl getEntities(Vector3 * param_1, float param_2, CullingResult * param_3, uint param_4)


/* CullingGrid2D::getEntities(Vector3 const&, float, CullingGrid2D::CullingResult*, unsigned int)
   const */

uint CullingGrid2D::getEntities(Vector3 *param_1,float param_2,CullingResult *param_3,uint param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  bool bVar3;
  uint in_w3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined4 *puVar12;
  float in_s1;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  if (uVar2 == 0) {
    return 0;
  }
  uVar4 = 0;
  uVar6 = 0;
  lVar5 = *(long *)param_1;
  do {
    lVar9 = lVar5 + (ulong)uVar6 * 0x48;
    fVar14 = *(float *)param_3;
    uVar7 = (ulong)uVar6;
    fVar13 = *(float *)(lVar9 + 0x30);
    fVar15 = *(float *)(lVar9 + 0x38);
    fVar16 = fVar13 + fVar15;
    bVar3 = fVar13 - fVar15 <= fVar14;
    if (bVar3 && fVar14 < fVar16 || bVar3 && fVar14 == fVar16) {
      lVar9 = lVar5 + uVar7 * 0x48;
      fVar16 = *(float *)(param_3 + 8);
      fVar15 = *(float *)(lVar9 + 0x34);
      fVar18 = *(float *)(lVar9 + 0x3c);
      fVar19 = fVar15 + fVar18;
      bVar3 = fVar16 < fVar15 - fVar18;
      if ((bVar3 || fVar19 <= fVar16) && (bVar3 || fVar16 != fVar19)) goto LAB_008c1d5c;
      uVar10 = 0;
      fVar13 = (float)NEON_fmadd(fVar13 - fVar14,fVar13 - fVar14,
                                 (fVar15 - fVar16) * (fVar15 - fVar16));
      do {
        fVar14 = (float)NEON_fmadd(param_2,*(undefined4 *)(param_1 + uVar10 * 4 + 0x34),
                                   *(undefined4 *)(lVar5 + uVar7 * 0x48 + 0x40));
        uVar8 = (uint)uVar10;
        if (fVar14 * fVar14 <= fVar13) {
          uVar8 = uVar8 + 1;
        }
        uVar10 = (ulong)uVar8;
      } while (fVar14 * fVar14 <= fVar13 && uVar8 < 2);
      do {
        uVar11 = (ulong)*(ushort *)(lVar5 + uVar7 * 0x48 + uVar10 * 0x10 + 8);
        if (uVar11 != 0) {
          puVar12 = (undefined4 *)(*(long *)(lVar5 + uVar7 * 0x48 + uVar10 * 0x10) + 0x18);
          do {
            fVar13 = (float)puVar12[-4] - *(float *)param_3;
            fVar14 = (float)puVar12[-3] - *(float *)(param_3 + 4);
            uVar17 = NEON_fmadd(fVar14,fVar14,fVar13 * fVar13);
            fVar13 = (float)puVar12[-2] - *(float *)(param_3 + 8);
            fVar13 = (float)NEON_fmadd(fVar13,fVar13,uVar17);
            if (fVar13 <= (float)puVar12[-1] * (float)puVar12[-1]) {
              fVar14 = (float)puVar12[5];
              fVar13 = in_s1;
              if (fVar14 < 0.0) {
                fVar13 = *(float *)param_3 - (float)puVar12[2];
                fVar15 = *(float *)(param_3 + 4) - (float)puVar12[3];
                fVar16 = (float)NEON_fnmsub(*puVar12,param_2,fVar14);
                uVar17 = NEON_fmadd(fVar15,fVar15,fVar13 * fVar13);
                fVar13 = *(float *)(param_3 + 8) - (float)puVar12[4];
                fVar13 = (float)NEON_fmadd(fVar13,fVar13,uVar17);
                if ((fVar16 * fVar16 <= fVar13) ||
                   ((fVar14 = (float)NEON_fmadd(puVar12[1],param_2,fVar14), 0.0 <= fVar14 &&
                    (fVar13 <= fVar14 * fVar14)))) goto LAB_008c1e30;
              }
              if (uVar4 < in_w3) {
                puVar1 = (undefined8 *)((ulong)param_4 + (ulong)uVar4 * 0x10);
                *puVar1 = *(undefined8 *)(puVar12 + -6);
                *(float *)(puVar1 + 1) = fVar13;
              }
              uVar4 = uVar4 + 1;
              in_s1 = fVar13;
            }
LAB_008c1e30:
            uVar11 = uVar11 - 1;
            puVar12 = puVar12 + 0xc;
          } while (uVar11 != 0);
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 != 3);
      uVar6 = uVar6 + 1;
    }
    else {
LAB_008c1d5c:
      uVar6 = *(uint *)(lVar5 + uVar7 * 0x48 + 0x44);
    }
    if (uVar2 <= uVar6) {
      return uVar4;
    }
  } while( true );
}


