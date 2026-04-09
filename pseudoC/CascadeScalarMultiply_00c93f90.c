// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CascadeScalarMultiply
// Entry Point: 00c93f90
// Size: 2652 bytes
// Signature: undefined __cdecl CascadeScalarMultiply(EC2NPoint * param_1, Integer * param_2, EC2NPoint * param_3, Integer * param_4)


/* CryptoPP::AbstractGroup<CryptoPP::EC2NPoint>::CascadeScalarMultiply(CryptoPP::EC2NPoint const&,
   CryptoPP::Integer const&, CryptoPP::EC2NPoint const&, CryptoPP::Integer const&) const */

void CryptoPP::AbstractGroup<CryptoPP::EC2NPoint>::CascadeScalarMultiply
               (EC2NPoint *param_1,Integer *param_2,EC2NPoint *param_3,Integer *param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  undefined8 *puVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  Integer *in_x4;
  undefined8 *in_x8;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  uint uVar16;
  int iVar17;
  ulong uVar18;
  uint uVar19;
  int iVar20;
  uint local_fc;
  uint local_e4;
  int local_e0;
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined **local_c0;
  PolynomialMod2 aPStack_b8 [8];
  ulong local_b0;
  ulong uStack_a8;
  void *local_a0;
  PolynomialMod2 aPStack_98 [8];
  ulong local_90;
  ulong uStack_88;
  void *local_80;
  undefined local_78;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  uVar7 = Integer::BitCount();
  uVar8 = Integer::BitCount();
  if (uVar8 <= uVar7) {
    uVar8 = uVar7;
  }
  if (uVar8 == 0) {
    lVar10 = (**(code **)(*(long *)param_1 + 0x18))(param_1);
    *in_x8 = &PTR__EC2NPoint_010026a8;
    PolynomialMod2::PolynomialMod2((PolynomialMod2 *)(in_x8 + 1),(PolynomialMod2 *)(lVar10 + 8));
                    /* try { // try from 00c94124 to 00c9412b has its CatchHandler @ 00c949ec */
    PolynomialMod2::PolynomialMod2((PolynomialMod2 *)(in_x8 + 5),(PolynomialMod2 *)(lVar10 + 0x28));
    *(undefined *)(in_x8 + 9) = *(undefined *)(lVar10 + 0x48);
  }
  else {
    uVar7 = 2;
    if (0x104 < uVar8) {
      uVar7 = 3;
    }
    if (uVar8 < 0x2f) {
      uVar7 = 1;
    }
    uVar2 = 1 << (ulong)uVar7;
    uVar16 = uVar2 << (ulong)uVar7;
    std::__ndk1::vector<CryptoPP::EC2NPoint,std::__ndk1::allocator<CryptoPP::EC2NPoint>>::vector
              ((vector<CryptoPP::EC2NPoint,std::__ndk1::allocator<CryptoPP::EC2NPoint>> *)&local_d8,
               (ulong)uVar16);
    puVar5 = local_d8;
                    /* try { // try from 00c94038 to 00c940db has its CatchHandler @ 00c94a4c */
    PolynomialMod2::operator=((PolynomialMod2 *)(local_d8 + 0xb),(PolynomialMod2 *)(param_2 + 8));
    PolynomialMod2::operator=((PolynomialMod2 *)(puVar5 + 0xf),(PolynomialMod2 *)(param_2 + 0x28));
    puVar15 = local_d8;
    *(Integer *)(puVar5 + 0x13) = param_2[0x48];
    PolynomialMod2::operator=
              ((PolynomialMod2 *)(local_d8 + (ulong)uVar2 * 10 + 1),(PolynomialMod2 *)(param_4 + 8))
    ;
    PolynomialMod2::operator=
              ((PolynomialMod2 *)(puVar15 + (ulong)uVar2 * 10 + 5),
               (PolynomialMod2 *)(param_4 + 0x28));
    *(Integer *)(puVar15 + (ulong)uVar2 * 10 + 9) = param_4[0x48];
    if (uVar8 < 0x2f) {
      lVar10 = (**(code **)(*(long *)param_1 + 0x20))(param_1,param_2,param_4);
      puVar5 = local_d8;
      PolynomialMod2::operator=((PolynomialMod2 *)(local_d8 + 0x1f),(PolynomialMod2 *)(lVar10 + 8));
      PolynomialMod2::operator=((PolynomialMod2 *)(puVar5 + 0x23),(PolynomialMod2 *)(lVar10 + 0x28))
      ;
      *(undefined *)(puVar5 + 0x27) = *(undefined *)(lVar10 + 0x48);
    }
    else {
                    /* try { // try from 00c94140 to 00c941bb has its CatchHandler @ 00c94a4c */
      lVar10 = (**(code **)(*(long *)param_1 + 0x38))(param_1,param_2);
      puVar5 = local_d8;
      PolynomialMod2::operator=((PolynomialMod2 *)(local_d8 + 0x15),(PolynomialMod2 *)(lVar10 + 8));
      PolynomialMod2::operator=((PolynomialMod2 *)(puVar5 + 0x19),(PolynomialMod2 *)(lVar10 + 0x28))
      ;
      *(undefined *)(puVar5 + 0x1d) = *(undefined *)(lVar10 + 0x48);
      lVar10 = (**(code **)(*(long *)param_1 + 0x38))(param_1,param_4);
      puVar5 = local_d8;
      uVar13 = uVar2 * 2;
      uVar14 = (ulong)uVar13;
      PolynomialMod2::operator=
                ((PolynomialMod2 *)(local_d8 + uVar14 * 10 + 1),(PolynomialMod2 *)(lVar10 + 8));
      PolynomialMod2::operator=
                ((PolynomialMod2 *)(puVar5 + uVar14 * 10 + 5),(PolynomialMod2 *)(lVar10 + 0x28));
      *(undefined *)(puVar5 + uVar14 * 10 + 9) = *(undefined *)(lVar10 + 0x48);
      if (1 < uVar7) {
                    /* try { // try from 00c941f4 to 00c942bb has its CatchHandler @ 00c94a34 */
        lVar10 = (**(code **)(*(long *)param_1 + 0x20))(param_1,local_d8 + 10,local_d8 + 0x14);
        puVar5 = local_d8;
        PolynomialMod2::operator=
                  ((PolynomialMod2 *)(local_d8 + 0x1f),(PolynomialMod2 *)(lVar10 + 8));
        PolynomialMod2::operator=
                  ((PolynomialMod2 *)(puVar5 + 0x23),(PolynomialMod2 *)(lVar10 + 0x28));
        *(undefined *)(puVar5 + 0x27) = *(undefined *)(lVar10 + 0x48);
        if (uVar7 == 3) {
          lVar10 = (**(code **)(*(long *)param_1 + 0x20))(param_1,local_d8 + 0x1e,local_d8 + 0x14);
          puVar5 = local_d8;
          PolynomialMod2::operator=
                    ((PolynomialMod2 *)(local_d8 + 0x33),(PolynomialMod2 *)(lVar10 + 8));
          PolynomialMod2::operator=
                    ((PolynomialMod2 *)(puVar5 + 0x37),(PolynomialMod2 *)(lVar10 + 0x28));
          *(undefined *)(puVar5 + 0x3b) = *(undefined *)(lVar10 + 0x48);
          lVar10 = (**(code **)(*(long *)param_1 + 0x20))(param_1,local_d8 + 0x32,local_d8 + 0x14);
          puVar5 = local_d8;
          PolynomialMod2::operator=
                    ((PolynomialMod2 *)(local_d8 + 0x47),(PolynomialMod2 *)(lVar10 + 8));
          PolynomialMod2::operator=
                    ((PolynomialMod2 *)(puVar5 + 0x4b),(PolynomialMod2 *)(lVar10 + 0x28));
          *(undefined *)(puVar5 + 0x4f) = *(undefined *)(lVar10 + 0x48);
        }
      }
      local_e4 = uVar2 | 1;
      if (local_e4 < uVar16) {
        uVar12 = 1;
        do {
                    /* try { // try from 00c942f4 to 00c9432b has its CatchHandler @ 00c94a68 */
          lVar10 = (**(code **)(*(long *)param_1 + 0x20))(param_1,local_d8 + uVar12 * 10,param_4);
          puVar5 = local_d8;
          uVar18 = (ulong)(uVar2 + (int)uVar12);
          PolynomialMod2::operator=
                    ((PolynomialMod2 *)(local_d8 + uVar18 * 10 + 1),(PolynomialMod2 *)(lVar10 + 8));
          PolynomialMod2::operator=
                    ((PolynomialMod2 *)(puVar5 + uVar18 * 10 + 5),(PolynomialMod2 *)(lVar10 + 0x28))
          ;
          uVar9 = (int)uVar12 + uVar2;
          uVar12 = (ulong)uVar9;
          *(undefined *)(puVar5 + uVar18 * 10 + 9) = *(undefined *)(lVar10 + 0x48);
        } while (uVar2 + uVar9 < uVar16);
      }
      if (1 < uVar7) {
        if (uVar2 + 3 < uVar16) {
          uVar12 = 3;
          do {
                    /* try { // try from 00c94384 to 00c943bb has its CatchHandler @ 00c94a54 */
            lVar10 = (**(code **)(*(long *)param_1 + 0x20))(param_1,local_d8 + uVar12 * 10,param_4);
            puVar5 = local_d8;
            uVar18 = (ulong)(uVar2 + (int)uVar12);
            PolynomialMod2::operator=
                      ((PolynomialMod2 *)(local_d8 + uVar18 * 10 + 1),(PolynomialMod2 *)(lVar10 + 8)
                      );
            PolynomialMod2::operator=
                      ((PolynomialMod2 *)(puVar5 + uVar18 * 10 + 5),
                       (PolynomialMod2 *)(lVar10 + 0x28));
            uVar9 = (int)uVar12 + uVar2;
            uVar12 = (ulong)uVar9;
            *(undefined *)(puVar5 + uVar18 * 10 + 9) = *(undefined *)(lVar10 + 0x48);
          } while (uVar2 + uVar9 < uVar16);
        }
        if (uVar7 == 3) {
          if (uVar2 + 5 < uVar16) {
            uVar12 = 5;
            do {
                    /* try { // try from 00c94414 to 00c9444b has its CatchHandler @ 00c94a44 */
              lVar10 = (**(code **)(*(long *)param_1 + 0x20))
                                 (param_1,local_d8 + uVar12 * 10,param_4);
              puVar5 = local_d8;
              uVar18 = (ulong)(uVar2 + (int)uVar12);
              PolynomialMod2::operator=
                        ((PolynomialMod2 *)(local_d8 + uVar18 * 10 + 1),
                         (PolynomialMod2 *)(lVar10 + 8));
              PolynomialMod2::operator=
                        ((PolynomialMod2 *)(puVar5 + uVar18 * 10 + 5),
                         (PolynomialMod2 *)(lVar10 + 0x28));
              uVar9 = (int)uVar12 + uVar2;
              uVar12 = (ulong)uVar9;
              *(undefined *)(puVar5 + uVar18 * 10 + 9) = *(undefined *)(lVar10 + 0x48);
            } while (uVar2 + uVar9 < uVar16);
          }
          if (uVar2 + 7 < uVar16) {
            uVar12 = 7;
            do {
                    /* try { // try from 00c944a4 to 00c944db has its CatchHandler @ 00c94a3c */
              lVar10 = (**(code **)(*(long *)param_1 + 0x20))
                                 (param_1,local_d8 + uVar12 * 10,param_4);
              puVar5 = local_d8;
              uVar18 = (ulong)(uVar2 + (int)uVar12);
              PolynomialMod2::operator=
                        ((PolynomialMod2 *)(local_d8 + uVar18 * 10 + 1),
                         (PolynomialMod2 *)(lVar10 + 8));
              PolynomialMod2::operator=
                        ((PolynomialMod2 *)(puVar5 + uVar18 * 10 + 5),
                         (PolynomialMod2 *)(lVar10 + 0x28));
              uVar9 = (int)uVar12 + uVar2;
              uVar12 = (ulong)uVar9;
              *(undefined *)(puVar5 + uVar18 * 10 + 9) = *(undefined *)(lVar10 + 0x48);
            } while (uVar2 + uVar9 < uVar16);
          }
        }
      }
      uVar9 = 3 << (ulong)uVar7;
      if (uVar9 < uVar16) {
        do {
                    /* try { // try from 00c9453c to 00c9456f has its CatchHandler @ 00c94a60 */
          lVar10 = (**(code **)(*(long *)param_1 + 0x20))
                             (param_1,local_d8 + (ulong)(uVar2 * -2 + uVar9) * 10,
                              local_d8 + uVar14 * 10);
          puVar5 = local_d8;
          PolynomialMod2::operator=
                    ((PolynomialMod2 *)(local_d8 + (ulong)uVar9 * 10 + 1),
                     (PolynomialMod2 *)(lVar10 + 8));
          uVar12 = (ulong)uVar9;
          PolynomialMod2::operator=
                    ((PolynomialMod2 *)(puVar5 + uVar12 * 10 + 5),(PolynomialMod2 *)(lVar10 + 0x28))
          ;
          uVar9 = uVar9 + uVar13;
          *(undefined *)(puVar5 + uVar12 * 10 + 9) = *(undefined *)(lVar10 + 0x48);
        } while (uVar9 < uVar16);
      }
      if (uVar2 < uVar16) {
        local_fc = uVar2 + 2;
        uVar9 = uVar2;
        do {
          if (uVar9 + 2 < uVar9 + uVar2) {
            lVar10 = (ulong)local_fc * 0x50 + 0x48;
            uVar19 = local_e4;
            do {
                    /* try { // try from 00c9460c to 00c9463f has its CatchHandler @ 00c94a78 */
              lVar11 = (**(code **)(*(long *)param_1 + 0x20))
                                 (param_1,local_d8 + (ulong)uVar19 * 10,param_2);
              puVar5 = local_d8;
              PolynomialMod2::operator=
                        ((PolynomialMod2 *)((long)local_d8 + lVar10 + -0x40),
                         (PolynomialMod2 *)(lVar11 + 8));
              PolynomialMod2::operator=
                        ((PolynomialMod2 *)((long)puVar5 + lVar10 + -0x20),
                         (PolynomialMod2 *)(lVar11 + 0x28));
              uVar1 = uVar19 + 3;
              *(undefined *)((long)puVar5 + lVar10) = *(undefined *)(lVar11 + 0x48);
              lVar10 = lVar10 + 0xa0;
              uVar19 = uVar19 + 2;
            } while (uVar1 < uVar9 + uVar2);
          }
          local_fc = local_fc + uVar13;
          uVar9 = uVar9 + uVar13;
          local_e4 = local_e4 + uVar13;
        } while (uVar9 < uVar16);
      }
    }
    local_c0 = &PTR__EC2NPoint_010026a8;
                    /* try { // try from 00c94680 to 00c94687 has its CatchHandler @ 00c94a2c */
    PolynomialMod2::PolynomialMod2(aPStack_b8);
                    /* try { // try from 00c9468c to 00c94693 has its CatchHandler @ 00c94a1c */
    PolynomialMod2::PolynomialMod2(aPStack_98);
    local_e4 = uVar8 - 1;
    local_78 = 1;
    bVar4 = true;
    if (-1 < (int)local_e4) {
      uVar13 = 0;
      uVar16 = 0;
      local_e0 = -uVar8;
      uVar14 = (ulong)local_e4;
      do {
                    /* try { // try from 00c94704 to 00c9471f has its CatchHandler @ 00c94a70 */
        local_e0 = local_e0 + 1;
        uVar8 = Integer::GetBit((Integer *)param_3,uVar14);
        uVar9 = Integer::GetBit(in_x4,uVar14);
        puVar5 = local_d8;
        uVar16 = uVar8 & 1 | uVar16 << 1;
        uVar13 = uVar9 & 1 | uVar13 << 1;
        if (((uVar14 == 0) || (uVar2 <= uVar16 << 1)) || (uVar2 <= uVar13 << 1)) {
          bVar6 = (uVar16 | uVar13) != 0;
          iVar17 = 0;
          iVar20 = local_e4 - (uint)uVar14;
          if (((uVar16 | uVar13) != 0) && (((uVar8 | uVar9) & 1) == 0)) {
            iVar17 = 0;
            uVar8 = uVar16;
            uVar9 = uVar13;
            do {
              uVar16 = uVar8 >> 1;
              uVar13 = uVar9 >> 1;
              iVar17 = iVar17 + 1;
              bVar6 = 1 < uVar8 || 1 < uVar9;
              if (((uVar8 >> 1 & 1) != 0) || (1 >= uVar8 && 1 >= uVar9)) break;
              uVar19 = uVar9 >> 1;
              uVar8 = uVar16;
              uVar9 = uVar13;
            } while ((uVar19 & 1) == 0);
            iVar20 = (local_e4 + local_e0) - iVar17;
          }
          if (bVar4) {
            uVar12 = (ulong)((uVar13 << (ulong)uVar7) + uVar16);
                    /* try { // try from 00c947e0 to 00c947f7 has its CatchHandler @ 00c94a5c */
            PolynomialMod2::operator=(aPStack_b8,(PolynomialMod2 *)(local_d8 + uVar12 * 10 + 1));
            PolynomialMod2::operator=(aPStack_98,(PolynomialMod2 *)(puVar5 + uVar12 * 10 + 5));
            local_78 = *(undefined *)(puVar5 + uVar12 * 10 + 9);
          }
          else {
            for (; iVar20 != 0; iVar20 = iVar20 + -1) {
                    /* try { // try from 00c94814 to 00c9483b has its CatchHandler @ 00c94a74 */
              lVar10 = (**(code **)(*(long *)param_1 + 0x38))(param_1,&local_c0);
              PolynomialMod2::operator=(aPStack_b8,(PolynomialMod2 *)(lVar10 + 8));
              PolynomialMod2::operator=(aPStack_98,(PolynomialMod2 *)(lVar10 + 0x28));
              local_78 = *(undefined *)(lVar10 + 0x48);
            }
            if (bVar6) {
                    /* try { // try from 00c94870 to 00c9487b has its CatchHandler @ 00c94a5c */
              (**(code **)(*(long *)param_1 + 0x48))
                        (param_1,&local_c0,
                         local_d8 + (ulong)((uVar13 << (ulong)uVar7) + uVar16) * 10);
            }
          }
          for (; iVar17 != 0; iVar17 = iVar17 + -1) {
                    /* try { // try from 00c9488c to 00c948b3 has its CatchHandler @ 00c94a80 */
            lVar10 = (**(code **)(*(long *)param_1 + 0x38))(param_1,&local_c0);
            PolynomialMod2::operator=(aPStack_b8,(PolynomialMod2 *)(lVar10 + 8));
            PolynomialMod2::operator=(aPStack_98,(PolynomialMod2 *)(lVar10 + 0x28));
            local_78 = *(undefined *)(lVar10 + 0x48);
          }
          uVar16 = 0;
          uVar13 = 0;
          bVar4 = false;
          local_e4 = (uint)uVar14;
        }
        bVar6 = 0 < (long)uVar14;
        uVar14 = uVar14 - 1;
      } while (bVar6);
    }
    *in_x8 = &PTR__EC2NPoint_010026a8;
                    /* try { // try from 00c948e0 to 00c948eb has its CatchHandler @ 00c94a18 */
    PolynomialMod2::PolynomialMod2((PolynomialMod2 *)(in_x8 + 1),aPStack_b8);
                    /* try { // try from 00c948f0 to 00c948f7 has its CatchHandler @ 00c94a08 */
    PolynomialMod2::PolynomialMod2((PolynomialMod2 *)(in_x8 + 5),aPStack_98);
    if (uStack_88 <= local_90) {
      local_90 = uStack_88;
    }
    *(undefined *)(in_x8 + 9) = local_78;
    local_c0 = &PTR__EC2NPoint_010026a8;
    for (; local_90 != 0; local_90 = local_90 - 1) {
      *(undefined4 *)((long)local_80 + local_90 * 4 + -4) = 0;
    }
                    /* try { // try from 00c9493c to 00c9493f has its CatchHandler @ 00c94a04 */
    UnalignedDeallocate(local_80);
    if (uStack_a8 <= local_b0) {
      local_b0 = uStack_a8;
    }
    for (; local_b0 != 0; local_b0 = local_b0 - 1) {
      *(undefined4 *)((long)local_a0 + local_b0 * 4 + -4) = 0;
    }
                    /* try { // try from 00c94968 to 00c9496b has its CatchHandler @ 00c94a00 */
    UnalignedDeallocate(local_a0);
    puVar5 = local_d8;
    if (local_d8 != (undefined8 *)0x0) {
      while (local_d0 != puVar5) {
        puVar15 = local_d0 + -10;
        (**(code **)*puVar15)(puVar15);
        local_d0 = puVar15;
      }
      local_d0 = puVar5;
      operator_delete(local_d8);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


