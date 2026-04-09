// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sort<std::__ndk1::__less<DictionaryCreator::Main::Character,DictionaryCreator::Main::Character>&,DictionaryCreator::Main::Character*>
// Entry Point: 00c02278
// Size: 1612 bytes
// Signature: void __cdecl __sort<std::__ndk1::__less<DictionaryCreator::Main::Character,DictionaryCreator::Main::Character>&,DictionaryCreator::Main::Character*>(Character * param_1, Character * param_2, __less * param_3)


/* void std::__ndk1::__sort<std::__ndk1::__less<DictionaryCreator::Main::Character,
   DictionaryCreator::Main::Character>&,
   DictionaryCreator::Main::Character*>(DictionaryCreator::Main::Character*,
   DictionaryCreator::Main::Character*, std::__ndk1::__less<DictionaryCreator::Main::Character,
   DictionaryCreator::Main::Character>&) */

void std::__ndk1::
     __sort<std::__ndk1::__less<DictionaryCreator::Main::Character,DictionaryCreator::Main::Character>&,DictionaryCreator::Main::Character*>
               (Character *param_1,Character *param_2,__less *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined (*pauVar4) [16];
  byte bVar5;
  Character CVar6;
  byte bVar7;
  long lVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  undefined (*pauVar14) [16];
  ulong uVar15;
  undefined8 uVar16;
  undefined (*pauVar17) [16];
  undefined (*pauVar18) [16];
  undefined8 uVar19;
  long lVar20;
  undefined (*pauVar21) [16];
  undefined (*pauVar22) [16];
  undefined auVar23 [16];
  
LAB_00c022a0:
  pauVar21 = (undefined (*) [16])(*(undefined (*) [16])((long)param_2 + -0x10) + 8);
  pauVar18 = (undefined (*) [16])param_1;
LAB_00c022a8:
  param_1 = (Character *)pauVar18;
  uVar15 = (long)param_2 - (long)param_1;
  uVar12 = (long)uVar15 >> 3;
  switch(uVar12) {
  case 0:
  case 1:
    goto switchD_00c02654_caseD_0;
  case 2:
    if ((byte)(*(undefined (*) [16])((long)param_2 + -0x10))[8] <
        (byte)(*(undefined (*) [16])param_1)[0]) {
      uVar16 = *(undefined8 *)*(undefined (*) [16])param_1;
      *(undefined8 *)*(undefined (*) [16])param_1 =
           *(undefined8 *)(*(undefined (*) [16])((long)param_2 + -0x10) + 8);
      *(undefined8 *)(*(undefined (*) [16])((long)param_2 + -0x10) + 8) = uVar16;
      return;
    }
    return;
  case 3:
    bVar5 = (*(undefined (*) [16])param_1)[8];
    if ((byte)(*(undefined (*) [16])param_1)[0] <= bVar5) {
      if (bVar5 <= (byte)(*(undefined (*) [16])((long)param_2 + -0x10))[8]) {
        return;
      }
      uVar16 = *(undefined8 *)(*(undefined (*) [16])param_1 + 8);
      *(undefined8 *)(*(undefined (*) [16])param_1 + 8) =
           *(undefined8 *)(*(undefined (*) [16])((long)param_2 + -0x10) + 8);
      *(undefined8 *)(*(undefined (*) [16])((long)param_2 + -0x10) + 8) = uVar16;
      if ((byte)(*(undefined (*) [16])param_1)[8] < (byte)(*(undefined (*) [16])param_1)[0]) {
        auVar23 = NEON_ext(*(undefined (*) [16])param_1,*(undefined (*) [16])param_1,8,1);
        *(long *)(*(undefined (*) [16])param_1 + 8) = auVar23._8_8_;
        *(long *)*(undefined (*) [16])param_1 = auVar23._0_8_;
        return;
      }
      return;
    }
    uVar16 = *(undefined8 *)*(undefined (*) [16])param_1;
    if ((byte)(*(undefined (*) [16])((long)param_2 + -0x10))[8] < bVar5) {
      *(undefined8 *)*(undefined (*) [16])param_1 =
           *(undefined8 *)(*(undefined (*) [16])((long)param_2 + -0x10) + 8);
      *(undefined8 *)(*(undefined (*) [16])((long)param_2 + -0x10) + 8) = uVar16;
      return;
    }
    *(undefined8 *)*(undefined (*) [16])param_1 = *(undefined8 *)(*(undefined (*) [16])param_1 + 8);
    *(undefined8 *)(*(undefined (*) [16])param_1 + 8) = uVar16;
    if ((byte)(*(undefined (*) [16])((long)param_2 + -0x10))[8] < (byte)uVar16) {
      *(undefined8 *)(*(undefined (*) [16])param_1 + 8) =
           *(undefined8 *)(*(undefined (*) [16])((long)param_2 + -0x10) + 8);
      *(undefined8 *)(*(undefined (*) [16])((long)param_2 + -0x10) + 8) = uVar16;
      return;
    }
    return;
  case 4:
    __sort4<std::__ndk1::__less<DictionaryCreator::Main::Character,DictionaryCreator::Main::Character>&,DictionaryCreator::Main::Character*>
              (param_1,(Character *)(*(undefined (*) [16])param_1 + 8),
               (Character *)((long)param_1 + 0x10),(Character *)pauVar21,param_3);
    return;
  case 5:
    pauVar18 = (undefined (*) [16])((long)param_1 + 0x10);
    puVar1 = (undefined8 *)(*(undefined (*) [16])((long)param_1 + 0x10) + 8);
    __sort4<std::__ndk1::__less<DictionaryCreator::Main::Character,DictionaryCreator::Main::Character>&,DictionaryCreator::Main::Character*>
              (param_1,(Character *)(*(undefined (*) [16])param_1 + 8),(Character *)pauVar18,
               (Character *)puVar1,param_3);
    if ((byte)(*(undefined (*) [16])((long)param_1 + 0x10))[8] <=
        (byte)(*(undefined (*) [16])((long)param_2 + -0x10))[8]) {
      return;
    }
    uVar16 = *puVar1;
    *puVar1 = *(undefined8 *)(*(undefined (*) [16])((long)param_2 + -0x10) + 8);
    *(undefined8 *)(*(undefined (*) [16])((long)param_2 + -0x10) + 8) = uVar16;
    if ((byte)(*pauVar18)[0] <= (byte)*(Character *)puVar1) {
      return;
    }
    uVar16 = *puVar1;
    CVar6 = *(Character *)(*(undefined (*) [16])param_1 + 8);
    uVar19 = *(undefined8 *)*pauVar18;
    uVar11 = (uint)uVar16 & 0xff;
    *(undefined8 *)*pauVar18 = uVar16;
    *puVar1 = uVar19;
    if ((byte)CVar6 <= uVar11) {
      return;
    }
    bVar5 = (*(undefined (*) [16])param_1)[0];
    uVar19 = *(undefined8 *)(*(undefined (*) [16])param_1 + 8);
    *(undefined8 *)(*(undefined (*) [16])param_1 + 8) = uVar16;
    *(undefined8 *)*(undefined (*) [16])((long)param_1 + 0x10) = uVar19;
    if (bVar5 <= uVar11) {
      return;
    }
    uVar19 = *(undefined8 *)*(undefined (*) [16])param_1;
    *(undefined8 *)*(undefined (*) [16])param_1 = uVar16;
    *(undefined8 *)(*(undefined (*) [16])param_1 + 8) = uVar19;
    return;
  default:
    if (0xf7 < (long)uVar15) {
      uVar3 = uVar12;
      if ((long)uVar12 < 0) {
        uVar3 = uVar12 + 1;
      }
      pauVar18 = (undefined (*) [16])
                 (*(undefined (*) [16])param_1 + (uVar3 & 0x3ffffffffffffffe) * 4);
      if (uVar15 < 0x1f39) {
        bVar5 = (*pauVar18)[0];
        if (bVar5 < (byte)(*(undefined (*) [16])param_1)[0]) {
          uVar16 = *(undefined8 *)*(undefined (*) [16])param_1;
          if ((byte)(*pauVar21)[0] < bVar5) {
            uVar11 = 1;
            *(undefined8 *)*(undefined (*) [16])param_1 = *(undefined8 *)*pauVar21;
          }
          else {
            *(undefined8 *)*(undefined (*) [16])param_1 = *(undefined8 *)*pauVar18;
            *(undefined8 *)*pauVar18 = uVar16;
            if ((byte)uVar16 <= (byte)(*pauVar21)[0]) {
LAB_00c02448:
              uVar11 = 1;
              goto LAB_00c0245c;
            }
            uVar11 = 2;
            *(undefined8 *)*pauVar18 = *(undefined8 *)*pauVar21;
          }
          *(undefined8 *)*pauVar21 = uVar16;
        }
        else if ((byte)(*pauVar21)[0] < bVar5) {
          uVar16 = *(undefined8 *)*pauVar18;
          *(undefined8 *)*pauVar18 = *(undefined8 *)*pauVar21;
          *(undefined8 *)*pauVar21 = uVar16;
          if ((byte)(*(undefined (*) [16])param_1)[0] <= (byte)(*pauVar18)[0]) goto LAB_00c02448;
          uVar11 = 2;
          uVar16 = *(undefined8 *)*(undefined (*) [16])param_1;
          *(undefined8 *)*(undefined (*) [16])param_1 = *(undefined8 *)*pauVar18;
          *(undefined8 *)*pauVar18 = uVar16;
        }
        else {
          uVar11 = 0;
        }
      }
      else {
        uVar15 = uVar12 + 3;
        if (-1 < (long)uVar12) {
          uVar15 = uVar12;
        }
        lVar13 = (uVar15 & 0x7ffffffffffffffc) * 2;
        puVar1 = (undefined8 *)(*(undefined (*) [16])param_1 + lVar13);
        puVar2 = (undefined8 *)(*pauVar18 + lVar13);
        uVar11 = __sort4<std::__ndk1::__less<DictionaryCreator::Main::Character,DictionaryCreator::Main::Character>&,DictionaryCreator::Main::Character*>
                           (param_1,(Character *)puVar1,(Character *)pauVar18,(Character *)puVar2,
                            param_3);
        if ((byte)(*pauVar21)[0] < (byte)*(Character *)puVar2) {
          uVar16 = *puVar2;
          *puVar2 = *(undefined8 *)*pauVar21;
          *(undefined8 *)*pauVar21 = uVar16;
          if ((byte)*(Character *)puVar2 < (byte)(*pauVar18)[0]) {
            uVar16 = *(undefined8 *)*pauVar18;
            *(undefined8 *)*pauVar18 = *puVar2;
            *puVar2 = uVar16;
            if ((byte)(*pauVar18)[0] < (byte)*(Character *)puVar1) {
              uVar16 = *puVar1;
              *puVar1 = *(undefined8 *)*pauVar18;
              *(undefined8 *)*pauVar18 = uVar16;
              if ((byte)*(Character *)puVar1 < (byte)(*(undefined (*) [16])param_1)[0]) {
                uVar11 = uVar11 + 4;
                uVar16 = *(undefined8 *)*(undefined (*) [16])param_1;
                *(undefined8 *)*(undefined (*) [16])param_1 = *puVar1;
                *puVar1 = uVar16;
              }
              else {
                uVar11 = uVar11 + 3;
              }
            }
            else {
              uVar11 = uVar11 + 2;
            }
          }
          else {
            uVar11 = uVar11 + 1;
          }
        }
      }
LAB_00c0245c:
      bVar5 = (*(undefined (*) [16])param_1)[0];
      pauVar14 = pauVar21;
      pauVar17 = pauVar21;
      if ((byte)(*pauVar18)[0] <= bVar5) break;
      goto LAB_00c024a8;
    }
    bVar5 = (*(undefined (*) [16])param_1)[8];
    bVar7 = (*(undefined (*) [16])param_1)[0];
    uVar11 = (uint)(byte)(*(undefined (*) [16])((long)param_1 + 0x10))[0];
    if ((uint)bVar5 < (uint)bVar7) {
      uVar16 = *(undefined8 *)*(undefined (*) [16])param_1;
      if (uVar11 < bVar5) {
        *(undefined8 *)*(undefined (*) [16])param_1 =
             *(undefined8 *)*(undefined (*) [16])((long)param_1 + 0x10);
      }
      else {
        *(undefined8 *)*(undefined (*) [16])param_1 =
             *(undefined8 *)(*(undefined (*) [16])param_1 + 8);
        *(undefined8 *)(*(undefined (*) [16])param_1 + 8) = uVar16;
        if (((uint)uVar16 & 0xff) <= uVar11) goto LAB_00c02834;
        *(undefined8 *)(*(undefined (*) [16])param_1 + 8) =
             *(undefined8 *)*(undefined (*) [16])((long)param_1 + 0x10);
      }
      uVar11 = (uint)uVar16 & 0xff;
      *(undefined8 *)*(undefined (*) [16])((long)param_1 + 0x10) = uVar16;
    }
    else if (uVar11 < bVar5) {
      uVar16 = *(undefined8 *)(*(undefined (*) [16])param_1 + 8);
      uVar19 = *(undefined8 *)*(undefined (*) [16])((long)param_1 + 0x10);
      uVar11 = (uint)uVar16 & 0xff;
      *(undefined8 *)(*(undefined (*) [16])param_1 + 8) = uVar19;
      *(undefined8 *)*(undefined (*) [16])((long)param_1 + 0x10) = uVar16;
      if ((uint)(byte)uVar19 <= (uint)bVar7 && (uint)bVar7 != (uint)(byte)uVar19) {
        uVar16 = *(undefined8 *)*(undefined (*) [16])param_1;
        *(undefined8 *)*(undefined (*) [16])param_1 = uVar19;
        *(undefined8 *)(*(undefined (*) [16])param_1 + 8) = uVar16;
      }
    }
LAB_00c02834:
    if ((undefined (*) [16])(*(undefined (*) [16])((long)param_1 + 0x10) + 8) ==
        (undefined (*) [16])param_2) {
      return;
    }
    lVar13 = 0;
    pauVar18 = (undefined (*) [16])(*(undefined (*) [16])((long)param_1 + 0x10) + 8);
    goto LAB_00c02844;
  }
  while (pauVar14 = (undefined (*) [16])(pauVar17[-1] + 8), pauVar14 != (undefined (*) [16])param_1)
  {
    pauVar22 = pauVar17 + -1;
    pauVar17 = pauVar14;
    if ((byte)(*pauVar22)[8] < (byte)(*pauVar18)[0]) goto code_r0x00c02494;
  }
  pauVar14 = (undefined (*) [16])(*(undefined (*) [16])param_1 + 8);
  pauVar18 = pauVar14;
  if ((byte)(*pauVar21)[0] <= bVar5) {
    while( true ) {
      if (pauVar18 == pauVar21) {
        return;
      }
      if (bVar5 < (byte)(*pauVar18)[0]) break;
      pauVar18 = (undefined (*) [16])(*pauVar18 + 8);
    }
    uVar16 = *(undefined8 *)*pauVar18;
    pauVar14 = (undefined (*) [16])(*pauVar18 + 8);
    *(undefined8 *)*pauVar18 = *(undefined8 *)*pauVar21;
    *(undefined8 *)*pauVar21 = uVar16;
  }
  pauVar17 = pauVar21;
  if (pauVar14 == pauVar21) {
    return;
  }
  while( true ) {
    pauVar18 = (undefined (*) [16])(pauVar14[-1] + 8);
    do {
      pauVar14 = pauVar18;
      pauVar18 = (undefined (*) [16])(*pauVar14 + 8);
    } while ((byte)(*pauVar18)[0] <= (byte)(*(undefined (*) [16])param_1)[0]);
    pauVar14 = pauVar14 + 1;
    do {
      pauVar17 = (undefined (*) [16])(pauVar17[-1] + 8);
    } while ((byte)(*(undefined (*) [16])param_1)[0] < (byte)(*pauVar17)[0]);
    if (pauVar17 <= pauVar18) break;
    uVar16 = *(undefined8 *)*pauVar18;
    *(undefined8 *)*pauVar18 = *(undefined8 *)*pauVar17;
    *(undefined8 *)*pauVar17 = uVar16;
  }
  goto LAB_00c022a8;
code_r0x00c02494:
  uVar11 = uVar11 + 1;
  uVar16 = *(undefined8 *)*(undefined (*) [16])param_1;
  *(undefined8 *)*(undefined (*) [16])param_1 = *(undefined8 *)*pauVar14;
  *(undefined8 *)*pauVar14 = uVar16;
LAB_00c024a8:
  pauVar17 = (undefined (*) [16])(*(undefined (*) [16])param_1 + 8);
  pauVar22 = pauVar17;
  if (pauVar17 < pauVar14) {
    while( true ) {
      pauVar17 = (undefined (*) [16])(pauVar22[-1] + 8);
      do {
        pauVar22 = pauVar17;
        pauVar17 = (undefined (*) [16])(*pauVar22 + 8);
      } while ((byte)(*pauVar17)[0] < (byte)(*pauVar18)[0]);
      pauVar22 = pauVar22 + 1;
      do {
        pauVar14 = (undefined (*) [16])(pauVar14[-1] + 8);
      } while ((byte)(*pauVar18)[0] <= (byte)(*pauVar14)[0]);
      if (pauVar14 < pauVar17) break;
      uVar16 = *(undefined8 *)*pauVar17;
      uVar11 = uVar11 + 1;
      pauVar4 = pauVar14;
      if (pauVar17 != pauVar18) {
        pauVar4 = pauVar18;
      }
      *(undefined8 *)*pauVar17 = *(undefined8 *)*pauVar14;
      *(undefined8 *)*pauVar14 = uVar16;
      pauVar18 = pauVar4;
    }
  }
  if ((pauVar17 != pauVar18) && ((byte)(*pauVar18)[0] < (byte)(*pauVar17)[0])) {
    uVar11 = uVar11 + 1;
    uVar16 = *(undefined8 *)*pauVar17;
    *(undefined8 *)*pauVar17 = *(undefined8 *)*pauVar18;
    *(undefined8 *)*pauVar18 = uVar16;
  }
  if (uVar11 == 0) {
    bVar9 = __insertion_sort_incomplete<std::__ndk1::__less<DictionaryCreator::Main::Character,DictionaryCreator::Main::Character>&,DictionaryCreator::Main::Character*>
                      (param_1,(Character *)pauVar17,param_3);
    bVar10 = __insertion_sort_incomplete<std::__ndk1::__less<DictionaryCreator::Main::Character,DictionaryCreator::Main::Character>&,DictionaryCreator::Main::Character*>
                       ((Character *)(undefined (*) [16])(*pauVar17 + 8),param_2,param_3);
    if (bVar10) goto LAB_00c02634;
    pauVar18 = (undefined (*) [16])(*pauVar17 + 8);
    if (bVar9) goto LAB_00c022a8;
  }
  if ((long)param_2 - (long)pauVar17 <= (long)pauVar17 - (long)param_1) {
    __sort<std::__ndk1::__less<DictionaryCreator::Main::Character,DictionaryCreator::Main::Character>&,DictionaryCreator::Main::Character*>
              ((Character *)(*pauVar17 + 8),param_2,param_3);
    param_2 = (Character *)pauVar17;
    goto LAB_00c022a0;
  }
  __sort<std::__ndk1::__less<DictionaryCreator::Main::Character,DictionaryCreator::Main::Character>&,DictionaryCreator::Main::Character*>
            (param_1,(Character *)pauVar17,param_3);
  pauVar18 = (undefined (*) [16])(*pauVar17 + 8);
  goto LAB_00c022a8;
LAB_00c02634:
  param_2 = (Character *)pauVar17;
  if (bVar9) {
    return;
  }
  goto LAB_00c022a0;
LAB_00c02844:
  if ((byte)(*pauVar18)[0] < uVar11) {
    uVar16 = *(undefined8 *)*pauVar18;
    lVar8 = lVar13;
    do {
      lVar20 = lVar8;
      *(undefined8 *)(*(undefined (*) [16])((long)param_1 + 0x10) + lVar20 + 8) =
           *(undefined8 *)(*(undefined (*) [16])((long)param_1 + 0x10) + lVar20);
      pauVar21 = (undefined (*) [16])param_1;
      if (lVar20 == -0x10) goto LAB_00c0288c;
      lVar8 = lVar20 + -8;
    } while ((byte)uVar16 < (byte)(*(undefined (*) [16])param_1)[lVar20 + 8]);
    pauVar21 = (undefined (*) [16])(*(undefined (*) [16])((long)param_1 + 0x10) + lVar20);
LAB_00c0288c:
    *(undefined8 *)*pauVar21 = uVar16;
  }
  if ((undefined (*) [16])(*pauVar18 + 8) == (undefined (*) [16])param_2) {
switchD_00c02654_caseD_0:
    return;
  }
  uVar11 = (uint)(byte)(*pauVar18)[0];
  lVar13 = lVar13 + 8;
  pauVar18 = (undefined (*) [16])(*pauVar18 + 8);
  goto LAB_00c02844;
}


