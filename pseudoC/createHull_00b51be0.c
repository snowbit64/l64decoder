// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createHull
// Entry Point: 00b51be0
// Size: 864 bytes
// Signature: undefined __cdecl createHull(float * param_1, uint param_2, float * param_3)


/* ConvexHull2DUtil::createHull(float*, unsigned int, float*) */

ulong ConvexHull2DUtil::createHull(float *param_1,uint param_2,float *param_3)

{
  bool bVar1;
  float *pfVar2;
  uint uVar3;
  float *pfVar4;
  long lVar5;
  undefined8 *__s;
  float *__s_00;
  int iVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  int iVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  float *pfVar15;
  float *pfVar16;
  long lVar17;
  ulong uVar18;
  size_t __n;
  Point *pPVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  __less a_Stack_60 [8];
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  if (param_2 == 0) {
    __s = (undefined8 *)0x0;
    pPVar19 = (Point *)0x0;
LAB_00b51cd8:
    __s_00 = (float *)0x0;
  }
  else {
    uVar18 = (ulong)param_2 * 0xc;
    __s = (undefined8 *)operator_new(uVar18);
    __n = ((uVar18 - 0xc) / 0xc) * 0xc + 0xc;
    memset(__s,0,__n);
    uVar18 = 0;
    pPVar19 = (Point *)((long)__s + __n);
    puVar13 = __s;
    do {
      uVar9 = uVar18 & 0xfffffffe;
      uVar18 = uVar18 + 2;
      *puVar13 = *(undefined8 *)(param_1 + uVar9);
      puVar13 = (undefined8 *)((long)puVar13 + 0xc);
    } while ((ulong)param_2 * 2 - uVar18 != 0);
    if (param_2 << 1 == 0) goto LAB_00b51cd8;
    uVar18 = (ulong)(param_2 << 1) * 0xc;
                    /* try { // try from 00b51c98 to 00b51c9f has its CatchHandler @ 00b51f40 */
    __s_00 = (float *)operator_new(uVar18);
    memset(__s_00,0,((uVar18 - 0xc) / 0xc) * 0xc + 0xc);
  }
                    /* try { // try from 00b51cdc to 00b51ceb has its CatchHandler @ 00b51f48 */
  std::__ndk1::
  __sort<std::__ndk1::__less<ConvexHull2DUtil::Point,ConvexHull2DUtil::Point>&,ConvexHull2DUtil::Point*>
            ((Point *)__s,pPVar19,a_Stack_60);
  if ((int)param_2 < 1) {
    uVar18 = 0xffffffff;
    if (__s_00 == (float *)0x0) goto joined_r0x00b51e68;
  }
  else {
    uVar18 = 0;
    iVar6 = 0;
    do {
      pfVar15 = (float *)((long)__s + uVar18 * 0xc);
      pfVar16 = __s_00 + (ulong)(iVar6 - 1) * 3 + 1;
      iVar12 = iVar6;
      if (0 < iVar6) {
        iVar12 = 1;
      }
      do {
        iVar7 = iVar12;
        if (iVar6 < 2) break;
        pfVar2 = pfVar16 + -1;
        fVar21 = *pfVar16;
        pfVar16 = pfVar16 + -3;
        fVar26 = __s_00[(ulong)(iVar6 - 2) * 3];
        fVar20 = (__s_00 + (ulong)(iVar6 - 2) * 3)[1];
        fVar20 = (float)NEON_fmadd(*pfVar2 - fVar26,pfVar15[1] - fVar20,
                                   (*pfVar15 - fVar26) * -(fVar21 - fVar20));
        iVar7 = iVar6;
        iVar6 = iVar6 + -1;
      } while (fVar20 <= 0.0);
      puVar13 = (undefined8 *)((long)__s + uVar18 * 0xc);
      uVar18 = uVar18 + 1;
      iVar6 = iVar7 + 1;
      uVar14 = *puVar13;
      *(float *)((long)(__s_00 + (long)iVar7 * 3) + 8) = *(float *)(puVar13 + 1);
      *(undefined8 *)(__s_00 + (long)iVar7 * 3) = uVar14;
    } while (uVar18 != param_2);
    iVar12 = iVar6;
    if (1 < (int)param_2) {
      uVar18 = (ulong)(param_2 - 2);
      do {
        pfVar16 = (float *)((long)__s + uVar18 * 0xc);
        pfVar15 = __s_00 + (long)iVar12 * 3 + -3;
        lVar17 = (long)iVar12;
        iVar7 = iVar12;
        if (iVar6 <= iVar12) {
          iVar7 = iVar6;
        }
        iVar12 = iVar12 + 1;
        do {
          iVar11 = iVar7;
          if (lVar17 <= iVar6) break;
          fVar20 = *pfVar15;
          pfVar4 = pfVar15 + 1;
          pfVar2 = pfVar15 + -2;
          lVar17 = lVar17 + -1;
          iVar11 = iVar12 + -1;
          pfVar15 = pfVar15 + -3;
          fVar20 = (float)NEON_fmadd(fVar20 - *pfVar15,pfVar16[1] - *pfVar2,
                                     (*pfVar16 - *pfVar15) * -(*pfVar4 - *pfVar2));
          iVar12 = iVar11;
        } while (fVar20 <= 0.0);
        puVar13 = (undefined8 *)((long)__s + uVar18 * 0xc);
        iVar12 = iVar11 + 1;
        uVar14 = *puVar13;
        *(float *)((long)(__s_00 + (long)iVar11 * 3) + 8) = *(float *)(puVar13 + 1);
        *(undefined8 *)(__s_00 + (long)iVar11 * 3) = uVar14;
        bVar1 = 0 < (long)uVar18;
        uVar18 = uVar18 - 1;
      } while (bVar1);
    }
    uVar3 = iVar12 - 1;
    uVar18 = (ulong)uVar3;
    if (1 < iVar12) {
      if (uVar3 < 9) {
        lVar8 = 0;
      }
      else {
        uVar9 = 8;
        if ((uVar3 & 7) != 0) {
          uVar9 = uVar18 & 7;
        }
        pfVar15 = param_3 + 8;
        lVar8 = uVar18 - uVar9;
        lVar17 = lVar8;
        pfVar16 = __s_00;
        do {
          fVar22 = pfVar16[1];
          fVar20 = pfVar16[3];
          fVar23 = pfVar16[4];
          fVar21 = pfVar16[6];
          fVar24 = pfVar16[7];
          fVar26 = pfVar16[9];
          fVar25 = pfVar16[10];
          lVar17 = lVar17 + -8;
          pfVar15[-8] = *pfVar16;
          pfVar15[-7] = fVar22;
          pfVar15[-6] = fVar20;
          pfVar15[-5] = fVar23;
          pfVar15[-4] = fVar21;
          pfVar15[-3] = fVar24;
          pfVar15[-2] = fVar26;
          pfVar15[-1] = fVar25;
          fVar22 = pfVar16[0xd];
          fVar20 = pfVar16[0xf];
          fVar23 = pfVar16[0x10];
          fVar21 = pfVar16[0x12];
          fVar24 = pfVar16[0x13];
          fVar26 = pfVar16[0x15];
          fVar25 = pfVar16[0x16];
          *pfVar15 = pfVar16[0xc];
          pfVar15[1] = fVar22;
          pfVar15[2] = fVar20;
          pfVar15[3] = fVar23;
          pfVar15[4] = fVar21;
          pfVar15[5] = fVar24;
          pfVar15[6] = fVar26;
          pfVar15[7] = fVar25;
          pfVar15 = pfVar15 + 0x10;
          pfVar16 = pfVar16 + 0x18;
        } while (lVar17 != 0);
      }
      lVar17 = uVar18 - lVar8;
      puVar13 = (undefined8 *)(__s_00 + lVar8 * 3);
      puVar10 = (undefined8 *)(param_3 + lVar8 * 2);
      do {
        lVar17 = lVar17 + -1;
        *puVar10 = *puVar13;
        puVar13 = (undefined8 *)((long)puVar13 + 0xc);
        puVar10 = puVar10 + 1;
      } while (lVar17 != 0);
    }
  }
  operator_delete(__s_00);
joined_r0x00b51e68:
  if (__s != (undefined8 *)0x0) {
    operator_delete(__s);
  }
  if (*(long *)(lVar5 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar18;
}


