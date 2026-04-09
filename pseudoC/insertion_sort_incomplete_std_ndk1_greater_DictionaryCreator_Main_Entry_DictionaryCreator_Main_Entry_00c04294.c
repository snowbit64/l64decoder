// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __insertion_sort_incomplete<std::__ndk1::greater<DictionaryCreator::Main::Entry>&,DictionaryCreator::Main::Entry*>
// Entry Point: 00c04294
// Size: 836 bytes
// Signature: bool __cdecl __insertion_sort_incomplete<std::__ndk1::greater<DictionaryCreator::Main::Entry>&,DictionaryCreator::Main::Entry*>(Entry * param_1, Entry * param_2, greater * param_3)


/* bool 
   std::__ndk1::__insertion_sort_incomplete<std::__ndk1::greater<DictionaryCreator::Main::Entry>&,
   DictionaryCreator::Main::Entry*>(DictionaryCreator::Main::Entry*,
   DictionaryCreator::Main::Entry*, std::__ndk1::greater<DictionaryCreator::Main::Entry>&) */

bool std::__ndk1::
     __insertion_sort_incomplete<std::__ndk1::greater<DictionaryCreator::Main::Entry>&,DictionaryCreator::Main::Entry*>
               (Entry *param_1,Entry *param_2,greater *param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  Entry EVar6;
  undefined2 uVar7;
  long lVar8;
  bool bVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  int iVar15;
  long lVar16;
  uint *puVar17;
  uint *puVar18;
  uint *puVar19;
  ulong uVar20;
  Entry EVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  uint *puVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined2 uStack_42;
  
  lVar8 = tpidr_el0;
  lVar16 = *(long *)(lVar8 + 0x28);
  uVar13 = (long)param_2 - (long)param_1 >> 5;
  if (uVar13 < 6) {
    bVar9 = true;
    switch(uVar13) {
    default:
      goto switchD_00c042e8_caseD_0;
    case 2:
      uVar3 = *(uint *)param_1;
      if (uVar3 < *(uint *)(param_2 + -0x20)) {
        EVar21 = param_1[8];
LAB_00c04568:
        EVar6 = param_1[9];
        bVar9 = true;
        uVar22 = *(undefined8 *)(param_1 + 10);
        uVar10 = *(undefined8 *)(param_1 + 0x10);
        uVar23 = *(undefined8 *)(param_1 + 0x18);
        *(undefined8 *)(param_1 + 0x10) = 0;
        *(undefined8 *)(param_1 + 0x18) = 0;
        *(undefined8 *)(param_1 + 8) = 0;
        uStack_42 = (undefined2)uVar10;
        *(undefined4 *)param_1 = *(undefined4 *)(param_2 + -0x20);
        uVar26 = *(undefined8 *)(param_2 + -0x10);
        uVar25 = *(undefined8 *)(param_2 + -0x18);
        *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + -8);
        *(undefined8 *)(param_1 + 0x10) = uVar26;
        *(undefined8 *)(param_1 + 8) = uVar25;
        *(uint *)(param_2 + -0x20) = uVar3;
        param_2[-0x18] = EVar21;
        param_2[-0x17] = EVar6;
        *(undefined8 *)(param_2 + -0x10) = uVar10;
        *(ulong *)(param_2 + -0x16) = CONCAT26(uStack_42,(int6)uVar22);
        *(undefined8 *)(param_2 + -8) = uVar23;
        goto switchD_00c042e8_caseD_0;
      }
      if (uVar3 <= *(uint *)(param_2 + -0x20)) {
        EVar21 = param_1[8];
        uVar13 = (ulong)((byte)param_2[-0x18] >> 1);
        if (((byte)param_2[-0x18] & 1) != 0) {
          uVar13 = *(ulong *)(param_2 + -0x10);
        }
        uVar1 = (ulong)((byte)EVar21 >> 1);
        if (((byte)EVar21 & 1) != 0) {
          uVar1 = *(ulong *)(param_1 + 0x10);
        }
        if (uVar1 < uVar13) goto LAB_00c04568;
      }
      break;
    case 3:
      __sort3<std::__ndk1::greater<DictionaryCreator::Main::Entry>&,DictionaryCreator::Main::Entry*>
                (param_1,param_1 + 0x20,param_2 + -0x20,param_3);
      break;
    case 4:
      __sort4<std::__ndk1::greater<DictionaryCreator::Main::Entry>&,DictionaryCreator::Main::Entry*>
                (param_1,param_1 + 0x20,param_1 + 0x40,param_2 + -0x20,param_3);
      break;
    case 5:
      FUN_00c03d6c(param_1,param_1 + 0x20,param_1 + 0x40,param_1 + 0x60,param_2 + -0x20);
    }
  }
  else {
    __sort3<std::__ndk1::greater<DictionaryCreator::Main::Entry>&,DictionaryCreator::Main::Entry*>
              (param_1,param_1 + 0x20,param_1 + 0x40,param_3);
    if (param_1 + 0x60 != param_2) {
      lVar14 = 0;
      iVar15 = 0;
      puVar24 = (uint *)(param_1 + 0x60);
      puVar19 = (uint *)(param_1 + 0x40);
      do {
        puVar17 = puVar24;
        uVar3 = *puVar17;
        if (*puVar19 < uVar3) {
          EVar21 = *(Entry *)(puVar17 + 2);
          uVar20 = *(ulong *)(puVar17 + 4);
          uVar13 = (ulong)((byte)EVar21 >> 1);
LAB_00c043c8:
          uVar5 = *(undefined4 *)((long)puVar17 + 10);
          uVar7 = *(undefined2 *)((long)puVar17 + 0xe);
          if (((byte)EVar21 & 1) != 0) {
            uVar13 = uVar20;
          }
          EVar6 = *(Entry *)((long)puVar17 + 9);
          uVar23 = *(undefined8 *)(puVar17 + 6);
          *(undefined8 *)(puVar17 + 4) = 0;
          *(undefined8 *)(puVar17 + 6) = 0;
          *(undefined8 *)(puVar17 + 2) = 0;
          *puVar17 = *puVar19;
          puVar24 = puVar19 + 2;
          uVar22 = *(undefined8 *)(puVar19 + 2);
          uVar10 = *(undefined8 *)(puVar19 + 6);
          *(undefined8 *)(puVar17 + 4) = *(undefined8 *)(puVar19 + 4);
          *(undefined8 *)(puVar17 + 2) = uVar22;
          *(undefined8 *)(puVar17 + 6) = uVar10;
          *(undefined2 *)(puVar19 + 2) = 0;
          lVar12 = lVar14;
          puVar18 = (uint *)param_1;
          if (puVar19 != (uint *)param_1) {
            do {
              uVar4 = *(uint *)(param_1 + lVar12 + 0x20);
              if (uVar3 <= uVar4) {
                if (uVar3 < uVar4) {
                  puVar24 = (uint *)(param_1 + lVar12 + 0x48);
                  puVar18 = (uint *)(param_1 + lVar12 + 0x40);
                  goto LAB_00c04360;
                }
                uVar1 = (ulong)((byte)param_1[lVar12 + 0x28] >> 1);
                if (((byte)param_1[lVar12 + 0x28] & 1) != 0) {
                  uVar1 = *(ulong *)(param_1 + lVar12 + 0x30);
                }
                puVar18 = puVar19;
                if (uVar13 <= uVar1) goto LAB_00c04360;
              }
              *(uint *)(param_1 + lVar12 + 0x40) = uVar4;
              puVar24 = puVar19 + -6;
              lVar11 = lVar12 + -0x20;
              *(undefined8 *)(param_1 + lVar12 + 0x50) = *(undefined8 *)(param_1 + lVar12 + 0x30);
              *(undefined8 *)(param_1 + lVar12 + 0x48) = *(undefined8 *)(param_1 + lVar12 + 0x28);
              *(undefined8 *)(param_1 + lVar12 + 0x58) = *(undefined8 *)(param_1 + lVar12 + 0x38);
              *(undefined2 *)(param_1 + lVar12 + 0x28) = 0;
              lVar12 = lVar11;
              puVar19 = puVar19 + -8;
            } while (lVar11 != -0x40);
            puVar24 = (uint *)(param_1 + 8);
            puVar18 = (uint *)param_1;
          }
LAB_00c04360:
          *puVar18 = uVar3;
          iVar15 = iVar15 + 1;
          *(Entry *)puVar24 = EVar21;
          *(Entry *)((long)puVar18 + 9) = EVar6;
          *(ulong *)(puVar18 + 4) = uVar20;
          *(undefined8 *)(puVar18 + 6) = uVar23;
          *(undefined4 *)((long)puVar18 + 10) = uVar5;
          *(undefined2 *)((long)puVar18 + 0xe) = uVar7;
          if (iVar15 == 8) {
            bVar9 = puVar17 + 8 == (uint *)param_2;
            goto switchD_00c042e8_caseD_0;
          }
        }
        else if (*puVar19 <= uVar3) {
          EVar21 = *(Entry *)(puVar17 + 2);
          uVar20 = *(ulong *)(puVar17 + 4);
          uVar13 = (ulong)((byte)EVar21 >> 1);
          uVar1 = uVar13;
          if (((byte)EVar21 & 1) != 0) {
            uVar1 = uVar20;
          }
          uVar2 = (ulong)((byte)*(Entry *)(puVar19 + 2) >> 1);
          if (((byte)*(Entry *)(puVar19 + 2) & 1) != 0) {
            uVar2 = *(ulong *)(puVar19 + 4);
          }
          if (uVar2 < uVar1) goto LAB_00c043c8;
        }
        lVar14 = lVar14 + 0x20;
        puVar24 = puVar17 + 8;
        puVar19 = puVar17;
      } while (puVar17 + 8 != (uint *)param_2);
    }
  }
  bVar9 = true;
switchD_00c042e8_caseD_0:
  if (*(long *)(lVar8 + 0x28) != lVar16) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar9;
}


