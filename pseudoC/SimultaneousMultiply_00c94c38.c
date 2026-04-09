// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SimultaneousMultiply
// Entry Point: 00c94c38
// Size: 2300 bytes
// Signature: undefined __thiscall SimultaneousMultiply(AbstractGroup<CryptoPP::EC2NPoint> * this, EC2NPoint * param_1, EC2NPoint * param_2, Integer * param_3, uint param_4)


/* WARNING: Type propagation algorithm not settling */
/* CryptoPP::AbstractGroup<CryptoPP::EC2NPoint>::SimultaneousMultiply(CryptoPP::EC2NPoint*,
   CryptoPP::EC2NPoint const&, CryptoPP::Integer const*, unsigned int) const */

void __thiscall
CryptoPP::AbstractGroup<CryptoPP::EC2NPoint>::SimultaneousMultiply
          (AbstractGroup<CryptoPP::EC2NPoint> *this,EC2NPoint *param_1,EC2NPoint *param_2,
          Integer *param_3,uint param_4)

{
  Integer IVar1;
  undefined **ppuVar2;
  long lVar3;
  Integer *pIVar4;
  bool bVar5;
  byte bVar6;
  int iVar7;
  EC2NPoint *pEVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  int iVar12;
  ulong uVar13;
  undefined8 *puVar14;
  void *pvVar15;
  long lVar16;
  ulong uVar17;
  void **ppvVar18;
  void **ppvVar19;
  undefined8 *puVar20;
  uint *puVar21;
  ulong uVar22;
  Integer *pIVar23;
  long lVar24;
  int *piVar25;
  uint uVar26;
  EC2NPoint *local_128;
  void **local_118;
  Integer *local_110;
  Integer *local_108;
  Integer *local_100;
  void **local_f8;
  void **local_f0;
  void **local_e8;
  undefined **local_e0;
  PolynomialMod2 aPStack_d8 [8];
  ulong local_d0;
  ulong uStack_c8;
  void *local_c0;
  PolynomialMod2 aPStack_b8 [8];
  undefined **local_b0;
  undefined **ppuStack_a8;
  void *local_a0;
  EC2NPoint local_98;
  undefined7 uStack_97;
  void *local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  uVar22 = (ulong)param_4;
  local_f8 = (void **)0x0;
  local_f0 = (void **)0x0;
  local_e8 = (void **)0x0;
  if (param_4 == 0) {
    local_118 = (void **)0x0;
  }
  else {
                    /* try { // try from 00c94c94 to 00c94c9b has its CatchHandler @ 00c95534 */
    local_118 = (void **)operator_new(uVar22 * 0x18);
    uVar13 = (uVar22 * 0x18 - 0x18) / 0x18;
    local_e8 = local_118 + uVar22 * 3;
    local_f8 = local_118;
    memset(local_118,0,uVar13 * 0x18 + 0x18);
    local_f0 = local_118 + uVar13 * 3 + 3;
  }
  ppvVar19 = local_f0;
  local_110 = (Integer *)0x0;
  local_108 = (Integer *)0x0;
  local_100 = (Integer *)0x0;
                    /* try { // try from 00c94d08 to 00c94d13 has its CatchHandler @ 00c95568 */
  std::__ndk1::vector<CryptoPP::WindowSlider,std::__ndk1::allocator<CryptoPP::WindowSlider>>::
  reserve((vector<CryptoPP::WindowSlider,std::__ndk1::allocator<CryptoPP::WindowSlider>> *)
          &local_110,uVar22);
  if (param_4 != 0) {
    uVar13 = 0;
    do {
                    /* try { // try from 00c94d5c to 00c94d77 has its CatchHandler @ 00c955ec */
      bVar6 = (**(code **)(*(long *)this + 0x30))(this);
      WindowSlider::WindowSlider((WindowSlider *)&local_e0,param_3,(bool)(bVar6 & 1),0);
      pIVar4 = local_108;
      if (local_108 < local_100) {
                    /* try { // try from 00c94d84 to 00c94d8f has its CatchHandler @ 00c955c0 */
        Integer::Integer(local_108,(Integer *)&local_e0);
                    /* try { // try from 00c94d94 to 00c94d9b has its CatchHandler @ 00c95578 */
        Integer::Integer(pIVar4 + 0x30,(Integer *)&local_b0);
        local_108 = pIVar4 + 0x70;
        *(undefined8 *)(pIVar4 + 0x68) = uStack_78;
        *(undefined8 *)(pIVar4 + 0x60) = local_80;
      }
      else {
                    /* try { // try from 00c94db0 to 00c94dbb has its CatchHandler @ 00c95570 */
        std::__ndk1::vector<CryptoPP::WindowSlider,std::__ndk1::allocator<CryptoPP::WindowSlider>>::
        __push_back_slow_path<CryptoPP::WindowSlider>
                  ((vector<CryptoPP::WindowSlider,std::__ndk1::allocator<CryptoPP::WindowSlider>> *)
                   &local_110,(WindowSlider *)&local_e0);
      }
      pvVar15 = local_a0;
      if ((void *)CONCAT71(uStack_97,local_98) <= local_a0) {
        pvVar15 = (void *)CONCAT71(uStack_97,local_98);
      }
      for (; pvVar15 != (void *)0x0; pvVar15 = (void *)((long)pvVar15 - 1)) {
        *(undefined4 *)((long)local_90 + (long)pvVar15 * 4 + -4) = 0;
      }
      local_b0 = &PTR__Integer_0100c890;
                    /* try { // try from 00c94de8 to 00c94deb has its CatchHandler @ 00c955e0 */
      UnalignedDeallocate(local_90);
      uVar10 = local_d0;
      if (uStack_c8 <= local_d0) {
        uVar10 = uStack_c8;
      }
      local_e0 = &PTR__Integer_0100c890;
      for (; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)((long)local_c0 + uVar10 * 4 + -4) = 0;
      }
                    /* try { // try from 00c94e24 to 00c94e27 has its CatchHandler @ 00c955dc */
      UnalignedDeallocate(local_c0);
                    /* try { // try from 00c94e34 to 00c94e57 has its CatchHandler @ 00c955f4 */
      WindowSlider::FindNextWindow();
      iVar12 = *(int *)(local_110 + uVar13 * 0x70 + 0x60);
      pEVar8 = (EC2NPoint *)(**(code **)(*(long *)this + 0x18))(this);
      puVar14 = (undefined8 *)local_118[uVar13 * 3 + 1];
      pvVar15 = local_118[uVar13 * 3];
      lVar16 = (long)puVar14 - (long)pvVar15 >> 4;
      uVar17 = 1L << ((ulong)(iVar12 - 1) & 0x3f);
      bVar5 = (ulong)(lVar16 * -0x3333333333333333) <= uVar17;
      uVar10 = uVar17 + lVar16 * 0x3333333333333333;
      if (bVar5 && uVar10 != 0) {
                    /* try { // try from 00c94d40 to 00c94d43 has its CatchHandler @ 00c955f4 */
        std::__ndk1::vector<CryptoPP::EC2NPoint,std::__ndk1::allocator<CryptoPP::EC2NPoint>>::
        __append((vector<CryptoPP::EC2NPoint,std::__ndk1::allocator<CryptoPP::EC2NPoint>> *)
                 (local_118 + uVar13 * 3),uVar10,pEVar8);
      }
      else if (!bVar5) {
        puVar20 = (undefined8 *)((long)pvVar15 + uVar17 * 0x50);
        while (puVar14 != puVar20) {
          puVar14 = puVar14 + -10;
          (**(code **)*puVar14)(puVar14);
        }
        local_118[uVar13 * 3 + 1] = puVar20;
      }
      param_3 = param_3 + 0x30;
      uVar13 = uVar13 + 1;
    } while (uVar13 != uVar22);
  }
  local_e0 = &PTR__EC2NPoint_010026a8;
                    /* try { // try from 00c94f18 to 00c94f1f has its CatchHandler @ 00c95560 */
  PolynomialMod2::PolynomialMod2(aPStack_d8,(PolynomialMod2 *)(param_2 + 8));
                    /* try { // try from 00c94f30 to 00c94f37 has its CatchHandler @ 00c95550 */
  PolynomialMod2::PolynomialMod2(aPStack_b8,(PolynomialMod2 *)(param_2 + 0x28));
  local_98 = param_2[0x48];
  if (param_4 != 0) {
    iVar12 = 0;
    do {
      uVar13 = 0;
      bVar5 = false;
LAB_00c94f80:
      do {
        if ((local_110[uVar13 * 0x70 + 0x6f] == (Integer)0x0) &&
           (iVar12 == *(int *)(local_110 + uVar13 * 0x70 + 100))) {
          pvVar15 = (void *)((long)local_118[uVar13 * 3] +
                            (ulong)(*(uint *)(local_110 + uVar13 * 0x70 + 0x68) >> 1) * 0x50);
          if (local_110[uVar13 * 0x70 + 0x6d] == (Integer)0x0) {
            (**(code **)(*(long *)this + 0x48))(this,pvVar15,&local_e0);
          }
          else {
                    /* try { // try from 00c94fdc to 00c95057 has its CatchHandler @ 00c95600 */
            uVar9 = (**(code **)(*(long *)this + 0x28))(this,&local_e0);
            (**(code **)(*(long *)this + 0x48))(this,pvVar15,uVar9);
          }
          pIVar4 = local_110;
          pIVar23 = local_110 + uVar13 * 0x70;
          iVar7 = Integer::WordCount();
          puVar21 = (uint *)(pIVar4 + uVar13 * 0x70 + 0x60);
          uVar26 = *puVar21;
          IVar1 = pIVar4[uVar13 * 0x70 + 0x6e];
          pIVar4[uVar13 * 0x70 + 0x6e] = (Integer)0x0;
          if (IVar1 != (Integer)0x0) {
            uVar26 = 0;
          }
          uVar17 = (ulong)uVar26;
          uVar10 = Integer::GetBit(pIVar23,uVar17);
          if ((uVar10 & 1) == 0) {
            if (uVar26 <= (uint)(iVar7 * 0x20)) {
              uVar26 = iVar7 * 0x20;
            }
            uVar10 = uVar17;
            do {
              if (uVar26 == uVar10) {
                pIVar4[uVar13 * 0x70 + 0x6f] = (Integer)0x1;
                goto joined_r0x00c95150;
              }
              uVar10 = uVar10 + 1;
                    /* try { // try from 00c9507c to 00c95087 has its CatchHandler @ 00c95604 */
              uVar17 = Integer::GetBit(pIVar23,uVar10);
            } while ((uVar17 & 1) == 0);
            uVar17 = uVar10 & 0xffffffff;
            uVar26 = (uint)uVar10;
          }
                    /* try { // try from 00c95098 to 00c95117 has its CatchHandler @ 00c95600 */
          Integer::operator>>=(pIVar23,uVar17);
          *(uint *)(pIVar4 + uVar13 * 0x70 + 100) = *(int *)(pIVar4 + uVar13 * 0x70 + 100) + uVar26;
          iVar7 = Integer::Modulo(pIVar23,1 << (ulong)(*puVar21 & 0x1f));
          piVar25 = (int *)(pIVar4 + uVar13 * 0x70 + 0x68);
          *piVar25 = iVar7;
          if ((pIVar4[uVar13 * 0x70 + 0x6c] == (Integer)0x0) ||
             (uVar10 = Integer::GetBit(pIVar23,(ulong)*puVar21), (uVar10 & 1) == 0)) {
            pIVar4[uVar13 * 0x70 + 0x6d] = (Integer)0x0;
          }
          else {
            pIVar4[uVar13 * 0x70 + 0x6d] = (Integer)0x1;
            *piVar25 = (1 << (ulong)(*puVar21 & 0x1f)) - *piVar25;
            Integer::operator+=(pIVar23,pIVar4 + uVar13 * 0x70 + 0x30);
          }
        }
joined_r0x00c95150:
        if (!bVar5) {
          bVar5 = local_110[uVar13 * 0x70 + 0x6f] == (Integer)0x0;
          uVar13 = uVar13 + 1;
          if (uVar13 == uVar22) break;
          goto LAB_00c94f80;
        }
        bVar5 = true;
        uVar13 = uVar13 + 1;
      } while (uVar13 != uVar22);
      if (!bVar5) {
        if (param_4 != 0) {
          uVar13 = 0;
          local_128 = param_1;
          do {
            ppvVar18 = local_118 + uVar13 * 3;
            pvVar15 = *ppvVar18;
            lVar16 = ((long)ppvVar18[1] - (long)pvVar15 >> 4) * -0x3333333333333333 + -1;
                    /* try { // try from 00c95220 to 00c95247 has its CatchHandler @ 00c955e4 */
            PolynomialMod2::operator=
                      ((PolynomialMod2 *)(local_128 + 8),
                       (PolynomialMod2 *)((long)pvVar15 + lVar16 * 0x50 + 8));
            PolynomialMod2::operator=
                      ((PolynomialMod2 *)(local_128 + 0x28),
                       (PolynomialMod2 *)((long)pvVar15 + lVar16 * 0x50 + 0x28));
            local_128[0x48] = *(EC2NPoint *)((long)pvVar15 + lVar16 * 0x50 + 0x48);
            uVar10 = ((long)ppvVar18[1] - (long)*ppvVar18 >> 4) * -0x3333333333333333;
            if (1 < uVar10) {
              iVar12 = (int)uVar10;
              if (2 < iVar12) {
                uVar10 = (ulong)(iVar12 - 2);
                lVar16 = uVar10 + 1;
                lVar24 = uVar10 * 0x50;
                do {
                    /* try { // try from 00c952c0 to 00c952e3 has its CatchHandler @ 00c955fc */
                  (**(code **)(*(long *)this + 0x48))
                            (this,(long)local_118[uVar13 * 3] + lVar24,
                             (long)local_118[uVar13 * 3] + lVar24 + 0x50);
                  (**(code **)(*(long *)this + 0x48))
                            (this,local_128,(long)local_118[uVar13 * 3] + lVar24);
                  lVar16 = lVar16 + -1;
                  lVar24 = lVar24 + -0x50;
                } while (1 < lVar16);
              }
                    /* try { // try from 00c9530c to 00c95363 has its CatchHandler @ 00c955e4 */
              (**(code **)(*(long *)this + 0x48))
                        (this,local_118[uVar13 * 3],(long)local_118[uVar13 * 3] + 0x50);
              uVar9 = (**(code **)(*(long *)this + 0x38))(this,local_128);
              lVar16 = (**(code **)(*(long *)this + 0x20))(this,uVar9,local_118[uVar13 * 3]);
              PolynomialMod2::operator=
                        ((PolynomialMod2 *)(local_128 + 8),(PolynomialMod2 *)(lVar16 + 8));
              PolynomialMod2::operator=
                        ((PolynomialMod2 *)(local_128 + 0x28),(PolynomialMod2 *)(lVar16 + 0x28));
              local_128[0x48] = *(EC2NPoint *)(lVar16 + 0x48);
            }
            local_128 = local_128 + 0x50;
            uVar13 = uVar13 + 1;
          } while (uVar13 != uVar22);
        }
        break;
      }
                    /* try { // try from 00c95164 to 00c9518b has its CatchHandler @ 00c955e8 */
      lVar16 = (**(code **)(*(long *)this + 0x38))(this,&local_e0);
      PolynomialMod2::operator=(aPStack_d8,(PolynomialMod2 *)(lVar16 + 8));
      PolynomialMod2::operator=(aPStack_b8,(PolynomialMod2 *)(lVar16 + 0x28));
      local_98 = *(EC2NPoint *)(lVar16 + 0x48);
      iVar12 = iVar12 + 1;
    } while (param_4 != 0);
  }
  ppuVar2 = local_b0;
  if (ppuStack_a8 <= local_b0) {
    ppuVar2 = ppuStack_a8;
  }
  local_e0 = &PTR__EC2NPoint_010026a8;
  for (; ppuVar2 != (undefined **)0x0; ppuVar2 = (undefined **)((long)ppuVar2 + -1)) {
    *(undefined4 *)((long)local_a0 + (long)ppuVar2 * 4 + -4) = 0;
  }
                    /* try { // try from 00c953a0 to 00c953a3 has its CatchHandler @ 00c9554c */
  UnalignedDeallocate(local_a0);
  if (uStack_c8 <= local_d0) {
    local_d0 = uStack_c8;
  }
  for (; local_d0 != 0; local_d0 = local_d0 - 1) {
    *(undefined4 *)((long)local_c0 + local_d0 * 4 + -4) = 0;
  }
                    /* try { // try from 00c953d0 to 00c953d3 has its CatchHandler @ 00c95548 */
  UnalignedDeallocate(local_c0);
  pIVar4 = local_110;
  pIVar23 = local_108;
  if (local_110 != (Integer *)0x0) {
    while (pIVar23 != pIVar4) {
      *(undefined ***)(pIVar23 + -0x40) = &PTR__Integer_0100c890;
      pvVar15 = *(void **)(pIVar23 + -0x20);
      uVar22 = *(ulong *)(pIVar23 + -0x30);
      if (*(ulong *)(pIVar23 + -0x28) <= *(ulong *)(pIVar23 + -0x30)) {
        uVar22 = *(ulong *)(pIVar23 + -0x28);
      }
      for (; uVar22 != 0; uVar22 = uVar22 - 1) {
        *(undefined4 *)((long)pvVar15 + uVar22 * 4 + -4) = 0;
      }
                    /* try { // try from 00c95430 to 00c95433 has its CatchHandler @ 00c955d4 */
      UnalignedDeallocate(pvVar15);
      pvVar15 = *(void **)(pIVar23 + -0x50);
      uVar22 = *(ulong *)(pIVar23 + -0x60);
      if (*(ulong *)(pIVar23 + -0x58) <= *(ulong *)(pIVar23 + -0x60)) {
        uVar22 = *(ulong *)(pIVar23 + -0x58);
      }
      *(undefined ***)(pIVar23 + -0x70) = &PTR__Integer_0100c890;
      for (; uVar22 != 0; uVar22 = uVar22 - 1) {
        *(undefined4 *)((long)pvVar15 + uVar22 * 4 + -4) = 0;
      }
                    /* try { // try from 00c953f4 to 00c953f7 has its CatchHandler @ 00c955d8 */
      UnalignedDeallocate(pvVar15);
      pIVar23 = pIVar23 + -0x70;
    }
    local_108 = pIVar4;
    operator_delete(local_110);
  }
  if (local_118 != (void **)0x0) {
    while (ppvVar18 = ppvVar19, ppvVar18 != local_118) {
      ppvVar19 = ppvVar18 + -3;
      puVar14 = (undefined8 *)*ppvVar19;
      if (puVar14 != (undefined8 *)0x0) {
        puVar20 = (undefined8 *)ppvVar18[-2];
        puVar11 = puVar14;
        if (puVar20 != puVar14) {
          do {
            puVar20 = puVar20 + -10;
            (**(code **)*puVar20)(puVar20);
          } while (puVar20 != puVar14);
          puVar11 = (undefined8 *)*ppvVar19;
        }
        ppvVar18[-2] = puVar14;
        operator_delete(puVar11);
      }
    }
    local_f0 = local_118;
    operator_delete(local_118);
  }
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


