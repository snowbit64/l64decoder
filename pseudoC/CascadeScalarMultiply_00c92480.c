// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CascadeScalarMultiply
// Entry Point: 00c92480
// Size: 2680 bytes
// Signature: undefined __cdecl CascadeScalarMultiply(ECPPoint * param_1, Integer * param_2, ECPPoint * param_3, Integer * param_4)


/* CryptoPP::AbstractGroup<CryptoPP::ECPPoint>::CascadeScalarMultiply(CryptoPP::ECPPoint const&,
   CryptoPP::Integer const&, CryptoPP::ECPPoint const&, CryptoPP::Integer const&) const */

void CryptoPP::AbstractGroup<CryptoPP::ECPPoint>::CascadeScalarMultiply
               (ECPPoint *param_1,Integer *param_2,ECPPoint *param_3,Integer *param_4)

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
  uint local_11c;
  uint local_104;
  int local_100;
  undefined8 *local_f8;
  undefined8 *local_f0;
  undefined **local_e0;
  undefined **local_d8 [2];
  ulong local_c8;
  ulong uStack_c0;
  void *local_b8;
  undefined **local_a8 [2];
  ulong local_98;
  ulong uStack_90;
  void *local_88;
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
    *in_x8 = &PTR__ECPPoint_00fe9fd8;
    Integer::Integer((Integer *)(in_x8 + 1),(Integer *)(lVar10 + 8));
                    /* try { // try from 00c92614 to 00c9261b has its CatchHandler @ 00c92ef8 */
    Integer::Integer((Integer *)(in_x8 + 7),(Integer *)(lVar10 + 0x38));
    *(undefined *)(in_x8 + 0xd) = *(undefined *)(lVar10 + 0x68);
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
    std::__ndk1::vector<CryptoPP::ECPPoint,std::__ndk1::allocator<CryptoPP::ECPPoint>>::vector
              ((vector<CryptoPP::ECPPoint,std::__ndk1::allocator<CryptoPP::ECPPoint>> *)&local_f8,
               (ulong)uVar16);
    puVar5 = local_f8;
                    /* try { // try from 00c92528 to 00c925cb has its CatchHandler @ 00c92f58 */
    Integer::operator=((Integer *)(local_f8 + 0xf),param_2 + 8);
    Integer::operator=((Integer *)(puVar5 + 0x15),param_2 + 0x38);
    puVar15 = local_f8;
    *(Integer *)(puVar5 + 0x1b) = param_2[0x68];
    Integer::operator=((Integer *)(local_f8 + (ulong)uVar2 * 0xe + 1),param_4 + 8);
    Integer::operator=((Integer *)(puVar15 + (ulong)uVar2 * 0xe + 7),param_4 + 0x38);
    *(Integer *)(puVar15 + (ulong)uVar2 * 0xe + 0xd) = param_4[0x68];
    if (uVar8 < 0x2f) {
      lVar10 = (**(code **)(*(long *)param_1 + 0x20))(param_1,param_2,param_4);
      puVar5 = local_f8;
      Integer::operator=((Integer *)(local_f8 + 0x2b),(Integer *)(lVar10 + 8));
      Integer::operator=((Integer *)(puVar5 + 0x31),(Integer *)(lVar10 + 0x38));
      *(undefined *)(puVar5 + 0x37) = *(undefined *)(lVar10 + 0x68);
    }
    else {
                    /* try { // try from 00c92630 to 00c926ab has its CatchHandler @ 00c92f58 */
      lVar10 = (**(code **)(*(long *)param_1 + 0x38))(param_1,param_2);
      puVar5 = local_f8;
      Integer::operator=((Integer *)(local_f8 + 0x1d),(Integer *)(lVar10 + 8));
      Integer::operator=((Integer *)(puVar5 + 0x23),(Integer *)(lVar10 + 0x38));
      *(undefined *)(puVar5 + 0x29) = *(undefined *)(lVar10 + 0x68);
      lVar10 = (**(code **)(*(long *)param_1 + 0x38))(param_1,param_4);
      puVar5 = local_f8;
      uVar13 = uVar2 * 2;
      uVar14 = (ulong)uVar13;
      Integer::operator=((Integer *)(local_f8 + uVar14 * 0xe + 1),(Integer *)(lVar10 + 8));
      Integer::operator=((Integer *)(puVar5 + uVar14 * 0xe + 7),(Integer *)(lVar10 + 0x38));
      *(undefined *)(puVar5 + uVar14 * 0xe + 0xd) = *(undefined *)(lVar10 + 0x68);
      if (1 < uVar7) {
                    /* try { // try from 00c926e4 to 00c927ab has its CatchHandler @ 00c92f40 */
        lVar10 = (**(code **)(*(long *)param_1 + 0x20))(param_1,local_f8 + 0xe,local_f8 + 0x1c);
        puVar5 = local_f8;
        Integer::operator=((Integer *)(local_f8 + 0x2b),(Integer *)(lVar10 + 8));
        Integer::operator=((Integer *)(puVar5 + 0x31),(Integer *)(lVar10 + 0x38));
        *(undefined *)(puVar5 + 0x37) = *(undefined *)(lVar10 + 0x68);
        if (uVar7 == 3) {
          lVar10 = (**(code **)(*(long *)param_1 + 0x20))(param_1,local_f8 + 0x2a,local_f8 + 0x1c);
          puVar5 = local_f8;
          Integer::operator=((Integer *)(local_f8 + 0x47),(Integer *)(lVar10 + 8));
          Integer::operator=((Integer *)(puVar5 + 0x4d),(Integer *)(lVar10 + 0x38));
          *(undefined *)(puVar5 + 0x53) = *(undefined *)(lVar10 + 0x68);
          lVar10 = (**(code **)(*(long *)param_1 + 0x20))(param_1,local_f8 + 0x46,local_f8 + 0x1c);
          puVar5 = local_f8;
          Integer::operator=((Integer *)(local_f8 + 99),(Integer *)(lVar10 + 8));
          Integer::operator=((Integer *)(puVar5 + 0x69),(Integer *)(lVar10 + 0x38));
          *(undefined *)(puVar5 + 0x6f) = *(undefined *)(lVar10 + 0x68);
        }
      }
      local_104 = uVar2 | 1;
      if (local_104 < uVar16) {
        uVar12 = 1;
        do {
                    /* try { // try from 00c927e4 to 00c9281b has its CatchHandler @ 00c92f74 */
          lVar10 = (**(code **)(*(long *)param_1 + 0x20))(param_1,local_f8 + uVar12 * 0xe,param_4);
          puVar5 = local_f8;
          uVar18 = (ulong)(uVar2 + (int)uVar12);
          Integer::operator=((Integer *)(local_f8 + uVar18 * 0xe + 1),(Integer *)(lVar10 + 8));
          Integer::operator=((Integer *)(puVar5 + uVar18 * 0xe + 7),(Integer *)(lVar10 + 0x38));
          uVar9 = (int)uVar12 + uVar2;
          uVar12 = (ulong)uVar9;
          *(undefined *)(puVar5 + uVar18 * 0xe + 0xd) = *(undefined *)(lVar10 + 0x68);
        } while (uVar2 + uVar9 < uVar16);
      }
      if (1 < uVar7) {
        if (uVar2 + 3 < uVar16) {
          uVar12 = 3;
          do {
                    /* try { // try from 00c92874 to 00c928ab has its CatchHandler @ 00c92f60 */
            lVar10 = (**(code **)(*(long *)param_1 + 0x20))(param_1,local_f8 + uVar12 * 0xe,param_4)
            ;
            puVar5 = local_f8;
            uVar18 = (ulong)(uVar2 + (int)uVar12);
            Integer::operator=((Integer *)(local_f8 + uVar18 * 0xe + 1),(Integer *)(lVar10 + 8));
            Integer::operator=((Integer *)(puVar5 + uVar18 * 0xe + 7),(Integer *)(lVar10 + 0x38));
            uVar9 = (int)uVar12 + uVar2;
            uVar12 = (ulong)uVar9;
            *(undefined *)(puVar5 + uVar18 * 0xe + 0xd) = *(undefined *)(lVar10 + 0x68);
          } while (uVar2 + uVar9 < uVar16);
        }
        if (uVar7 == 3) {
          if (uVar2 + 5 < uVar16) {
            uVar12 = 5;
            do {
                    /* try { // try from 00c92904 to 00c9293b has its CatchHandler @ 00c92f50 */
              lVar10 = (**(code **)(*(long *)param_1 + 0x20))
                                 (param_1,local_f8 + uVar12 * 0xe,param_4);
              puVar5 = local_f8;
              uVar18 = (ulong)(uVar2 + (int)uVar12);
              Integer::operator=((Integer *)(local_f8 + uVar18 * 0xe + 1),(Integer *)(lVar10 + 8));
              Integer::operator=((Integer *)(puVar5 + uVar18 * 0xe + 7),(Integer *)(lVar10 + 0x38));
              uVar9 = (int)uVar12 + uVar2;
              uVar12 = (ulong)uVar9;
              *(undefined *)(puVar5 + uVar18 * 0xe + 0xd) = *(undefined *)(lVar10 + 0x68);
            } while (uVar2 + uVar9 < uVar16);
          }
          if (uVar2 + 7 < uVar16) {
            uVar12 = 7;
            do {
                    /* try { // try from 00c92994 to 00c929cb has its CatchHandler @ 00c92f48 */
              lVar10 = (**(code **)(*(long *)param_1 + 0x20))
                                 (param_1,local_f8 + uVar12 * 0xe,param_4);
              puVar5 = local_f8;
              uVar18 = (ulong)(uVar2 + (int)uVar12);
              Integer::operator=((Integer *)(local_f8 + uVar18 * 0xe + 1),(Integer *)(lVar10 + 8));
              Integer::operator=((Integer *)(puVar5 + uVar18 * 0xe + 7),(Integer *)(lVar10 + 0x38));
              uVar9 = (int)uVar12 + uVar2;
              uVar12 = (ulong)uVar9;
              *(undefined *)(puVar5 + uVar18 * 0xe + 0xd) = *(undefined *)(lVar10 + 0x68);
            } while (uVar2 + uVar9 < uVar16);
          }
        }
      }
      uVar9 = 3 << (ulong)uVar7;
      if (uVar9 < uVar16) {
        do {
                    /* try { // try from 00c92a2c to 00c92a5f has its CatchHandler @ 00c92f6c */
          lVar10 = (**(code **)(*(long *)param_1 + 0x20))
                             (param_1,local_f8 + (ulong)(uVar2 * -2 + uVar9) * 0xe,
                              local_f8 + uVar14 * 0xe);
          puVar5 = local_f8;
          Integer::operator=((Integer *)(local_f8 + (ulong)uVar9 * 0xe + 1),(Integer *)(lVar10 + 8))
          ;
          uVar12 = (ulong)uVar9;
          Integer::operator=((Integer *)(puVar5 + uVar12 * 0xe + 7),(Integer *)(lVar10 + 0x38));
          uVar9 = uVar9 + uVar13;
          *(undefined *)(puVar5 + uVar12 * 0xe + 0xd) = *(undefined *)(lVar10 + 0x68);
        } while (uVar9 < uVar16);
      }
      if (uVar2 < uVar16) {
        local_11c = uVar2 + 2;
        uVar9 = uVar2;
        do {
          if (uVar9 + 2 < uVar9 + uVar2) {
            lVar10 = (ulong)local_11c * 0x70 + 0x68;
            uVar19 = local_104;
            do {
                    /* try { // try from 00c92afc to 00c92b2f has its CatchHandler @ 00c92f84 */
              lVar11 = (**(code **)(*(long *)param_1 + 0x20))
                                 (param_1,local_f8 + (ulong)uVar19 * 0xe,param_2);
              puVar5 = local_f8;
              Integer::operator=((Integer *)((long)local_f8 + lVar10 + -0x60),
                                 (Integer *)(lVar11 + 8));
              Integer::operator=((Integer *)((long)puVar5 + lVar10 + -0x30),
                                 (Integer *)(lVar11 + 0x38));
              uVar1 = uVar19 + 3;
              *(undefined *)((long)puVar5 + lVar10) = *(undefined *)(lVar11 + 0x68);
              lVar10 = lVar10 + 0xe0;
              uVar19 = uVar19 + 2;
            } while (uVar1 < uVar9 + uVar2);
          }
          local_11c = local_11c + uVar13;
          uVar9 = uVar9 + uVar13;
          local_104 = local_104 + uVar13;
        } while (uVar9 < uVar16);
      }
    }
    local_e0 = &PTR__ECPPoint_00fe9fd8;
                    /* try { // try from 00c92b70 to 00c92b77 has its CatchHandler @ 00c92f38 */
    Integer::Integer((Integer *)local_d8);
                    /* try { // try from 00c92b7c to 00c92b83 has its CatchHandler @ 00c92f28 */
    Integer::Integer((Integer *)local_a8);
    local_104 = uVar8 - 1;
    local_78 = 1;
    bVar4 = true;
    if (-1 < (int)local_104) {
      uVar13 = 0;
      uVar16 = 0;
      local_100 = -uVar8;
      uVar14 = (ulong)local_104;
      do {
                    /* try { // try from 00c92bf4 to 00c92c0f has its CatchHandler @ 00c92f7c */
        local_100 = local_100 + 1;
        uVar8 = Integer::GetBit((Integer *)param_3,uVar14);
        uVar9 = Integer::GetBit(in_x4,uVar14);
        puVar5 = local_f8;
        uVar16 = uVar8 & 1 | uVar16 << 1;
        uVar13 = uVar9 & 1 | uVar13 << 1;
        if (((uVar14 == 0) || (uVar2 <= uVar16 << 1)) || (uVar2 <= uVar13 << 1)) {
          bVar6 = (uVar16 | uVar13) != 0;
          iVar17 = 0;
          iVar20 = local_104 - (uint)uVar14;
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
            iVar20 = (local_104 + local_100) - iVar17;
          }
          if (bVar4) {
            uVar12 = (ulong)((uVar13 << (ulong)uVar7) + uVar16);
                    /* try { // try from 00c92cd0 to 00c92ce7 has its CatchHandler @ 00c92f68 */
            Integer::operator=((Integer *)local_d8,(Integer *)(local_f8 + uVar12 * 0xe + 1));
            Integer::operator=((Integer *)local_a8,(Integer *)(puVar5 + uVar12 * 0xe + 7));
            local_78 = *(undefined *)(puVar5 + uVar12 * 0xe + 0xd);
          }
          else {
            for (; iVar20 != 0; iVar20 = iVar20 + -1) {
                    /* try { // try from 00c92d04 to 00c92d2b has its CatchHandler @ 00c92f80 */
              lVar10 = (**(code **)(*(long *)param_1 + 0x38))(param_1,&local_e0);
              Integer::operator=((Integer *)local_d8,(Integer *)(lVar10 + 8));
              Integer::operator=((Integer *)local_a8,(Integer *)(lVar10 + 0x38));
              local_78 = *(undefined *)(lVar10 + 0x68);
            }
            if (bVar6) {
                    /* try { // try from 00c92d60 to 00c92d6b has its CatchHandler @ 00c92f68 */
              (**(code **)(*(long *)param_1 + 0x48))
                        (param_1,&local_e0,
                         local_f8 + (ulong)((uVar13 << (ulong)uVar7) + uVar16) * 0xe);
            }
          }
          for (; iVar17 != 0; iVar17 = iVar17 + -1) {
                    /* try { // try from 00c92d7c to 00c92da3 has its CatchHandler @ 00c92f8c */
            lVar10 = (**(code **)(*(long *)param_1 + 0x38))(param_1,&local_e0);
            Integer::operator=((Integer *)local_d8,(Integer *)(lVar10 + 8));
            Integer::operator=((Integer *)local_a8,(Integer *)(lVar10 + 0x38));
            local_78 = *(undefined *)(lVar10 + 0x68);
          }
          uVar16 = 0;
          uVar13 = 0;
          bVar4 = false;
          local_104 = (uint)uVar14;
        }
        bVar6 = 0 < (long)uVar14;
        uVar14 = uVar14 - 1;
      } while (bVar6);
    }
    *in_x8 = &PTR__ECPPoint_00fe9fd8;
                    /* try { // try from 00c92dd0 to 00c92ddb has its CatchHandler @ 00c92f24 */
    Integer::Integer((Integer *)(in_x8 + 1),(Integer *)local_d8);
                    /* try { // try from 00c92de0 to 00c92de7 has its CatchHandler @ 00c92f14 */
    Integer::Integer((Integer *)(in_x8 + 7),(Integer *)local_a8);
    local_a8[0] = &PTR__Integer_0100c890;
    if (uStack_90 <= local_98) {
      local_98 = uStack_90;
    }
    local_e0 = &PTR__ECPPoint_00fe9fd8;
    *(undefined *)(in_x8 + 0xd) = local_78;
    for (; local_98 != 0; local_98 = local_98 - 1) {
      *(undefined4 *)((long)local_88 + local_98 * 4 + -4) = 0;
    }
                    /* try { // try from 00c92e40 to 00c92e43 has its CatchHandler @ 00c92f10 */
    UnalignedDeallocate(local_88);
    local_d8[0] = &PTR__Integer_0100c890;
    if (uStack_c0 <= local_c8) {
      local_c8 = uStack_c0;
    }
    for (; local_c8 != 0; local_c8 = local_c8 - 1) {
      *(undefined4 *)((long)local_b8 + local_c8 * 4 + -4) = 0;
    }
                    /* try { // try from 00c92e74 to 00c92e77 has its CatchHandler @ 00c92f0c */
    UnalignedDeallocate(local_b8);
    puVar5 = local_f8;
    if (local_f8 != (undefined8 *)0x0) {
      while (local_f0 != puVar5) {
        puVar15 = local_f0 + -0xe;
        (**(code **)*puVar15)(puVar15);
        local_f0 = puVar15;
      }
      local_f0 = puVar5;
      operator_delete(local_f8);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


