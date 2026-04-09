// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CascadeScalarMultiply
// Entry Point: 00c8f6c4
// Size: 1744 bytes
// Signature: undefined __cdecl CascadeScalarMultiply(PolynomialMod2 * param_1, Integer * param_2, PolynomialMod2 * param_3, Integer * param_4)


/* CryptoPP::AbstractGroup<CryptoPP::PolynomialMod2>::CascadeScalarMultiply(CryptoPP::PolynomialMod2
   const&, CryptoPP::Integer const&, CryptoPP::PolynomialMod2 const&, CryptoPP::Integer const&)
   const */

void CryptoPP::AbstractGroup<CryptoPP::PolynomialMod2>::CascadeScalarMultiply
               (PolynomialMod2 *param_1,Integer *param_2,PolynomialMod2 *param_3,Integer *param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  void *pvVar9;
  PolynomialMod2 *pPVar10;
  PolynomialMod2 *pPVar11;
  void *pvVar12;
  Integer *in_x4;
  int iVar13;
  PolynomialMod2 *in_x8;
  ulong uVar14;
  int iVar15;
  long lVar16;
  void *pvVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  ulong uVar22;
  uint local_b0;
  PolynomialMod2 aPStack_a0 [8];
  ulong local_98;
  ulong uStack_90;
  void *local_88;
  void *local_80;
  void *local_78;
  void *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar6 = Integer::BitCount();
  uVar7 = Integer::BitCount();
  if (uVar7 <= uVar6) {
    uVar7 = uVar6;
  }
  if (uVar7 == 0) {
    pPVar10 = (PolynomialMod2 *)(**(code **)(*(long *)param_1 + 0x18))(param_1);
    PolynomialMod2::PolynomialMod2(in_x8,pPVar10);
  }
  else {
    uVar6 = 2;
    if (0x104 < uVar7) {
      uVar6 = 3;
    }
    if (uVar7 < 0x2f) {
      uVar6 = 1;
    }
    local_80 = (void *)0x0;
    local_78 = (void *)0x0;
    local_70 = (void *)0x0;
    uVar2 = 1 << (ulong)uVar6;
    uVar14 = (ulong)uVar2;
    uVar21 = uVar2 << (ulong)uVar6;
    uVar22 = (ulong)uVar21 * 0x20;
                    /* try { // try from 00c8f768 to 00c8f76f has its CatchHandler @ 00c8fdac */
    pvVar9 = operator_new(uVar22);
    lVar16 = 0;
    pvVar17 = (void *)((long)pvVar9 + uVar22);
    local_80 = pvVar9;
    local_78 = pvVar9;
    local_70 = pvVar17;
    do {
                    /* try { // try from 00c8f788 to 00c8f78f has its CatchHandler @ 00c8fdec */
      PolynomialMod2::PolynomialMod2((PolynomialMod2 *)((long)pvVar9 + lVar16));
      lVar16 = lVar16 + 0x20;
    } while (uVar22 - lVar16 != 0);
    local_78 = pvVar17;
                    /* try { // try from 00c8f7ac to 00c8f7f3 has its CatchHandler @ 00c8fdbc */
    PolynomialMod2::operator=((PolynomialMod2 *)((long)pvVar9 + 0x20),(PolynomialMod2 *)param_2);
    PolynomialMod2::operator=
              ((PolynomialMod2 *)((long)pvVar9 + uVar14 * 0x20),(PolynomialMod2 *)param_4);
    if (uVar7 < 0x2f) {
      pPVar10 = (PolynomialMod2 *)(**(code **)(*(long *)param_1 + 0x20))(param_1,param_2,param_4);
      PolynomialMod2::operator=((PolynomialMod2 *)((long)pvVar9 + 0x60),pPVar10);
    }
    else {
                    /* try { // try from 00c8f820 to 00c8f863 has its CatchHandler @ 00c8fdbc */
      pPVar11 = (PolynomialMod2 *)(**(code **)(*(long *)param_1 + 0x38))(param_1,param_2);
      pPVar10 = (PolynomialMod2 *)((long)pvVar9 + 0x40);
      PolynomialMod2::operator=(pPVar10,pPVar11);
      pPVar11 = (PolynomialMod2 *)(**(code **)(*(long *)param_1 + 0x38))(param_1,param_4);
      uVar18 = uVar2 * 2;
      PolynomialMod2::operator=((PolynomialMod2 *)((long)pvVar9 + (ulong)uVar18 * 0x20),pPVar11);
      if (1 < uVar6) {
                    /* try { // try from 00c8f87c to 00c8f8f3 has its CatchHandler @ 00c8fd94 */
        pPVar11 = (PolynomialMod2 *)
                  (**(code **)(*(long *)param_1 + 0x20))(param_1,(long)pvVar9 + 0x20,pPVar10);
        PolynomialMod2::operator=((PolynomialMod2 *)((long)pvVar9 + 0x60),pPVar11);
        if (uVar6 == 3) {
          pPVar11 = (PolynomialMod2 *)
                    (**(code **)(*(long *)param_1 + 0x20))(param_1,(long)pvVar9 + 0x60,pPVar10);
          PolynomialMod2::operator=((PolynomialMod2 *)((long)pvVar9 + 0xa0),pPVar11);
          pPVar10 = (PolynomialMod2 *)
                    (**(code **)(*(long *)param_1 + 0x20))(param_1,(long)pvVar9 + 0xa0,pPVar10);
          PolynomialMod2::operator=((PolynomialMod2 *)((long)pvVar9 + 0xe0),pPVar10);
        }
      }
      uVar8 = 1;
      while( true ) {
        uVar20 = uVar8 + uVar2;
        if (uVar21 <= uVar20) break;
                    /* try { // try from 00c8f918 to 00c8f92f has its CatchHandler @ 00c8fde4 */
        pPVar10 = (PolynomialMod2 *)
                  (**(code **)(*(long *)param_1 + 0x20))
                            (param_1,(void *)((long)pvVar9 + (ulong)uVar8 * 0x20),param_4);
        PolynomialMod2::operator=((PolynomialMod2 *)((long)pvVar9 + (ulong)uVar20 * 0x20),pPVar10);
        uVar8 = uVar20;
      }
      if (1 < uVar6) {
        uVar8 = 3;
        while( true ) {
          uVar20 = uVar8 + uVar2;
          if (uVar21 <= uVar20) break;
                    /* try { // try from 00c8f964 to 00c8f97b has its CatchHandler @ 00c8fdd0 */
          pPVar10 = (PolynomialMod2 *)
                    (**(code **)(*(long *)param_1 + 0x20))
                              (param_1,(void *)((long)pvVar9 + (ulong)uVar8 * 0x20),param_4);
          PolynomialMod2::operator=((PolynomialMod2 *)((long)pvVar9 + (ulong)uVar20 * 0x20),pPVar10)
          ;
          uVar8 = uVar20;
        }
        if (uVar6 == 3) {
          uVar8 = 5;
          while( true ) {
            uVar20 = uVar8 + uVar2;
            if (uVar21 <= uVar20) break;
                    /* try { // try from 00c8f9b0 to 00c8f9c7 has its CatchHandler @ 00c8fdc8 */
            pPVar10 = (PolynomialMod2 *)
                      (**(code **)(*(long *)param_1 + 0x20))
                                (param_1,(void *)((long)pvVar9 + (ulong)uVar8 * 0x20),param_4);
            PolynomialMod2::operator=
                      ((PolynomialMod2 *)((long)pvVar9 + (ulong)uVar20 * 0x20),pPVar10);
            uVar8 = uVar20;
          }
          uVar8 = 7;
          while( true ) {
            uVar20 = uVar8 + uVar2;
            if (uVar21 <= uVar20) break;
                    /* try { // try from 00c8f9fc to 00c8fa13 has its CatchHandler @ 00c8fdb4 */
            pPVar10 = (PolynomialMod2 *)
                      (**(code **)(*(long *)param_1 + 0x20))
                                (param_1,(void *)((long)pvVar9 + (ulong)uVar8 * 0x20),param_4);
            PolynomialMod2::operator=
                      ((PolynomialMod2 *)((long)pvVar9 + (ulong)uVar20 * 0x20),pPVar10);
            uVar8 = uVar20;
          }
        }
      }
      uVar8 = 3 << (ulong)uVar6;
      if (uVar8 < uVar21) {
        do {
                    /* try { // try from 00c8fa50 to 00c8fa6b has its CatchHandler @ 00c8fdd8 */
          pPVar10 = (PolynomialMod2 *)
                    (**(code **)(*(long *)param_1 + 0x20))
                              (param_1,(void *)((long)pvVar9 + (ulong)(uVar2 * -2 + uVar8) * 0x20),
                               (void *)((long)pvVar9 + (ulong)uVar18 * 0x20));
          PolynomialMod2::operator=((PolynomialMod2 *)((long)pvVar9 + (ulong)uVar8 * 0x20),pPVar10);
          uVar8 = uVar8 + uVar18;
        } while (uVar8 < uVar21);
      }
      if (uVar2 < uVar21) {
        uVar8 = uVar2 + 1;
        uVar20 = uVar2 + 2;
        do {
          pPVar10 = (PolynomialMod2 *)((long)pvVar9 + (ulong)uVar20 * 0x20);
          for (uVar1 = uVar8; uVar1 + 1 < (int)uVar14 + uVar2; uVar1 = uVar1 + 2) {
                    /* try { // try from 00c8fae0 to 00c8faff has its CatchHandler @ 00c8fe0c */
            pPVar11 = (PolynomialMod2 *)
                      (**(code **)(*(long *)param_1 + 0x20))
                                (param_1,(void *)((long)pvVar9 + (ulong)uVar1 * 0x20),param_2);
            PolynomialMod2::operator=(pPVar10,pPVar11);
            pPVar10 = pPVar10 + 0x40;
          }
          uVar1 = (int)uVar14 + uVar18;
          uVar14 = (ulong)uVar1;
          uVar8 = uVar8 + uVar18;
          uVar20 = uVar20 + uVar18;
        } while (uVar1 < uVar21);
      }
    }
                    /* try { // try from 00c8fb08 to 00c8fb0f has its CatchHandler @ 00c8fda4 */
    PolynomialMod2::PolynomialMod2(aPStack_a0);
    local_b0 = uVar7 - 1;
    if (-1 < (int)local_b0) {
      uVar18 = 0;
      uVar21 = 0;
      iVar15 = -uVar7;
      bVar4 = true;
      uVar14 = (ulong)local_b0;
      do {
                    /* try { // try from 00c8fb6c to 00c8fb87 has its CatchHandler @ 00c8fe04 */
        iVar15 = iVar15 + 1;
        uVar7 = Integer::GetBit((Integer *)param_3,uVar14);
        uVar8 = Integer::GetBit(in_x4,uVar14);
        uVar21 = uVar7 & 1 | uVar21 << 1;
        uVar18 = uVar8 & 1 | uVar18 << 1;
        if (((uVar14 == 0) || (uVar2 <= uVar21 << 1)) || (uVar2 <= uVar18 << 1)) {
          bVar5 = (uVar21 | uVar18) != 0;
          iVar19 = 0;
          iVar13 = local_b0 - (uint)uVar14;
          if (((uVar21 | uVar18) != 0) && (((uVar7 | uVar8) & 1) == 0)) {
            iVar19 = 0;
            uVar7 = uVar21;
            uVar8 = uVar18;
            do {
              uVar21 = uVar7 >> 1;
              uVar18 = uVar8 >> 1;
              iVar19 = iVar19 + 1;
              bVar5 = 1 < uVar7 || 1 < uVar8;
              if (((uVar7 >> 1 & 1) != 0) || (1 >= uVar7 && 1 >= uVar8)) break;
              uVar20 = uVar8 >> 1;
              uVar7 = uVar21;
              uVar8 = uVar18;
            } while ((uVar20 & 1) == 0);
            iVar13 = (local_b0 + iVar15) - iVar19;
          }
          if (bVar4) {
                    /* try { // try from 00c8fc3c to 00c8fc43 has its CatchHandler @ 00c8fdc4 */
            PolynomialMod2::operator=
                      (aPStack_a0,
                       (PolynomialMod2 *)
                       ((long)pvVar9 + (ulong)((uVar18 << (ulong)uVar6) + uVar21) * 0x20));
          }
          else {
            iVar13 = iVar13 + 1;
            while (iVar13 = iVar13 + -1, iVar13 != 0) {
                    /* try { // try from 00c8fc5c to 00c8fc73 has its CatchHandler @ 00c8fe08 */
              pPVar10 = (PolynomialMod2 *)(**(code **)(*(long *)param_1 + 0x38))(param_1,aPStack_a0)
              ;
              PolynomialMod2::operator=(aPStack_a0,pPVar10);
            }
            if (bVar5) {
                    /* try { // try from 00c8fc94 to 00c8fc9f has its CatchHandler @ 00c8fdc4 */
              (**(code **)(*(long *)param_1 + 0x48))
                        (param_1,aPStack_a0,
                         (void *)((long)pvVar9 + (ulong)((uVar18 << (ulong)uVar6) + uVar21) * 0x20))
              ;
            }
          }
          iVar19 = iVar19 + 1;
          while (iVar19 = iVar19 + -1, iVar19 != 0) {
                    /* try { // try from 00c8fcb4 to 00c8fccb has its CatchHandler @ 00c8fe14 */
            pPVar10 = (PolynomialMod2 *)(**(code **)(*(long *)param_1 + 0x38))(param_1,aPStack_a0);
            PolynomialMod2::operator=(aPStack_a0,pPVar10);
          }
          uVar21 = 0;
          uVar18 = 0;
          bVar4 = false;
          local_b0 = (uint)uVar14;
        }
        bVar5 = 0 < (long)uVar14;
        uVar14 = uVar14 - 1;
      } while (bVar5);
    }
                    /* try { // try from 00c8fcd0 to 00c8fcdb has its CatchHandler @ 00c8fda0 */
    PolynomialMod2::PolynomialMod2(in_x8,aPStack_a0);
    if (uStack_90 <= local_98) {
      local_98 = uStack_90;
    }
    for (; local_98 != 0; local_98 = local_98 - 1) {
      *(undefined4 *)((long)local_88 + local_98 * 4 + -4) = 0;
    }
                    /* try { // try from 00c8fd0c to 00c8fd0f has its CatchHandler @ 00c8fd9c */
    UnalignedDeallocate(local_88);
    while (pvVar17 != pvVar9) {
      pvVar12 = *(void **)((long)pvVar17 + -8);
      uVar14 = *(ulong *)((long)pvVar17 + -0x18);
      if (*(ulong *)((long)pvVar17 + -0x10) <= *(ulong *)((long)pvVar17 + -0x18)) {
        uVar14 = *(ulong *)((long)pvVar17 + -0x10);
      }
      for (; uVar14 != 0; uVar14 = uVar14 - 1) {
        *(undefined4 *)((long)pvVar12 + uVar14 * 4 + -4) = 0;
      }
                    /* try { // try from 00c8fd14 to 00c8fd17 has its CatchHandler @ 00c8fde0 */
      UnalignedDeallocate(pvVar12);
      pvVar17 = (void *)((long)pvVar17 + -0x20);
    }
    local_78 = pvVar9;
    operator_delete(pvVar9);
  }
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


