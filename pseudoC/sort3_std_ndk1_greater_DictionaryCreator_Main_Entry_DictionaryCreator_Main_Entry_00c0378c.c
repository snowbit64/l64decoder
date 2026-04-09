// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sort3<std::__ndk1::greater<DictionaryCreator::Main::Entry>&,DictionaryCreator::Main::Entry*>
// Entry Point: 00c0378c
// Size: 864 bytes
// Signature: uint __cdecl __sort3<std::__ndk1::greater<DictionaryCreator::Main::Entry>&,DictionaryCreator::Main::Entry*>(Entry * param_1, Entry * param_2, Entry * param_3, greater * param_4)


/* unsigned int std::__ndk1::__sort3<std::__ndk1::greater<DictionaryCreator::Main::Entry>&,
   DictionaryCreator::Main::Entry*>(DictionaryCreator::Main::Entry*,
   DictionaryCreator::Main::Entry*, DictionaryCreator::Main::Entry*,
   std::__ndk1::greater<DictionaryCreator::Main::Entry>&) */

uint std::__ndk1::
     __sort3<std::__ndk1::greater<DictionaryCreator::Main::Entry>&,DictionaryCreator::Main::Entry*>
               (Entry *param_1,Entry *param_2,Entry *param_3,greater *param_4)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  Entry EVar4;
  Entry EVar5;
  undefined2 uVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined6 local_28;
  undefined2 uStack_22;
  
  lVar7 = tpidr_el0;
  lVar9 = *(long *)(lVar7 + 0x28);
  uVar8 = *(uint *)param_2;
  uVar3 = *(uint *)param_1;
  if (uVar8 <= uVar3) {
    if (uVar3 <= uVar8) {
      uVar1 = (ulong)((byte)param_2[8] >> 1);
      if (((byte)param_2[8] & 1) != 0) {
        uVar1 = *(ulong *)(param_2 + 0x10);
      }
      uVar2 = (ulong)((byte)param_1[8] >> 1);
      if (((byte)param_1[8] & 1) != 0) {
        uVar2 = *(ulong *)(param_1 + 0x10);
      }
      if (uVar2 < uVar1) goto LAB_00c037b4;
    }
    if (*(uint *)param_3 <= uVar8) {
      if (uVar8 <= *(uint *)param_3) {
        EVar4 = param_2[8];
        uVar1 = (ulong)((byte)param_3[8] >> 1);
        if (((byte)param_3[8] & 1) != 0) {
          uVar1 = *(ulong *)(param_3 + 0x10);
        }
        uVar2 = (ulong)((byte)EVar4 >> 1);
        if (((byte)EVar4 & 1) != 0) {
          uVar2 = *(ulong *)(param_2 + 0x10);
        }
        if (uVar2 < uVar1) goto LAB_00c0385c;
      }
      uVar8 = 0;
      goto LAB_00c03acc;
    }
    EVar4 = param_2[8];
LAB_00c0385c:
    puVar10 = (undefined8 *)(param_2 + 8);
    EVar5 = param_2[9];
    uVar12 = *(undefined8 *)(param_2 + 0x10);
    uVar11 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
    *puVar10 = 0;
    local_28 = (undefined6)*(undefined8 *)(param_2 + 10);
    uStack_22 = (undefined2)uVar12;
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    uVar14 = *(undefined8 *)(param_3 + 0x10);
    uVar13 = *(undefined8 *)(param_3 + 8);
    *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_3 + 0x18);
    *(undefined8 *)(param_2 + 0x10) = uVar14;
    *puVar10 = uVar13;
    *(uint *)param_3 = uVar8;
    param_3[8] = EVar4;
    param_3[9] = EVar5;
    *(ulong *)(param_3 + 10) = CONCAT26(uStack_22,local_28);
    *(undefined8 *)(param_3 + 0x10) = uVar12;
    *(undefined8 *)(param_3 + 0x18) = uVar11;
    uVar3 = *(uint *)param_1;
    if (uVar3 < *(uint *)param_2) {
      EVar4 = param_1[8];
LAB_00c038c8:
      EVar5 = param_1[9];
      uVar12 = *(undefined8 *)(param_1 + 0x10);
      uVar11 = *(undefined8 *)(param_1 + 0x18);
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined8 *)(param_1 + 8) = 0;
      local_28 = (undefined6)*(undefined8 *)(param_1 + 10);
      uStack_22 = (undefined2)uVar12;
      *(undefined4 *)param_1 = *(undefined4 *)param_2;
      uVar14 = *(undefined8 *)(param_2 + 0x10);
      uVar13 = *puVar10;
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
      uVar8 = 2;
      *(undefined8 *)(param_1 + 0x10) = uVar14;
      *(undefined8 *)(param_1 + 8) = uVar13;
      *(uint *)param_2 = uVar3;
      param_2[8] = EVar4;
      param_2[9] = EVar5;
      *(undefined8 *)(param_2 + 0x10) = uVar12;
      *(ulong *)(param_2 + 10) = CONCAT26(uStack_22,local_28);
      *(undefined8 *)(param_2 + 0x18) = uVar11;
      goto LAB_00c03acc;
    }
    if (uVar3 <= *(uint *)param_2) {
      EVar4 = param_1[8];
      uVar1 = (ulong)((byte)param_2[8] >> 1);
      if (((byte)param_2[8] & 1) != 0) {
        uVar1 = *(ulong *)(param_2 + 0x10);
      }
      uVar2 = (ulong)((byte)EVar4 >> 1);
      if (((byte)EVar4 & 1) != 0) {
        uVar2 = *(ulong *)(param_1 + 0x10);
      }
      if (uVar2 < uVar1) goto LAB_00c038c8;
    }
    goto LAB_00c03ac8;
  }
