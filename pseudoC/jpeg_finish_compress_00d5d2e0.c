// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jpeg_finish_compress
// Entry Point: 00d5d2e0
// Size: 352 bytes
// Signature: undefined jpeg_finish_compress(void)


void jpeg_finish_compress(long *param_1)

{
  int iVar1;
  char cVar2;
  code **ppcVar3;
  code *pcVar4;
  long lVar5;
  code *pcVar6;
  
  iVar1 = *(int *)((long)param_1 + 0x24);
  if (iVar1 - 0x65U < 2) {
    if (*(uint *)(param_1 + 0x29) < *(uint *)((long)param_1 + 0x34)) {
      ppcVar3 = (code **)*param_1;
      *(undefined4 *)(ppcVar3 + 5) = 0x45;
      (**ppcVar3)(param_1);
    }
    pcVar4 = *(code **)(param_1[0x3c] + 0x10);
  }
  else {
    if (iVar1 == 0x67) goto LAB_00d5d360;
    lVar5 = *param_1;
    *(int *)(lVar5 + 0x2c) = iVar1;
    ppcVar3 = (code **)*param_1;
    *(undefined4 *)(lVar5 + 0x28) = 0x15;
    pcVar4 = *ppcVar3;
  }
  (*pcVar4)(param_1);
LAB_00d5d360:
  ppcVar3 = (code **)param_1[0x3c];
  cVar2 = *(char *)((long)ppcVar3 + 0x19);
  while (cVar2 == '\0') {
    (**ppcVar3)(param_1);
    pcVar4 = (code *)(ulong)*(uint *)(param_1 + 0x2c);
    if (*(uint *)(param_1 + 0x2c) != 0) {
      pcVar6 = (code *)0x0;
      do {
        ppcVar3 = (code **)param_1[2];
        if (ppcVar3 != (code **)0x0) {
          ppcVar3[1] = pcVar6;
          ppcVar3[2] = pcVar4;
          (**ppcVar3)(param_1);
        }
        cVar2 = (**(code **)(param_1[0x3f] + 8))(param_1,0);
        if (cVar2 == '\0') {
          ppcVar3 = (code **)*param_1;
          *(undefined4 *)(ppcVar3 + 5) = 0x19;
          (**ppcVar3)(param_1);
        }
        pcVar4 = (code *)(ulong)*(uint *)(param_1 + 0x2c);
        pcVar6 = pcVar6 + 1;
      } while (pcVar6 < pcVar4);
    }
    (**(code **)(param_1[0x3c] + 0x10))(param_1);
    ppcVar3 = (code **)param_1[0x3c];
    cVar2 = *(char *)((long)ppcVar3 + 0x19);
  }
  (**(code **)(param_1[0x40] + 0x18))(param_1);
  (**(code **)(param_1[5] + 0x20))(param_1);
  jpeg_abort(param_1);
  return;
}


