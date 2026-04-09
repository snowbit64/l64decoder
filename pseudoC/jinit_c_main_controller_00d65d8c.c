// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jinit_c_main_controller
// Entry Point: 00d65d8c
// Size: 224 bytes
// Signature: undefined jinit_c_main_controller(void)


void jinit_c_main_controller(undefined8 *param_1,char param_2)

{
  char cVar1;
  int iVar2;
  code **ppcVar3;
  code *pcVar4;
  long lVar5;
  int *piVar6;
  
  ppcVar3 = (code **)(**(code **)param_1[1])(param_1,1,0x70);
  cVar1 = *(char *)(param_1 + 0x24);
  param_1[0x3d] = ppcVar3;
  *ppcVar3 = FUN_00d65e6c;
  if (cVar1 == '\0') {
    if (param_2 != '\0') {
      ppcVar3 = (code **)*param_1;
      *(undefined4 *)(ppcVar3 + 5) = 3;
                    /* WARNING: Could not recover jumptable at 0x00d65e08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**ppcVar3)(param_1);
      return;
    }
    if (0 < *(int *)((long)param_1 + 0x5c)) {
      lVar5 = 0;
      piVar6 = (int *)(param_1[0xd] + 0x28);
      do {
        pcVar4 = (code *)(**(code **)(param_1[1] + 0x10))
                                   (param_1,1,piVar6[-1] * piVar6[-3],*piVar6 * piVar6[-7]);
        iVar2 = *(int *)((long)param_1 + 0x5c);
        ppcVar3[lVar5 + 4] = pcVar4;
        lVar5 = lVar5 + 1;
        piVar6 = piVar6 + 0x18;
      } while (lVar5 < iVar2);
    }
  }
  return;
}


