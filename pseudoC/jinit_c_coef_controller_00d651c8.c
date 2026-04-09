// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jinit_c_coef_controller
// Entry Point: 00d651c8
// Size: 312 bytes
// Signature: undefined jinit_c_coef_controller(void)


void jinit_c_coef_controller(long param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  code **ppcVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 *puVar6;
  code *pcVar7;
  
  ppcVar3 = (code **)(***(code ***)(param_1 + 8))(param_1,1,0xc0);
  *(code ***)(param_1 + 0x1f8) = ppcVar3;
  *ppcVar3 = FUN_00d65300;
  if (param_2 != '\0') {
    if (0 < *(int *)(param_1 + 0x5c)) {
      lVar5 = 0;
      puVar6 = (undefined4 *)(*(long *)(param_1 + 0x68) + 0x1c);
      do {
        pcVar7 = *(code **)(*(long *)(param_1 + 8) + 0x28);
        uVar2 = jround_up(*puVar6,(long)(int)puVar6[-5]);
        uVar4 = jround_up(puVar6[1],(long)(int)puVar6[-4]);
        pcVar7 = (code *)(*pcVar7)(param_1,1,0,uVar2,uVar4,puVar6[-4]);
        iVar1 = *(int *)(param_1 + 0x5c);
        ppcVar3[lVar5 + 0xe] = pcVar7;
        lVar5 = lVar5 + 1;
        puVar6 = puVar6 + 0x18;
      } while (lVar5 < iVar1);
    }
    return;
  }
  pcVar7 = (code *)(**(code **)(*(long *)(param_1 + 8) + 8))(param_1,1,0x500);
  ppcVar3[4] = pcVar7;
  ppcVar3[5] = pcVar7 + 0x80;
  ppcVar3[6] = pcVar7 + 0x100;
  ppcVar3[7] = pcVar7 + 0x180;
  ppcVar3[8] = pcVar7 + 0x200;
  ppcVar3[9] = pcVar7 + 0x280;
  ppcVar3[10] = pcVar7 + 0x300;
  ppcVar3[0xb] = pcVar7 + 0x380;
  ppcVar3[0xc] = pcVar7 + 0x400;
  ppcVar3[0xd] = pcVar7 + 0x480;
  ppcVar3[0xe] = (code *)0x0;
  return;
}


