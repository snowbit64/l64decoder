// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SimultaneousMultiply
// Entry Point: 00c8fec0
// Size: 1968 bytes
// Signature: undefined __thiscall SimultaneousMultiply(AbstractGroup<CryptoPP::PolynomialMod2> * this, PolynomialMod2 * param_1, PolynomialMod2 * param_2, Integer * param_3, uint param_4)


/* CryptoPP::AbstractGroup<CryptoPP::PolynomialMod2>::SimultaneousMultiply(CryptoPP::PolynomialMod2*,
   CryptoPP::PolynomialMod2 const&, CryptoPP::Integer const*, unsigned int) const */

void __thiscall
CryptoPP::AbstractGroup<CryptoPP::PolynomialMod2>::SimultaneousMultiply
          (AbstractGroup<CryptoPP::PolynomialMod2> *this,PolynomialMod2 *param_1,
          PolynomialMod2 *param_2,Integer *param_3,uint param_4)

{
  Integer IVar1;
  long lVar2;
  Integer *pIVar3;
  byte bVar4;
  int iVar5;
  long *__s;
  PolynomialMod2 *pPVar6;
  void *pvVar7;
  undefined8 uVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  uint *puVar16;
  long *plVar17;
  ulong uVar18;
  Integer *pIVar19;
  int *piVar20;
  uint uVar21;
  Integer *local_110;
  Integer *local_108;
  Integer *local_100;
  long *local_f8;
  long *local_f0;
  long *local_e8;
  undefined **local_e0;
  void *local_d8;
  void *local_d0;
  void *local_c8;
  void *local_c0;
  undefined **local_b0 [2];
  ulong local_a0;
  ulong uStack_98;
  void *local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  uVar18 = (ulong)param_4;
  local_f8 = (long *)0x0;
  local_f0 = (long *)0x0;
  local_e8 = (long *)0x0;
  if (param_4 == 0) {
    __s = (long *)0x0;
  }
  else {
                    /* try { // try from 00c8ff1c to 00c8ff23 has its CatchHandler @ 00c90670 */
    __s = (long *)operator_new(uVar18 * 0x18);
    uVar10 = (uVar18 * 0x18 - 0x18) / 0x18;
    local_e8 = __s + uVar18 * 3;
    local_f8 = __s;
    memset(__s,0,uVar10 * 0x18 + 0x18);
    local_f0 = __s + uVar10 * 3 + 3;
  }
  plVar15 = local_f0;
  local_110 = (Integer *)0x0;
  local_108 = (Integer *)0x0;
  local_100 = (Integer *)0x0;
                    /* try { // try from 00c8ff90 to 00c8ff9b has its CatchHandler @ 00c90684 */
  std::__ndk1::vector<CryptoPP::WindowSlider,std::__ndk1::allocator<CryptoPP::WindowSlider>>::
  reserve((vector<CryptoPP::WindowSlider,std::__ndk1::allocator<CryptoPP::WindowSlider>> *)
          &local_110,uVar18);
  if (param_4 != 0) {
    uVar10 = 0;
    do {
                    /* try { // try from 00c8fff0 to 00c90007 has its CatchHandler @ 00c90704 */
      bVar4 = (**(code **)(*(long *)this + 0x30))();
      WindowSlider::WindowSlider((WindowSlider *)&local_e0,param_3,(bool)(bVar4 & 1),0);
      pIVar3 = local_108;
      if (local_108 < local_100) {
                    /* try { // try from 00c90014 to 00c9001f has its CatchHandler @ 00c9068c */
        Integer::Integer(local_108,(Integer *)&local_e0);
                    /* try { // try from 00c90024 to 00c9002b has its CatchHandler @ 00c9069c */
        Integer::Integer(pIVar3 + 0x30,(Integer *)local_b0);
        local_108 = pIVar3 + 0x70;
        *(undefined8 *)(pIVar3 + 0x68) = uStack_78;
        *(undefined8 *)(pIVar3 + 0x60) = local_80;
      }
      else {
                    /* try { // try from 00c90044 to 00c9004f has its CatchHandler @ 00c90694 */
        std::__ndk1::vector<CryptoPP::WindowSlider,std::__ndk1::allocator<CryptoPP::WindowSlider>>::
        __push_back_slow_path<CryptoPP::WindowSlider>
                  ((vector<CryptoPP::WindowSlider,std::__ndk1::allocator<CryptoPP::WindowSlider>> *)
                   &local_110,(WindowSlider *)&local_e0);
      }
      uVar13 = local_a0;
      if (uStack_98 <= local_a0) {
        uVar13 = uStack_98;
      }
      for (; uVar13 != 0; uVar13 = uVar13 - 1) {
        *(undefined4 *)((long)local_90 + uVar13 * 4 + -4) = 0;
      }
      local_b0[0] = &PTR__Integer_0100c890;
                    /* try { // try from 00c9007c to 00c9007f has its CatchHandler @ 00c906fc */
      UnalignedDeallocate(local_90);
      pvVar7 = local_d0;
      if (local_c8 <= local_d0) {
        pvVar7 = local_c8;
      }
      local_e0 = &PTR__Integer_0100c890;
      for (; pvVar7 != (void *)0x0; pvVar7 = (void *)((long)pvVar7 - 1)) {
        *(undefined4 *)((long)local_c0 + (long)pvVar7 * 4 + -4) = 0;
      }
                    /* try { // try from 00c900b8 to 00c900bb has its CatchHandler @ 00c906f8 */
      UnalignedDeallocate(local_c0);
                    /* try { // try from 00c900c8 to 00c900e7 has its CatchHandler @ 00c9070c */
      WindowSlider::FindNextWindow();
      iVar9 = *(int *)(local_110 + uVar10 * 0x70 + 0x60);
      pPVar6 = (PolynomialMod2 *)(**(code **)(*(long *)this + 0x18))();
      uVar13 = 1L << ((ulong)(iVar9 - 1) & 0x3f);
      lVar11 = __s[uVar10 * 3 + 1];
      lVar12 = __s[uVar10 * 3];
      uVar14 = lVar11 - lVar12 >> 5;
      if (uVar14 <= uVar13 && uVar13 - uVar14 != 0) {
                    /* try { // try from 00c8ffd0 to 00c8ffd3 has its CatchHandler @ 00c9070c */
        std::__ndk1::
        vector<CryptoPP::PolynomialMod2,std::__ndk1::allocator<CryptoPP::PolynomialMod2>>::__append
                  ((vector<CryptoPP::PolynomialMod2,std::__ndk1::allocator<CryptoPP::PolynomialMod2>>
                    *)(__s + uVar10 * 3),uVar13 - uVar14,pPVar6);
      }
      else if (uVar14 > uVar13) {
        lVar12 = lVar12 + uVar13 * 0x20;
        while (lVar11 != lVar12) {
          pvVar7 = *(void **)(lVar11 + -8);
          uVar13 = *(ulong *)(lVar11 + -0x18);
          if (*(ulong *)(lVar11 + -0x10) <= *(ulong *)(lVar11 + -0x18)) {
            uVar13 = *(ulong *)(lVar11 + -0x10);
          }
          for (; uVar13 != 0; uVar13 = uVar13 - 1) {
            *(undefined4 *)((long)pvVar7 + uVar13 * 4 + -4) = 0;
          }
                    /* try { // try from 00c90128 to 00c9012b has its CatchHandler @ 00c90718 */
          UnalignedDeallocate(pvVar7);
          lVar11 = lVar11 + -0x20;
        }
        __s[uVar10 * 3 + 1] = lVar12;
      }
      param_3 = param_3 + 0x30;
      uVar10 = uVar10 + 1;
    } while (uVar10 != uVar18);
  }
                    /* try { // try from 00c90170 to 00c9017b has its CatchHandler @ 00c9067c */
  PolynomialMod2::PolynomialMod2((PolynomialMod2 *)&local_e0,param_2);
  if (param_4 == 0) {
LAB_00c904d0:
    if (local_d0 <= local_d8) {
      local_d8 = local_d0;
    }
    for (; local_d8 != (void *)0x0; local_d8 = (void *)((long)local_d8 - 1)) {
      *(undefined4 *)((long)local_c8 + (long)local_d8 * 4 + -4) = 0;
    }
                    /* try { // try from 00c904fc to 00c904ff has its CatchHandler @ 00c90678 */
    UnalignedDeallocate(local_c8);
    pIVar3 = local_110;
    pIVar19 = local_108;
    if (local_110 != (Integer *)0x0) {
      while (pIVar19 != pIVar3) {
        *(undefined ***)(pIVar19 + -0x40) = &PTR__Integer_0100c890;
        pvVar7 = *(void **)(pIVar19 + -0x20);
        uVar18 = *(ulong *)(pIVar19 + -0x30);
        if (*(ulong *)(pIVar19 + -0x28) <= *(ulong *)(pIVar19 + -0x30)) {
          uVar18 = *(ulong *)(pIVar19 + -0x28);
        }
        for (; uVar18 != 0; uVar18 = uVar18 - 1) {
          *(undefined4 *)((long)pvVar7 + uVar18 * 4 + -4) = 0;
        }
                    /* try { // try from 00c90558 to 00c9055b has its CatchHandler @ 00c906f0 */
        UnalignedDeallocate(pvVar7);
        pvVar7 = *(void **)(pIVar19 + -0x50);
        uVar18 = *(ulong *)(pIVar19 + -0x60);
        if (*(ulong *)(pIVar19 + -0x58) <= *(ulong *)(pIVar19 + -0x60)) {
          uVar18 = *(ulong *)(pIVar19 + -0x58);
        }
        *(undefined ***)(pIVar19 + -0x70) = &PTR__Integer_0100c890;
        for (; uVar18 != 0; uVar18 = uVar18 - 1) {
          *(undefined4 *)((long)pvVar7 + uVar18 * 4 + -4) = 0;
        }
                    /* try { // try from 00c9051c to 00c9051f has its CatchHandler @ 00c906f4 */
        UnalignedDeallocate(pvVar7);
        pIVar19 = pIVar19 + -0x70;
      }
      local_108 = pIVar3;
      operator_delete(local_110);
    }
    if (__s != (long *)0x0) {
      while (plVar17 = plVar15, plVar17 != __s) {
        plVar15 = plVar17 + -3;
        lVar12 = *plVar15;
        if (lVar12 != 0) {
          lVar11 = plVar17[-2];
          while (lVar11 != lVar12) {
            pvVar7 = *(void **)(lVar11 + -8);
            uVar18 = *(ulong *)(lVar11 + -0x18);
            if (*(ulong *)(lVar11 + -0x10) <= *(ulong *)(lVar11 + -0x18)) {
              uVar18 = *(ulong *)(lVar11 + -0x10);
            }
            for (; uVar18 != 0; uVar18 = uVar18 - 1) {
              *(undefined4 *)((long)pvVar7 + uVar18 * 4 + -4) = 0;
            }
                    /* try { // try from 00c905e4 to 00c905e7 has its CatchHandler @ 00c90720 */
            UnalignedDeallocate(pvVar7);
            lVar11 = lVar11 + -0x20;
          }
          plVar17[-2] = lVar12;
          operator_delete((void *)plVar17[-3]);
        }
      }
      local_f0 = __s;
      operator_delete(__s);
    }
    if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  iVar9 = 0;
  do {
    uVar10 = 0;
    bVar4 = 0;
LAB_00c901bc:
    do {
      if ((local_110[uVar10 * 0x70 + 0x6f] == (Integer)0x0) &&
         (iVar9 == *(int *)(local_110 + uVar10 * 0x70 + 100))) {
        lVar12 = __s[uVar10 * 3] +
                 ((ulong)*(uint *)(local_110 + uVar10 * 0x70 + 0x68) & 0xfffffffe) * 0x10;
        if (local_110[uVar10 * 0x70 + 0x6d] == (Integer)0x0) {
          (**(code **)(*(long *)this + 0x48))(this,lVar12,&local_e0);
        }
        else {
                    /* try { // try from 00c90218 to 00c9028f has its CatchHandler @ 00c90724 */
          uVar8 = (**(code **)(*(long *)this + 0x28))(this,&local_e0);
          (**(code **)(*(long *)this + 0x48))(this,lVar12,uVar8);
        }
        pIVar3 = local_110;
        pIVar19 = local_110 + uVar10 * 0x70;
        iVar5 = Integer::WordCount();
        puVar16 = (uint *)(pIVar3 + uVar10 * 0x70 + 0x60);
        uVar21 = *puVar16;
        IVar1 = pIVar3[uVar10 * 0x70 + 0x6e];
        pIVar3[uVar10 * 0x70 + 0x6e] = (Integer)0x0;
        if (IVar1 != (Integer)0x0) {
          uVar21 = 0;
        }
        uVar14 = (ulong)uVar21;
        uVar13 = Integer::GetBit(pIVar19,uVar14);
        if ((uVar13 & 1) == 0) {
          if (uVar21 <= (uint)(iVar5 * 0x20)) {
            uVar21 = iVar5 * 0x20;
          }
          uVar13 = uVar14;
          do {
            if (uVar21 == uVar13) {
              pIVar3[uVar10 * 0x70 + 0x6f] = (Integer)0x1;
              goto joined_r0x00c90380;
            }
            uVar13 = uVar13 + 1;
                    /* try { // try from 00c902b4 to 00c902bf has its CatchHandler @ 00c90728 */
            uVar14 = Integer::GetBit(pIVar19,uVar13);
          } while ((uVar14 & 1) == 0);
          uVar14 = uVar13 & 0xffffffff;
          uVar21 = (uint)uVar13;
        }
                    /* try { // try from 00c902d0 to 00c9034f has its CatchHandler @ 00c90724 */
        Integer::operator>>=(pIVar19,uVar14);
        *(uint *)(pIVar3 + uVar10 * 0x70 + 100) = *(int *)(pIVar3 + uVar10 * 0x70 + 100) + uVar21;
        iVar5 = Integer::Modulo(pIVar19,1 << (ulong)(*puVar16 & 0x1f));
        piVar20 = (int *)(pIVar3 + uVar10 * 0x70 + 0x68);
        *piVar20 = iVar5;
        if ((pIVar3[uVar10 * 0x70 + 0x6c] == (Integer)0x0) ||
           (uVar13 = Integer::GetBit(pIVar19,(ulong)*puVar16), (uVar13 & 1) == 0)) {
          pIVar3[uVar10 * 0x70 + 0x6d] = (Integer)0x0;
        }
        else {
          pIVar3[uVar10 * 0x70 + 0x6d] = (Integer)0x1;
          *piVar20 = (1 << (ulong)(*puVar16 & 0x1f)) - *piVar20;
          Integer::operator+=(pIVar19,pIVar3 + uVar10 * 0x70 + 0x30);
        }
      }
joined_r0x00c90380:
      if (bVar4 == 0) {
        lVar12 = uVar10 * 0x70;
        uVar10 = uVar10 + 1;
        bVar4 = (byte)local_110[lVar12 + 0x6f] ^ 1;
        if (uVar10 == uVar18) {
          if (local_110[lVar12 + 0x6f] != (Integer)0x0) {
            if (param_4 != 0) {
              uVar10 = 0;
              do {
                plVar17 = __s + uVar10 * 3;
                    /* try { // try from 00c903f0 to 00c903f7 has its CatchHandler @ 00c90700 */
                PolynomialMod2::operator=(param_1,(PolynomialMod2 *)(plVar17[1] + -0x20));
                uVar13 = plVar17[1] - *plVar17;
                if (0x20 < uVar13) {
                  iVar9 = (int)(uVar13 >> 5);
                  if (2 < iVar9) {
                    uVar13 = (ulong)(iVar9 - 2);
                    lVar12 = uVar13 + 1;
                    lVar11 = uVar13 << 5;
                    do {
                    /* try { // try from 00c90440 to 00c90463 has its CatchHandler @ 00c9071c */
                      (**(code **)(*(long *)this + 0x48))
                                (this,__s[uVar10 * 3] + lVar11,__s[uVar10 * 3] + lVar11 + 0x20);
                      (**(code **)(*(long *)this + 0x48))(this,param_1,__s[uVar10 * 3] + lVar11);
                      lVar12 = lVar12 + -1;
                      lVar11 = lVar11 + -0x20;
                    } while (1 < lVar12);
                  }
                    /* try { // try from 00c90488 to 00c904cb has its CatchHandler @ 00c90700 */
                  (**(code **)(*(long *)this + 0x48))(this,__s[uVar10 * 3],__s[uVar10 * 3] + 0x20);
                  uVar8 = (**(code **)(*(long *)this + 0x38))(this,param_1);
                  pPVar6 = (PolynomialMod2 *)
                           (**(code **)(*(long *)this + 0x20))(this,uVar8,__s[uVar10 * 3]);
                  PolynomialMod2::operator=(param_1,pPVar6);
                }
                param_1 = param_1 + 0x20;
                uVar10 = uVar10 + 1;
              } while (uVar10 != uVar18);
            }
            goto LAB_00c904d0;
          }
          break;
        }
        goto LAB_00c901bc;
      }
      uVar10 = uVar10 + 1;
      bVar4 = 1;
    } while (uVar10 != uVar18);
                    /* try { // try from 00c90398 to 00c903ab has its CatchHandler @ 00c90714 */
    pPVar6 = (PolynomialMod2 *)(**(code **)(*(long *)this + 0x38))(this,&local_e0);
    PolynomialMod2::operator=((PolynomialMod2 *)&local_e0,pPVar6);
    iVar9 = iVar9 + 1;
  } while( true );
}


