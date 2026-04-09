// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jinit_2pass_quantizer
// Entry Point: 00d8fe18
// Size: 1392 bytes
// Signature: undefined jinit_2pass_quantizer(void)


void jinit_2pass_quantizer(long *param_1)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  code **ppcVar4;
  code *pcVar5;
  undefined8 uVar6;
  code **ppcVar7;
  long lVar8;
  
  ppcVar4 = (code **)(**(code **)param_1[1])(param_1,1,0x58);
  iVar1 = *(int *)((long)param_1 + 0x7c);
  param_1[0x4e] = (long)ppcVar4;
  ppcVar4[8] = (code *)0x0;
  *ppcVar4 = FUN_00d90388;
  ppcVar4[3] = FUN_00d90708;
  ppcVar4[10] = (code *)0x0;
  if (iVar1 != 3) {
    ppcVar7 = (code **)*param_1;
    *(undefined4 *)(ppcVar7 + 5) = 0x30;
    (**ppcVar7)(param_1);
  }
  pcVar5 = (code *)(**(code **)param_1[1])(param_1,1,0x100);
  lVar8 = param_1[1];
  ppcVar4[6] = pcVar5;
  uVar6 = (**(code **)(lVar8 + 8))(param_1,1,0x1000);
  *(undefined8 *)ppcVar4[6] = uVar6;
  uVar6 = (**(code **)(param_1[1] + 8))(param_1,1,0x1000);
  *(undefined8 *)(ppcVar4[6] + 8) = uVar6;
  uVar6 = (**(code **)(param_1[1] + 8))(param_1,1,0x1000);
  *(undefined8 *)(ppcVar4[6] + 0x10) = uVar6;
  uVar6 = (**(code **)(param_1[1] + 8))(param_1,1,0x1000);
  *(undefined8 *)(ppcVar4[6] + 0x18) = uVar6;
  uVar6 = (**(code **)(param_1[1] + 8))(param_1,1,0x1000);
  *(undefined8 *)(ppcVar4[6] + 0x20) = uVar6;
  uVar6 = (**(code **)(param_1[1] + 8))(param_1,1,0x1000);
  *(undefined8 *)(ppcVar4[6] + 0x28) = uVar6;
  uVar6 = (**(code **)(param_1[1] + 8))(param_1,1,0x1000);
  *(undefined8 *)(ppcVar4[6] + 0x30) = uVar6;
  uVar6 = (**(code **)(param_1[1] + 8))(param_1,1,0x1000);
  *(undefined8 *)(ppcVar4[6] + 0x38) = uVar6;
  uVar6 = (**(code **)(param_1[1] + 8))(param_1,1,0x1000);
  *(undefined8 *)(ppcVar4[6] + 0x40) = uVar6;
  uVar6 = (**(code **)(param_1[1] + 8))(param_1,1,0x1000);
  *(undefined8 *)(ppcVar4[6] + 0x48) = uVar6;
  uVar6 = (**(code **)(param_1[1] + 8))(param_1,1,0x1000);
  *(undefined8 *)(ppcVar4[6] + 0x50) = uVar6;
  uVar6 = (**(code **)(param_1[1] + 8))(param_1,1,0x1000);
  *(undefined8 *)(ppcVar4[6] + 0x58) = uVar6;
  uVar6 = (**(code **)(param_1[1] + 8))(param_1,1,0x1000);
  *(undefined8 *)(ppcVar4[6] + 0x60) = uVar6;
  uVar6 = (**(code **)(param_1[1] + 8))(param_1,1,0x1000);
  *(undefined8 *)(ppcVar4[6] + 0x68) = uVar6;
  uVar6 = (**(code **)(param_1[1] + 8))(param_1,1,0x1000);
  *(undefined8 *)(ppcVar4[6] + 0x70) = uVar6;
  uVar6 = (**(code **)(param_1[1] + 8))(param_1,1,0x1000);
  *(undefined8 *)(ppcVar4[6] + 0x78) = uVar6;
  uVar6 = (**(code **)(param_1[1] + 8))(param_1,1,0x1000);
  *(undefined8 *)(ppcVar4[6] + 0x80) = uVar6;
  uVar6 = (**(code **)(param_1[1] + 8))(param_1,1,0x1000);
  *(undefined8 *)(ppcVar4[6] + 0x88) = uVar6;
  uVar6 = (**(code **)(param_1[1] + 8))(param_1,1,0x1000);
  *(undefined8 *)(ppcVar4[6] + 0x90) = uVar6;
  uVar6 = (**(code **)(param_1[1] + 8))(param_1,1,0x1000);
  *(undefined8 *)(ppcVar4[6] + 0x98) = uVar6;
  uVar6 = (**(code **)(param_1[1] + 8))(param_1,1,0x1000);
  *(undefined8 *)(ppcVar4[6] + 0xa0) = uVar6;
  uVar6 = (**(code **)(param_1[1] + 8))(param_1,1,0x1000);
  *(undefined8 *)(ppcVar4[6] + 0xa8) = uVar6;
  uVar6 = (**(code **)(param_1[1] + 8))(param_1,1,0x1000);
  *(undefined8 *)(ppcVar4[6] + 0xb0) = uVar6;
  uVar6 = (**(code **)(param_1[1] + 8))(param_1,1,0x1000);
  *(undefined8 *)(ppcVar4[6] + 0xb8) = uVar6;
  uVar6 = (**(code **)(param_1[1] + 8))(param_1,1,0x1000);
  *(undefined8 *)(ppcVar4[6] + 0xc0) = uVar6;
  uVar6 = (**(code **)(param_1[1] + 8))(param_1,1,0x1000);
  *(undefined8 *)(ppcVar4[6] + 200) = uVar6;
  uVar6 = (**(code **)(param_1[1] + 8))(param_1,1,0x1000);
  *(undefined8 *)(ppcVar4[6] + 0xd0) = uVar6;
  uVar6 = (**(code **)(param_1[1] + 8))(param_1,1,0x1000);
  *(undefined8 *)(ppcVar4[6] + 0xd8) = uVar6;
  uVar6 = (**(code **)(param_1[1] + 8))(param_1,1,0x1000);
  *(undefined8 *)(ppcVar4[6] + 0xe0) = uVar6;
  uVar6 = (**(code **)(param_1[1] + 8))(param_1,1,0x1000);
  *(undefined8 *)(ppcVar4[6] + 0xe8) = uVar6;
  uVar6 = (**(code **)(param_1[1] + 8))(param_1,1,0x1000);
  *(undefined8 *)(ppcVar4[6] + 0xf0) = uVar6;
  uVar6 = (**(code **)(param_1[1] + 8))(param_1,1,0x1000);
  *(undefined *)(ppcVar4 + 7) = 1;
  cVar3 = *(char *)((long)param_1 + 0x72);
  *(undefined8 *)(ppcVar4[6] + 0xf8) = uVar6;
  if (cVar3 == '\0') {
    ppcVar4[4] = (code *)0x0;
    iVar1 = *(int *)((long)param_1 + 100);
    goto joined_r0x00d902d8;
  }
  uVar2 = *(uint *)((long)param_1 + 0x6c);
  if ((int)uVar2 < 8) {
    uVar6 = 0x80000003a;
LAB_00d902fc:
    *(undefined8 *)(*param_1 + 0x28) = uVar6;
    (**(code **)*param_1)(param_1);
  }
  else if (0x100 < uVar2) {
    uVar6 = 0x1000000003b;
    goto LAB_00d902fc;
  }
  pcVar5 = (code *)(**(code **)(param_1[1] + 0x10))(param_1,1,uVar2,3);
  *(uint *)(ppcVar4 + 5) = uVar2;
  ppcVar4[4] = pcVar5;
  iVar1 = *(int *)((long)param_1 + 100);
joined_r0x00d902d8:
  if (iVar1 != 0) {
    *(undefined4 *)((long)param_1 + 100) = 2;
    pcVar5 = (code *)(**(code **)(param_1[1] + 8))
                               (param_1,1,(ulong)(*(int *)((long)param_1 + 0x74) + 2) * 6);
    ppcVar4[8] = pcVar5;
    FUN_00d90718(param_1);
    return;
  }
  return;
}


