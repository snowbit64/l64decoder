// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sort<std::__ndk1::__less<LightListRasterizer::ZExtent,LightListRasterizer::ZExtent>&,LightListRasterizer::ZExtent*>
// Entry Point: 00a2ae48
// Size: 1864 bytes
// Signature: void __cdecl __sort<std::__ndk1::__less<LightListRasterizer::ZExtent,LightListRasterizer::ZExtent>&,LightListRasterizer::ZExtent*>(ZExtent * param_1, ZExtent * param_2, __less * param_3)


/* void std::__ndk1::__sort<std::__ndk1::__less<LightListRasterizer::ZExtent,
   LightListRasterizer::ZExtent>&, LightListRasterizer::ZExtent*>(LightListRasterizer::ZExtent*,
   LightListRasterizer::ZExtent*, std::__ndk1::__less<LightListRasterizer::ZExtent,
   LightListRasterizer::ZExtent>&) */

void std::__ndk1::
     __sort<std::__ndk1::__less<LightListRasterizer::ZExtent,LightListRasterizer::ZExtent>&,LightListRasterizer::ZExtent*>
               (ZExtent *param_1,ZExtent *param_2,__less *param_3)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  uint *puVar10;
  undefined8 *puVar11;
  undefined8 uVar13;
  undefined8 uVar14;
  uint uVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar12;
  
  lVar2 = tpidr_el0;
  lVar6 = *(long *)(lVar2 + 0x28);
