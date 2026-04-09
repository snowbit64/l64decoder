// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jinit_d_post_controller
// Entry Point: 00d7c008
// Size: 216 bytes
// Signature: undefined jinit_d_post_controller(void)


void jinit_d_post_controller(long param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  code **ppcVar5;
  undefined8 uVar6;
  long lVar7;
  code *pcVar8;
  
  ppcVar5 = (code **)(***(code ***)(param_1 + 8))(param_1,1,0x30);
  *(code ***)(param_1 + 0x238) = ppcVar5;
  ppcVar5[2] = (code *)0x0;
  ppcVar5[3] = (code *)0x0;
  cVar4 = *(char *)(param_1 + 0x62);
  *ppcVar5 = FUN_00d7c0e0;
  if (cVar4 != '\0') {
    uVar2 = *(undefined4 *)(param_1 + 0x184);
    lVar7 = *(long *)(param_1 + 8);
    *(undefined4 *)(ppcVar5 + 4) = uVar2;
    if (param_2 == '\0') {
      pcVar8 = (code *)(**(code **)(lVar7 + 0x10))
                                 (param_1,1,*(int *)(param_1 + 0x7c) * *(int *)(param_1 + 0x74));
      ppcVar5[3] = pcVar8;
      return;
    }
    iVar1 = *(int *)(param_1 + 0x7c);
    iVar3 = *(int *)(param_1 + 0x74);
    pcVar8 = *(code **)(lVar7 + 0x20);
    uVar6 = jround_up(*(undefined4 *)(param_1 + 0x78),uVar2);
    pcVar8 = (code *)(*pcVar8)(param_1,1,0,iVar1 * iVar3,uVar6,*(undefined4 *)(ppcVar5 + 4));
    ppcVar5[2] = pcVar8;
  }
  return;
}


