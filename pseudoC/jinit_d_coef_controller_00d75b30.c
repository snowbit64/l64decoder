// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jinit_d_coef_controller
// Entry Point: 00d75b30
// Size: 424 bytes
// Signature: undefined jinit_d_coef_controller(void)


void jinit_d_coef_controller(long param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  code **ppcVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 *puVar6;
  code *pcVar7;
  
  ppcVar3 = (code **)(***(code ***)(param_1 + 8))(param_1,1,0xe0);
  *(code ***)(param_1 + 0x230) = ppcVar3;
  ppcVar3[0x1b] = (code *)0x0;
  *ppcVar3 = FUN_00d75cd8;
  ppcVar3[2] = FUN_00d75d24;
  if (param_2 != '\0') {
    if (0 < *(int *)(param_1 + 0x38)) {
      lVar5 = 0;
      puVar6 = (undefined4 *)(*(long *)(param_1 + 0x120) + 0x1c);
      do {
        pcVar7 = *(code **)(*(long *)(param_1 + 8) + 0x28);
        iVar1 = puVar6[-4];
        if (*(char *)(param_1 + 0x129) != '\0') {
          iVar1 = puVar6[-4] * 3;
        }
        uVar2 = jround_up(*puVar6,(long)(int)puVar6[-5]);
        uVar4 = jround_up(puVar6[1],(long)(int)puVar6[-4]);
        pcVar7 = (code *)(*pcVar7)(param_1,1,1,uVar2,uVar4,iVar1);
        iVar1 = *(int *)(param_1 + 0x38);
        (ppcVar3 + 0x11)[lVar5] = pcVar7;
        lVar5 = lVar5 + 1;
        puVar6 = puVar6 + 0x18;
      } while (lVar5 < iVar1);
    }
    ppcVar3[1] = FUN_00d75e90;
    ppcVar3[3] = FUN_00d7614c;
    ppcVar3[4] = (code *)(ppcVar3 + 0x11);
    return;
  }
  pcVar7 = (code *)(**(code **)(*(long *)(param_1 + 8) + 8))(param_1,1,0x500);
  iVar1 = *(int *)(param_1 + 0x218);
  ppcVar3[7] = pcVar7;
  ppcVar3[8] = pcVar7 + 0x80;
  ppcVar3[9] = pcVar7 + 0x100;
  ppcVar3[10] = pcVar7 + 0x180;
  ppcVar3[0xb] = pcVar7 + 0x200;
  ppcVar3[0xc] = pcVar7 + 0x280;
  ppcVar3[0xd] = pcVar7 + 0x300;
  ppcVar3[0xe] = pcVar7 + 0x380;
  ppcVar3[0xf] = pcVar7 + 0x400;
  ppcVar3[0x10] = pcVar7 + 0x480;
  if (iVar1 == 0) {
    memset(pcVar7,0,0x500);
  }
  ppcVar3[1] = FUN_00d76330;
  ppcVar3[3] = FUN_00d76338;
  ppcVar3[4] = (code *)0x0;
  return;
}


