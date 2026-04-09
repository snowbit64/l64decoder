// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: cookConvexMesh
// Entry Point: 00bac784
// Size: 1864 bytes
// Signature: undefined __cdecl cookConvexMesh(uint param_1, float * param_2, uint * param_3, btVector3 * * param_4, float * param_5, float * param_6, Vector3 * param_7, Vector3 * param_8)


/* Bt2PhysicsCookingUtil::cookConvexMesh(unsigned int, float*, unsigned int&, btVector3*&, float&,
   float&, Vector3&, Vector3*) */

void Bt2PhysicsCookingUtil::cookConvexMesh
               (uint param_1,float *param_2,uint *param_3,btVector3 **param_4,float *param_5,
               float *param_6,Vector3 *param_7,Vector3 *param_8)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  btVector3 *pbVar9;
  ulong uVar10;
  ulong uVar11;
  int *piVar12;
  ulong uVar13;
  int *piVar14;
  float *pfVar15;
  int *piVar16;
  uint uVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined4 uVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined4 uVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  btConvexHullComputer abStack_108 [4];
  ulong local_104;
  undefined8 *local_f8;
  char local_f0;
  undefined8 local_e4;
  void *local_d8;
  char local_d0;
  ulong local_c4;
  void *local_b8;
  char local_b0;
  long local_a8;
  
  lVar2 = tpidr_el0;
  local_a8 = *(long *)(lVar2 + 0x28);
  *param_3 = 0;
  if (0 < (int)param_1) {
    uVar6 = 0;
    uVar17 = 0;
    do {
      uVar3 = (int)uVar6 * 3;
      if ((int)uVar17 < 1) {
        fVar18 = param_2[uVar3];
        uVar11 = (ulong)(uVar3 + 1);
        uVar10 = (ulong)(uVar3 + 2);
      }
      else {
        uVar11 = (ulong)(uVar3 + 1);
        uVar10 = (ulong)(uVar3 + 2);
        fVar18 = param_2[uVar3];
        uVar13 = (ulong)uVar17;
        pfVar15 = param_2 + 2;
        do {
          uVar21 = NEON_fmadd(pfVar15[-2] - fVar18,pfVar15[-2] - fVar18,
                              (pfVar15[-1] - param_2[uVar11]) * (pfVar15[-1] - param_2[uVar11]));
          fVar22 = (float)NEON_fmadd(*pfVar15 - param_2[uVar10],*pfVar15 - param_2[uVar10],uVar21);
          if (fVar22 < 0.001) goto LAB_00bac840;
          uVar13 = uVar13 - 1;
          pfVar15 = pfVar15 + 3;
        } while (uVar13 != 0);
      }
      lVar8 = (long)(int)uVar17 + (long)(int)uVar17 * 2;
      param_2[(int)lVar8] = fVar18;
      param_2[lVar8 + 1] = param_2[uVar11];
      (param_2 + (int)lVar8)[2] = param_2[uVar10];
      uVar17 = uVar17 + 1;
LAB_00bac840:
      uVar6 = uVar6 + 1;
    } while (uVar6 != param_1);
  }
  local_f8 = (undefined8 *)0x0;
  local_d8 = (void *)0x0;
  local_f0 = '\x01';
  local_d0 = '\x01';
  local_104 = 0;
  local_e4 = 0;
  local_b0 = '\x01';
  local_b8 = (void *)0x0;
  local_c4 = 0;
                    /* try { // try from 00bac8dc to 00bac8ff has its CatchHandler @ 00bacedc */
  fVar32 = 0.0;
  btConvexHullComputer::compute(abStack_108,SUB81(param_2,0),0,0xc,0.0,0.0);
  fVar31 = 0.0;
  fVar27 = 0.0;
  fVar26 = 0.0;
  fVar25 = 0.0;
  fVar24 = 0.0;
  fVar22 = 0.0;
  fVar18 = 0.0;
  fVar23 = 0.0;
  fVar20 = 0.0;
  *param_6 = 0.0;
  if (0 < (int)local_c4) {
    fVar20 = 0.0;
    fVar23 = 0.0;
    fVar18 = 0.0;
    fVar22 = 0.0;
    fVar24 = 0.0;
    fVar25 = 0.0;
    fVar26 = 0.0;
    fVar27 = 0.0;
    fVar31 = 0.0;
    uVar6 = 0;
    do {
      piVar12 = (int *)((long)local_d8 + (long)*(int *)((long)local_b8 + uVar6 * 4) * 0xc);
      piVar16 = piVar12 + (long)piVar12[1] * 3;
      piVar14 = piVar16 + (long)*piVar16 * 3;
      if (piVar14 != piVar12) {
        puVar5 = local_f8 + (long)piVar16[2] * 2;
        fVar32 = *(float *)puVar5;
        fVar48 = *(float *)((long)puVar5 + 4);
        fVar38 = *(float *)(puVar5 + 1);
        do {
          piVar16 = piVar14 + (long)piVar14[1] * 3;
          puVar5 = local_f8 + (long)piVar14[3] * 2;
          fVar43 = *(float *)(puVar5 + 1);
          fVar46 = *(float *)puVar5;
          fVar42 = *(float *)((long)puVar5 + 4);
          puVar5 = local_f8 + (long)piVar16[2] * 2;
          fVar44 = *(float *)puVar5;
          fVar40 = *(float *)((long)puVar5 + 4);
          fVar39 = *(float *)(puVar5 + 1);
          uVar21 = NEON_fmadd(fVar32,fVar32,fVar32 * fVar44);
          uVar34 = NEON_fmadd(fVar44,fVar44,uVar21);
          fVar47 = (float)NEON_fmadd(fVar39 - fVar38,fVar46 - fVar32,
                                     (fVar43 - fVar38) * -(fVar44 - fVar32));
          fVar37 = (float)NEON_fmadd(fVar40 - fVar48,fVar43 - fVar38,
                                     (fVar42 - fVar48) * -(fVar39 - fVar38));
          fVar33 = (float)NEON_fmadd(fVar44 - fVar32,fVar42 - fVar48,
                                     (fVar46 - fVar32) * -(fVar40 - fVar48));
          uVar21 = NEON_fmadd(fVar48,fVar48,fVar48 * fVar40);
          uVar35 = NEON_fmadd(fVar32,fVar46,uVar34);
          uVar34 = NEON_fmadd(fVar40,fVar40,uVar21);
          uVar29 = NEON_fmadd(fVar32 + fVar32,fVar48,fVar48 * fVar44);
          uVar21 = NEON_fmadd(fVar32 + fVar32,fVar38,fVar38 * fVar44);
          uVar34 = NEON_fmadd(fVar48,fVar42,uVar34);
          uVar35 = NEON_fmadd(fVar44,fVar46,uVar35);
          uVar30 = NEON_fmadd(fVar46,fVar48,uVar29);
          uVar21 = NEON_fmadd(fVar46,fVar38,uVar21);
          uVar34 = NEON_fmadd(fVar40,fVar42,uVar34);
          uVar29 = NEON_fmadd(fVar48 + fVar48,fVar38,fVar38 * fVar40);
          uVar36 = NEON_fmadd(fVar46,fVar46,uVar35);
          uVar35 = NEON_fmadd(fVar32,fVar39,uVar21);
          uVar21 = NEON_fmadd(fVar42,fVar42,uVar34);
          uVar30 = NEON_fmadd(fVar32,fVar40,uVar30);
          uVar28 = NEON_fmadd(fVar42,fVar38,uVar29);
          uVar34 = NEON_fmadd(fVar48,fVar48,uVar36);
          uVar36 = NEON_fmadd(fVar38,fVar38,uVar36);
          uVar29 = NEON_fmadd(fVar38,fVar38,uVar21);
          uVar30 = NEON_fmadd(fVar44 + fVar44,fVar40,uVar30);
          uVar28 = NEON_fmadd(fVar48,fVar39,uVar28);
          uVar21 = NEON_fmadd(fVar44 + fVar44,fVar39,uVar35);
          uVar34 = NEON_fmadd(fVar48,fVar40,uVar34);
          uVar36 = NEON_fmadd(fVar38,fVar39,uVar36);
          fVar31 = fVar31 + fVar37 * ((fVar32 + fVar46) * (fVar32 + fVar46) +
                                     (fVar32 + fVar44) * (fVar32 + fVar44) +
                                     (fVar44 + fVar46) * (fVar44 + fVar46));
          uVar29 = NEON_fmadd(fVar38,fVar39,uVar29);
          uVar30 = NEON_fmadd(fVar46,fVar40,uVar30);
          uVar35 = NEON_fmadd(fVar40 + fVar40,fVar39,uVar28);
          uVar21 = NEON_fmadd(fVar46,fVar39,uVar21);
          uVar34 = NEON_fmadd(fVar40,fVar40,uVar34);
          uVar28 = NEON_fmadd(fVar39,fVar39,uVar36);
          uVar29 = NEON_fmadd(fVar39,fVar39,uVar29);
          uVar30 = NEON_fmadd(fVar32,fVar42,uVar30);
          uVar36 = NEON_fmadd(fVar32,fVar37,fVar48 * fVar47);
          uVar35 = NEON_fmadd(fVar42,fVar39,uVar35);
          uVar21 = NEON_fmadd(fVar32,fVar43,uVar21);
          uVar34 = NEON_fmadd(fVar48,fVar42,uVar34);
          uVar28 = NEON_fmadd(fVar38,fVar43,uVar28);
          uVar29 = NEON_fmadd(fVar38,fVar43,uVar29);
          uVar35 = NEON_fmadd(fVar48,fVar43,uVar35);
          fVar37 = (float)NEON_fmadd(fVar38,fVar33,uVar36);
          uVar30 = NEON_fmadd(fVar44,fVar42,uVar30);
          uVar45 = NEON_fmadd(fVar44,fVar43,uVar21);
          uVar28 = NEON_fmadd(fVar39,fVar43,uVar28);
          uVar36 = NEON_fmadd(fVar39,fVar43,uVar29);
          uVar29 = NEON_fmadd(fVar40,fVar43,uVar35);
          uVar41 = NEON_fmadd(fVar40,fVar42,uVar34);
          uVar21 = NEON_fmadd(fVar46 + fVar46,fVar42,uVar30);
          uVar30 = NEON_fmadd(fVar46 + fVar46,fVar43,uVar45);
          uVar34 = NEON_fmadd(fVar43,fVar43,uVar28);
          uVar35 = NEON_fmadd(fVar43,fVar43,uVar36);
          fVar27 = fVar27 + fVar47 * ((fVar48 + fVar42) * (fVar48 + fVar42) +
                                     (fVar48 + fVar40) * (fVar48 + fVar40) +
                                     (fVar40 + fVar42) * (fVar40 + fVar42));
          uVar28 = NEON_fmadd(fVar42 + fVar42,fVar43,uVar29);
          uVar29 = NEON_fmadd(fVar42,fVar42,uVar41);
          *param_6 = *param_6 + fVar37;
          fVar25 = (float)NEON_fmadd(fVar37,uVar21,fVar25);
          fVar24 = (float)NEON_fmadd(fVar37,uVar30,fVar24);
          fVar23 = (float)NEON_fmadd(fVar37,uVar34,fVar23);
          fVar20 = (float)NEON_fmadd(fVar37,uVar35,fVar20);
          fVar22 = (float)NEON_fmadd(fVar37,uVar28,fVar22);
          fVar18 = (float)NEON_fmadd(fVar37,uVar29,fVar18);
          fVar26 = fVar26 + fVar33 * ((fVar38 + fVar43) * (fVar38 + fVar43) +
                                     (fVar38 + fVar39) * (fVar38 + fVar39) +
                                     (fVar39 + fVar43) * (fVar39 + fVar43));
          piVar14 = piVar16 + (long)*piVar16 * 3;
        } while (piVar14 != piVar12);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != (local_c4 & 0xffffffff));
    fVar32 = *param_6 * 0.1666667;
  }
  *param_6 = fVar32;
  fVar32 = 1.0 / (fVar32 * 48.0);
  *(float *)(param_7 + 8) = fVar26 * fVar32;
  *(float *)param_7 = fVar31 * fVar32;
  *(float *)(param_7 + 4) = fVar27 * fVar32;
  fVar26 = 1.0 / (*param_6 * 60.0);
  fVar27 = -1.0 / (*param_6 * 120.0);
  *(float *)(param_8 + 0x20) = fVar18 * fVar26;
  *(float *)param_8 = fVar20 * fVar26;
  *(float *)(param_8 + 4) = fVar25 * fVar27;
  *(float *)(param_8 + 8) = fVar24 * fVar27;
  *(float *)(param_8 + 0xc) = fVar25 * fVar27;
  *(float *)(param_8 + 0x10) = fVar23 * fVar26;
  *(float *)(param_8 + 0x14) = fVar22 * fVar27;
  *(float *)(param_8 + 0x18) = fVar24 * fVar27;
  *(float *)(param_8 + 0x1c) = fVar22 * fVar27;
                    /* try { // try from 00baccd4 to 00bacd0f has its CatchHandler @ 00bacee0 */
  fVar18 = (float)btConvexHullComputer::compute(abStack_108,SUB81(param_2,0),0,0xc,0.04,0.2);
  removeDuplicatePlanes(abStack_108);
  iVar4 = (int)local_104;
  if (3 < (int)local_104) {
    uVar10 = 0;
    uVar17 = 0;
    uVar6 = 0;
    do {
      if (0 < (int)uVar17) {
        puVar1 = local_f8 + uVar6 * 2;
        uVar11 = (ulong)uVar17;
        puVar5 = local_f8 + 1;
        do {
          fVar22 = *(float *)((long)puVar5 + -4) - *(float *)((long)puVar1 + 4);
          uVar21 = NEON_fmadd(*(float *)(puVar5 + -1) - *(float *)puVar1,
                              *(float *)(puVar5 + -1) - *(float *)puVar1,fVar22 * fVar22);
          fVar22 = (float)NEON_fmadd(*(float *)puVar5 - *(float *)(puVar1 + 1),
                                     *(float *)puVar5 - *(float *)(puVar1 + 1),uVar21);
          if (fVar22 < 0.001) goto LAB_00bacd4c;
          uVar11 = uVar11 - 1;
          puVar5 = puVar5 + 2;
        } while (uVar11 != 0);
      }
      uVar19 = local_f8[uVar6 * 2];
      uVar10 = (ulong)(uVar17 + 1);
      (local_f8 + (long)(int)uVar17 * 2)[1] = (local_f8 + uVar6 * 2)[1];
      local_f8[(long)(int)uVar17 * 2] = uVar19;
      uVar17 = uVar17 + 1;
LAB_00bacd4c:
      uVar6 = uVar6 + 1;
    } while (uVar6 != (local_104 & 0xffffffff));
    uVar17 = (uint)uVar10;
    uVar6 = -(uVar10 >> 0x1f) & 0xfffffff000000000 | uVar10 << 4;
    *param_3 = uVar17;
    if ((ulong)(long)(int)uVar17 >> 0x3c != 0) {
      uVar6 = 0xffffffffffffffff;
    }
                    /* try { // try from 00bacdc4 to 00bacdcb has its CatchHandler @ 00baced8 */
    puVar5 = (undefined8 *)btAlignedAllocInternal(uVar6,0x10);
    *param_4 = (btVector3 *)puVar5;
    if (0 < (int)uVar17) {
      uVar19 = *local_f8;
      puVar5[1] = local_f8[1];
      *puVar5 = uVar19;
      if (uVar17 != 1) {
        lVar8 = 0x10;
        lVar7 = uVar10 - 1;
        do {
          lVar7 = lVar7 + -1;
          uVar19 = *(undefined8 *)((long)local_f8 + lVar8);
          pbVar9 = *param_4;
          *(undefined8 *)((long)(pbVar9 + lVar8) + 8) = ((undefined8 *)((long)local_f8 + lVar8))[1];
          *(undefined8 *)(pbVar9 + lVar8) = uVar19;
          lVar8 = lVar8 + 0x10;
        } while (lVar7 != 0);
      }
    }
    *param_5 = fVar18;
  }
  if ((local_b8 != (void *)0x0) && (local_b0 != '\0')) {
                    /* try { // try from 00bace38 to 00bace3b has its CatchHandler @ 00baced4 */
    btAlignedFreeInternal(local_b8);
  }
  local_b8 = (void *)0x0;
  local_c4 = 0;
  local_b0 = 1;
  if ((local_d8 != (void *)0x0) && (local_d0 != '\0')) {
                    /* try { // try from 00bace5c to 00bace5f has its CatchHandler @ 00baced0 */
    btAlignedFreeInternal(local_d8);
  }
  local_d0 = 1;
  local_d8 = (void *)0x0;
  local_e4 = 0;
  if ((local_f8 != (undefined8 *)0x0) && (local_f0 != '\0')) {
                    /* try { // try from 00bace7c to 00bace7f has its CatchHandler @ 00bacecc */
    btAlignedFreeInternal(local_f8);
  }
  if (*(long *)(lVar2 + 0x28) == local_a8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(3 < iVar4);
}


