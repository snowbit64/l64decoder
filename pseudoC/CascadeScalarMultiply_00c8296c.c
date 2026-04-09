// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CascadeScalarMultiply
// Entry Point: 00c8296c
// Size: 1784 bytes
// Signature: undefined __cdecl CascadeScalarMultiply(Integer * param_1, Integer * param_2, Integer * param_3, Integer * param_4)


/* CryptoPP::AbstractGroup<CryptoPP::Integer>::CascadeScalarMultiply(CryptoPP::Integer const&,
   CryptoPP::Integer const&, CryptoPP::Integer const&, CryptoPP::Integer const&) const */

void CryptoPP::AbstractGroup<CryptoPP::Integer>::CascadeScalarMultiply
               (Integer *param_1,Integer *param_2,Integer *param_3,Integer *param_4)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  void *pvVar8;
  Integer *pIVar9;
  Integer *pIVar10;
  Integer *in_x4;
  int iVar11;
  Integer *in_x8;
  long lVar12;
  uint uVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  undefined **local_a0 [2];
  ulong local_90;
  ulong uStack_88;
  void *local_80;
  long local_70;
  
  lVar12 = tpidr_el0;
  local_70 = *(long *)(lVar12 + 0x28);
  uVar5 = Integer::BitCount();
  uVar6 = Integer::BitCount();
  if (uVar6 <= uVar5) {
    uVar6 = uVar5;
  }
  if (uVar6 == 0) {
    pIVar9 = (Integer *)(**(code **)(*(long *)param_1 + 0x18))(param_1);
    Integer::Integer(in_x8,pIVar9);
    lVar12 = *(long *)(lVar12 + 0x28);
  }
  else {
    uVar5 = 2;
    if (0x104 < uVar6) {
      uVar5 = 3;
    }
    if (uVar6 < 0x2f) {
      uVar5 = 1;
    }
    uVar2 = 1 << (ulong)uVar5;
    uVar21 = uVar2 << (ulong)uVar5;
    uVar16 = (ulong)uVar21;
                    /* try { // try from 00c82a10 to 00c82a13 has its CatchHandler @ 00c8307c */
    pvVar8 = operator_new(uVar16 * 0x30);
    lVar14 = 0;
    do {
                    /* try { // try from 00c82a38 to 00c82a3f has its CatchHandler @ 00c830b8 */
      Integer::Integer((Integer *)((long)pvVar8 + lVar14));
      lVar14 = lVar14 + 0x30;
    } while (uVar16 * 0x30 - lVar14 != 0);
                    /* try { // try from 00c82a58 to 00c82aa7 has its CatchHandler @ 00c8308c */
    Integer::operator=((Integer *)((long)pvVar8 + 0x30),param_2);
    Integer::operator=((Integer *)((long)pvVar8 + (ulong)uVar2 * 0x30),param_4);
    if (uVar6 < 0x2f) {
      pIVar9 = (Integer *)(**(code **)(*(long *)param_1 + 0x20))(param_1,param_2,param_4);
      Integer::operator=((Integer *)((long)pvVar8 + 0x90),pIVar9);
    }
    else {
                    /* try { // try from 00c82ad8 to 00c82b1f has its CatchHandler @ 00c8308c */
      pIVar10 = (Integer *)(**(code **)(*(long *)param_1 + 0x38))(param_1,param_2);
      pIVar9 = (Integer *)((long)pvVar8 + 0x60);
      Integer::operator=(pIVar9,pIVar10);
      pIVar10 = (Integer *)(**(code **)(*(long *)param_1 + 0x38))(param_1,param_4);
      uVar13 = uVar2 * 2;
      Integer::operator=((Integer *)((long)pvVar8 + (ulong)uVar13 * 0x30),pIVar10);
      if (1 < uVar5) {
                    /* try { // try from 00c82b38 to 00c82baf has its CatchHandler @ 00c83064 */
        pIVar10 = (Integer *)
                  (**(code **)(*(long *)param_1 + 0x20))(param_1,(long)pvVar8 + 0x30,pIVar9);
        Integer::operator=((Integer *)((long)pvVar8 + 0x90),pIVar10);
        if (uVar5 == 3) {
          pIVar10 = (Integer *)
                    (**(code **)(*(long *)param_1 + 0x20))(param_1,(long)pvVar8 + 0x90,pIVar9);
          Integer::operator=((Integer *)((long)pvVar8 + 0xf0),pIVar10);
          pIVar9 = (Integer *)
                   (**(code **)(*(long *)param_1 + 0x20))(param_1,(long)pvVar8 + 0xf0,pIVar9);
          Integer::operator=((Integer *)((long)pvVar8 + 0x150),pIVar9);
        }
      }
      uVar7 = 1;
      while (uVar15 = uVar7 + uVar2, uVar15 < uVar21) {
                    /* try { // try from 00c82bd8 to 00c82bef has its CatchHandler @ 00c830b0 */
        pIVar9 = (Integer *)
                 (**(code **)(*(long *)param_1 + 0x20))
                           (param_1,(void *)((long)pvVar8 + (ulong)uVar7 * 0x30),param_4);
        Integer::operator=((Integer *)((long)pvVar8 + (ulong)uVar15 * 0x30),pIVar9);
        uVar7 = uVar15;
      }
      if (1 < uVar5) {
        uVar7 = 3;
        while (uVar15 = uVar7 + uVar2, uVar15 < uVar21) {
                    /* try { // try from 00c82c28 to 00c82c3f has its CatchHandler @ 00c830a0 */
          pIVar9 = (Integer *)
                   (**(code **)(*(long *)param_1 + 0x20))
                             (param_1,(void *)((long)pvVar8 + (ulong)uVar7 * 0x30),param_4);
          Integer::operator=((Integer *)((long)pvVar8 + (ulong)uVar15 * 0x30),pIVar9);
          uVar7 = uVar15;
        }
        if (uVar5 == 3) {
          uVar7 = 5;
          while (uVar15 = uVar7 + uVar2, uVar15 < uVar21) {
                    /* try { // try from 00c82c78 to 00c82c8f has its CatchHandler @ 00c83098 */
            pIVar9 = (Integer *)
                     (**(code **)(*(long *)param_1 + 0x20))
                               (param_1,(void *)((long)pvVar8 + (ulong)uVar7 * 0x30),param_4);
            Integer::operator=((Integer *)((long)pvVar8 + (ulong)uVar15 * 0x30),pIVar9);
            uVar7 = uVar15;
          }
          uVar7 = 7;
          while (uVar15 = uVar7 + uVar2, uVar15 < uVar21) {
                    /* try { // try from 00c82cc8 to 00c82cdf has its CatchHandler @ 00c83084 */
            pIVar9 = (Integer *)
                     (**(code **)(*(long *)param_1 + 0x20))
                               (param_1,(void *)((long)pvVar8 + (ulong)uVar7 * 0x30),param_4);
            Integer::operator=((Integer *)((long)pvVar8 + (ulong)uVar15 * 0x30),pIVar9);
            uVar7 = uVar15;
          }
        }
      }
      uVar7 = 3 << (ulong)uVar5;
      if (uVar7 < uVar21) {
        do {
                    /* try { // try from 00c82d1c to 00c82d33 has its CatchHandler @ 00c830a8 */
          pIVar9 = (Integer *)
                   (**(code **)(*(long *)param_1 + 0x20))
                             (param_1,(void *)((long)pvVar8 + (ulong)(uVar2 * -2 + uVar7) * 0x30),
                              (void *)((long)pvVar8 + (ulong)uVar13 * 0x30));
          Integer::operator=((Integer *)((long)pvVar8 + (ulong)uVar7 * 0x30),pIVar9);
          uVar7 = uVar7 + uVar13;
        } while (uVar7 < uVar21);
      }
      if (uVar2 < uVar21) {
        uVar7 = uVar2 + 1;
        uVar15 = uVar2 + 2;
        uVar20 = uVar2;
        do {
          pIVar9 = (Integer *)((long)pvVar8 + (ulong)uVar15 * 0x30);
          for (uVar1 = uVar7; uVar1 + 1 < uVar20 + uVar2; uVar1 = uVar1 + 2) {
                    /* try { // try from 00c82dac to 00c82dcf has its CatchHandler @ 00c830d8 */
            pIVar10 = (Integer *)
                      (**(code **)(*(long *)param_1 + 0x20))
                                (param_1,(void *)((long)pvVar8 + (ulong)uVar1 * 0x30),param_2);
            Integer::operator=(pIVar9,pIVar10);
            pIVar9 = pIVar9 + 0x60;
          }
          uVar20 = uVar20 + uVar13;
          uVar7 = uVar7 + uVar13;
          uVar15 = uVar15 + uVar13;
        } while (uVar20 < uVar21);
      }
    }
                    /* try { // try from 00c82ddc to 00c82de3 has its CatchHandler @ 00c83074 */
    Integer::Integer((Integer *)local_a0);
    uVar17 = (ulong)(uVar6 - 1);
    if (-1 < (int)(uVar6 - 1)) {
      uVar13 = 0;
      uVar21 = 0;
      iVar19 = -uVar6;
      bVar3 = true;
      uVar18 = uVar17;
      do {
                    /* try { // try from 00c82e3c to 00c82e57 has its CatchHandler @ 00c830d0 */
        iVar19 = iVar19 + 1;
        uVar6 = Integer::GetBit(param_3,uVar18);
        uVar7 = Integer::GetBit(in_x4,uVar18);
        uVar21 = uVar6 & 1 | uVar21 << 1;
        uVar13 = uVar7 & 1 | uVar13 << 1;
        if (((uVar18 == 0) || (uVar2 <= uVar21 << 1)) || (uVar2 <= uVar13 << 1)) {
          iVar22 = 0;
          bVar4 = (uVar21 | uVar13) != 0;
          iVar11 = (int)uVar17 - (int)uVar18;
          if (((uVar21 | uVar13) != 0) && (((uVar6 | uVar7) & 1) == 0)) {
            iVar22 = 0;
            uVar6 = uVar21;
            uVar7 = uVar13;
            do {
              uVar21 = uVar6 >> 1;
              uVar13 = uVar7 >> 1;
              iVar22 = iVar22 + 1;
              bVar4 = 1 < uVar6 || 1 < uVar7;
              if (((uVar6 >> 1 & 1) != 0) || (1 >= uVar6 && 1 >= uVar7)) break;
              uVar15 = uVar7 >> 1;
              uVar6 = uVar21;
              uVar7 = uVar13;
            } while ((uVar15 & 1) == 0);
            iVar11 = ((int)uVar17 + iVar19) - iVar22;
          }
          if (bVar3) {
                    /* try { // try from 00c82f0c to 00c82f13 has its CatchHandler @ 00c83094 */
            Integer::operator=((Integer *)local_a0,
                               (Integer *)
                               ((long)pvVar8 + (ulong)((uVar13 << (ulong)uVar5) + uVar21) * 0x30));
          }
          else {
            iVar11 = iVar11 + 1;
            while (iVar11 = iVar11 + -1, iVar11 != 0) {
                    /* try { // try from 00c82f2c to 00c82f43 has its CatchHandler @ 00c830d4 */
              pIVar9 = (Integer *)(**(code **)(*(long *)param_1 + 0x38))(param_1,local_a0);
              Integer::operator=((Integer *)local_a0,pIVar9);
            }
            if (bVar4) {
                    /* try { // try from 00c82f68 to 00c82f73 has its CatchHandler @ 00c83094 */
              (**(code **)(*(long *)param_1 + 0x48))
                        (param_1,local_a0,
                         (void *)((long)pvVar8 + (ulong)((uVar13 << (ulong)uVar5) + uVar21) * 0x30))
              ;
            }
          }
          iVar22 = iVar22 + 1;
          while (iVar22 = iVar22 + -1, iVar22 != 0) {
                    /* try { // try from 00c82f88 to 00c82f9f has its CatchHandler @ 00c830e0 */
            pIVar9 = (Integer *)(**(code **)(*(long *)param_1 + 0x38))(param_1,local_a0);
            Integer::operator=((Integer *)local_a0,pIVar9);
          }
          uVar21 = 0;
          uVar13 = 0;
          uVar17 = uVar18 & 0xffffffff;
          bVar3 = false;
        }
        bVar4 = 0 < (long)uVar18;
        uVar18 = uVar18 - 1;
      } while (bVar4);
    }
                    /* try { // try from 00c82fa4 to 00c82faf has its CatchHandler @ 00c83070 */
    Integer::Integer(in_x8,(Integer *)local_a0);
    if (uStack_88 <= local_90) {
      local_90 = uStack_88;
    }
    local_a0[0] = &PTR__Integer_0100c890;
    for (; local_90 != 0; local_90 = local_90 - 1) {
      *(undefined4 *)((long)local_80 + local_90 * 4 + -4) = 0;
    }
                    /* try { // try from 00c82ff0 to 00c82ff3 has its CatchHandler @ 00c8306c */
    UnalignedDeallocate(local_80);
    if ((void *)((long)pvVar8 + uVar16 * 0x30) != pvVar8) {
      lVar14 = uVar16 * 0x30;
      do {
        (***(code ***)((long)pvVar8 + lVar14 + -0x30))();
        lVar14 = lVar14 + -0x30;
      } while (lVar14 != 0);
    }
    operator_delete(pvVar8);
    lVar12 = *(long *)(lVar12 + 0x28);
  }
  if (lVar12 != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


