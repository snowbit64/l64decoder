// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SimultaneousMultiply
// Entry Point: 00c83188
// Size: 1988 bytes
// Signature: undefined __thiscall SimultaneousMultiply(AbstractGroup<CryptoPP::Integer> * this, Integer * param_1, Integer * param_2, Integer * param_3, uint param_4)


/* CryptoPP::AbstractGroup<CryptoPP::Integer>::SimultaneousMultiply(CryptoPP::Integer*,
   CryptoPP::Integer const&, CryptoPP::Integer const*, unsigned int) const */

void __thiscall
CryptoPP::AbstractGroup<CryptoPP::Integer>::SimultaneousMultiply
          (AbstractGroup<CryptoPP::Integer> *this,Integer *param_1,Integer *param_2,Integer *param_3
          ,uint param_4)

{
  Integer IVar1;
  long lVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  void **__s;
  Integer *pIVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  int iVar10;
  ulong uVar11;
  undefined8 *puVar12;
  void *pvVar13;
  long lVar14;
  ulong uVar15;
  void **ppvVar16;
  undefined8 *puVar17;
  uint *puVar18;
  void **ppvVar19;
  ulong uVar20;
  Integer *pIVar21;
  int *piVar22;
  long lVar23;
  uint uVar24;
  Integer *local_110;
  Integer *local_108;
  Integer *local_100;
  void **local_f8;
  void **local_f0;
  void **local_e8;
  undefined **local_e0 [2];
  ulong local_d0;
  ulong uStack_c8;
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
  uVar20 = (ulong)param_4;
  local_f8 = (void **)0x0;
  local_f0 = (void **)0x0;
  local_e8 = (void **)0x0;
  if (param_4 == 0) {
    __s = (void **)0x0;
  }
  else {
                    /* try { // try from 00c831e4 to 00c831eb has its CatchHandler @ 00c8394c */
    __s = (void **)operator_new(uVar20 * 0x18);
    uVar11 = (uVar20 * 0x18 - 0x18) / 0x18;
    local_e8 = __s + uVar20 * 3;
    local_f8 = __s;
    memset(__s,0,uVar11 * 0x18 + 0x18);
    local_f0 = __s + uVar11 * 3 + 3;
  }
  ppvVar16 = local_f0;
  local_110 = (Integer *)0x0;
  local_108 = (Integer *)0x0;
  local_100 = (Integer *)0x0;
                    /* try { // try from 00c83254 to 00c8325f has its CatchHandler @ 00c8396c */
  std::__ndk1::vector<CryptoPP::WindowSlider,std::__ndk1::allocator<CryptoPP::WindowSlider>>::
  reserve((vector<CryptoPP::WindowSlider,std::__ndk1::allocator<CryptoPP::WindowSlider>> *)
          &local_110,uVar20);
  if (param_4 != 0) {
    uVar11 = 0;
    do {
                    /* try { // try from 00c832b8 to 00c832d3 has its CatchHandler @ 00c839ec */
      bVar4 = (**(code **)(*(long *)this + 0x30))(this);
      WindowSlider::WindowSlider((WindowSlider *)local_e0,param_3,(bool)(bVar4 & 1),0);
      pIVar6 = local_108;
      if (local_108 < local_100) {
                    /* try { // try from 00c832e0 to 00c832eb has its CatchHandler @ 00c839c4 */
        Integer::Integer(local_108,(Integer *)local_e0);
                    /* try { // try from 00c832f0 to 00c832f7 has its CatchHandler @ 00c8397c */
        Integer::Integer(pIVar6 + 0x30,(Integer *)local_b0);
        local_108 = pIVar6 + 0x70;
        *(undefined8 *)(pIVar6 + 0x68) = uStack_78;
        *(undefined8 *)(pIVar6 + 0x60) = local_80;
      }
      else {
                    /* try { // try from 00c83310 to 00c8331b has its CatchHandler @ 00c83974 */
        std::__ndk1::vector<CryptoPP::WindowSlider,std::__ndk1::allocator<CryptoPP::WindowSlider>>::
        __push_back_slow_path<CryptoPP::WindowSlider>
                  ((vector<CryptoPP::WindowSlider,std::__ndk1::allocator<CryptoPP::WindowSlider>> *)
                   &local_110,(WindowSlider *)local_e0);
      }
      uVar8 = local_a0;
      if (uStack_98 <= local_a0) {
        uVar8 = uStack_98;
      }
      for (; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)((long)local_90 + uVar8 * 4 + -4) = 0;
      }
      local_b0[0] = &PTR__Integer_0100c890;
                    /* try { // try from 00c8334c to 00c8334f has its CatchHandler @ 00c839e4 */
      UnalignedDeallocate(local_90);
      uVar8 = local_d0;
      if (uStack_c8 <= local_d0) {
        uVar8 = uStack_c8;
      }
      local_e0[0] = &PTR__Integer_0100c890;
      for (; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)((long)local_c0 + uVar8 * 4 + -4) = 0;
      }
                    /* try { // try from 00c83388 to 00c8338b has its CatchHandler @ 00c839e0 */
      UnalignedDeallocate(local_c0);
                    /* try { // try from 00c83398 to 00c833bb has its CatchHandler @ 00c839f4 */
      WindowSlider::FindNextWindow();
      iVar10 = *(int *)(local_110 + uVar11 * 0x70 + 0x60);
      pIVar6 = (Integer *)(**(code **)(*(long *)this + 0x18))(this);
      puVar12 = (undefined8 *)__s[uVar11 * 3 + 1];
      pvVar13 = __s[uVar11 * 3];
      lVar14 = (long)puVar12 - (long)pvVar13 >> 4;
      uVar15 = 1L << ((ulong)(iVar10 - 1) & 0x3f);
      bVar3 = (ulong)(lVar14 * -0x5555555555555555) <= uVar15;
      uVar8 = uVar15 + lVar14 * 0x5555555555555555;
      if (bVar3 && uVar8 != 0) {
                    /* try { // try from 00c8329c to 00c8329f has its CatchHandler @ 00c839f4 */
        std::__ndk1::vector<CryptoPP::Integer,std::__ndk1::allocator<CryptoPP::Integer>>::__append
                  ((vector<CryptoPP::Integer,std::__ndk1::allocator<CryptoPP::Integer>> *)
                   (__s + uVar11 * 3),uVar8,pIVar6);
      }
      else if (!bVar3) {
        puVar17 = (undefined8 *)((long)pvVar13 + uVar15 * 0x30);
        while (puVar12 != puVar17) {
          puVar12 = puVar12 + -6;
          (**(code **)*puVar12)(puVar12);
        }
        __s[uVar11 * 3 + 1] = puVar17;
      }
      param_3 = param_3 + 0x30;
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar20);
  }
                    /* try { // try from 00c8343c to 00c83447 has its CatchHandler @ 00c83964 */
  Integer::Integer((Integer *)local_e0,param_2);
  if (param_4 == 0) {
LAB_00c837ac:
    if (uStack_c8 <= local_d0) {
      local_d0 = uStack_c8;
    }
    local_e0[0] = &PTR__Integer_0100c890;
    for (; local_d0 != 0; local_d0 = local_d0 - 1) {
      *(undefined4 *)((long)local_c0 + local_d0 * 4 + -4) = 0;
    }
                    /* try { // try from 00c837e8 to 00c837eb has its CatchHandler @ 00c83960 */
    UnalignedDeallocate(local_c0);
    pIVar6 = local_110;
    pIVar21 = local_108;
    if (local_110 != (Integer *)0x0) {
      while (pIVar21 != pIVar6) {
        *(undefined ***)(pIVar21 + -0x40) = &PTR__Integer_0100c890;
        pvVar13 = *(void **)(pIVar21 + -0x20);
        uVar20 = *(ulong *)(pIVar21 + -0x30);
        if (*(ulong *)(pIVar21 + -0x28) <= *(ulong *)(pIVar21 + -0x30)) {
          uVar20 = *(ulong *)(pIVar21 + -0x28);
        }
        for (; uVar20 != 0; uVar20 = uVar20 - 1) {
          *(undefined4 *)((long)pvVar13 + uVar20 * 4 + -4) = 0;
        }
                    /* try { // try from 00c83844 to 00c83847 has its CatchHandler @ 00c839d8 */
        UnalignedDeallocate(pvVar13);
        pvVar13 = *(void **)(pIVar21 + -0x50);
        uVar20 = *(ulong *)(pIVar21 + -0x60);
        if (*(ulong *)(pIVar21 + -0x58) <= *(ulong *)(pIVar21 + -0x60)) {
          uVar20 = *(ulong *)(pIVar21 + -0x58);
        }
        *(undefined ***)(pIVar21 + -0x70) = &PTR__Integer_0100c890;
        for (; uVar20 != 0; uVar20 = uVar20 - 1) {
          *(undefined4 *)((long)pvVar13 + uVar20 * 4 + -4) = 0;
        }
                    /* try { // try from 00c83808 to 00c8380b has its CatchHandler @ 00c839dc */
        UnalignedDeallocate(pvVar13);
        pIVar21 = pIVar21 + -0x70;
      }
      local_108 = pIVar6;
      operator_delete(local_110);
    }
    if (__s != (void **)0x0) {
      while (ppvVar19 = ppvVar16, ppvVar19 != __s) {
        ppvVar16 = ppvVar19 + -3;
        puVar12 = (undefined8 *)*ppvVar16;
        if (puVar12 != (undefined8 *)0x0) {
          puVar17 = (undefined8 *)ppvVar19[-2];
          puVar9 = puVar12;
          if (puVar17 != puVar12) {
            do {
              puVar17 = puVar17 + -6;
              (**(code **)*puVar17)(puVar17);
            } while (puVar17 != puVar12);
            puVar9 = (undefined8 *)*ppvVar16;
          }
          ppvVar19[-2] = puVar12;
          operator_delete(puVar9);
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
  iVar10 = 0;
  do {
    uVar11 = 0;
    bVar4 = 0;
LAB_00c83484:
    do {
      if ((local_110[uVar11 * 0x70 + 0x6f] == (Integer)0x0) &&
         (iVar10 == *(int *)(local_110 + uVar11 * 0x70 + 100))) {
        pvVar13 = (void *)((long)__s[uVar11 * 3] +
                          (ulong)(*(uint *)(local_110 + uVar11 * 0x70 + 0x68) >> 1) * 0x30);
        if (local_110[uVar11 * 0x70 + 0x6d] == (Integer)0x0) {
          (**(code **)(*(long *)this + 0x48))(this,pvVar13,local_e0);
        }
        else {
                    /* try { // try from 00c834e0 to 00c83557 has its CatchHandler @ 00c83a04 */
          uVar7 = (**(code **)(*(long *)this + 0x28))(this,local_e0);
          (**(code **)(*(long *)this + 0x48))(this,pvVar13,uVar7);
        }
        pIVar6 = local_110;
        pIVar21 = local_110 + uVar11 * 0x70;
        iVar5 = Integer::WordCount();
        puVar18 = (uint *)(pIVar6 + uVar11 * 0x70 + 0x60);
        uVar24 = *puVar18;
        IVar1 = pIVar6[uVar11 * 0x70 + 0x6e];
        pIVar6[uVar11 * 0x70 + 0x6e] = (Integer)0x0;
        if (IVar1 != (Integer)0x0) {
          uVar24 = 0;
        }
        uVar15 = (ulong)uVar24;
        uVar8 = Integer::GetBit(pIVar21,uVar15);
        if ((uVar8 & 1) == 0) {
          if (uVar24 <= (uint)(iVar5 * 0x20)) {
            uVar24 = iVar5 * 0x20;
          }
          uVar8 = uVar15;
          do {
            if (uVar24 == uVar8) {
              pIVar6[uVar11 * 0x70 + 0x6f] = (Integer)0x1;
              goto joined_r0x00c83648;
            }
            uVar8 = uVar8 + 1;
                    /* try { // try from 00c8357c to 00c83587 has its CatchHandler @ 00c83a08 */
            uVar15 = Integer::GetBit(pIVar21,uVar8);
          } while ((uVar15 & 1) == 0);
          uVar15 = uVar8 & 0xffffffff;
          uVar24 = (uint)uVar8;
        }
                    /* try { // try from 00c83598 to 00c83617 has its CatchHandler @ 00c83a04 */
        Integer::operator>>=(pIVar21,uVar15);
        *(uint *)(pIVar6 + uVar11 * 0x70 + 100) = *(int *)(pIVar6 + uVar11 * 0x70 + 100) + uVar24;
        iVar5 = Integer::Modulo(pIVar21,1 << (ulong)(*puVar18 & 0x1f));
        piVar22 = (int *)(pIVar6 + uVar11 * 0x70 + 0x68);
        *piVar22 = iVar5;
        if ((pIVar6[uVar11 * 0x70 + 0x6c] == (Integer)0x0) ||
           (uVar8 = Integer::GetBit(pIVar21,(ulong)*puVar18), (uVar8 & 1) == 0)) {
          pIVar6[uVar11 * 0x70 + 0x6d] = (Integer)0x0;
        }
        else {
          pIVar6[uVar11 * 0x70 + 0x6d] = (Integer)0x1;
          *piVar22 = (1 << (ulong)(*puVar18 & 0x1f)) - *piVar22;
          Integer::operator+=(pIVar21,pIVar6 + uVar11 * 0x70 + 0x30);
        }
      }
joined_r0x00c83648:
      if (bVar4 == 0) {
        lVar14 = uVar11 * 0x70;
        uVar11 = uVar11 + 1;
        bVar4 = (byte)local_110[lVar14 + 0x6f] ^ 1;
        if (uVar11 == uVar20) {
          if (local_110[lVar14 + 0x6f] != (Integer)0x0) {
            if (param_4 != 0) {
              uVar11 = 0;
              do {
                ppvVar19 = __s + uVar11 * 3;
                    /* try { // try from 00c836c4 to 00c836cb has its CatchHandler @ 00c839e8 */
                Integer::operator=(param_1,(Integer *)((long)ppvVar19[1] + -0x30));
                uVar8 = ((long)ppvVar19[1] - (long)*ppvVar19 >> 4) * -0x5555555555555555;
                if (1 < uVar8) {
                  iVar10 = (int)uVar8;
                  if (2 < iVar10) {
                    uVar8 = (ulong)(iVar10 - 2);
                    lVar14 = uVar8 + 1;
                    lVar23 = uVar8 * 0x30;
                    do {
                    /* try { // try from 00c8371c to 00c8373f has its CatchHandler @ 00c83a00 */
                      (**(code **)(*(long *)this + 0x48))
                                (this,(long)__s[uVar11 * 3] + lVar23,
                                 (long)__s[uVar11 * 3] + lVar23 + 0x30);
                      (**(code **)(*(long *)this + 0x48))
                                (this,param_1,(long)__s[uVar11 * 3] + lVar23);
                      lVar14 = lVar14 + -1;
                      lVar23 = lVar23 + -0x30;
                    } while (1 < lVar14);
                  }
                    /* try { // try from 00c83768 to 00c837a7 has its CatchHandler @ 00c839e8 */
                  (**(code **)(*(long *)this + 0x48))
                            (this,__s[uVar11 * 3],(long)__s[uVar11 * 3] + 0x30);
                  uVar7 = (**(code **)(*(long *)this + 0x38))(this,param_1);
                  pIVar6 = (Integer *)
                           (**(code **)(*(long *)this + 0x20))(this,uVar7,__s[uVar11 * 3]);
                  Integer::operator=(param_1,pIVar6);
                }
                param_1 = param_1 + 0x30;
                uVar11 = uVar11 + 1;
              } while (uVar11 != uVar20);
            }
            goto LAB_00c837ac;
          }
          break;
        }
        goto LAB_00c83484;
      }
      uVar11 = uVar11 + 1;
      bVar4 = 1;
    } while (uVar11 != uVar20);
                    /* try { // try from 00c83660 to 00c83673 has its CatchHandler @ 00c839fc */
    pIVar6 = (Integer *)(**(code **)(*(long *)this + 0x38))(this,local_e0);
    Integer::operator=((Integer *)local_e0,pIVar6);
    iVar10 = iVar10 + 1;
  } while( true );
}


