// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyClusters
// Entry Point: 00f88014
// Size: 1020 bytes
// Signature: undefined __thiscall applyClusters(btSoftBody * this, bool param_1)


/* btSoftBody::applyClusters(bool) */

void __thiscall btSoftBody::applyClusters(btSoftBody *this,bool param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  undefined *puVar4;
  uint uVar5;
  long *plVar6;
  void *__s;
  float *__s_00;
  float *pfVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  undefined4 *puVar12;
  long *plVar13;
  undefined4 *puVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  size_t __n;
  ulong uVar20;
  long lVar21;
  float fVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined4 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  timeval local_78;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  plVar6 = (long *)CProfileManager::Start_Profile("ApplyClusters");
  uVar5 = *(uint *)(this + 0x374);
  uVar20 = (ulong)uVar5;
  if ((int)uVar5 < 1) {
    __s = (void *)0x0;
LAB_00f880e8:
    __s_00 = (float *)0x0;
    uVar11 = (ulong)*(uint *)(this + 0x5dc);
    if (!param_1) goto LAB_00f88160;
LAB_00f880f4:
    if (0 < (int)uVar11) {
      plVar13 = *(long **)(this + 0x5e8);
      uVar15 = uVar11;
      do {
        lVar16 = *plVar13;
        if (*(int *)(lVar16 + 0x15c) != 0) {
          fVar22 = 1.0 / (float)*(int *)(lVar16 + 0x15c);
          *(ulong *)(lVar16 + 0x138) =
               CONCAT44((float)((ulong)*(undefined8 *)(lVar16 + 0x138) >> 0x20) * fVar22,
                        (float)*(undefined8 *)(lVar16 + 0x138) * fVar22);
          *(float *)(lVar16 + 0x140) = *(float *)(lVar16 + 0x140) * fVar22;
          *(ulong *)(lVar16 + 0x148) =
               CONCAT44((float)((ulong)*(undefined8 *)(lVar16 + 0x148) >> 0x20) * fVar22,
                        (float)*(undefined8 *)(lVar16 + 0x148) * fVar22);
          *(float *)(lVar16 + 0x150) = *(float *)(lVar16 + 0x150) * fVar22;
        }
        uVar15 = uVar15 - 1;
        plVar13 = plVar13 + 1;
      } while (uVar15 != 0);
      goto LAB_00f88160;
    }
  }
  else {
    gNumAlignedAllocs = gNumAlignedAllocs + 1;
    __s = (void *)(*(code *)PTR_FUN_01048e38)(uVar20 << 4,0x10);
    plVar6 = (long *)memset(__s,0,uVar20 << 4);
    if ((int)*(uint *)(this + 0x374) < 1) goto LAB_00f880e8;
    __n = (ulong)*(uint *)(this + 0x374) << 2;
    gNumAlignedAllocs = gNumAlignedAllocs + 1;
    __s_00 = (float *)(*(code *)PTR_FUN_01048e38)(__n,0x10);
    plVar6 = (long *)memset(__s_00,0,__n);
    uVar11 = (ulong)*(uint *)(this + 0x5dc);
    if (param_1) goto LAB_00f880f4;
LAB_00f88160:
    if (0 < (int)uVar11) {
      uVar15 = 0;
      lVar16 = *(long *)(this + 0x5e8);
      do {
        lVar17 = *(long *)(lVar16 + uVar15 * 8);
        lVar19 = 0x15c;
        if (!param_1) {
          lVar19 = 0x158;
        }
        if (0 < *(int *)(lVar17 + lVar19)) {
          uVar18 = (ulong)*(uint *)(lVar17 + 0x24);
          puVar1 = (undefined8 *)(lVar17 + 0x148);
          plVar6 = (long *)(lVar17 + 0x138);
          if (!param_1) {
            puVar1 = (undefined8 *)(lVar17 + 0x128);
            plVar6 = (long *)(lVar17 + 0x118);
          }
          if (0 < (int)*(uint *)(lVar17 + 0x24)) {
            fVar25 = *(float *)(this + 0x240);
            lVar21 = *plVar6;
            uVar23 = NEON_rev64(*puVar1,4);
            fVar26 = *(float *)(plVar6 + 1);
            fVar30 = *(float *)(puVar1 + 1);
            lVar19 = *(long *)(this + 0x380);
            fVar22 = (float)uVar23 * fVar25;
            fVar24 = (float)((ulong)uVar23 >> 0x20) * fVar25;
            plVar13 = *(long **)(lVar17 + 0x30);
            pfVar7 = *(float **)(lVar17 + 0x10);
            do {
              plVar6 = plVar13 + 1;
              lVar8 = *plVar13;
              uVar18 = uVar18 - 1;
              fVar32 = *pfVar7;
              fVar27 = (float)*(undefined8 *)(lVar8 + 0x10) - (float)*(undefined8 *)(lVar17 + 0x108)
              ;
              fVar29 = (float)((ulong)*(undefined8 *)(lVar8 + 0x10) >> 0x20) -
                       (float)((ulong)*(undefined8 *)(lVar17 + 0x108) >> 0x20);
              uVar2 = (int)((ulong)(lVar8 - lVar19) >> 3) * -0x11111111;
              fVar31 = *(float *)(lVar8 + 0x18) - *(float *)(lVar17 + 0x110);
              puVar1 = (undefined8 *)((long)__s + ((long)((ulong)uVar2 << 0x20) >> 0x1c));
              uVar9 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2;
              uVar23 = NEON_rev64(CONCAT44(fVar29 * fVar30 * fVar25,fVar27 * fVar30 * fVar25),4);
              uVar28 = NEON_fmadd((fVar26 * fVar25 - fVar27 * fVar22) + fVar29 * fVar24,fVar32,
                                  *(undefined4 *)(puVar1 + 1));
              *puVar1 = CONCAT44((float)((ulong)*puVar1 >> 0x20) +
                                 (((float)((ulong)lVar21 >> 0x20) * fVar25 +
                                  (float)((ulong)uVar23 >> 0x20)) - fVar24 * fVar31) * fVar32,
                                 (float)*puVar1 +
                                 (((float)lVar21 * fVar25 - (float)uVar23) + fVar22 * fVar31) *
                                 fVar32);
              *(undefined4 *)(puVar1 + 1) = uVar28;
              *(float *)((long)__s_00 + uVar9) = *(float *)((long)__s_00 + uVar9) + fVar32;
              plVar13 = plVar6;
              pfVar7 = pfVar7 + 1;
            } while (uVar18 != 0);
          }
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 != uVar11);
    }
  }
  if ((int)uVar5 < 1) {
    if (__s_00 == (float *)0x0) goto LAB_00f88334;
  }
  else {
    puVar12 = (undefined4 *)((long)__s + 8);
    puVar14 = (undefined4 *)(*(long *)(this + 0x380) + 0x18);
    pfVar7 = __s_00;
    do {
      if (0.0 < *pfVar7) {
        fVar22 = 1.0 / *pfVar7;
        uVar28 = NEON_fmadd(*puVar12,fVar22,*puVar14);
        *(ulong *)(puVar14 + -2) =
             CONCAT44((float)((ulong)*(undefined8 *)(puVar14 + -2) >> 0x20) +
                      (float)((ulong)*(undefined8 *)(puVar12 + -2) >> 0x20) * fVar22,
                      (float)*(undefined8 *)(puVar14 + -2) +
                      (float)*(undefined8 *)(puVar12 + -2) * fVar22);
        *puVar14 = uVar28;
      }
      uVar20 = uVar20 - 1;
      puVar14 = puVar14 + 0x1e;
      puVar12 = puVar12 + 4;
      pfVar7 = pfVar7 + 1;
    } while (uVar20 != 0);
  }
  gNumAlignedFree = gNumAlignedFree + 1;
  plVar6 = (long *)(*(code *)PTR_FUN_01048e40)(__s_00);
LAB_00f88334:
  if (__s != (void *)0x0) {
    gNumAlignedFree = gNumAlignedFree + 1;
    plVar6 = (long *)(*(code *)PTR_FUN_01048e40)(__s);
  }
  puVar4 = CProfileManager::CurrentNode;
  iVar10 = *(int *)(CProfileManager::CurrentNode + 0x18) + -1;
  *(int *)(CProfileManager::CurrentNode + 0x18) = iVar10;
  if ((iVar10 == 0) && (*(int *)(puVar4 + 8) != 0)) {
    uVar5 = gettimeofday(&local_78,(__timezone_ptr_t)0x0);
    plVar6 = (long *)(ulong)uVar5;
    iVar10 = *(int *)(puVar4 + 0x18);
    uVar28 = NEON_fmadd((float)(unkuint9)
                               (ulong)((local_78.tv_usec +
                                       (local_78.tv_sec - *DAT_02125d68) * 1000000) -
                                      (DAT_02125d68[1] + *(long *)(puVar4 + 0x10))),0x3a83126f,
                        *(undefined4 *)(puVar4 + 0xc));
    *(undefined4 *)(puVar4 + 0xc) = uVar28;
  }
  if (iVar10 == 0) {
    CProfileManager::CurrentNode = *(undefined **)(CProfileManager::CurrentNode + 0x20);
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar6);
}