LAB_00a2ae90:
  do {
    puVar19 = (undefined8 *)((long)param_2 + -0xc);
    puVar20 = (undefined8 *)param_1;
LAB_00a2ae9c:
    while( true ) {
      param_1 = (ZExtent *)puVar20;
      uVar7 = (long)param_2 - (long)param_1;
      switch(((long)uVar7 >> 2) * -0x5555555555555555) {
      case 0:
      case 1:
        goto switchD_00a2b2c4_caseD_0;
      case 2:
        if ((*(uint *)((long)param_2 + -8) < *(uint *)((long)param_1 + 4)) ||
           ((*(uint *)((long)param_2 + -8) <= *(uint *)((long)param_1 + 4) &&
            (*(uint *)((long)param_2 + -4) < *(uint *)((long)param_1 + 8))))) {
          uVar5 = *(uint *)((long)param_1 + 8);
          uVar13 = *(undefined8 *)param_1;
          uVar14 = *puVar19;
          *(uint *)((long)param_1 + 8) = *(uint *)((long)param_2 + -4);
          *(undefined8 *)param_1 = uVar14;
          *(uint *)((long)param_2 + -4) = uVar5;
          *puVar19 = uVar13;
        }
        goto switchD_00a2b2c4_caseD_0;
      case 3:
        __sort3<std::__ndk1::__less<LightListRasterizer::ZExtent,LightListRasterizer::ZExtent>&,LightListRasterizer::ZExtent*>
                  (param_1,(ZExtent *)((long)param_1 + 0xc),(ZExtent *)puVar19,param_3);
        goto switchD_00a2b2c4_caseD_0;
      case 4:
        puVar20 = (undefined8 *)((long)param_1 + 0xc);
        puVar9 = (undefined8 *)((long)param_1 + 0x18);
        __sort3<std::__ndk1::__less<LightListRasterizer::ZExtent,LightListRasterizer::ZExtent>&,LightListRasterizer::ZExtent*>
                  (param_1,(ZExtent *)puVar20,(ZExtent *)puVar9,param_3);
        if ((*(uint *)((long)param_2 + -8) < *(uint *)((long)param_1 + 0x1c)) ||
           ((*(uint *)((long)param_2 + -8) <= *(uint *)((long)param_1 + 0x1c) &&
            (*(uint *)((long)param_2 + -4) < *(uint *)((long)param_1 + 0x20))))) {
          uVar13 = *puVar9;
          uVar5 = *(uint *)((long)param_1 + 0x20);
          uVar16 = *(uint *)((long)param_2 + -4);
          *puVar9 = *puVar19;
          *(uint *)((long)param_1 + 0x20) = uVar16;
          *(uint *)((long)param_2 + -4) = uVar5;
          *puVar19 = uVar13;
          if ((*(uint *)((long)param_1 + 0x1c) < *(uint *)((long)param_1 + 0x10)) ||
             ((*(uint *)((long)param_1 + 0x1c) <= *(uint *)((long)param_1 + 0x10) &&
              (*(uint *)((long)param_1 + 0x20) < *(uint *)((long)param_1 + 0x14))))) {
            uVar13 = *puVar20;
            *puVar20 = *puVar9;
            uVar5 = *(uint *)((long)param_1 + 0x14);
            *(uint *)((long)param_1 + 0x14) = *(uint *)((long)param_1 + 0x20);
            *puVar9 = uVar13;
            *(uint *)((long)param_1 + 0x20) = uVar5;
            if ((*(uint *)((long)param_1 + 0x10) < *(uint *)((long)param_1 + 4)) ||
               ((*(uint *)((long)param_1 + 0x10) <= *(uint *)((long)param_1 + 4) &&
                (*(uint *)((long)param_1 + 0x14) < *(uint *)((long)param_1 + 8))))) {
              uVar5 = *(uint *)((long)param_1 + 8);
              uVar13 = *(undefined8 *)param_1;
              *(undefined8 *)param_1 = *puVar20;
              *(uint *)((long)param_1 + 8) = *(uint *)((long)param_1 + 0x14);
              *puVar20 = uVar13;
              *(uint *)((long)param_1 + 0x14) = uVar5;
            }
          }
        }
        goto switchD_00a2b2c4_caseD_0;
      case 5:
        FUN_00a2b738(param_1,(uint *)((long)param_1 + 0xc),(undefined8 *)((long)param_1 + 0x18),
                     (uint *)((long)param_1 + 0x24),puVar19,param_3);
        goto switchD_00a2b2c4_caseD_0;
      }
      if ((long)uVar7 < 0x174) {
        __sort3<std::__ndk1::__less<LightListRasterizer::ZExtent,LightListRasterizer::ZExtent>&,LightListRasterizer::ZExtent*>
                  (param_1,(ZExtent *)((long)param_1 + 0xc),
                   (ZExtent *)(undefined8 *)((long)param_1 + 0x18),param_3);
        if ((undefined8 *)((long)param_1 + 0x24) == (undefined8 *)param_2)
        goto switchD_00a2b2c4_caseD_0;
        lVar8 = 0;
        puVar20 = (undefined8 *)((long)param_1 + 0x24);
        puVar19 = (undefined8 *)((long)param_1 + 0x18);
        goto LAB_00a2b490;
      }
      if (uVar7 < 0x2ed5) {
        puVar20 = (undefined8 *)((long)param_1 + (ulong)(((uint)uVar7 & 0xffff) / 0x18) * 0xc);
        uVar5 = __sort3<std::__ndk1::__less<LightListRasterizer::ZExtent,LightListRasterizer::ZExtent>&,LightListRasterizer::ZExtent*>
                          (param_1,(ZExtent *)puVar20,(ZExtent *)puVar19,param_3);
      }
      else {
        puVar20 = (undefined8 *)((long)param_1 + (uVar7 / 0x18) * 0xc);
        lVar8 = (uVar7 / 0x30) * 0xc;
        uVar5 = FUN_00a2b738(param_1,(uint *)((long)param_1 + lVar8),puVar20,
                             (uint *)((long)puVar20 + lVar8),puVar19,param_3);
      }
      uVar16 = *(uint *)((long)param_1 + 4);
      uVar15 = *(uint *)((long)puVar20 + 4);
      puVar9 = puVar19;
      if ((uVar16 < uVar15) ||
         ((puVar11 = (undefined8 *)((long)param_2 + -0x18), uVar16 <= uVar15 &&
          (*(uint *)((long)param_1 + 8) < *(uint *)(puVar20 + 1))))) break;
      for (; (undefined8 *)param_1 != puVar11; puVar11 = (undefined8 *)((long)puVar11 + -0xc)) {
        if ((*(uint *)((long)puVar11 + 4) < uVar15) ||
           ((*(uint *)((long)puVar11 + 4) <= uVar15 &&
            (*(uint *)(puVar11 + 1) < *(uint *)(puVar20 + 1))))) {
          uVar16 = *(uint *)((long)param_1 + 8);
          uVar5 = uVar5 + 1;
          uVar13 = *(undefined8 *)param_1;
          uVar14 = *puVar11;
          *(uint *)((long)param_1 + 8) = *(uint *)(puVar11 + 1);
          *(undefined8 *)param_1 = uVar14;
          *(uint *)(puVar11 + 1) = uVar16;
          *puVar11 = uVar13;
          puVar9 = puVar11;
          goto LAB_00a2af3c;
        }
      }
      puVar9 = (undefined8 *)((long)param_1 + 0xc);
      if ((*(uint *)((long)param_2 + -8) <= uVar16) &&
         ((*(uint *)((long)param_2 + -8) < uVar16 ||
          (*(uint *)((long)param_2 + -4) <= *(uint *)((long)param_1 + 8))))) {
        while( true ) {
          if (puVar9 == puVar19) goto switchD_00a2b2c4_caseD_0;
          if ((uVar16 < *(uint *)((long)puVar9 + 4)) ||
             ((uVar16 <= *(uint *)((long)puVar9 + 4) &&
              (*(uint *)((long)param_1 + 8) < *(uint *)(puVar9 + 1))))) break;
          puVar9 = (undefined8 *)((long)puVar9 + 0xc);
        }
        uVar5 = *(uint *)(puVar9 + 1);
        uVar13 = *puVar9;
        uVar14 = *puVar19;
        *(uint *)(puVar9 + 1) = *(uint *)((long)param_2 + -4);
        *puVar9 = uVar14;
        *(uint *)((long)param_2 + -4) = uVar5;
        *puVar19 = uVar13;
        puVar9 = (undefined8 *)((long)puVar9 + 0xc);
      }
      puVar11 = puVar19;
      if (puVar9 == puVar19) goto switchD_00a2b2c4_caseD_0;
      while( true ) {
        uVar5 = *(uint *)((long)param_1 + 4);
        uVar16 = *(uint *)((long)puVar9 + 4);
        for (puVar20 = puVar9;
            (uVar16 <= uVar5 &&
            ((uVar16 < uVar5 || (*(uint *)(puVar20 + 1) <= *(uint *)((long)param_1 + 8)))));
            puVar20 = (undefined8 *)((long)puVar20 + 0xc)) {
          uVar16 = *(uint *)(puVar20 + 2);
        }
        do {
          do {
            puVar12 = puVar11;
            puVar11 = (undefined8 *)((long)puVar12 + -0xc);
          } while (uVar5 < *(uint *)(puVar12 + -1));
        } while ((uVar5 <= *(uint *)(puVar12 + -1)) &&
                (*(uint *)((long)param_1 + 8) < *(uint *)((long)puVar12 + -4)));
        if (puVar11 <= puVar20) break;
        uVar5 = *(uint *)(puVar20 + 1);
        uVar13 = *puVar20;
        uVar14 = *puVar11;
        *(uint *)(puVar20 + 1) = *(uint *)((long)puVar12 + -4);
        puVar9 = (undefined8 *)((long)puVar20 + 0xc);
        *puVar20 = uVar14;
        *(uint *)((long)puVar12 + -4) = uVar5;
        *puVar11 = uVar13;
      }
    }
LAB_00a2af3c:
    puVar11 = (undefined8 *)((long)param_1 + 0xc);
    if (puVar11 < puVar9) {
      do {
        uVar16 = *(uint *)((long)puVar20 + 4);
        for (; (*(uint *)((long)puVar11 + 4) < uVar16 ||
               ((*(uint *)((long)puVar11 + 4) <= uVar16 &&
                (*(uint *)(puVar11 + 1) < *(uint *)(puVar20 + 1)))));
            puVar11 = (undefined8 *)((long)puVar11 + 0xc)) {
        }
        uVar15 = *(uint *)(puVar9 + -1);
        if (uVar15 < uVar16) {
          puVar9 = (undefined8 *)((long)puVar9 + -0xc);
        }
        else {
          puVar10 = (uint *)((long)puVar9 + -4);
          do {
            if ((uVar15 <= uVar16) && (*puVar10 < *(uint *)(puVar20 + 1))) break;
            uVar15 = puVar10[-4];
            puVar10 = puVar10 + -3;
          } while (uVar16 <= uVar15);
          puVar9 = (undefined8 *)(puVar10 + -2);
        }
        if (puVar9 < puVar11) break;
        uVar16 = *(uint *)(puVar11 + 1);
        uVar13 = *puVar11;
        uVar5 = uVar5 + 1;
        puVar12 = puVar9;
        if (puVar11 != puVar20) {
          puVar12 = puVar20;
        }
        uVar14 = *puVar9;
        *(uint *)(puVar11 + 1) = *(uint *)(puVar9 + 1);
        *puVar11 = uVar14;
        puVar11 = (undefined8 *)((long)puVar11 + 0xc);
        *(uint *)(puVar9 + 1) = uVar16;
        *puVar9 = uVar13;
        puVar20 = puVar12;
      } while( true );
    }
    if (puVar11 != puVar20) {
      if ((*(uint *)((long)puVar20 + 4) < *(uint *)((long)puVar11 + 4)) ||
         ((*(uint *)((long)puVar20 + 4) <= *(uint *)((long)puVar11 + 4) &&
          (*(uint *)(puVar20 + 1) < *(uint *)(puVar11 + 1))))) {
        uVar16 = *(uint *)(puVar11 + 1);
        uVar5 = uVar5 + 1;
        uVar13 = *puVar11;
        uVar14 = *puVar20;
        *(uint *)(puVar11 + 1) = *(uint *)(puVar20 + 1);
        *puVar11 = uVar14;
        *(uint *)(puVar20 + 1) = uVar16;
        *puVar20 = uVar13;
      }
    }
    if (uVar5 != 0) goto LAB_00a2b254;
    bVar3 = __insertion_sort_incomplete<std::__ndk1::__less<LightListRasterizer::ZExtent,LightListRasterizer::ZExtent>&,LightListRasterizer::ZExtent*>
                      (param_1,(ZExtent *)puVar11,param_3);
    bVar4 = __insertion_sort_incomplete<std::__ndk1::__less<LightListRasterizer::ZExtent,LightListRasterizer::ZExtent>&,LightListRasterizer::ZExtent*>
                      ((ZExtent *)(undefined8 *)((long)puVar11 + 0xc),param_2,param_3);
    if (!bVar4) goto code_r0x00a2b250;
    param_2 = (ZExtent *)puVar11;
  } while (!bVar3);
  goto switchD_00a2b2c4_caseD_0;
