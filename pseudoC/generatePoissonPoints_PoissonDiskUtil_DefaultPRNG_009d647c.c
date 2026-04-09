// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: generatePoissonPoints<PoissonDiskUtil::DefaultPRNG>
// Entry Point: 009d647c
// Size: 1452 bytes
// Signature: vector __thiscall generatePoissonPoints<PoissonDiskUtil::DefaultPRNG>(PoissonDiskUtil * this, uint param_1, DefaultPRNG * param_2, bool param_3, uint param_4, float param_5)


/* std::__ndk1::vector<PoissonDiskUtil::Point, std::__ndk1::allocator<PoissonDiskUtil::Point> >
   PoissonDiskUtil::generatePoissonPoints<PoissonDiskUtil::DefaultPRNG>(unsigned int,
   PoissonDiskUtil::DefaultPRNG&, bool, unsigned int, float) */

void __thiscall
PoissonDiskUtil::generatePoissonPoints<PoissonDiskUtil::DefaultPRNG>
          (long *param_1,float param_5,int param_3,uint *param_4,ulong param_2,int param_6)

{
  bool bVar1;
  uint uVar2;
  size_t __n;
  long lVar3;
  void **ppvVar4;
  void *pvVar5;
  void **ppvVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  float *pfVar11;
  ulong uVar12;
  void **ppvVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  int iVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  float local_118;
  float fStack_114;
  int local_110;
  int iStack_10c;
  float local_108;
  void **local_100;
  void **local_f8;
  undefined8 uStack_f0;
  void *local_e8;
  void *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined local_b8;
  long local_b0;
  
  lVar3 = tpidr_el0;
  uVar19 = param_3 << 1;
  if ((param_2 & 1) == 0) {
    uVar19 = (int)((double)(ulong)(uint)(param_3 << 1) * 0.7853981633974483);
  }
  uVar8 = (ulong)uVar19;
  local_b0 = *(long *)(lVar3 + 0x28);
  if (param_5 < 0.0) {
    param_5 = SQRT((float)uVar8) / (float)uVar8;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_e8 = (void *)0x0;
  local_e0 = (void *)0x0;
  local_d8 = 0;
  if (uVar19 != 0) {
    local_f8 = (void **)0x0;
    uStack_f0 = 0;
    local_100 = (void **)0x0;
    fVar14 = param_5 / 1.414214;
    local_110 = (int)(1.0 / fVar14);
    iStack_10c = local_110;
    local_108 = fVar14;
    if (local_110 != 0) {
      uVar12 = (ulong)local_110;
                    /* try { // try from 009d6554 to 009d655f has its CatchHandler @ 009d6a28 */
      std::__ndk1::
      vector<std::__ndk1::vector<PoissonDiskUtil::Point,std::__ndk1::allocator<PoissonDiskUtil::Point>>,std::__ndk1::allocator<std::__ndk1::vector<PoissonDiskUtil::Point,std::__ndk1::allocator<PoissonDiskUtil::Point>>>>
      ::__append((vector<std::__ndk1::vector<PoissonDiskUtil::Point,std::__ndk1::allocator<PoissonDiskUtil::Point>>,std::__ndk1::allocator<std::__ndk1::vector<PoissonDiskUtil::Point,std::__ndk1::allocator<PoissonDiskUtil::Point>>>>
                  *)&local_100,uVar12);
      ppvVar6 = local_f8;
      ppvVar13 = local_100;
      if (local_100 != local_f8) {
        do {
          lVar9 = (long)ppvVar13[1] - (long)*ppvVar13 >> 2;
          uVar10 = lVar9 * -0x5555555555555555;
          if (uVar10 < uVar12) {
                    /* try { // try from 009d6580 to 009d6587 has its CatchHandler @ 009d6a30 */
            std::__ndk1::
            vector<PoissonDiskUtil::Point,std::__ndk1::allocator<PoissonDiskUtil::Point>>::__append
                      ((vector<PoissonDiskUtil::Point,std::__ndk1::allocator<PoissonDiskUtil::Point>>
                        *)ppvVar13,uVar12 + lVar9 * 0x5555555555555555);
            ppvVar6 = local_f8;
          }
          else if (uVar10 >= uVar12 && uVar10 - uVar12 != 0) {
            ppvVar13[1] = (void *)((long)*ppvVar13 + uVar12 * 0xc);
          }
          ppvVar13 = ppvVar13 + 3;
        } while (ppvVar13 != ppvVar6);
      }
    }
    uVar17 = NEON_fmov(0x3f800000,4);
    uVar19 = *param_4;
    do {
      while( true ) {
        iVar18 = uVar19 * 0x7f3cf;
        uVar19 = uVar19 * 0x3d84a161;
        uVar12 = CONCAT44(uVar19,iVar18) & 0x7fffff007fffff;
        fVar20 = ((float)((uint)uVar12 | 0x40000000) + -2.0) * 0.5;
        fVar21 = ((float)((uint)(uVar12 >> 0x20) | 0x40000000) + -2.0) * 0.5;
        local_c0 = CONCAT44(fVar21,fVar20);
        if ((param_2 & 1) != 0) break;
        if ((((0.0 <= fVar20) &&
             (uVar12 = NEON_fcmge(uVar17,local_c0,4), (uVar12 & 0x100000000) != 0)) &&
            (0.0 <= fVar21)) && ((uVar12 & 1) != 0)) goto LAB_009d6654;
      }
      fVar20 = (float)NEON_fmadd(fVar20 + -0.5,fVar20 + -0.5,(fVar21 + -0.5) * (fVar21 + -0.5));
    } while (0.25 < fVar20);
LAB_009d6654:
    *param_4 = uVar19;
    local_b8 = 1;
                    /* try { // try from 009d6664 to 009d667b has its CatchHandler @ 009d6a2c */
    FUN_009d7b58(&local_e8,&local_c0);
    FUN_009d7b58(param_1,&local_c0);
    puVar7 = (undefined8 *)
             ((long)local_100[(long)(int)((float)local_c0 / local_108) * 3] +
             (long)(int)(local_c0._4_4_ / local_108) * 0xc);
    *(undefined *)(puVar7 + 1) = local_b8;
    *puVar7 = local_c0;
    pvVar5 = local_e8;
    if (local_e8 != local_e0) {
      do {
        uVar12 = (param_1[1] - *param_1 >> 2) * -0x5555555555555555;
        pvVar5 = local_e8;
        if (uVar8 <= uVar12 && uVar12 - uVar8 != 0) break;
        uVar19 = *param_4;
        *param_4 = uVar19 * 0x7f3cf;
        puVar7 = (undefined8 *)
                 ((long)local_e8 +
                 (long)(int)(((float)(uVar19 * 0x7f3cf & 0x7fffff | 0x40000000) + -2.0) * 0.5 *
                            (float)(ulong)((int)((ulong)((long)local_e0 - (long)local_e8) >> 2) *
                                           -0x55555555 - 1)) * 0xc);
        uVar17 = *puVar7;
        __n = (long)local_e0 - (long)(void *)((long)puVar7 + 0xc);
        if (__n != 0) {
          memmove(puVar7,(void *)((long)puVar7 + 0xc),__n);
        }
        local_e0 = (void *)((long)puVar7 + __n);
        if (param_6 != 0) {
          iVar18 = 0;
          do {
            uVar19 = *param_4;
            uVar2 = uVar19 * 0x3d84a161;
            *param_4 = uVar2;
            fVar21 = param_5 * (((float)(uVar19 * 0x7f3cf & 0x7fffff | 0x40000000) + -2.0) * 0.5 +
                               1.0);
            sincosf(((float)(uVar2 & 0x7fffff | 0x40000000) + -2.0) * 0.5 * 6.283185,&fStack_114,
                    &local_118);
            local_c8 = 1;
            fVar20 = (float)NEON_fmadd(fVar21,fStack_114,(int)((ulong)uVar17 >> 0x20));
            fVar21 = (float)NEON_fmadd(fVar21,local_118,(int)uVar17);
            local_d0 = CONCAT44(fVar20,fVar21);
            if ((param_2 & 1) == 0) {
              if ((0.0 <= fVar21 && fVar20 < 1.0 || 0.0 <= fVar21 && fVar20 == 1.0) &&
                 (0.0 <= fVar20 && fVar21 < 1.0 || 0.0 <= fVar20 && fVar21 == 1.0))
              goto LAB_009d6874;
            }
            else {
              fVar15 = (float)NEON_fmadd(fVar21 + -0.5,fVar21 + -0.5,
                                         (fVar20 + -0.5) * (fVar20 + -0.5));
              if (fVar15 <= 0.25) {
LAB_009d6874:
                uVar19 = (int)(fVar21 / fVar14) - 5;
                do {
                  uVar12 = (ulong)((int)(fVar20 / fVar14) - 6);
                  do {
                    uVar2 = (int)uVar12 + 1;
                    uVar12 = (ulong)uVar2;
                    if (((-1 < (int)uVar19) && ((int)uVar19 < local_110)) &&
                       ((-1 < (int)uVar2 &&
                        ((((int)uVar2 < iStack_10c &&
                          (*(char *)((long)local_100[(ulong)uVar19 * 3] + (ulong)uVar2 * 0xc + 8) !=
                           '\0')) &&
                         (pfVar11 = (float *)((long)local_100[(ulong)uVar19 * 3] + uVar12 * 0xc),
                         fVar15 = pfVar11[1] - fVar20, fVar16 = *pfVar11 - fVar21,
                         fVar15 = (float)NEON_fmadd(fVar16,fVar16,fVar15 * fVar15),
                         SQRT(fVar15) < param_5)))))) goto LAB_009d67bc;
                  } while ((int)uVar2 < (int)(fVar20 / fVar14) + 5);
                  bVar1 = (int)uVar19 < (int)(fVar21 / fVar14) + 5;
                  uVar19 = uVar19 + 1;
                } while (bVar1);
                    /* try { // try from 009d6920 to 009d6937 has its CatchHandler @ 009d6a40 */
                FUN_009d7b58(&local_e8,&local_d0);
                FUN_009d7b58(param_1,&local_d0);
                puVar7 = (undefined8 *)
                         ((long)local_100[(long)(int)((float)local_d0 / local_108) * 3] +
                         (long)(int)(local_d0._4_4_ / local_108) * 0xc);
                *(undefined *)(puVar7 + 1) = (undefined)local_c8;
                *puVar7 = local_d0;
              }
            }
LAB_009d67bc:
            iVar18 = iVar18 + 1;
          } while (iVar18 != param_6);
        }
        pvVar5 = local_e0;
      } while (local_e8 != local_e0);
    }
    ppvVar13 = local_100;
    ppvVar6 = local_f8;
    if (local_100 != (void **)0x0) {
      while (ppvVar4 = ppvVar6, ppvVar4 != ppvVar13) {
        ppvVar6 = ppvVar4 + -3;
        pvVar5 = *ppvVar6;
        if (pvVar5 != (void *)0x0) {
          ppvVar4[-2] = pvVar5;
          operator_delete(pvVar5);
        }
      }
      local_f8 = ppvVar13;
      operator_delete(local_100);
      pvVar5 = local_e8;
    }
    if (pvVar5 != (void *)0x0) {
      local_e0 = pvVar5;
      operator_delete(pvVar5);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_b0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


