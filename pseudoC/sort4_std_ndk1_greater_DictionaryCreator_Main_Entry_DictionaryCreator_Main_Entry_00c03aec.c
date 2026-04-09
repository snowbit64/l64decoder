// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sort4<std::__ndk1::greater<DictionaryCreator::Main::Entry>&,DictionaryCreator::Main::Entry*>
// Entry Point: 00c03aec
// Size: 640 bytes
// Signature: uint __cdecl __sort4<std::__ndk1::greater<DictionaryCreator::Main::Entry>&,DictionaryCreator::Main::Entry*>(Entry * param_1, Entry * param_2, Entry * param_3, Entry * param_4, greater * param_5)


/* unsigned int std::__ndk1::__sort4<std::__ndk1::greater<DictionaryCreator::Main::Entry>&,
   DictionaryCreator::Main::Entry*>(DictionaryCreator::Main::Entry*,
   DictionaryCreator::Main::Entry*, DictionaryCreator::Main::Entry*,
   DictionaryCreator::Main::Entry*, std::__ndk1::greater<DictionaryCreator::Main::Entry>&) */

uint std::__ndk1::
     __sort4<std::__ndk1::greater<DictionaryCreator::Main::Entry>&,DictionaryCreator::Main::Entry*>
               (Entry *param_1,Entry *param_2,Entry *param_3,Entry *param_4,greater *param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  Entry EVar6;
  Entry EVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined6 local_58;
  undefined2 uStack_52;
  
  lVar8 = tpidr_el0;
  lVar11 = *(long *)(lVar8 + 0x28);
  uVar9 = __sort3<std::__ndk1::greater<DictionaryCreator::Main::Entry>&,DictionaryCreator::Main::Entry*>
                    (param_1,param_2,param_3,param_5);
  uVar5 = *(uint *)param_3;
  if (uVar5 < *(uint *)param_4) {
    EVar6 = param_3[8];
  }
  else {
    uVar10 = uVar9;
    if (*(uint *)param_4 < uVar5) goto LAB_00c03d3c;
    EVar6 = param_3[8];
    uVar1 = (ulong)((byte)param_4[8] >> 1);
    if (((byte)param_4[8] & 1) != 0) {
      uVar1 = *(ulong *)(param_4 + 0x10);
    }
    uVar2 = (ulong)((byte)EVar6 >> 1);
    if (((byte)EVar6 & 1) != 0) {
      uVar2 = *(ulong *)(param_3 + 0x10);
    }
    if (uVar1 <= uVar2) goto LAB_00c03d3c;
  }
  puVar12 = (undefined8 *)(param_3 + 8);
  EVar7 = param_3[9];
  uVar3 = *(undefined8 *)(param_3 + 0x10);
  uVar4 = *(undefined8 *)(param_3 + 0x18);
  *(undefined8 *)(param_3 + 0x10) = 0;
  *(undefined8 *)(param_3 + 0x18) = 0;
  *puVar12 = 0;
  local_58 = (undefined6)*(undefined8 *)(param_3 + 10);
  uStack_52 = (undefined2)uVar3;
  *(undefined4 *)param_3 = *(undefined4 *)param_4;
  uVar15 = *(undefined8 *)(param_4 + 0x10);
  uVar14 = *(undefined8 *)(param_4 + 8);
  *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(param_4 + 0x18);
  *(undefined8 *)(param_3 + 0x10) = uVar15;
  *puVar12 = uVar14;
  *(uint *)param_4 = uVar5;
  param_4[8] = EVar6;
  param_4[9] = EVar7;
  *(ulong *)(param_4 + 10) = CONCAT26(uStack_52,local_58);
  *(undefined8 *)(param_4 + 0x10) = uVar3;
  *(undefined8 *)(param_4 + 0x18) = uVar4;
  uVar5 = *(uint *)param_2;
  if (uVar5 < *(uint *)param_3) {
    EVar6 = param_2[8];
  }
  else {
    uVar10 = uVar9 + 1;
    if (*(uint *)param_3 < uVar5) goto LAB_00c03d3c;
    EVar6 = param_2[8];
    uVar1 = (ulong)((byte)param_3[8] >> 1);
    if (((byte)param_3[8] & 1) != 0) {
      uVar1 = *(ulong *)(param_3 + 0x10);
    }
    uVar2 = (ulong)((byte)EVar6 >> 1);
    if (((byte)EVar6 & 1) != 0) {
      uVar2 = *(ulong *)(param_2 + 0x10);
    }
    if (uVar1 <= uVar2) goto LAB_00c03d3c;
  }
  puVar13 = (undefined8 *)(param_2 + 8);
  EVar7 = param_2[9];
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  uVar4 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *puVar13 = 0;
  local_58 = (undefined6)*(undefined8 *)(param_2 + 10);
  uStack_52 = (undefined2)uVar3;
  *(undefined4 *)param_2 = *(undefined4 *)param_3;
  uVar15 = *(undefined8 *)(param_3 + 0x10);
  uVar14 = *puVar12;
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_3 + 0x18);
  *(undefined8 *)(param_2 + 0x10) = uVar15;
  *puVar13 = uVar14;
  *(uint *)param_3 = uVar5;
  param_3[8] = EVar6;
  param_3[9] = EVar7;
  *(undefined8 *)(param_3 + 0x10) = uVar3;
  *(ulong *)(param_3 + 10) = CONCAT26(uStack_52,local_58);
  *(undefined8 *)(param_3 + 0x18) = uVar4;
  uVar5 = *(uint *)param_1;
  if (uVar5 < *(uint *)param_2) {
    EVar6 = param_1[8];
  }
  else {
    uVar10 = uVar9 + 2;
    if (*(uint *)param_2 < uVar5) goto LAB_00c03d3c;
    EVar6 = param_1[8];
    uVar1 = (ulong)((byte)param_2[8] >> 1);
    if (((byte)param_2[8] & 1) != 0) {
      uVar1 = *(ulong *)(param_2 + 0x10);
    }
    uVar2 = (ulong)((byte)EVar6 >> 1);
    if (((byte)EVar6 & 1) != 0) {
      uVar2 = *(ulong *)(param_1 + 0x10);
    }
    if (uVar1 <= uVar2) goto LAB_00c03d3c;
  }
  EVar7 = param_1[9];
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  local_58 = (undefined6)*(undefined8 *)(param_1 + 10);
  uStack_52 = (undefined2)uVar3;
  *(undefined4 *)param_1 = *(undefined4 *)param_2;
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  uVar14 = *puVar13;
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = uVar15;
  *(undefined8 *)(param_1 + 8) = uVar14;
  *(uint *)param_2 = uVar5;
  param_2[9] = EVar7;
  param_2[8] = EVar6;
  *(undefined8 *)(param_2 + 0x10) = uVar3;
  *(ulong *)(param_2 + 10) = CONCAT26(uStack_52,local_58);
  *(undefined8 *)(param_2 + 0x18) = uVar4;
  uVar10 = uVar9 + 3;
LAB_00c03d3c:
  if (*(long *)(lVar8 + 0x28) != lVar11) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar10;
}


