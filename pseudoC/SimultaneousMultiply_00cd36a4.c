// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SimultaneousMultiply
// Entry Point: 00cd36a4
// Size: 4320 bytes
// Signature: undefined __thiscall SimultaneousMultiply(ECP * this, ECPPoint * param_1, ECPPoint * param_2, Integer * param_3, uint param_4)


/* WARNING: Type propagation algorithm not settling */
/* CryptoPP::ECP::SimultaneousMultiply(CryptoPP::ECPPoint*, CryptoPP::ECPPoint const&,
   CryptoPP::Integer const*, unsigned int) const */

void __thiscall
CryptoPP::ECP::SimultaneousMultiply
          (ECP *this,ECPPoint *param_1,ECPPoint *param_2,Integer *param_3,uint param_4)

{
  int iVar1;
  undefined4 *puVar2;
  Integer IVar3;
  long lVar4;
  undefined uVar5;
  void **ppvVar6;
  ProjectivePoint *pPVar7;
  ProjectivePoint *pPVar8;
  bool bVar9;
  byte bVar10;
  int iVar11;
  ulong uVar12;
  void **ppvVar13;
  void **ppvVar14;
  Integer *pIVar15;
  void *pvVar16;
  ulong uVar17;
  undefined4 *puVar18;
  int *piVar19;
  void *pvVar20;
  int *piVar21;
  ulong uVar22;
  long lVar23;
  uint uVar24;
  BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer> *pBVar25;
  ulong uVar26;
  void **ppvVar27;
  Integer *pIVar28;
  void **ppvVar29;
  int **ppiVar30;
  uint *puVar31;
  ulong uVar32;
  size_t sVar33;
  BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer> *pBVar34;
  BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer> *local_340;
  BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer> *local_338;
  undefined8 local_330;
  void **local_328;
  void **local_320;
  void **local_318;
  void **local_310;
  void **local_308;
  void **local_300;
  void **local_2f8;
  void **local_2f0;
  void **local_2e8;
  Integer *local_2e0;
  Integer *local_2d8;
  Integer *local_2d0;
  ProjectivePoint *local_2c8;
  ProjectivePoint *local_2c0;
  ProjectivePoint *local_2b8;
  ProjectiveDoubling aPStack_2b0 [8];
  ProjectivePoint aPStack_2a8 [8];
  undefined8 local_2a0;
  undefined **local_f0;
  undefined **local_e8;
  void *local_e0;
  void *local_d8;
  void *local_d0;
  void *local_c8;
  undefined **local_c0;
  undefined **local_b8;
  void *local_b0;
  void *local_a8;
  void *local_a0;
  void *local_98;
  undefined8 local_90;
  undefined4 uStack_88;
  byte bStack_84;
  undefined2 uStack_83;
  undefined uStack_81;
  long local_80;
  
  uVar17 = (ulong)param_4;
  lVar4 = tpidr_el0;
  local_80 = *(long *)(lVar4 + 0x28);
  uVar12 = (**(code **)(**(long **)(this + 0x10) + 200))();
  if ((uVar12 & 1) == 0) {
    ECP((ECP *)aPStack_2b0,this,true);
                    /* try { // try from 00cd399c to 00cd39ab has its CatchHandler @ 00cd47c8 */
    FUN_00cd496c(&local_f0,local_2a0,param_2);
                    /* try { // try from 00cd39ac to 00cd39c3 has its CatchHandler @ 00cd47c4 */
    SimultaneousMultiply((ECP *)aPStack_2b0,param_1,(ECPPoint *)&local_f0,param_3,param_4);
    local_f0 = &PTR__ECPPoint_00fe9fd8;
    local_b8 = &PTR__Integer_0100c890;
    pvVar20 = local_a8;
    if (local_a0 <= local_a8) {
      pvVar20 = local_a0;
    }
    for (; pvVar20 != (void *)0x0; pvVar20 = (void *)((long)pvVar20 - 1)) {
      *(undefined4 *)((long)local_98 + (long)pvVar20 * 4 + -4) = 0;
    }
                    /* try { // try from 00cd3a0c to 00cd3a0f has its CatchHandler @ 00cd47c0 */
    UnalignedDeallocate(local_98);
    local_e8 = &PTR__Integer_0100c890;
    pvVar20 = local_d8;
    if (local_d0 <= local_d8) {
      pvVar20 = local_d0;
    }
    for (; pvVar20 != (void *)0x0; pvVar20 = (void *)((long)pvVar20 - 1)) {
      *(undefined4 *)((long)local_c8 + (long)pvVar20 * 4 + -4) = 0;
    }
                    /* try { // try from 00cd3a40 to 00cd3a43 has its CatchHandler @ 00cd47bc */
    UnalignedDeallocate(local_c8);
    if (param_4 != 0) {
      uVar12 = 0;
      do {
                    /* try { // try from 00cd3a78 to 00cd3a83 has its CatchHandler @ 00cd4888 */
        FUN_00cd4b28(&local_f0,local_2a0,param_1 + uVar12 * 0x70);
                    /* try { // try from 00cd3a8c to 00cd3aa3 has its CatchHandler @ 00cd48c0 */
        Integer::operator=((Integer *)(param_1 + uVar12 * 0x70 + 8),(Integer *)&local_e8);
        Integer::operator=((Integer *)(param_1 + uVar12 * 0x70 + 0x38),(Integer *)&local_b8);
        param_1[uVar12 * 0x70 + 0x68] = uStack_88._0_1_;
        pvVar20 = local_a8;
        if (local_a0 <= local_a8) {
          pvVar20 = local_a0;
        }
        for (; pvVar20 != (void *)0x0; pvVar20 = (void *)((long)pvVar20 - 1)) {
          *(undefined4 *)((long)local_98 + (long)pvVar20 * 4 + -4) = 0;
        }
        local_f0 = &PTR__ECPPoint_00fe9fd8;
        local_b8 = &PTR__Integer_0100c890;
                    /* try { // try from 00cd3ae4 to 00cd3ae7 has its CatchHandler @ 00cd4890 */
        UnalignedDeallocate(local_98);
        local_e8 = &PTR__Integer_0100c890;
        pvVar20 = local_d8;
        if (local_d0 <= local_d8) {
          pvVar20 = local_d0;
        }
        for (; pvVar20 != (void *)0x0; pvVar20 = (void *)((long)pvVar20 - 1)) {
          *(undefined4 *)((long)local_c8 + (long)pvVar20 * 4 + -4) = 0;
        }
                    /* try { // try from 00cd3b18 to 00cd3b1b has its CatchHandler @ 00cd4894 */
        UnalignedDeallocate(local_c8);
        uVar12 = uVar12 + 1;
      } while (uVar12 != uVar17);
    }
    ~ECP((ECP *)aPStack_2b0);
  }
  else {
    ProjectiveDoubling::ProjectiveDoubling
              (aPStack_2b0,*(ModularArithmetic **)(this + 0x10),(Integer *)(this + 0x18),
               (Integer *)(this + 0x48),param_2);
    local_2c8 = (ProjectivePoint *)0x0;
    local_2c0 = (ProjectivePoint *)0x0;
    local_2b8 = (ProjectivePoint *)0x0;
    local_2e0 = (Integer *)0x0;
    local_2d8 = (Integer *)0x0;
    local_2d0 = (Integer *)0x0;
                    /* try { // try from 00cd3734 to 00cd373f has its CatchHandler @ 00cd47d0 */
    std::__ndk1::vector<CryptoPP::WindowSlider,std::__ndk1::allocator<CryptoPP::WindowSlider>>::
    reserve((vector<CryptoPP::WindowSlider,std::__ndk1::allocator<CryptoPP::WindowSlider>> *)
            &local_2e0,uVar17);
    local_2f8 = (void **)0x0;
    local_2f0 = (void **)0x0;
    local_2e8 = (void **)0x0;
    if (param_4 == 0) {
      ppvVar13 = (void **)0x0;
      local_310 = (void **)0x0;
      local_308 = (void **)0x0;
      local_300 = (void **)0x0;
      local_328 = (void **)0x0;
      local_320 = (void **)0x0;
      local_318 = (void **)0x0;
      ppvVar14 = (void **)0x0;
    }
    else {
      uVar32 = uVar17 * 0x18;
                    /* try { // try from 00cd3760 to 00cd3767 has its CatchHandler @ 00cd47a4 */
      ppvVar13 = (void **)operator_new(uVar32);
      uVar12 = (uVar32 - 0x18) / 0x18;
      local_2e8 = ppvVar13 + uVar17 * 3;
      sVar33 = uVar12 * 0x18 + 0x18;
      local_2f8 = ppvVar13;
      memset(ppvVar13,0,sVar33);
      local_2f0 = ppvVar13 + uVar12 * 3 + 3;
      local_310 = (void **)0x0;
      local_308 = (void **)0x0;
      local_300 = (void **)0x0;
                    /* try { // try from 00cd37b4 to 00cd37bb has its CatchHandler @ 00cd4794 */
      ppvVar13 = (void **)operator_new(uVar32);
      local_300 = ppvVar13 + uVar17 * 3;
      local_310 = ppvVar13;
      memset(ppvVar13,0,sVar33);
      local_308 = ppvVar13 + (uVar12 + 1) * 3;
      local_328 = (void **)0x0;
      local_320 = (void **)0x0;
      local_318 = (void **)0x0;
                    /* try { // try from 00cd37f4 to 00cd37fb has its CatchHandler @ 00cd4784 */
      ppvVar14 = (void **)operator_new(uVar32);
      local_318 = ppvVar14 + uVar17 * 3;
      local_328 = ppvVar14;
      memset(ppvVar14,0,sVar33);
      local_320 = ppvVar14 + (uVar12 + 1) * 3;
      uVar12 = 0;
      do {
                    /* try { // try from 00cd385c to 00cd386f has its CatchHandler @ 00cd48a8 */
        bVar10 = (**(code **)(*(long *)this + 0x30))();
        Integer::Integer((Integer *)&local_f0,param_3);
                    /* try { // try from 00cd3870 to 00cd387f has its CatchHandler @ 00cd48b0 */
        pIVar15 = (Integer *)Integer::One();
        Integer::Integer((Integer *)&local_c0,pIVar15);
        bStack_84 = bVar10 & 1;
        local_90 = 5;
        uStack_88 = 0;
        uStack_83 = 0x100;
        uStack_81 = 0;
                    /* try { // try from 00cd3898 to 00cd38a3 has its CatchHandler @ 00cd4868 */
        Integer::operator<<=((Integer *)&local_c0,5);
        pIVar15 = local_2d8;
        if (local_2d8 < local_2d0) {
                    /* try { // try from 00cd38b0 to 00cd38bb has its CatchHandler @ 00cd47e4 */
          Integer::Integer(local_2d8,(Integer *)&local_f0);
                    /* try { // try from 00cd38c0 to 00cd38c7 has its CatchHandler @ 00cd47f4 */
          Integer::Integer(pIVar15 + 0x30,(Integer *)&local_c0);
          local_2d8 = pIVar15 + 0x70;
          *(ulong *)(pIVar15 + 0x68) =
               CONCAT17(uStack_81,CONCAT25(uStack_83,CONCAT14(bStack_84,uStack_88)));
          *(undefined8 *)(pIVar15 + 0x60) = local_90;
        }
        else {
                    /* try { // try from 00cd38dc to 00cd38e7 has its CatchHandler @ 00cd47ec */
          std::__ndk1::vector<CryptoPP::WindowSlider,std::__ndk1::allocator<CryptoPP::WindowSlider>>
          ::__push_back_slow_path<CryptoPP::WindowSlider>
                    ((vector<CryptoPP::WindowSlider,std::__ndk1::allocator<CryptoPP::WindowSlider>>
                      *)&local_2e0,(WindowSlider *)&local_f0);
        }
        pvVar20 = local_b0;
        if (local_a8 <= local_b0) {
          pvVar20 = local_a8;
        }
        for (; pvVar20 != (void *)0x0; pvVar20 = (void *)((long)pvVar20 - 1)) {
          *(undefined4 *)((long)local_a0 + (long)pvVar20 * 4 + -4) = 0;
        }
        local_c0 = &PTR__Integer_0100c890;
                    /* try { // try from 00cd3914 to 00cd3917 has its CatchHandler @ 00cd4878 */
        UnalignedDeallocate(local_a0);
        local_f0 = &PTR__Integer_0100c890;
        pvVar20 = local_e0;
        if (local_d8 <= local_e0) {
          pvVar20 = local_d8;
        }
        for (; pvVar20 != (void *)0x0; pvVar20 = (void *)((long)pvVar20 - 1)) {
          *(undefined4 *)((long)local_d0 + (long)pvVar20 * 4 + -4) = 0;
        }
                    /* try { // try from 00cd3948 to 00cd394b has its CatchHandler @ 00cd487c */
        UnalignedDeallocate(local_d0);
                    /* try { // try from 00cd3958 to 00cd395b has its CatchHandler @ 00cd4880 */
        WindowSlider::FindNextWindow();
        param_3 = param_3 + 0x30;
        uVar12 = uVar12 + 1;
      } while (uVar12 != uVar17);
      ppvVar14 = ppvVar13;
      if (param_4 != 0) {
        iVar1 = 0;
        do {
          uVar12 = 0;
          uVar5 = false;
          bVar9 = false;
LAB_00cd3ba8:
          do {
            pPVar7 = local_2c0;
            if ((local_2e0[uVar12 * 0x70 + 0x6f] == (Integer)0x0) &&
               (iVar1 == *(int *)(local_2e0 + uVar12 * 0x70 + 100))) {
              if (!(bool)uVar5) {
                if (local_2c0 == local_2b8) {
                    /* try { // try from 00cd3c00 to 00cd3c93 has its CatchHandler @ 00cd4900 */
                  std::__ndk1::
                  vector<CryptoPP::ProjectivePoint,std::__ndk1::allocator<CryptoPP::ProjectivePoint>>
                  ::__push_back_slow_path<CryptoPP::ProjectivePoint_const&>
                            ((vector<CryptoPP::ProjectivePoint,std::__ndk1::allocator<CryptoPP::ProjectivePoint>>
                              *)&local_2c8,aPStack_2a8);
                }
                else {
                    /* try { // try from 00cd3be8 to 00cd3bf3 has its CatchHandler @ 00cd4848 */
                  std::__ndk1::allocator<CryptoPP::ProjectivePoint>::
                  construct<CryptoPP::ProjectivePoint,CryptoPP::ProjectivePoint_const&>
                            ((allocator<CryptoPP::ProjectivePoint> *)&local_2b8,local_2c0,
                             aPStack_2a8);
                  local_2c0 = pPVar7 + 0x90;
                }
              }
              ppvVar13 = local_328 + uVar12 * 3;
              ppvVar14 = ppvVar13 + 1;
              puVar18 = (undefined4 *)*ppvVar14;
              puVar2 = (undefined4 *)(local_2e0 + uVar12 * 0x70 + 0x68);
              if (puVar18 == (undefined4 *)ppvVar13[2]) {
                pvVar20 = *ppvVar13;
                uVar22 = (long)puVar18 - (long)pvVar20;
                lVar23 = (long)uVar22 >> 2;
                uVar32 = lVar23 + 1;
                if (uVar32 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
                  std::__ndk1::__vector_base_common<true>::__throw_length_error();
                }
                if (uVar32 <= (ulong)((long)uVar22 >> 1)) {
                  uVar32 = (long)uVar22 >> 1;
                }
                if (0x7ffffffffffffffb < uVar22) {
                  uVar32 = 0x3fffffffffffffff;
                }
                if (uVar32 == 0) {
                  pvVar16 = (void *)0x0;
                  puVar18 = (undefined4 *)(lVar23 * 4);
                  *puVar18 = *puVar2;
                }
                else {
                  if (uVar32 >> 0x3e != 0) {
                    /* try { // try from 00cd4774 to 00cd477f has its CatchHandler @ 00cd48e4 */
                    /* WARNING: Subroutine does not return */
                    FUN_006d1f18(
                                "allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                                );
                  }
                  pvVar16 = operator_new(uVar32 << 2);
                  puVar18 = (undefined4 *)((long)pvVar16 + lVar23 * 4);
                  *puVar18 = *puVar2;
                }
                if (0 < (long)uVar22) {
                  memcpy(pvVar16,pvVar20,uVar22);
                }
                *ppvVar13 = pvVar16;
                *ppvVar14 = puVar18 + 1;
                ppvVar13[2] = (void *)((long)pvVar16 + uVar32 * 4);
                if (pvVar20 != (void *)0x0) {
                  operator_delete(pvVar20);
                }
              }
              else {
                *puVar18 = *puVar2;
                *ppvVar14 = puVar18 + 1;
              }
              ppvVar13 = local_2f8 + uVar12 * 3;
              ppiVar30 = (int **)(ppvVar13 + 1);
              piVar21 = *ppiVar30;
              piVar19 = (int *)ppvVar13[2];
              iVar11 = (int)((ulong)((long)local_2c0 - (long)local_2c8) >> 4) * 0x38e38e39 + -1;
              if (piVar21 < piVar19) {
                *piVar21 = iVar11;
                *ppiVar30 = piVar21 + 1;
              }
              else {
                pvVar20 = *ppvVar13;
                sVar33 = (long)piVar21 - (long)pvVar20;
                lVar23 = (long)sVar33 >> 2;
                uVar32 = lVar23 + 1;
                if (uVar32 >> 0x3e != 0) {
                    /* try { // try from 00cd4750 to 00cd4757 has its CatchHandler @ 00cd48dc */
                    /* WARNING: Subroutine does not return */
                  std::__ndk1::__vector_base_common<true>::__throw_length_error();
                }
                uVar22 = (long)piVar19 - (long)pvVar20;
                uVar26 = (long)uVar22 >> 1;
                if (uVar32 <= uVar26) {
                  uVar32 = uVar26;
                }
                if (0x7ffffffffffffffb < uVar22) {
                  uVar32 = 0x3fffffffffffffff;
                }
                if (uVar32 == 0) {
                  pvVar16 = (void *)0x0;
                  piVar19 = (int *)(lVar23 * 4);
                  *piVar19 = iVar11;
                }
                else {
                  if (uVar32 >> 0x3e != 0) {
                    /* try { // try from 00cd4768 to 00cd4773 has its CatchHandler @ 00cd48dc */
                    /* WARNING: Subroutine does not return */
                    FUN_006d1f18(
                                "allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                                );
                  }
                    /* try { // try from 00cd3d70 to 00cd3d73 has its CatchHandler @ 00cd4840 */
                  pvVar16 = operator_new(uVar32 << 2);
                  piVar19 = (int *)((long)pvVar16 + lVar23 * 4);
                  *piVar19 = iVar11;
                }
                if (0 < (long)sVar33) {
                  memcpy(pvVar16,pvVar20,sVar33);
                }
                *ppvVar13 = pvVar16;
                *ppiVar30 = piVar19 + 1;
                ppvVar13[2] = (int *)((long)pvVar16 + uVar32 * 4);
                if (pvVar20 != (void *)0x0) {
                  operator_delete(pvVar20);
                }
              }
              pIVar15 = local_2e0;
              ppvVar13 = local_310;
              ppvVar29 = local_310 + uVar12 * 3;
              ppvVar14 = ppvVar29 + 1;
              pvVar20 = *ppvVar14;
              if (pvVar20 == (void *)((long)ppvVar29[2] * 0x40)) {
                if ((long)pvVar20 + 1 < 0) {
                    /* try { // try from 00cd4758 to 00cd4767 has its CatchHandler @ 00cd48e4 */
                    /* WARNING: Subroutine does not return */
                  std::__ndk1::__vector_base_common<true>::__throw_length_error();
                }
                if (pvVar20 < (void *)0x3fffffffffffffff) {
                  uVar22 = (long)ppvVar29[2] << 7;
                  uVar32 = (long)pvVar20 + 0x40U & 0xffffffffffffffc0;
                  if (uVar32 <= uVar22) {
                    uVar32 = uVar22;
                  }
                }
                else {
                  uVar32 = 0x7fffffffffffffff;
                }
                    /* try { // try from 00cd3e0c to 00cd3e97 has its CatchHandler @ 00cd4900 */
                std::__ndk1::vector<bool,std::__ndk1::allocator<bool>>::reserve
                          ((vector<bool,std::__ndk1::allocator<bool>> *)ppvVar29,uVar32);
                pvVar20 = *ppvVar14;
              }
              pIVar28 = local_2e0;
              *ppvVar14 = (void *)((long)pvVar20 + 1);
              uVar22 = (ulong)pvVar20 >> 6;
              uVar32 = 1L << ((ulong)pvVar20 & 0x3f);
              pvVar20 = *ppvVar29;
              if (pIVar15[uVar12 * 0x70 + 0x6d] == (Integer)0x0) {
                uVar32 = *(ulong *)((long)pvVar20 + uVar22 * 8) & (uVar32 ^ 0xffffffffffffffff);
              }
              else {
                uVar32 = *(ulong *)((long)pvVar20 + uVar22 * 8) | uVar32;
              }
              *(ulong *)((long)pvVar20 + uVar22 * 8) = uVar32;
              pIVar15 = local_2e0 + uVar12 * 0x70;
              iVar11 = Integer::WordCount();
              puVar31 = (uint *)(pIVar28 + uVar12 * 0x70 + 0x60);
              uVar24 = *puVar31;
              IVar3 = pIVar28[uVar12 * 0x70 + 0x6e];
              pIVar28[uVar12 * 0x70 + 0x6e] = (Integer)0x0;
              if (IVar3 != (Integer)0x0) {
                uVar24 = 0;
              }
              uVar22 = (ulong)uVar24;
              uVar32 = Integer::GetBit(pIVar15,uVar22);
              ppvVar14 = ppvVar13;
              if ((uVar32 & 1) == 0) {
                if (uVar24 <= (uint)(iVar11 * 0x20)) {
                  uVar24 = iVar11 * 0x20;
                }
                uVar32 = uVar22;
                do {
                  if (uVar24 == uVar32) {
                    uVar5 = true;
                    pIVar28[uVar12 * 0x70 + 0x6f] = (Integer)0x1;
                    goto joined_r0x00cd3fc4;
                  }
                  uVar32 = uVar32 + 1;
                    /* try { // try from 00cd3ec4 to 00cd3ecf has its CatchHandler @ 00cd4920 */
                  uVar22 = Integer::GetBit(pIVar15,uVar32);
                } while ((uVar22 & 1) == 0);
                uVar22 = uVar32 & 0xffffffff;
                uVar24 = (uint)uVar32;
              }
                    /* try { // try from 00cd3ee0 to 00cd3f67 has its CatchHandler @ 00cd4900 */
              Integer::operator>>=(pIVar15,uVar22);
              *(uint *)(pIVar28 + uVar12 * 0x70 + 100) =
                   *(int *)(pIVar28 + uVar12 * 0x70 + 100) + uVar24;
              iVar11 = Integer::Modulo(pIVar15,1 << (ulong)(*puVar31 & 0x1f));
              piVar19 = (int *)(pIVar28 + uVar12 * 0x70 + 0x68);
              *piVar19 = iVar11;
              if ((pIVar28[uVar12 * 0x70 + 0x6c] == (Integer)0x0) ||
                 (uVar32 = Integer::GetBit(pIVar15,(ulong)*puVar31), (uVar32 & 1) == 0)) {
                pIVar28[uVar12 * 0x70 + 0x6d] = (Integer)0x0;
              }
              else {
                pIVar28[uVar12 * 0x70 + 0x6d] = (Integer)0x1;
                *piVar19 = (1 << (ulong)(*puVar31 & 0x1f)) - *piVar19;
                Integer::operator+=(pIVar15,pIVar28 + uVar12 * 0x70 + 0x30);
              }
              uVar5 = true;
            }
joined_r0x00cd3fc4:
            if (bVar9) {
              bVar9 = true;
              uVar12 = uVar12 + 1;
              if (uVar12 == uVar17) break;
              goto LAB_00cd3ba8;
            }
            bVar9 = *(Integer *)((long)local_2e0 + uVar12 * 0x70 + 0x6f) == (Integer)0x0;
            uVar12 = uVar12 + 1;
          } while (uVar12 != uVar17);
          if (!bVar9) break;
                    /* try { // try from 00cd4004 to 00cd400b has its CatchHandler @ 00cd47d8 */
          ProjectiveDoubling::Double();
          iVar1 = iVar1 + 1;
        } while (param_4 != 0);
      }
    }
                    /* try { // try from 00cd4034 to 00cd4037 has its CatchHandler @ 00cd47b4 */
    ParallelInvert<CryptoPP::Integer,CryptoPP::ZIterator>
              (*(AbstractRing **)(this + 0x10),(ZIterator)local_2c8,(ZIterator)local_2c0);
    if (local_2c0 != local_2c8) {
      uVar12 = 0;
      do {
                    /* try { // try from 00cd4084 to 00cd416f has its CatchHandler @ 00cd48f8 */
        uVar32 = Integer::operator!((Integer *)(local_2c8 + uVar12 * 0x90 + 0x60));
        if ((uVar32 & 1) == 0) {
          pIVar15 = (Integer *)
                    (**(code **)(**(long **)(this + 0x10) + 0x80))
                              (*(long **)(this + 0x10),local_2c8 + uVar12 * 0x90 + 0x30,
                               local_2c8 + uVar12 * 0x90 + 0x60);
          Integer::operator=((Integer *)(local_2c8 + uVar12 * 0x90 + 0x30),pIVar15);
          pIVar15 = (Integer *)
                    (**(code **)(**(long **)(this + 0x10) + 0x90))
                              (*(long **)(this + 0x10),local_2c8 + uVar12 * 0x90 + 0x60);
          Integer::operator=((Integer *)(local_2c8 + uVar12 * 0x90 + 0x60),pIVar15);
          pIVar15 = (Integer *)
                    (**(code **)(**(long **)(this + 0x10) + 0x80))
                              (*(long **)(this + 0x10),local_2c8 + uVar12 * 0x90,
                               local_2c8 + uVar12 * 0x90 + 0x60);
          Integer::operator=((Integer *)(local_2c8 + uVar12 * 0x90),pIVar15);
          pIVar15 = (Integer *)
                    (**(code **)(**(long **)(this + 0x10) + 0x80))
                              (*(long **)(this + 0x10),local_2c8 + uVar12 * 0x90 + 0x30,
                               local_2c8 + uVar12 * 0x90 + 0x60);
          Integer::operator=((Integer *)(local_2c8 + uVar12 * 0x90 + 0x30),pIVar15);
        }
        uVar12 = (ulong)((int)uVar12 + 1);
        uVar32 = ((long)local_2c0 - (long)local_2c8 >> 4) * -0x71c71c71c71c71c7;
      } while (uVar12 <= uVar32 && uVar32 - uVar12 != 0);
    }
    ppvVar29 = local_2f8;
    local_340 = (BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer> *)0x0;
    local_338 = (BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer> *)0x0;
    local_330 = 0;
    if (param_4 != 0) {
      uVar12 = 0;
      do {
        lVar23 = (long)local_338 - (long)local_340 >> 5;
        ppvVar27 = ppvVar29 + uVar12 * 3;
        uVar22 = (long)ppvVar27[1] - (long)*ppvVar27 >> 2;
        bVar9 = uVar22 < (ulong)(lVar23 * -0x3333333333333333);
        uVar32 = uVar22 + lVar23 * 0x3333333333333333;
        if (bVar9 || uVar32 == 0) {
          pBVar34 = local_338;
          if (bVar9) {
            pBVar34 = local_340 + uVar22 * 0xa0;
            for (pBVar25 = local_338; pBVar25 != pBVar34; pBVar25 = pBVar25 + -0xa0) {
              pvVar20 = *(void **)(pBVar25 + -0x10);
              *(undefined ***)(pBVar25 + -0x30) = &PTR__Integer_0100c890;
              uVar32 = *(ulong *)(pBVar25 + -0x20);
              if (*(ulong *)(pBVar25 + -0x18) <= *(ulong *)(pBVar25 + -0x20)) {
                uVar32 = *(ulong *)(pBVar25 + -0x18);
              }
              for (; uVar32 != 0; uVar32 = uVar32 - 1) {
                *(undefined4 *)((long)pvVar20 + uVar32 * 4 + -4) = 0;
              }
                    /* try { // try from 00cd4258 to 00cd425b has its CatchHandler @ 00cd48f0 */
              UnalignedDeallocate(pvVar20);
              *(undefined ***)(pBVar25 + -0x68) = &PTR__Integer_0100c890;
              pvVar20 = *(void **)(pBVar25 + -0x48);
              uVar32 = *(ulong *)(pBVar25 + -0x58);
              if (*(ulong *)(pBVar25 + -0x50) <= *(ulong *)(pBVar25 + -0x58)) {
                uVar32 = *(ulong *)(pBVar25 + -0x50);
              }
              *(undefined ***)(pBVar25 + -0xa0) = &PTR__ECPPoint_00fe9fd8;
              for (; uVar32 != 0; uVar32 = uVar32 - 1) {
                *(undefined4 *)((long)pvVar20 + uVar32 * 4 + -4) = 0;
              }
                    /* try { // try from 00cd429c to 00cd429f has its CatchHandler @ 00cd48f4 */
              UnalignedDeallocate(pvVar20);
              pvVar20 = *(void **)(pBVar25 + -0x78);
              *(undefined ***)(pBVar25 + -0x98) = &PTR__Integer_0100c890;
              uVar32 = *(ulong *)(pBVar25 + -0x88);
              if (*(ulong *)(pBVar25 + -0x80) <= *(ulong *)(pBVar25 + -0x88)) {
                uVar32 = *(ulong *)(pBVar25 + -0x80);
              }
              for (; uVar32 != 0; uVar32 = uVar32 - 1) {
                *(undefined4 *)((long)pvVar20 + uVar32 * 4 + -4) = 0;
              }
                    /* try { // try from 00cd42d0 to 00cd42d3 has its CatchHandler @ 00cd48ec */
              UnalignedDeallocate(pvVar20);
            }
          }
        }
        else {
                    /* try { // try from 00cd420c to 00cd4213 has its CatchHandler @ 00cd47e0 */
          std::__ndk1::
          vector<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>,std::__ndk1::allocator<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>>>
          ::__append((vector<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>,std::__ndk1::allocator<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>>>
                      *)&local_340,uVar32);
          pBVar34 = local_338;
        }
        local_338 = pBVar34;
        pvVar20 = *ppvVar27;
        if (ppvVar27[1] != pvVar20) {
          uVar32 = 0;
          ppvVar27 = ppvVar29 + uVar12 * 3;
          do {
            pPVar7 = local_2c8;
            uVar26 = (ulong)*(uint *)((long)pvVar20 + uVar32 * 4);
                    /* try { // try from 00cd4328 to 00cd43d3 has its CatchHandler @ 00cd4928 */
            uVar22 = Integer::operator!((Integer *)(local_2c8 + uVar26 * 0x90 + 0x60));
            if ((uVar22 & 1) == 0) {
              local_340[uVar32 * 0xa0 + 0x68] =
                   (BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>)0x0;
              Integer::operator=((Integer *)(local_340 + uVar32 * 0xa0 + 8),
                                 (Integer *)(pPVar7 + uVar26 * 0x90));
              if ((*(ulong *)((long)ppvVar14[uVar12 * 3] + (uVar32 >> 3 & 0x1ffffffffffffff8)) >>
                   (uVar32 & 0x3f) & 1) == 0) {
                Integer::operator=((Integer *)(local_340 + uVar32 * 0xa0 + 0x38),
                                   (Integer *)(pPVar7 + uVar26 * 0x90 + 0x30));
              }
              else {
                pIVar15 = (Integer *)
                          (**(code **)(**(long **)(this + 0x10) + 0x28))
                                    (*(long **)(this + 0x10),pPVar7 + uVar26 * 0x90 + 0x30);
                Integer::operator=((Integer *)(local_340 + uVar32 * 0xa0 + 0x38),pIVar15);
              }
            }
            else {
              local_340[uVar32 * 0xa0 + 0x68] =
                   (BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>)0x1;
            }
                    /* try { // try from 00cd43e8 to 00cd43f7 has its CatchHandler @ 00cd491c */
            Integer::Integer((Integer *)&local_f0,0,0,
                             *(uint *)((long)local_328[uVar12 * 3] + uVar32 * 4));
                    /* try { // try from 00cd4408 to 00cd440f has its CatchHandler @ 00cd490c */
            Integer::operator=((Integer *)(local_340 + uVar32 * 0xa0 + 0x70),(Integer *)&local_f0);
            local_f0 = &PTR__Integer_0100c890;
            pvVar20 = local_e0;
            if (local_d8 <= local_e0) {
              pvVar20 = local_d8;
            }
            for (; pvVar20 != (void *)0x0; pvVar20 = (void *)((long)pvVar20 - 1)) {
              *(undefined4 *)((long)local_d0 + (long)pvVar20 * 4 + -4) = 0;
            }
                    /* try { // try from 00cd4440 to 00cd4443 has its CatchHandler @ 00cd4908 */
            UnalignedDeallocate(local_d0);
            uVar32 = (ulong)((int)uVar32 + 1);
            pvVar20 = *ppvVar27;
          } while (uVar32 < (ulong)((long)ppvVar27[1] - (long)pvVar20 >> 2));
        }
                    /* try { // try from 00cd4460 to 00cd446b has its CatchHandler @ 00cd485c */
        GeneralCascadeMultiplication<CryptoPP::ECPPoint,std::__ndk1::__wrap_iter<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>*>>
                  ((CryptoPP *)&local_f0,this,local_340,local_338);
                    /* try { // try from 00cd447c to 00cd4497 has its CatchHandler @ 00cd4898 */
        Integer::operator=((Integer *)(param_1 + uVar12 * 0x70 + 8),(Integer *)&local_e8);
        Integer::operator=((Integer *)(param_1 + uVar12 * 0x70 + 0x38),(Integer *)&local_b8);
        param_1[uVar12 * 0x70 + 0x68] = uStack_88._0_1_;
        pvVar20 = local_a8;
        if (local_a0 <= local_a8) {
          pvVar20 = local_a0;
        }
        local_f0 = &PTR__ECPPoint_00fe9fd8;
        local_b8 = &PTR__Integer_0100c890;
        for (; pvVar20 != (void *)0x0; pvVar20 = (void *)((long)pvVar20 - 1)) {
          *(undefined4 *)((long)local_98 + (long)pvVar20 * 4 + -4) = 0;
        }
                    /* try { // try from 00cd44e0 to 00cd44e3 has its CatchHandler @ 00cd4860 */
        UnalignedDeallocate(local_98);
        local_e8 = &PTR__Integer_0100c890;
        pvVar20 = local_d8;
        if (local_d0 <= local_d8) {
          pvVar20 = local_d0;
        }
        for (; pvVar20 != (void *)0x0; pvVar20 = (void *)((long)pvVar20 - 1)) {
          *(undefined4 *)((long)local_c8 + (long)pvVar20 * 4 + -4) = 0;
        }
                    /* try { // try from 00cd4514 to 00cd4517 has its CatchHandler @ 00cd4864 */
        UnalignedDeallocate(local_c8);
        pBVar34 = local_340;
        uVar12 = uVar12 + 1;
      } while (uVar12 != uVar17);
      pBVar25 = local_338;
      if (local_340 != (BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer> *)0x0) {
        while (pBVar25 != pBVar34) {
          BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>::~BaseAndExponent(pBVar25 + -0xa0);
          pBVar25 = pBVar25 + -0xa0;
        }
        local_338 = pBVar34;
        operator_delete(local_340);
      }
    }
    ppvVar29 = local_328;
    ppvVar27 = local_320;
    if (local_328 != (void **)0x0) {
      while (ppvVar6 = ppvVar27, ppvVar6 != ppvVar29) {
        ppvVar27 = ppvVar6 + -3;
        pvVar20 = *ppvVar27;
        if (pvVar20 != (void *)0x0) {
          ppvVar6[-2] = pvVar20;
          operator_delete(pvVar20);
        }
      }
      local_320 = ppvVar29;
      operator_delete(ppvVar29);
    }
    ppvVar29 = ppvVar14;
    ppvVar27 = local_308;
    if (ppvVar14 != (void **)0x0) {
      while (ppvVar27 != ppvVar14) {
        ppvVar27 = ppvVar27 + -3;
        ppvVar29 = ppvVar13;
        if (*ppvVar27 != (void *)0x0) {
          operator_delete(*ppvVar27);
        }
      }
      local_308 = ppvVar14;
      operator_delete(ppvVar29);
    }
    ppvVar13 = local_2f8;
    ppvVar14 = local_2f0;
    if (local_2f8 != (void **)0x0) {
      while (ppvVar29 = ppvVar14, ppvVar29 != ppvVar13) {
        ppvVar14 = ppvVar29 + -3;
        pvVar20 = *ppvVar14;
        if (pvVar20 != (void *)0x0) {
          ppvVar29[-2] = pvVar20;
          operator_delete(pvVar20);
        }
      }
      local_2f0 = ppvVar13;
      operator_delete(ppvVar13);
    }
    pIVar15 = local_2e0;
    pIVar28 = local_2d8;
    if (local_2e0 != (Integer *)0x0) {
      while (pIVar28 != pIVar15) {
        *(undefined ***)(pIVar28 + -0x40) = &PTR__Integer_0100c890;
        pvVar20 = *(void **)(pIVar28 + -0x20);
        uVar12 = *(ulong *)(pIVar28 + -0x30);
        if (*(ulong *)(pIVar28 + -0x28) <= *(ulong *)(pIVar28 + -0x30)) {
          uVar12 = *(ulong *)(pIVar28 + -0x28);
        }
        for (; uVar12 != 0; uVar12 = uVar12 - 1) {
          *(undefined4 *)((long)pvVar20 + uVar12 * 4 + -4) = 0;
        }
                    /* try { // try from 00cd468c to 00cd468f has its CatchHandler @ 00cd4854 */
        UnalignedDeallocate(pvVar20);
        pvVar20 = *(void **)(pIVar28 + -0x50);
        *(undefined ***)(pIVar28 + -0x70) = &PTR__Integer_0100c890;
        uVar12 = *(ulong *)(pIVar28 + -0x60);
        if (*(ulong *)(pIVar28 + -0x58) <= *(ulong *)(pIVar28 + -0x60)) {
          uVar12 = *(ulong *)(pIVar28 + -0x58);
        }
        for (; uVar12 != 0; uVar12 = uVar12 - 1) {
          *(undefined4 *)((long)pvVar20 + uVar12 * 4 + -4) = 0;
        }
                    /* try { // try from 00cd4650 to 00cd4653 has its CatchHandler @ 00cd4858 */
        UnalignedDeallocate(pvVar20);
        pIVar28 = pIVar28 + -0x70;
      }
      local_2d8 = pIVar15;
      operator_delete(local_2e0);
    }
    pPVar8 = local_2c8;
    pPVar7 = local_2c0;
    if (local_2c8 != (ProjectivePoint *)0x0) {
      while (pPVar7 != pPVar8) {
        ProjectivePoint::~ProjectivePoint(pPVar7 + -0x90);
        pPVar7 = pPVar7 + -0x90;
      }
      local_2c0 = pPVar8;
      operator_delete(local_2c8);
    }
    ProjectiveDoubling::~ProjectiveDoubling(aPStack_2b0);
  }
  if (*(long *)(lVar4 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


