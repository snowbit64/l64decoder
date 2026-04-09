// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SimultaneousMultiply
// Entry Point: 00c93158
// Size: 2328 bytes
// Signature: undefined __thiscall SimultaneousMultiply(AbstractGroup<CryptoPP::ECPPoint> * this, ECPPoint * param_1, ECPPoint * param_2, Integer * param_3, uint param_4)


/* WARNING: Type propagation algorithm not settling */
/* CryptoPP::AbstractGroup<CryptoPP::ECPPoint>::SimultaneousMultiply(CryptoPP::ECPPoint*,
   CryptoPP::ECPPoint const&, CryptoPP::Integer const*, unsigned int) const */

void __thiscall
CryptoPP::AbstractGroup<CryptoPP::ECPPoint>::SimultaneousMultiply
          (AbstractGroup<CryptoPP::ECPPoint> *this,ECPPoint *param_1,ECPPoint *param_2,
          Integer *param_3,uint param_4)

{
  Integer IVar1;
  long lVar2;
  Integer *pIVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  ECPPoint *pEVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  int iVar11;
  ulong uVar12;
  undefined8 *puVar13;
  void *pvVar14;
  long lVar15;
  ulong uVar16;
  void **ppvVar17;
  void **ppvVar18;
  undefined8 *puVar19;
  uint *puVar20;
  long lVar21;
  ulong uVar22;
  Integer *pIVar23;
  int *piVar24;
  uint uVar25;
  ECPPoint *local_128;
  void **local_118;
  Integer *local_110;
  Integer *local_108;
  Integer *local_100;
  void **local_f8;
  void **local_f0;
  void **local_e8;
  undefined **local_e0;
  undefined **local_d8;
  void *local_d0;
  void *local_c8;
  void *local_c0;
  void *local_b8;
  undefined **local_b0;
  undefined **local_a8;
  void *local_a0;
  void *local_98;
  void *local_90;
  void *local_88;
  undefined8 local_80;
  ECPPoint EStack_78;
  undefined7 uStack_77;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  uVar22 = (ulong)param_4;
  local_f8 = (void **)0x0;
  local_f0 = (void **)0x0;
  local_e8 = (void **)0x0;
  if (param_4 == 0) {
    local_118 = (void **)0x0;
  }
  else {
                    /* try { // try from 00c931b4 to 00c931bb has its CatchHandler @ 00c93a70 */
    local_118 = (void **)operator_new(uVar22 * 0x18);
    uVar12 = (uVar22 * 0x18 - 0x18) / 0x18;
    local_e8 = local_118 + uVar22 * 3;
    local_f8 = local_118;
    memset(local_118,0,uVar12 * 0x18 + 0x18);
    local_f0 = local_118 + uVar12 * 3 + 3;
  }
  ppvVar18 = local_f0;
  local_110 = (Integer *)0x0;
  local_108 = (Integer *)0x0;
  local_100 = (Integer *)0x0;
                    /* try { // try from 00c93228 to 00c93233 has its CatchHandler @ 00c93aa4 */
  std::__ndk1::vector<CryptoPP::WindowSlider,std::__ndk1::allocator<CryptoPP::WindowSlider>>::
  reserve((vector<CryptoPP::WindowSlider,std::__ndk1::allocator<CryptoPP::WindowSlider>> *)
          &local_110,uVar22);
  if (param_4 != 0) {
    uVar12 = 0;
    do {
                    /* try { // try from 00c9327c to 00c93297 has its CatchHandler @ 00c93b28 */
      bVar5 = (**(code **)(*(long *)this + 0x30))(this);
      WindowSlider::WindowSlider((WindowSlider *)&local_e0,param_3,(bool)(bVar5 & 1),0);
      pIVar3 = local_108;
      if (local_108 < local_100) {
                    /* try { // try from 00c932a4 to 00c932af has its CatchHandler @ 00c93afc */
        Integer::Integer(local_108,(Integer *)&local_e0);
                    /* try { // try from 00c932b4 to 00c932bb has its CatchHandler @ 00c93ab4 */
        Integer::Integer(pIVar3 + 0x30,(Integer *)&local_b0);
        local_108 = pIVar3 + 0x70;
        *(ulong *)(pIVar3 + 0x68) = CONCAT71(uStack_77,EStack_78);
        *(undefined8 *)(pIVar3 + 0x60) = local_80;
      }
      else {
                    /* try { // try from 00c932d0 to 00c932db has its CatchHandler @ 00c93aac */
        std::__ndk1::vector<CryptoPP::WindowSlider,std::__ndk1::allocator<CryptoPP::WindowSlider>>::
        __push_back_slow_path<CryptoPP::WindowSlider>
                  ((vector<CryptoPP::WindowSlider,std::__ndk1::allocator<CryptoPP::WindowSlider>> *)
                   &local_110,(WindowSlider *)&local_e0);
      }
      pvVar14 = local_a0;
      if (local_98 <= local_a0) {
        pvVar14 = local_98;
      }
      for (; pvVar14 != (void *)0x0; pvVar14 = (void *)((long)pvVar14 - 1)) {
        *(undefined4 *)((long)local_90 + (long)pvVar14 * 4 + -4) = 0;
      }
      local_b0 = &PTR__Integer_0100c890;
                    /* try { // try from 00c93308 to 00c9330b has its CatchHandler @ 00c93b1c */
      UnalignedDeallocate(local_90);
      pvVar14 = local_d0;
      if (local_c8 <= local_d0) {
        pvVar14 = local_c8;
      }
      local_e0 = &PTR__Integer_0100c890;
      for (; pvVar14 != (void *)0x0; pvVar14 = (void *)((long)pvVar14 - 1)) {
        *(undefined4 *)((long)local_c0 + (long)pvVar14 * 4 + -4) = 0;
      }
                    /* try { // try from 00c93344 to 00c93347 has its CatchHandler @ 00c93b18 */
      UnalignedDeallocate(local_c0);
                    /* try { // try from 00c93354 to 00c93377 has its CatchHandler @ 00c93b30 */
      WindowSlider::FindNextWindow();
      iVar11 = *(int *)(local_110 + uVar12 * 0x70 + 0x60);
      pEVar7 = (ECPPoint *)(**(code **)(*(long *)this + 0x18))(this);
      puVar13 = (undefined8 *)local_118[uVar12 * 3 + 1];
      pvVar14 = local_118[uVar12 * 3];
      lVar15 = (long)puVar13 - (long)pvVar14 >> 4;
      uVar16 = 1L << ((ulong)(iVar11 - 1) & 0x3f);
      bVar4 = (ulong)(lVar15 * 0x6db6db6db6db6db7) <= uVar16;
      uVar9 = uVar16 + lVar15 * -0x6db6db6db6db6db7;
      if (bVar4 && uVar9 != 0) {
                    /* try { // try from 00c93260 to 00c93263 has its CatchHandler @ 00c93b30 */
        std::__ndk1::vector<CryptoPP::ECPPoint,std::__ndk1::allocator<CryptoPP::ECPPoint>>::__append
                  ((vector<CryptoPP::ECPPoint,std::__ndk1::allocator<CryptoPP::ECPPoint>> *)
                   (local_118 + uVar12 * 3),uVar9,pEVar7);
      }
      else if (!bVar4) {
        puVar19 = (undefined8 *)((long)pvVar14 + uVar16 * 0x70);
        while (puVar13 != puVar19) {
          puVar13 = puVar13 + -0xe;
          (**(code **)*puVar13)(puVar13);
        }
        local_118[uVar12 * 3 + 1] = puVar19;
      }
      param_3 = param_3 + 0x30;
      uVar12 = uVar12 + 1;
    } while (uVar12 != uVar22);
  }
  local_e0 = &PTR__ECPPoint_00fe9fd8;
                    /* try { // try from 00c93440 to 00c93447 has its CatchHandler @ 00c93a9c */
  Integer::Integer((Integer *)&local_d8,(Integer *)(param_2 + 8));
                    /* try { // try from 00c93458 to 00c9345f has its CatchHandler @ 00c93a8c */
  Integer::Integer((Integer *)&local_a8,(Integer *)(param_2 + 0x38));
  EStack_78 = param_2[0x68];
  if (param_4 != 0) {
    iVar11 = 0;
    do {
      uVar12 = 0;
      bVar4 = false;
LAB_00c934a8:
      do {
        if ((local_110[uVar12 * 0x70 + 0x6f] == (Integer)0x0) &&
           (iVar11 == *(int *)(local_110 + uVar12 * 0x70 + 100))) {
          pvVar14 = (void *)((long)local_118[uVar12 * 3] +
                            (ulong)(*(uint *)(local_110 + uVar12 * 0x70 + 0x68) >> 1) * 0x70);
          if (local_110[uVar12 * 0x70 + 0x6d] == (Integer)0x0) {
            (**(code **)(*(long *)this + 0x48))(this,pvVar14,&local_e0);
          }
          else {
                    /* try { // try from 00c93500 to 00c9357b has its CatchHandler @ 00c93b3c */
            uVar8 = (**(code **)(*(long *)this + 0x28))(this,&local_e0);
            (**(code **)(*(long *)this + 0x48))(this,pvVar14,uVar8);
          }
          pIVar3 = local_110;
          pIVar23 = local_110 + uVar12 * 0x70;
          iVar6 = Integer::WordCount();
          puVar20 = (uint *)(pIVar3 + uVar12 * 0x70 + 0x60);
          uVar25 = *puVar20;
          IVar1 = pIVar3[uVar12 * 0x70 + 0x6e];
          pIVar3[uVar12 * 0x70 + 0x6e] = (Integer)0x0;
          if (IVar1 != (Integer)0x0) {
            uVar25 = 0;
          }
          uVar16 = (ulong)uVar25;
          uVar9 = Integer::GetBit(pIVar23,uVar16);
          if ((uVar9 & 1) == 0) {
            if (uVar25 <= (uint)(iVar6 * 0x20)) {
              uVar25 = iVar6 * 0x20;
            }
            uVar9 = uVar16;
            do {
              if (uVar25 == uVar9) {
                pIVar3[uVar12 * 0x70 + 0x6f] = (Integer)0x1;
                goto joined_r0x00c93674;
              }
              uVar9 = uVar9 + 1;
                    /* try { // try from 00c935a0 to 00c935ab has its CatchHandler @ 00c93b40 */
              uVar16 = Integer::GetBit(pIVar23,uVar9);
            } while ((uVar16 & 1) == 0);
            uVar16 = uVar9 & 0xffffffff;
            uVar25 = (uint)uVar9;
          }
                    /* try { // try from 00c935bc to 00c9363b has its CatchHandler @ 00c93b3c */
          Integer::operator>>=(pIVar23,uVar16);
          *(uint *)(pIVar3 + uVar12 * 0x70 + 100) = *(int *)(pIVar3 + uVar12 * 0x70 + 100) + uVar25;
          iVar6 = Integer::Modulo(pIVar23,1 << (ulong)(*puVar20 & 0x1f));
          piVar24 = (int *)(pIVar3 + uVar12 * 0x70 + 0x68);
          *piVar24 = iVar6;
          if ((pIVar3[uVar12 * 0x70 + 0x6c] == (Integer)0x0) ||
             (uVar9 = Integer::GetBit(pIVar23,(ulong)*puVar20), (uVar9 & 1) == 0)) {
            pIVar3[uVar12 * 0x70 + 0x6d] = (Integer)0x0;
          }
          else {
            pIVar3[uVar12 * 0x70 + 0x6d] = (Integer)0x1;
            *piVar24 = (1 << (ulong)(*puVar20 & 0x1f)) - *piVar24;
            Integer::operator+=(pIVar23,pIVar3 + uVar12 * 0x70 + 0x30);
          }
        }
joined_r0x00c93674:
        if (!bVar4) {
          bVar4 = local_110[uVar12 * 0x70 + 0x6f] == (Integer)0x0;
          uVar12 = uVar12 + 1;
          if (uVar12 == uVar22) break;
          goto LAB_00c934a8;
        }
        bVar4 = true;
        uVar12 = uVar12 + 1;
      } while (uVar12 != uVar22);
      if (!bVar4) {
        if (param_4 != 0) {
          uVar12 = 0;
          local_128 = param_1;
          do {
            ppvVar17 = local_118 + uVar12 * 3;
            pvVar14 = *ppvVar17;
            lVar15 = ((long)ppvVar17[1] - (long)pvVar14 >> 4) * 0x6db6db6db6db6db7 + -1;
                    /* try { // try from 00c9374c to 00c93773 has its CatchHandler @ 00c93b20 */
            Integer::operator=((Integer *)(local_128 + 8),
                               (Integer *)((long)pvVar14 + lVar15 * 0x70 + 8));
            Integer::operator=((Integer *)(local_128 + 0x38),
                               (Integer *)((long)pvVar14 + lVar15 * 0x70 + 0x38));
            local_128[0x68] = *(ECPPoint *)((long)pvVar14 + lVar15 * 0x70 + 0x68);
            uVar9 = ((long)ppvVar17[1] - (long)*ppvVar17 >> 4) * 0x6db6db6db6db6db7;
            if (1 < uVar9) {
              iVar11 = (int)uVar9;
              if (2 < iVar11) {
                uVar9 = (ulong)(iVar11 - 2);
                lVar15 = uVar9 + 1;
                lVar21 = uVar9 * 0x70;
                do {
                    /* try { // try from 00c937f4 to 00c93817 has its CatchHandler @ 00c93b38 */
                  (**(code **)(*(long *)this + 0x48))
                            (this,(long)local_118[uVar12 * 3] + lVar21,
                             (long)local_118[uVar12 * 3] + lVar21 + 0x70);
                  (**(code **)(*(long *)this + 0x48))
                            (this,local_128,(long)local_118[uVar12 * 3] + lVar21);
                  lVar15 = lVar15 + -1;
                  lVar21 = lVar21 + -0x70;
                } while (1 < lVar15);
              }
                    /* try { // try from 00c93840 to 00c93897 has its CatchHandler @ 00c93b20 */
              (**(code **)(*(long *)this + 0x48))
                        (this,local_118[uVar12 * 3],(long)local_118[uVar12 * 3] + 0x70);
              uVar8 = (**(code **)(*(long *)this + 0x38))(this,local_128);
              lVar15 = (**(code **)(*(long *)this + 0x20))(this,uVar8,local_118[uVar12 * 3]);
              Integer::operator=((Integer *)(local_128 + 8),(Integer *)(lVar15 + 8));
              Integer::operator=((Integer *)(local_128 + 0x38),(Integer *)(lVar15 + 0x38));
              local_128[0x68] = *(ECPPoint *)(lVar15 + 0x68);
            }
            local_128 = local_128 + 0x70;
            uVar12 = uVar12 + 1;
          } while (uVar12 != uVar22);
        }
        break;
      }
                    /* try { // try from 00c93688 to 00c936af has its CatchHandler @ 00c93b24 */
      lVar15 = (**(code **)(*(long *)this + 0x38))(this,&local_e0);
      Integer::operator=((Integer *)&local_d8,(Integer *)(lVar15 + 8));
      Integer::operator=((Integer *)&local_a8,(Integer *)(lVar15 + 0x38));
      EStack_78 = *(ECPPoint *)(lVar15 + 0x68);
      iVar11 = iVar11 + 1;
    } while (param_4 != 0);
  }
  if (local_90 <= local_98) {
    local_98 = local_90;
  }
  local_e0 = &PTR__ECPPoint_00fe9fd8;
  local_a8 = &PTR__Integer_0100c890;
  for (; local_98 != (void *)0x0; local_98 = (void *)((long)local_98 - 1)) {
    *(undefined4 *)((long)local_88 + (long)local_98 * 4 + -4) = 0;
  }
                    /* try { // try from 00c938e4 to 00c938e7 has its CatchHandler @ 00c93a88 */
  UnalignedDeallocate(local_88);
  local_d8 = &PTR__Integer_0100c890;
  if (local_c0 <= local_c8) {
    local_c8 = local_c0;
  }
  for (; local_c8 != (void *)0x0; local_c8 = (void *)((long)local_c8 - 1)) {
    *(undefined4 *)((long)local_b8 + (long)local_c8 * 4 + -4) = 0;
  }
                    /* try { // try from 00c9391c to 00c9391f has its CatchHandler @ 00c93a84 */
  UnalignedDeallocate(local_b8);
  pIVar3 = local_110;
  pIVar23 = local_108;
  if (local_110 != (Integer *)0x0) {
    while (pIVar23 != pIVar3) {
      *(undefined ***)(pIVar23 + -0x40) = &PTR__Integer_0100c890;
      pvVar14 = *(void **)(pIVar23 + -0x20);
      uVar22 = *(ulong *)(pIVar23 + -0x30);
      if (*(ulong *)(pIVar23 + -0x28) <= *(ulong *)(pIVar23 + -0x30)) {
        uVar22 = *(ulong *)(pIVar23 + -0x28);
      }
      for (; uVar22 != 0; uVar22 = uVar22 - 1) {
        *(undefined4 *)((long)pvVar14 + uVar22 * 4 + -4) = 0;
      }
                    /* try { // try from 00c93974 to 00c93977 has its CatchHandler @ 00c93b10 */
      UnalignedDeallocate(pvVar14);
      pvVar14 = *(void **)(pIVar23 + -0x50);
      *(undefined ***)(pIVar23 + -0x70) = &PTR__Integer_0100c890;
      uVar22 = *(ulong *)(pIVar23 + -0x60);
      if (*(ulong *)(pIVar23 + -0x58) <= *(ulong *)(pIVar23 + -0x60)) {
        uVar22 = *(ulong *)(pIVar23 + -0x58);
      }
      for (; uVar22 != 0; uVar22 = uVar22 - 1) {
        *(undefined4 *)((long)pvVar14 + uVar22 * 4 + -4) = 0;
      }
                    /* try { // try from 00c93938 to 00c9393b has its CatchHandler @ 00c93b14 */
      UnalignedDeallocate(pvVar14);
      pIVar23 = pIVar23 + -0x70;
    }
    local_108 = pIVar3;
    operator_delete(local_110);
  }
  if (local_118 != (void **)0x0) {
    while (ppvVar17 = ppvVar18, ppvVar17 != local_118) {
      ppvVar18 = ppvVar17 + -3;
      puVar13 = (undefined8 *)*ppvVar18;
      if (puVar13 != (undefined8 *)0x0) {
        puVar19 = (undefined8 *)ppvVar17[-2];
        puVar10 = puVar13;
        if (puVar19 != puVar13) {
          do {
            puVar19 = puVar19 + -0xe;
            (**(code **)*puVar19)(puVar19);
          } while (puVar19 != puVar13);
          puVar10 = (undefined8 *)*ppvVar18;
        }
        ppvVar17[-2] = puVar13;
        operator_delete(puVar10);
      }
    }
    local_f0 = local_118;
    operator_delete(local_118);
  }
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


