// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createHull
// Entry Point: 00b51840
// Size: 868 bytes
// Signature: undefined __cdecl createHull(uchar * param_1, uint param_2, uint param_3, vector * param_4)


/* ConvexHull2DUtil::createHull(unsigned char const*, unsigned int, unsigned int,
   std::__ndk1::vector<unsigned int, std::__ndk1::allocator<unsigned int> >&) */

void ConvexHull2DUtil::createHull(uchar *param_1,uint param_2,uint param_3,vector *param_4)

{
  bool bVar1;
  float *pfVar2;
  long lVar3;
  Point *__s;
  void *__s_00;
  float *pfVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  undefined8 *puVar10;
  float *pfVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  undefined8 *puVar15;
  long lVar16;
  ulong uVar17;
  size_t __n;
  Point *pPVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  __less a_Stack_60 [8];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  if (param_3 == 0) {
    __s = (Point *)0x0;
    pPVar18 = (Point *)0x0;
  }
  else {
    uVar17 = (ulong)param_3 * 0xc;
    __s = (Point *)operator_new(uVar17);
    __n = ((uVar17 - 0xc) / 0xc) * 0xc + 0xc;
    memset(__s,0,__n);
    uVar5 = 0;
    uVar17 = 0;
    pPVar18 = __s + __n;
    puVar12 = (undefined4 *)(__s + 8);
    do {
      uVar20 = *(undefined8 *)(param_1 + uVar5);
      *puVar12 = (int)uVar17;
      uVar17 = uVar17 + 1;
      uVar5 = uVar5 + param_2;
      *(undefined8 *)(puVar12 + -2) = uVar20;
      puVar12 = puVar12 + 3;
    } while (param_3 != uVar17);
    uVar17 = (ulong)(param_3 << 1);
    if (param_3 << 1 != 0) {
                    /* try { // try from 00b51900 to 00b51907 has its CatchHandler @ 00b51ba4 */
      __s_00 = operator_new(uVar17 * 0xc);
      memset(__s_00,0,((uVar17 * 0xc - 0xc) / 0xc) * 0xc + 0xc);
      goto LAB_00b51950;
    }
  }
  uVar17 = 0;
  __s_00 = (void *)0x0;
LAB_00b51950:
  uVar9 = *(long *)(param_4 + 8) - *(long *)param_4 >> 2;
  if (uVar17 < uVar9 || uVar17 - uVar9 == 0) {
    if (uVar17 < uVar9) {
      *(ulong *)(param_4 + 8) = *(long *)param_4 + uVar17 * 4;
    }
  }
  else {
                    /* try { // try from 00b51964 to 00b5198b has its CatchHandler @ 00b51bb0 */
    std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>::__append
              ((vector<unsigned_int,std::__ndk1::allocator<unsigned_int>> *)param_4,uVar17 - uVar9);
  }
  std::__ndk1::
  __sort<std::__ndk1::__less<ConvexHull2DUtil::Point,ConvexHull2DUtil::Point>&,ConvexHull2DUtil::Point*>
            (__s,pPVar18,a_Stack_60);
  lVar6 = *(long *)param_4;
  if ((int)param_3 < 1) {
    iVar8 = 0;
  }
  else {
    uVar17 = 0;
    iVar7 = 0;
    do {
      pfVar4 = (float *)((long)__s_00 + (ulong)(iVar7 - 1) * 0xc + 4);
      iVar8 = iVar7;
      if (0 < iVar7) {
        iVar8 = 1;
      }
      do {
        iVar13 = iVar8;
        if (iVar7 < 2) break;
        pfVar2 = pfVar4 + -1;
        fVar21 = *pfVar4;
        pfVar11 = (float *)((long)__s_00 + (ulong)(iVar7 - 2) * 0xc);
        pfVar4 = pfVar4 + -3;
        fVar22 = *pfVar11;
        fVar19 = pfVar11[1];
        fVar19 = (float)NEON_fmadd(*pfVar2 - fVar22,
                                   *(float *)((long)(__s + uVar17 * 0xc) + 4) - fVar19,
                                   (*(float *)(__s + uVar17 * 0xc) - fVar22) * -(fVar21 - fVar19));
        iVar13 = iVar7;
        iVar7 = iVar7 + -1;
      } while (fVar19 <= 0.0);
      puVar10 = (undefined8 *)(__s + uVar17 * 0xc);
      uVar17 = uVar17 + 1;
      puVar15 = (undefined8 *)((long)__s_00 + (long)iVar13 * 0xc);
      uVar20 = *puVar10;
      *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar10 + 1);
      *puVar15 = uVar20;
      iVar7 = iVar13 + 1;
      *(undefined4 *)(lVar6 + (long)iVar13 * 4) = *(undefined4 *)(puVar10 + 1);
    } while (uVar17 != param_3);
    lVar6 = *(long *)param_4;
    iVar8 = iVar7;
    if (1 < (int)param_3) {
      uVar17 = (ulong)(param_3 - 2);
      do {
        pfVar4 = (float *)((long)__s_00 + (long)iVar8 * 0xc + -0xc);
        lVar16 = (long)iVar8;
        iVar13 = iVar8;
        if (iVar7 <= iVar8) {
          iVar13 = iVar7;
        }
        iVar8 = iVar8 + 1;
        do {
          iVar14 = iVar13;
          if (lVar16 <= iVar7) break;
          fVar19 = *pfVar4;
          pfVar11 = pfVar4 + 1;
          pfVar2 = pfVar4 + -2;
          lVar16 = lVar16 + -1;
          iVar14 = iVar8 + -1;
          pfVar4 = pfVar4 + -3;
          fVar19 = (float)NEON_fmadd(fVar19 - *pfVar4,
                                     *(float *)((long)(__s + uVar17 * 0xc) + 4) - *pfVar2,
                                     (*(float *)(__s + uVar17 * 0xc) - *pfVar4) *
                                     -(*pfVar11 - *pfVar2));
          iVar8 = iVar14;
        } while (fVar19 <= 0.0);
        puVar10 = (undefined8 *)(__s + uVar17 * 0xc);
        puVar15 = (undefined8 *)((long)__s_00 + (long)iVar14 * 0xc);
        iVar8 = iVar14 + 1;
        uVar20 = *puVar10;
        *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar10 + 1);
        *puVar15 = uVar20;
        *(undefined4 *)(lVar6 + (long)iVar14 * 4) = *(undefined4 *)(puVar10 + 1);
        bVar1 = 0 < (long)uVar17;
        uVar17 = uVar17 - 1;
      } while (bVar1);
    }
  }
  uVar17 = (ulong)(iVar8 + -1);
  uVar9 = *(long *)(param_4 + 8) - lVar6 >> 2;
  if (uVar9 < uVar17) {
                    /* try { // try from 00b51b44 to 00b51b4b has its CatchHandler @ 00b51bac */
    std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>::__append
              ((vector<unsigned_int,std::__ndk1::allocator<unsigned_int>> *)param_4,uVar17 - uVar9);
  }
  else if (uVar17 < uVar9) {
    *(ulong *)(param_4 + 8) = lVar6 + uVar17 * 4;
  }
  if (__s_00 != (void *)0x0) {
    operator_delete(__s_00);
  }
  if (__s != (Point *)0x0) {
    operator_delete(__s);
  }
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


