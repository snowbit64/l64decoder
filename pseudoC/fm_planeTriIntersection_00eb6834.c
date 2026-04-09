// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_planeTriIntersection
// Entry Point: 00eb6834
// Size: 952 bytes
// Signature: undefined __cdecl fm_planeTriIntersection(float * param_1, float * param_2, uint param_3, float param_4, float * param_5, uint * param_6, float * param_7, uint * param_8)


/* FLOAT_MATH::fm_planeTriIntersection(float const*, float const*, unsigned int, float, float*,
   unsigned int&, float*, unsigned int&) */

void FLOAT_MATH::fm_planeTriIntersection
               (float *param_1,float *param_2,uint param_3,float param_4,float *param_5,
               uint *param_6,float *param_7,uint *param_8)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  float *pfVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  uint *puVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  float fVar20;
  uint uVar21;
  uint uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float local_2480;
  float fStack_247c;
  float local_2478;
  float fStack_2474;
  uint local_2470 [770];
  uint local_1868 [770];
  undefined4 local_c60;
  float local_c5c;
  float local_c58;
  float local_c54;
  undefined4 local_c50;
  float local_c4c;
  undefined4 local_c48;
  undefined4 local_c44;
  float local_c40;
  undefined4 local_c3c;
  long local_58;
  
  lVar12 = tpidr_el0;
  uVar18 = (ulong)param_3;
  local_58 = *(long *)(lVar12 + 0x28);
  puVar4 = (undefined4 *)((long)param_2 + uVar18);
  uVar19 = (ulong)(param_3 << 1);
  fVar29 = -param_4;
  puVar5 = (undefined4 *)((long)param_2 + uVar19);
  *param_6 = 0;
  *param_8 = 0;
  fVar20 = *param_2;
  fVar24 = *param_1;
  fVar23 = param_1[1];
  uVar27 = NEON_fmadd(fVar20,fVar24,param_2[1] * fVar23);
  fVar25 = param_1[2];
  fVar26 = param_1[3];
  fVar28 = (float)NEON_fmadd(param_2[2],fVar25,uVar27);
  uVar27 = NEON_fmadd(*puVar4,fVar24,fVar23 * (float)puVar4[1]);
  fVar28 = fVar28 + fVar26;
  fVar30 = (float)NEON_fmadd(puVar4[2],fVar25,uVar27);
  bVar14 = fVar29 <= fVar28;
  uVar27 = NEON_fmadd(*puVar5,fVar24,fVar23 * (float)puVar5[1]);
  fVar30 = fVar26 + fVar30;
  bVar1 = fVar28 <= param_4;
  uVar22 = 2;
  uVar17 = uVar22;
  if (0.0 < fVar28) {
    uVar17 = 1;
  }
  bVar15 = fVar29 <= fVar30;
  fVar28 = (float)NEON_fmadd(puVar5[2],fVar25,uVar27);
  fVar28 = fVar26 + fVar28;
  bVar2 = fVar30 <= param_4;
  if (0.0 < fVar30) {
    uVar22 = 1;
  }
  bVar16 = fVar29 <= fVar28;
  bVar3 = fVar28 <= param_4;
  uVar21 = 2;
  if (0.0 < fVar28) {
    uVar21 = 1;
  }
  uVar9 = uVar21;
  if (bVar16 && bVar3) {
    uVar9 = 0;
  }
  if (((bVar14 && bVar1) || (bVar15 && bVar2)) || (bVar16 && bVar3)) {
    uVar10 = uVar22;
    if (bVar15 && bVar2) {
      uVar10 = 0;
    }
    uVar11 = uVar17;
    if (bVar14 && bVar1) {
      uVar11 = 0;
    }
    if ((uVar10 | uVar11 | uVar9) == 0) {
      uVar22 = *param_6;
      uVar17 = 1;
LAB_00eb6b50:
      pfVar6 = (float *)((long)param_5 + (ulong)(uVar22 * param_3));
      puVar7 = (undefined4 *)((long)param_5 + (ulong)(param_3 + uVar22 * param_3));
      *pfVar6 = fVar20;
      pfVar6[1] = param_2[1];
      pfVar6[2] = param_2[2];
      *puVar7 = *puVar4;
      puVar7[1] = puVar4[1];
      puVar8 = (undefined4 *)((long)param_5 + (ulong)((uVar22 + 2) * param_3));
      puVar7[2] = puVar4[2];
      *puVar8 = *puVar5;
      puVar8[1] = puVar5[1];
      puVar8[2] = puVar5[2];
      *param_6 = uVar22 + 3;
      goto LAB_00eb6bb8;
    }
    uVar10 = uVar22;
    if (bVar15 && bVar2) {
      uVar10 = uVar9;
    }
    if (bVar14 && bVar1) {
      uVar17 = uVar10;
    }
    if (bVar15 && bVar2) {
      uVar22 = uVar17;
    }
    if (bVar16 && bVar3) {
      uVar21 = uVar17;
    }
    if (uVar17 == uVar22) goto LAB_00eb69a8;
  }
  else if (uVar17 == uVar22) {
LAB_00eb69a8:
    if (uVar17 == uVar21) {
      if (uVar17 != 1) {
        *param_7 = fVar20;
        param_7[1] = param_2[1];
        param_7[2] = param_2[2];
        puVar7 = (undefined4 *)((long)param_7 + uVar18);
        *puVar7 = *(undefined4 *)((long)param_2 + uVar18);
        puVar7[1] = puVar4[1];
        puVar8 = (undefined4 *)((long)param_7 + uVar19);
        puVar7[2] = puVar4[2];
        *puVar8 = *(undefined4 *)((long)param_2 + uVar19);
        puVar8[1] = puVar5[1];
        puVar8[2] = puVar5[2];
        *param_8 = 3;
        goto LAB_00eb6bb8;
      }
      uVar22 = *param_6;
      goto LAB_00eb6b50;
    }
  }
  local_c60 = 3;
  local_1868[0] = 0;
  local_2470[0] = 0;
  local_2480 = fVar24;
  fStack_247c = fVar23;
  local_2478 = fVar25;
  fStack_2474 = fVar26;
  local_c5c = fVar20;
  local_c58 = param_2[1];
  local_c54 = param_2[2];
  local_c50 = *puVar4;
  local_c4c = (float)puVar4[1];
  local_c48 = puVar4[2];
  local_c44 = *puVar5;
  local_c40 = (float)puVar5[1];
  local_c3c = puVar5[2];
  polygon<float>::Split_Polygon
            ((polygon<float> *)&local_c60,(polygon *)&local_c60,(plane *)&local_2480,
             (polygon *)local_1868,(polygon *)local_2470);
  uVar18 = (ulong)local_1868[0];
  uVar22 = *param_6;
  if (0 < (int)local_1868[0]) {
    uVar17 = uVar22 * param_3;
    puVar13 = local_1868;
    do {
      uVar19 = (ulong)uVar17;
      uVar21 = puVar13[3];
      uVar22 = uVar22 + 1;
      uVar18 = uVar18 - 1;
      uVar17 = uVar17 + param_3;
      *(undefined8 *)((long)param_5 + uVar19) = *(undefined8 *)(puVar13 + 1);
      *(uint *)((undefined8 *)((long)param_5 + uVar19) + 1) = uVar21;
      puVar13 = puVar13 + 3;
    } while (uVar18 != 0);
    *param_6 = uVar22;
  }
  uVar18 = (ulong)local_2470[0];
  uVar21 = *param_8;
  if (0 < (int)local_2470[0]) {
    uVar17 = uVar21 * param_3;
    puVar13 = local_2470;
    do {
      uVar19 = (ulong)uVar17;
      uVar22 = puVar13[3];
      uVar21 = uVar21 + 1;
      uVar18 = uVar18 - 1;
      uVar17 = uVar17 + param_3;
      *(undefined8 *)((long)param_7 + uVar19) = *(undefined8 *)(puVar13 + 1);
      *(uint *)((undefined8 *)((long)param_7 + uVar19) + 1) = uVar22;
      puVar13 = puVar13 + 3;
    } while (uVar18 != 0);
    *param_8 = uVar21;
    uVar22 = *param_6;
  }
  if (uVar22 < 3) {
    *param_6 = 0;
    uVar22 = 0;
    uVar21 = *param_8;
  }
  if (uVar21 < 3) {
    *param_8 = 0;
    uVar21 = 0;
    uVar22 = *param_6;
  }
  uVar17 = 2;
  if (uVar21 == 0 || uVar22 != 0) {
    uVar17 = 3;
  }
  if (uVar22 != 0 && uVar21 == 0) {
    uVar17 = 1;
  }
LAB_00eb6bb8:
  if (*(long *)(lVar12 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar17);
}