LAB_00c037b4:
  if (uVar8 < *(uint *)param_3) {
LAB_00c037c0:
    uVar12 = *(undefined8 *)(param_1 + 0x10);
    uVar11 = *(undefined8 *)(param_1 + 0x18);
    uVar6 = *(undefined2 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    local_28 = (undefined6)*(undefined8 *)(param_1 + 10);
    uStack_22 = (undefined2)uVar12;
    *(undefined4 *)param_1 = *(undefined4 *)param_3;
    uVar14 = *(undefined8 *)(param_3 + 0x10);
    uVar13 = *(undefined8 *)(param_3 + 8);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_3 + 0x18);
    *(undefined8 *)(param_1 + 0x10) = uVar14;
    *(undefined8 *)(param_1 + 8) = uVar13;
    uVar8 = 1;
    *(uint *)param_3 = uVar3;
    *(undefined2 *)(param_3 + 8) = uVar6;
    *(ulong *)(param_3 + 10) = CONCAT26(uStack_22,local_28);
    *(undefined8 *)(param_3 + 0x10) = uVar12;
  }
  else {
    if (uVar8 <= *(uint *)param_3) {
      uVar1 = (ulong)((byte)param_3[8] >> 1);
      if (((byte)param_3[8] & 1) != 0) {
        uVar1 = *(ulong *)(param_3 + 0x10);
      }
      uVar2 = (ulong)((byte)param_2[8] >> 1);
      if (((byte)param_2[8] & 1) != 0) {
        uVar2 = *(ulong *)(param_2 + 0x10);
      }
      if (uVar2 < uVar1) goto LAB_00c037c0;
    }
    EVar4 = param_1[8];
    uVar12 = *(undefined8 *)(param_1 + 0x10);
    uVar11 = *(undefined8 *)(param_1 + 0x18);
    EVar5 = param_1[9];
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    local_28 = (undefined6)*(undefined8 *)(param_1 + 10);
    uStack_22 = (undefined2)uVar12;
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    uVar14 = *(undefined8 *)(param_2 + 0x10);
    uVar13 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x10) = uVar14;
    *(undefined8 *)(param_1 + 8) = uVar13;
    *(ulong *)(param_2 + 10) = CONCAT26(uStack_22,local_28);
    *(uint *)param_2 = uVar3;
    param_2[8] = EVar4;
    param_2[9] = EVar5;
    *(undefined8 *)(param_2 + 0x10) = uVar12;
    *(undefined8 *)(param_2 + 0x18) = uVar11;
    if (*(uint *)param_3 <= uVar3) {
      if (uVar3 <= *(uint *)param_3) {
        uVar1 = (ulong)((byte)param_3[8] >> 1);
        if (((byte)param_3[8] & 1) != 0) {
          uVar1 = *(ulong *)(param_3 + 0x10);
        }
        uVar2 = (ulong)((byte)EVar4 >> 1);
        if (((byte)EVar4 & 1) != 0) {
          uVar2 = *(ulong *)(param_2 + 0x10);
        }
        if (uVar2 < uVar1) goto LAB_00c039c0;
      }
LAB_00c03ac8:
      uVar8 = 1;
      goto LAB_00c03acc;
    }
LAB_00c039c0:
    uVar12 = *(undefined8 *)(param_2 + 0x10);
    uVar8 = 2;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    local_28 = (undefined6)*(undefined8 *)(param_2 + 10);
    uStack_22 = (undefined2)uVar12;
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    uVar14 = *(undefined8 *)(param_3 + 0x10);
    uVar13 = *(undefined8 *)(param_3 + 8);
    *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_3 + 0x18);
    *(undefined8 *)(param_2 + 0x10) = uVar14;
    *(undefined8 *)(param_2 + 8) = uVar13;
    *(uint *)param_3 = uVar3;
    param_3[8] = EVar4;
    param_3[9] = EVar5;
    *(ulong *)(param_3 + 10) = CONCAT26(uStack_22,local_28);
    *(undefined8 *)(param_3 + 0x10) = uVar12;
  }
  *(undefined8 *)(param_3 + 0x18) = uVar11;
LAB_00c03acc:
  if (*(long *)(lVar7 + 0x28) != lVar9) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}


