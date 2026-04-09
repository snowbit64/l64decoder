// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sort<std::__ndk1::__less<MarkovHuffmanTree::HEntry,MarkovHuffmanTree::HEntry>&,MarkovHuffmanTree::HEntry*>
// Entry Point: 00c0038c
// Size: 1600 bytes
// Signature: void __cdecl __sort<std::__ndk1::__less<MarkovHuffmanTree::HEntry,MarkovHuffmanTree::HEntry>&,MarkovHuffmanTree::HEntry*>(HEntry * param_1, HEntry * param_2, __less * param_3)


/* void std::__ndk1::__sort<std::__ndk1::__less<MarkovHuffmanTree::HEntry,
   MarkovHuffmanTree::HEntry>&, MarkovHuffmanTree::HEntry*>(MarkovHuffmanTree::HEntry*,
   MarkovHuffmanTree::HEntry*, std::__ndk1::__less<MarkovHuffmanTree::HEntry,
   MarkovHuffmanTree::HEntry>&) */

void std::__ndk1::
     __sort<std::__ndk1::__less<MarkovHuffmanTree::HEntry,MarkovHuffmanTree::HEntry>&,MarkovHuffmanTree::HEntry*>
               (HEntry *param_1,HEntry *param_2,__less *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined (*pauVar4) [16];
  uint uVar5;
  uint uVar6;
  long lVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  undefined (*pauVar13) [16];
  ulong uVar14;
  undefined8 uVar15;
  undefined (*pauVar16) [16];
  undefined8 uVar17;
  undefined (*pauVar18) [16];
  long lVar19;
  undefined (*pauVar20) [16];
  undefined (*pauVar21) [16];
  undefined auVar22 [16];
  
LAB_00c003b4:
  pauVar20 = (undefined (*) [16])(*(undefined (*) [16])((long)param_2 + -0x10) + 8);
  pauVar18 = (undefined (*) [16])param_1;
LAB_00c003bc:
  param_1 = (HEntry *)pauVar18;
  uVar14 = (long)param_2 - (long)param_1;
  uVar11 = (long)uVar14 >> 3;
  switch(uVar11) {
  case 0:
  case 1:
    goto switchD_00c00768_caseD_0;
  case 2:
    if (*(uint *)(*(undefined (*) [16])((long)param_2 + -0x10) + 8) <
        *(uint *)*(undefined (*) [16])param_1) {
      uVar15 = *(undefined8 *)*(undefined (*) [16])param_1;
      *(undefined8 *)*(undefined (*) [16])param_1 =
           *(undefined8 *)(*(undefined (*) [16])((long)param_2 + -0x10) + 8);
      *(undefined8 *)(*(undefined (*) [16])((long)param_2 + -0x10) + 8) = uVar15;
      return;
    }
    return;
  case 3:
    uVar10 = *(uint *)(*(undefined (*) [16])param_1 + 8);
    if (*(uint *)*(undefined (*) [16])param_1 <= uVar10) {
      if (uVar10 <= *(uint *)(*(undefined (*) [16])((long)param_2 + -0x10) + 8)) {
        return;
      }
      uVar15 = *(undefined8 *)(*(undefined (*) [16])param_1 + 8);
      *(undefined8 *)(*(undefined (*) [16])param_1 + 8) =
           *(undefined8 *)(*(undefined (*) [16])((long)param_2 + -0x10) + 8);
      *(undefined8 *)(*(undefined (*) [16])((long)param_2 + -0x10) + 8) = uVar15;
      if (*(uint *)(*(undefined (*) [16])param_1 + 8) < *(uint *)*(undefined (*) [16])param_1) {
        auVar22 = NEON_ext(*(undefined (*) [16])param_1,*(undefined (*) [16])param_1,8,1);
        *(long *)(*(undefined (*) [16])param_1 + 8) = auVar22._8_8_;
        *(long *)*(undefined (*) [16])param_1 = auVar22._0_8_;
        return;
      }
      return;
    }
    uVar15 = *(undefined8 *)*(undefined (*) [16])param_1;
    if (*(uint *)(*(undefined (*) [16])((long)param_2 + -0x10) + 8) < uVar10) {
      *(undefined8 *)*(undefined (*) [16])param_1 =
           *(undefined8 *)(*(undefined (*) [16])((long)param_2 + -0x10) + 8);
      *(undefined8 *)(*(undefined (*) [16])((long)param_2 + -0x10) + 8) = uVar15;
      return;
    }
    *(undefined8 *)*(undefined (*) [16])param_1 = *(undefined8 *)(*(undefined (*) [16])param_1 + 8);
    *(undefined8 *)(*(undefined (*) [16])param_1 + 8) = uVar15;
    if (*(uint *)(*(undefined (*) [16])((long)param_2 + -0x10) + 8) < (uint)uVar15) {
      *(undefined8 *)(*(undefined (*) [16])param_1 + 8) =
           *(undefined8 *)(*(undefined (*) [16])((long)param_2 + -0x10) + 8);
      *(undefined8 *)(*(undefined (*) [16])((long)param_2 + -0x10) + 8) = uVar15;
      return;
    }
    return;
  case 4:
    __sort4<std::__ndk1::__less<MarkovHuffmanTree::HEntry,MarkovHuffmanTree::HEntry>&,MarkovHuffmanTree::HEntry*>
              (param_1,(HEntry *)(*(undefined (*) [16])param_1 + 8),(HEntry *)((long)param_1 + 0x10)
               ,(HEntry *)pauVar20,param_3);
    return;
  case 5:
    pauVar18 = (undefined (*) [16])((long)param_1 + 0x10);
    puVar1 = (undefined8 *)(*(undefined (*) [16])((long)param_1 + 0x10) + 8);
    __sort4<std::__ndk1::__less<MarkovHuffmanTree::HEntry,MarkovHuffmanTree::HEntry>&,MarkovHuffmanTree::HEntry*>
              (param_1,(HEntry *)(*(undefined (*) [16])param_1 + 8),(HEntry *)pauVar18,
               (HEntry *)puVar1,param_3);
    if (*(uint *)(*(undefined (*) [16])((long)param_1 + 0x10) + 8) <=
        *(uint *)(*(undefined (*) [16])((long)param_2 + -0x10) + 8)) {
      return;
    }
    uVar15 = *puVar1;
    *puVar1 = *(undefined8 *)(*(undefined (*) [16])((long)param_2 + -0x10) + 8);
    *(undefined8 *)(*(undefined (*) [16])((long)param_2 + -0x10) + 8) = uVar15;
    if (*(uint *)*pauVar18 <= *(uint *)puVar1) {
      return;
    }
    uVar15 = *puVar1;
    uVar10 = *(uint *)(*(undefined (*) [16])param_1 + 8);
    uVar17 = *(undefined8 *)*pauVar18;
    *(undefined8 *)*pauVar18 = uVar15;
    *puVar1 = uVar17;
    if (uVar10 <= (uint)uVar15) {
      return;
    }
    uVar10 = *(uint *)*(undefined (*) [16])param_1;
    uVar17 = *(undefined8 *)(*(undefined (*) [16])param_1 + 8);
    *(undefined8 *)(*(undefined (*) [16])param_1 + 8) = uVar15;
    *(undefined8 *)*(undefined (*) [16])((long)param_1 + 0x10) = uVar17;
    if (uVar10 <= (uint)uVar15) {
      return;
    }
    uVar17 = *(undefined8 *)*(undefined (*) [16])param_1;
    *(undefined8 *)*(undefined (*) [16])param_1 = uVar15;
    *(undefined8 *)(*(undefined (*) [16])param_1 + 8) = uVar17;
    return;
  default:
    if (0xf7 < (long)uVar14) {
      uVar3 = uVar11;
      if ((long)uVar11 < 0) {
        uVar3 = uVar11 + 1;
      }
      pauVar18 = (undefined (*) [16])
                 (*(undefined (*) [16])param_1 + (uVar3 & 0x3ffffffffffffffe) * 4);
      if (uVar14 < 0x1f39) {
        uVar10 = *(uint *)*pauVar18;
        if (uVar10 < *(uint *)*(undefined (*) [16])param_1) {
          uVar15 = *(undefined8 *)*(undefined (*) [16])param_1;
          if (*(uint *)*pauVar20 < uVar10) {
            uVar10 = 1;
            *(undefined8 *)*(undefined (*) [16])param_1 = *(undefined8 *)*pauVar20;
          }
          else {
            *(undefined8 *)*(undefined (*) [16])param_1 = *(undefined8 *)*pauVar18;
            *(undefined8 *)*pauVar18 = uVar15;
            if ((uint)uVar15 <= *(uint *)*pauVar20) {
LAB_00c0055c:
              uVar10 = 1;
              goto LAB_00c00570;
            }
            uVar10 = 2;
            *(undefined8 *)*pauVar18 = *(undefined8 *)*pauVar20;
          }
          *(undefined8 *)*pauVar20 = uVar15;
        }
        else if (*(uint *)*pauVar20 < uVar10) {
          uVar15 = *(undefined8 *)*pauVar18;
          *(undefined8 *)*pauVar18 = *(undefined8 *)*pauVar20;
          *(undefined8 *)*pauVar20 = uVar15;
          if (*(uint *)*(undefined (*) [16])param_1 <= *(uint *)*pauVar18) goto LAB_00c0055c;
          uVar10 = 2;
          uVar15 = *(undefined8 *)*(undefined (*) [16])param_1;
          *(undefined8 *)*(undefined (*) [16])param_1 = *(undefined8 *)*pauVar18;
          *(undefined8 *)*pauVar18 = uVar15;
        }
        else {
          uVar10 = 0;
        }
      }
      else {
        uVar14 = uVar11 + 3;
        if (-1 < (long)uVar11) {
          uVar14 = uVar11;
        }
        lVar12 = (uVar14 & 0x7ffffffffffffffc) * 2;
        puVar1 = (undefined8 *)(*(undefined (*) [16])param_1 + lVar12);
        puVar2 = (undefined8 *)(*pauVar18 + lVar12);
        uVar10 = __sort4<std::__ndk1::__less<MarkovHuffmanTree::HEntry,MarkovHuffmanTree::HEntry>&,MarkovHuffmanTree::HEntry*>
                           (param_1,(HEntry *)puVar1,(HEntry *)pauVar18,(HEntry *)puVar2,param_3);
        if (*(uint *)*pauVar20 < *(uint *)puVar2) {
          uVar15 = *puVar2;
          *puVar2 = *(undefined8 *)*pauVar20;
          *(undefined8 *)*pauVar20 = uVar15;
          if (*(uint *)puVar2 < *(uint *)*pauVar18) {
            uVar15 = *(undefined8 *)*pauVar18;
            *(undefined8 *)*pauVar18 = *puVar2;
            *puVar2 = uVar15;
            if (*(uint *)*pauVar18 < *(uint *)puVar1) {
              uVar15 = *puVar1;
              *puVar1 = *(undefined8 *)*pauVar18;
              *(undefined8 *)*pauVar18 = uVar15;
              if (*(uint *)puVar1 < *(uint *)*(undefined (*) [16])param_1) {
                uVar10 = uVar10 + 4;
                uVar15 = *(undefined8 *)*(undefined (*) [16])param_1;
                *(undefined8 *)*(undefined (*) [16])param_1 = *puVar1;
                *puVar1 = uVar15;
              }
              else {
                uVar10 = uVar10 + 3;
              }
            }
            else {
              uVar10 = uVar10 + 2;
            }
          }
          else {
            uVar10 = uVar10 + 1;
          }
        }
      }
LAB_00c00570:
      uVar5 = *(uint *)*(undefined (*) [16])param_1;
      pauVar13 = pauVar20;
      pauVar16 = pauVar20;
      if (*(uint *)*pauVar18 <= uVar5) break;
      goto LAB_00c005bc;
    }
    uVar10 = *(uint *)(*(undefined (*) [16])param_1 + 8);
    uVar5 = *(uint *)*(undefined (*) [16])param_1;
    uVar6 = *(uint *)*(undefined (*) [16])((long)param_1 + 0x10);
    uVar11 = (ulong)uVar6;
    if (uVar10 < uVar5) {
      uVar14 = *(ulong *)*(undefined (*) [16])param_1;
      if (uVar6 < uVar10) {
        *(undefined8 *)*(undefined (*) [16])param_1 =
             *(undefined8 *)*(undefined (*) [16])((long)param_1 + 0x10);
      }
      else {
        *(undefined8 *)*(undefined (*) [16])param_1 =
             *(undefined8 *)(*(undefined (*) [16])param_1 + 8);
        *(ulong *)(*(undefined (*) [16])param_1 + 8) = uVar14;
        if ((uint)uVar14 <= uVar6) goto LAB_00c0093c;
        *(undefined8 *)(*(undefined (*) [16])param_1 + 8) =
             *(undefined8 *)*(undefined (*) [16])((long)param_1 + 0x10);
      }
      uVar11 = uVar14 & 0xffffffff;
      *(ulong *)*(undefined (*) [16])((long)param_1 + 0x10) = uVar14;
    }
    else if (uVar6 < uVar10) {
      uVar11 = *(ulong *)(*(undefined (*) [16])param_1 + 8);
      uVar15 = *(undefined8 *)*(undefined (*) [16])((long)param_1 + 0x10);
      *(undefined8 *)(*(undefined (*) [16])param_1 + 8) = uVar15;
      *(ulong *)*(undefined (*) [16])((long)param_1 + 0x10) = uVar11;
      if ((uint)uVar15 < uVar5) {
        uVar17 = *(undefined8 *)*(undefined (*) [16])param_1;
        *(undefined8 *)*(undefined (*) [16])param_1 = uVar15;
        *(undefined8 *)(*(undefined (*) [16])param_1 + 8) = uVar17;
      }
    }
LAB_00c0093c:
    if ((undefined (*) [16])(*(undefined (*) [16])((long)param_1 + 0x10) + 8) ==
        (undefined (*) [16])param_2) {
      return;
    }
    lVar12 = 0;
    pauVar18 = (undefined (*) [16])(*(undefined (*) [16])((long)param_1 + 0x10) + 8);
    goto LAB_00c0094c;
  }
  while (pauVar13 = (undefined (*) [16])(pauVar16[-1] + 8), pauVar13 != (undefined (*) [16])param_1)
  {
    pauVar21 = pauVar16 + -1;
    pauVar16 = pauVar13;
    if (*(uint *)(*pauVar21 + 8) < *(uint *)*pauVar18) goto code_r0x00c005a8;
  }
  pauVar13 = (undefined (*) [16])(*(undefined (*) [16])param_1 + 8);
  pauVar18 = pauVar13;
  if (*(uint *)*pauVar20 <= uVar5) {
    while( true ) {
      if (pauVar18 == pauVar20) {
        return;
      }
      if (uVar5 < *(uint *)*pauVar18) break;
      pauVar18 = (undefined (*) [16])(*pauVar18 + 8);
    }
    uVar15 = *(undefined8 *)*pauVar18;
    pauVar13 = (undefined (*) [16])(*pauVar18 + 8);
    *(undefined8 *)*pauVar18 = *(undefined8 *)*pauVar20;
    *(undefined8 *)*pauVar20 = uVar15;
  }
  pauVar16 = pauVar20;
  if (pauVar13 == pauVar20) {
    return;
  }
  while( true ) {
    pauVar18 = (undefined (*) [16])(pauVar13[-1] + 8);
    do {
      pauVar13 = pauVar18;
      pauVar18 = (undefined (*) [16])(*pauVar13 + 8);
    } while (*(uint *)*pauVar18 <= *(uint *)*(undefined (*) [16])param_1);
    pauVar13 = pauVar13 + 1;
    do {
      pauVar16 = (undefined (*) [16])(pauVar16[-1] + 8);
    } while (*(uint *)*(undefined (*) [16])param_1 < *(uint *)*pauVar16);
    if (pauVar16 <= pauVar18) break;
    uVar15 = *(undefined8 *)*pauVar18;
    *(undefined8 *)*pauVar18 = *(undefined8 *)*pauVar16;
    *(undefined8 *)*pauVar16 = uVar15;
  }
  goto LAB_00c003bc;
code_r0x00c005a8:
  uVar10 = uVar10 + 1;
  uVar15 = *(undefined8 *)*(undefined (*) [16])param_1;
  *(undefined8 *)*(undefined (*) [16])param_1 = *(undefined8 *)*pauVar13;
  *(undefined8 *)*pauVar13 = uVar15;
LAB_00c005bc:
  pauVar16 = (undefined (*) [16])(*(undefined (*) [16])param_1 + 8);
  pauVar21 = pauVar16;
  if (pauVar16 < pauVar13) {
    while( true ) {
      pauVar16 = (undefined (*) [16])(pauVar21[-1] + 8);
      do {
        pauVar21 = pauVar16;
        pauVar16 = (undefined (*) [16])(*pauVar21 + 8);
      } while (*(uint *)*pauVar16 < *(uint *)*pauVar18);
      pauVar21 = pauVar21 + 1;
      do {
        pauVar13 = (undefined (*) [16])(pauVar13[-1] + 8);
      } while (*(uint *)*pauVar18 <= *(uint *)*pauVar13);
      if (pauVar13 < pauVar16) break;
      uVar15 = *(undefined8 *)*pauVar16;
      uVar10 = uVar10 + 1;
      pauVar4 = pauVar13;
      if (pauVar16 != pauVar18) {
        pauVar4 = pauVar18;
      }
      *(undefined8 *)*pauVar16 = *(undefined8 *)*pauVar13;
      *(undefined8 *)*pauVar13 = uVar15;
      pauVar18 = pauVar4;
    }
  }
  if ((pauVar16 != pauVar18) && (*(uint *)*pauVar18 < *(uint *)*pauVar16)) {
    uVar10 = uVar10 + 1;
    uVar15 = *(undefined8 *)*pauVar16;
    *(undefined8 *)*pauVar16 = *(undefined8 *)*pauVar18;
    *(undefined8 *)*pauVar18 = uVar15;
  }
  if (uVar10 == 0) {
    bVar8 = __insertion_sort_incomplete<std::__ndk1::__less<MarkovHuffmanTree::HEntry,MarkovHuffmanTree::HEntry>&,MarkovHuffmanTree::HEntry*>
                      (param_1,(HEntry *)pauVar16,param_3);
    bVar9 = __insertion_sort_incomplete<std::__ndk1::__less<MarkovHuffmanTree::HEntry,MarkovHuffmanTree::HEntry>&,MarkovHuffmanTree::HEntry*>
                      ((HEntry *)(undefined (*) [16])(*pauVar16 + 8),param_2,param_3);
    if (bVar9) goto LAB_00c00748;
    pauVar18 = (undefined (*) [16])(*pauVar16 + 8);
    if (bVar8) goto LAB_00c003bc;
  }
  if ((long)param_2 - (long)pauVar16 <= (long)pauVar16 - (long)param_1) {
    __sort<std::__ndk1::__less<MarkovHuffmanTree::HEntry,MarkovHuffmanTree::HEntry>&,MarkovHuffmanTree::HEntry*>
              ((HEntry *)(*pauVar16 + 8),param_2,param_3);
    param_2 = (HEntry *)pauVar16;
    goto LAB_00c003b4;
  }
  __sort<std::__ndk1::__less<MarkovHuffmanTree::HEntry,MarkovHuffmanTree::HEntry>&,MarkovHuffmanTree::HEntry*>
            (param_1,(HEntry *)pauVar16,param_3);
  pauVar18 = (undefined (*) [16])(*pauVar16 + 8);
  goto LAB_00c003bc;
LAB_00c00748:
  param_2 = (HEntry *)pauVar16;
  if (bVar8) {
    return;
  }
  goto LAB_00c003b4;
LAB_00c0094c:
  if (*(uint *)*pauVar18 < (uint)uVar11) {
    uVar15 = *(undefined8 *)*pauVar18;
    lVar7 = lVar12;
    do {
      lVar19 = lVar7;
      *(undefined8 *)(*(undefined (*) [16])((long)param_1 + 0x10) + lVar19 + 8) =
           *(undefined8 *)(*(undefined (*) [16])((long)param_1 + 0x10) + lVar19);
      pauVar20 = (undefined (*) [16])param_1;
      if (lVar19 == -0x10) goto LAB_00c00994;
      lVar7 = lVar19 + -8;
    } while ((uint)uVar15 < *(uint *)(*(undefined (*) [16])param_1 + lVar19 + 8));
    pauVar20 = (undefined (*) [16])(*(undefined (*) [16])((long)param_1 + 0x10) + lVar19);
LAB_00c00994:
    *(undefined8 *)*pauVar20 = uVar15;
  }
  if ((undefined (*) [16])(*pauVar18 + 8) == (undefined (*) [16])param_2) {
switchD_00c00768_caseD_0:
    return;
  }
  uVar11 = (ulong)*(uint *)*pauVar18;
  lVar12 = lVar12 + 8;
  pauVar18 = (undefined (*) [16])(*pauVar18 + 8);
  goto LAB_00c0094c;
}


