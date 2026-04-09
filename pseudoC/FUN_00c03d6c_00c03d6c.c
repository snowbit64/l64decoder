// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00c03d6c
// Entry Point: 00c03d6c
// Size: 820 bytes
// Signature: undefined FUN_00c03d6c(void)


uint FUN_00c03d6c(uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5,
                 greater *param_6)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  byte bVar6;
  undefined uVar7;
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
  uVar9 = std::__ndk1::
          __sort4<std::__ndk1::greater<DictionaryCreator::Main::Entry>&,DictionaryCreator::Main::Entry*>
                    ((Entry *)param_1,(Entry *)param_2,(Entry *)param_3,(Entry *)param_4,param_6);
  uVar5 = *param_4;
  if (uVar5 < *param_5) {
    bVar6 = *(byte *)(param_4 + 2);
  }
  else {
    uVar10 = uVar9;
    if (*param_5 < uVar5) goto LAB_00c04070;
    bVar6 = *(byte *)(param_4 + 2);
    uVar1 = (ulong)(*(byte *)(param_5 + 2) >> 1);
    if ((*(byte *)(param_5 + 2) & 1) != 0) {
      uVar1 = *(ulong *)(param_5 + 4);
    }
    uVar2 = (ulong)(bVar6 >> 1);
    if ((bVar6 & 1) != 0) {
      uVar2 = *(ulong *)(param_4 + 4);
    }
    if (uVar1 <= uVar2) goto LAB_00c04070;
  }
  puVar12 = (undefined8 *)(param_4 + 2);
  uVar7 = *(undefined *)((long)param_4 + 9);
  uVar3 = *(undefined8 *)(param_4 + 4);
  uVar4 = *(undefined8 *)(param_4 + 6);
  *(undefined8 *)(param_4 + 4) = 0;
  *(undefined8 *)(param_4 + 6) = 0;
  *puVar12 = 0;
  local_58 = (undefined6)*(undefined8 *)((long)param_4 + 10);
  uStack_52 = (undefined2)uVar3;
  *param_4 = *param_5;
  uVar15 = *(undefined8 *)(param_5 + 4);
  uVar14 = *(undefined8 *)(param_5 + 2);
  *(undefined8 *)(param_4 + 6) = *(undefined8 *)(param_5 + 6);
  *(undefined8 *)(param_4 + 4) = uVar15;
  *puVar12 = uVar14;
  *param_5 = uVar5;
  *(byte *)(param_5 + 2) = bVar6;
  *(undefined *)((long)param_5 + 9) = uVar7;
  *(ulong *)((long)param_5 + 10) = CONCAT26(uStack_52,local_58);
  *(undefined8 *)(param_5 + 4) = uVar3;
  *(undefined8 *)(param_5 + 6) = uVar4;
  uVar5 = *param_3;
  if (uVar5 < *param_4) {
    bVar6 = *(byte *)(param_3 + 2);
  }
  else {
    uVar10 = uVar9 + 1;
    if (*param_4 < uVar5) goto LAB_00c04070;
    bVar6 = *(byte *)(param_3 + 2);
    uVar1 = (ulong)(*(byte *)(param_4 + 2) >> 1);
    if ((*(byte *)(param_4 + 2) & 1) != 0) {
      uVar1 = *(ulong *)(param_4 + 4);
    }
    uVar2 = (ulong)(bVar6 >> 1);
    if ((bVar6 & 1) != 0) {
      uVar2 = *(ulong *)(param_3 + 4);
    }
    if (uVar1 <= uVar2) goto LAB_00c04070;
  }
  puVar13 = (undefined8 *)(param_3 + 2);
  uVar7 = *(undefined *)((long)param_3 + 9);
  uVar3 = *(undefined8 *)(param_3 + 4);
  uVar4 = *(undefined8 *)(param_3 + 6);
  *(undefined8 *)(param_3 + 4) = 0;
  *(undefined8 *)(param_3 + 6) = 0;
  *puVar13 = 0;
  local_58 = (undefined6)*(undefined8 *)((long)param_3 + 10);
  uStack_52 = (undefined2)uVar3;
  *param_3 = *param_4;
  uVar15 = *(undefined8 *)(param_4 + 4);
  uVar14 = *puVar12;
  *(undefined8 *)(param_3 + 6) = *(undefined8 *)(param_4 + 6);
  *(undefined8 *)(param_3 + 4) = uVar15;
  *puVar13 = uVar14;
  *param_4 = uVar5;
  *(byte *)(param_4 + 2) = bVar6;
  *(undefined *)((long)param_4 + 9) = uVar7;
  *(undefined8 *)(param_4 + 4) = uVar3;
  *(undefined8 *)((long)param_4 + 10) = CONCAT26(uStack_52,local_58);
  *(undefined8 *)(param_4 + 6) = uVar4;
  uVar5 = *param_2;
  if (uVar5 < *param_3) {
    bVar6 = *(byte *)(param_2 + 2);
  }
  else {
    uVar10 = uVar9 + 2;
    if (*param_3 < uVar5) goto LAB_00c04070;
    bVar6 = *(byte *)(param_2 + 2);
    uVar1 = (ulong)(*(byte *)(param_3 + 2) >> 1);
    if ((*(byte *)(param_3 + 2) & 1) != 0) {
      uVar1 = *(ulong *)(param_3 + 4);
    }
    uVar2 = (ulong)(bVar6 >> 1);
    if ((bVar6 & 1) != 0) {
      uVar2 = *(ulong *)(param_2 + 4);
    }
    if (uVar1 <= uVar2) goto LAB_00c04070;
  }
  puVar12 = (undefined8 *)(param_2 + 2);
  uVar7 = *(undefined *)((long)param_2 + 9);
  uVar3 = *(undefined8 *)(param_2 + 4);
  uVar4 = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  *puVar12 = 0;
  local_58 = (undefined6)*(undefined8 *)((long)param_2 + 10);
  uStack_52 = (undefined2)uVar3;
  *param_2 = *param_3;
  uVar15 = *(undefined8 *)(param_3 + 4);
  uVar14 = *puVar13;
  *(undefined8 *)(param_2 + 6) = *(undefined8 *)(param_3 + 6);
  *(undefined8 *)(param_2 + 4) = uVar15;
  *puVar12 = uVar14;
  *param_3 = uVar5;
  *(byte *)(param_3 + 2) = bVar6;
  *(undefined *)((long)param_3 + 9) = uVar7;
  *(undefined8 *)(param_3 + 4) = uVar3;
  *(undefined8 *)((long)param_3 + 10) = CONCAT26(uStack_52,local_58);
  *(undefined8 *)(param_3 + 6) = uVar4;
  uVar5 = *param_1;
  if (uVar5 < *param_2) {
    bVar6 = *(byte *)(param_1 + 2);
  }
  else {
    uVar10 = uVar9 + 3;
    if (*param_2 < uVar5) goto LAB_00c04070;
    bVar6 = *(byte *)(param_1 + 2);
    uVar1 = (ulong)(*(byte *)(param_2 + 2) >> 1);
    if ((*(byte *)(param_2 + 2) & 1) != 0) {
      uVar1 = *(ulong *)(param_2 + 4);
    }
    uVar2 = (ulong)(bVar6 >> 1);
    if ((bVar6 & 1) != 0) {
      uVar2 = *(ulong *)(param_1 + 4);
    }
    if (uVar1 <= uVar2) goto LAB_00c04070;
  }
  uVar7 = *(undefined *)((long)param_1 + 9);
  uVar3 = *(undefined8 *)(param_1 + 4);
  uVar4 = *(undefined8 *)(param_1 + 6);
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  local_58 = (undefined6)*(undefined8 *)((long)param_1 + 10);
  uStack_52 = (undefined2)uVar3;
  *param_1 = *param_2;
  uVar15 = *(undefined8 *)(param_2 + 4);
  uVar14 = *puVar12;
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 4) = uVar15;
  *(undefined8 *)(param_1 + 2) = uVar14;
  *param_2 = uVar5;
  *(undefined *)((long)param_2 + 9) = uVar7;
  *(byte *)(param_2 + 2) = bVar6;
  *(undefined8 *)(param_2 + 4) = uVar3;
  *(undefined8 *)((long)param_2 + 10) = CONCAT26(uStack_52,local_58);
  *(undefined8 *)(param_2 + 6) = uVar4;
  uVar10 = uVar9 + 4;
LAB_00c04070:
  if (*(long *)(lVar8 + 0x28) != lVar11) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar10;
}


