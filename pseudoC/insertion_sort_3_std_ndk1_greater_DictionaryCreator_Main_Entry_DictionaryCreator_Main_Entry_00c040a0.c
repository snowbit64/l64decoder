// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __insertion_sort_3<std::__ndk1::greater<DictionaryCreator::Main::Entry>&,DictionaryCreator::Main::Entry*>
// Entry Point: 00c040a0
// Size: 500 bytes
// Signature: void __cdecl __insertion_sort_3<std::__ndk1::greater<DictionaryCreator::Main::Entry>&,DictionaryCreator::Main::Entry*>(Entry * param_1, Entry * param_2, greater * param_3)


/* void std::__ndk1::__insertion_sort_3<std::__ndk1::greater<DictionaryCreator::Main::Entry>&,
   DictionaryCreator::Main::Entry*>(DictionaryCreator::Main::Entry*,
   DictionaryCreator::Main::Entry*, std::__ndk1::greater<DictionaryCreator::Main::Entry>&) */

void std::__ndk1::
     __insertion_sort_3<std::__ndk1::greater<DictionaryCreator::Main::Entry>&,DictionaryCreator::Main::Entry*>
               (Entry *param_1,Entry *param_2,greater *param_3)

{
  Entry *pEVar1;
  uint uVar2;
  undefined4 uVar3;
  Entry EVar4;
  ushort uVar5;
  long lVar6;
  uint uVar7;
  Entry *pEVar8;
  long lVar9;
  uint *puVar10;
  long lVar11;
  Entry *pEVar12;
  Entry EVar13;
  undefined8 uVar14;
  uint *puVar15;
  Entry *pEVar16;
  undefined8 uVar17;
  long lVar18;
  uint *puVar19;
  uint *puVar20;
  undefined8 uVar21;
  
  lVar6 = tpidr_el0;
  lVar9 = *(long *)(lVar6 + 0x28);
  uVar7 = __sort3<std::__ndk1::greater<DictionaryCreator::Main::Entry>&,DictionaryCreator::Main::Entry*>
                    (param_1,param_1 + 0x20,param_1 + 0x40,param_3);
  pEVar8 = (Entry *)(ulong)uVar7;
  if (param_1 + 0x60 != param_2) {
    lVar11 = 0;
    puVar15 = (uint *)(param_1 + 0x60);
    puVar20 = (uint *)(param_1 + 0x40);
    do {
      puVar10 = puVar15;
      uVar7 = *puVar10;
      if (*puVar20 < uVar7) {
        EVar13 = *(Entry *)(puVar10 + 2);
        pEVar12 = *(Entry **)(puVar10 + 4);
        pEVar16 = (Entry *)(ulong)((byte)EVar13 >> 1);
LAB_00c04150:
        uVar3 = *(undefined4 *)((long)puVar10 + 10);
        uVar5 = *(ushort *)((long)puVar10 + 0xe);
        pEVar8 = (Entry *)(ulong)uVar5;
        if (((byte)EVar13 & 1) != 0) {
          pEVar16 = pEVar12;
        }
        EVar4 = *(Entry *)((long)puVar10 + 9);
        uVar14 = *(undefined8 *)(puVar10 + 6);
        *(undefined8 *)(puVar10 + 4) = 0;
        *(undefined8 *)(puVar10 + 6) = 0;
        *(undefined8 *)(puVar10 + 2) = 0;
        *puVar10 = *puVar20;
        puVar15 = puVar20 + 2;
        uVar21 = *(undefined8 *)(puVar20 + 2);
        uVar17 = *(undefined8 *)(puVar20 + 6);
        *(undefined8 *)(puVar10 + 4) = *(undefined8 *)(puVar20 + 4);
        *(undefined8 *)(puVar10 + 2) = uVar21;
        *(undefined8 *)(puVar10 + 6) = uVar17;
        *(undefined2 *)(puVar20 + 2) = 0;
        lVar18 = lVar11;
        puVar19 = (uint *)param_1;
        if (puVar20 != (uint *)param_1) {
          do {
            puVar19 = puVar20;
            pEVar8 = param_1 + lVar18;
            uVar2 = *(uint *)(pEVar8 + 0x20);
            if (uVar7 <= uVar2) {
              if (uVar7 < uVar2) {
                puVar15 = (uint *)(param_1 + lVar18 + 0x48);
                puVar19 = (uint *)(param_1 + lVar18 + 0x40);
                goto LAB_00c040f4;
              }
              pEVar1 = (Entry *)(ulong)((byte)param_1[lVar18 + 0x28] >> 1);
              if (((byte)param_1[lVar18 + 0x28] & 1) != 0) {
                pEVar1 = *(Entry **)(param_1 + lVar18 + 0x30);
              }
              if (pEVar16 <= pEVar1) goto LAB_00c040f4;
            }
            *(uint *)(pEVar8 + 0x40) = uVar2;
            puVar15 = puVar19 + -6;
            lVar18 = lVar18 + -0x20;
            *(undefined8 *)(pEVar8 + 0x50) = *(undefined8 *)(pEVar8 + 0x30);
            *(undefined8 *)(pEVar8 + 0x48) = *(undefined8 *)(pEVar8 + 0x28);
            *(undefined8 *)(pEVar8 + 0x58) = *(undefined8 *)(pEVar8 + 0x38);
            *(undefined2 *)(pEVar8 + 0x28) = 0;
            puVar20 = puVar19 + -8;
          } while (lVar18 != -0x40);
          puVar15 = (uint *)(param_1 + 8);
          puVar19 = (uint *)param_1;
        }
LAB_00c040f4:
        *puVar19 = uVar7;
        *(Entry *)puVar15 = EVar13;
        *(Entry *)((long)puVar19 + 9) = EVar4;
        *(Entry **)(puVar19 + 4) = pEVar12;
        *(undefined8 *)(puVar19 + 6) = uVar14;
        *(undefined4 *)((long)puVar19 + 10) = uVar3;
        *(ushort *)((long)puVar19 + 0xe) = uVar5;
      }
      else if (*puVar20 <= uVar7) {
        EVar13 = *(Entry *)(puVar10 + 2);
        pEVar12 = *(Entry **)(puVar10 + 4);
        pEVar16 = (Entry *)(ulong)((byte)EVar13 >> 1);
        pEVar8 = pEVar16;
        if (((byte)EVar13 & 1) != 0) {
          pEVar8 = pEVar12;
        }
        pEVar1 = (Entry *)(ulong)((byte)*(Entry *)(puVar20 + 2) >> 1);
        if (((byte)*(Entry *)(puVar20 + 2) & 1) != 0) {
          pEVar1 = *(Entry **)(puVar20 + 4);
        }
        if (pEVar1 < pEVar8) goto LAB_00c04150;
      }
      lVar11 = lVar11 + 0x20;
      puVar15 = puVar10 + 8;
      puVar20 = puVar10;
    } while (puVar10 + 8 != (uint *)param_2);
  }
  if (*(long *)(lVar6 + 0x28) != lVar9) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pEVar8);
  }
  return;
}