LAB_00a2b490:
  puVar9 = puVar20;
  uVar5 = *(uint *)((long)puVar9 + 4);
  if (uVar5 < *(uint *)((long)puVar19 + 4)) {
    uVar16 = *(uint *)(puVar9 + 1);
LAB_00a2b4ac:
    uVar15 = *(uint *)(puVar19 + 1);
    uVar1 = *(uint *)puVar9;
    *puVar9 = *puVar19;
    *(uint *)(puVar9 + 1) = uVar15;
    puVar20 = (undefined8 *)param_1;
    lVar18 = lVar8;
    if (puVar19 != (undefined8 *)param_1) {
      do {
        uVar15 = *(uint *)((long)param_1 + lVar18 + 0x10);
        if (uVar15 <= uVar5) {
          if (uVar15 < uVar5) {
            puVar20 = (undefined8 *)((long)param_1 + lVar18 + 0x18);
            break;
          }
          puVar20 = puVar19;
          if (*(uint *)((long)param_1 + lVar18 + 0x14) <= uVar16) break;
        }
        puVar19 = (undefined8 *)((long)puVar19 + -0xc);
        lVar17 = lVar18 + -0xc;
        *(undefined8 *)((long)param_1 + lVar18 + 0x18) =
             *(undefined8 *)((long)param_1 + lVar18 + 0xc);
        *(undefined4 *)((long)param_1 + lVar18 + 0x20) =
             *(undefined4 *)((long)param_1 + lVar18 + 0x14);
        puVar20 = (undefined8 *)param_1;
        lVar18 = lVar17;
      } while (lVar17 != -0x18);
    }
    *(uint *)puVar20 = uVar1;
    *(uint *)((long)puVar20 + 4) = uVar5;
    *(uint *)(puVar20 + 1) = uVar16;
  }
  else if ((uVar5 <= *(uint *)((long)puVar19 + 4)) &&
          (uVar16 = *(uint *)(puVar9 + 1), uVar16 < *(uint *)(puVar19 + 1))) goto LAB_00a2b4ac;
  lVar8 = lVar8 + 0xc;
  puVar20 = (undefined8 *)((long)puVar9 + 0xc);
  puVar19 = puVar9;
  if ((undefined8 *)((long)puVar9 + 0xc) == (undefined8 *)param_2) {
switchD_00a2b2c4_caseD_0:
    if (*(long *)(lVar2 + 0x28) != lVar6) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  goto LAB_00a2b490;
code_r0x00a2b250:
  puVar20 = (undefined8 *)((long)puVar11 + 0xc);
  if (!bVar3) {
LAB_00a2b254:
    if (((long)param_2 - (long)puVar11 >> 2) * -0x5555555555555555 <=
        ((long)puVar11 - (long)param_1 >> 2) * -0x5555555555555555) {
      __sort<std::__ndk1::__less<LightListRasterizer::ZExtent,LightListRasterizer::ZExtent>&,LightListRasterizer::ZExtent*>
                ((ZExtent *)((long)puVar11 + 0xc),param_2,param_3);
      param_2 = (ZExtent *)puVar11;
      goto LAB_00a2ae90;
    }
    __sort<std::__ndk1::__less<LightListRasterizer::ZExtent,LightListRasterizer::ZExtent>&,LightListRasterizer::ZExtent*>
              (param_1,(ZExtent *)puVar11,param_3);
    puVar20 = (undefined8 *)((long)puVar11 + 0xc);
  }
  goto LAB_00a2ae9c;
}


