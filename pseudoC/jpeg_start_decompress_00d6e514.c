// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jpeg_start_decompress
// Entry Point: 00d6e514
// Size: 516 bytes
// Signature: undefined jpeg_start_decompress(void)


undefined8 jpeg_start_decompress(long *param_1)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  code **ppcVar7;
  long lVar8;
  uint uVar9;
  
  iVar2 = *(int *)((long)param_1 + 0x24);
  if (iVar2 != 0xcc) {
    if (iVar2 == 0xcb) {
LAB_00d6e594:
      if (*(char *)(param_1[0x48] + 0x20) != '\0') {
        ppcVar7 = (code **)param_1[2];
        while( true ) {
          if (ppcVar7 != (code **)0x0) {
            (**ppcVar7)(param_1);
          }
          uVar5 = (**(code **)param_1[0x48])(param_1);
          uVar4 = (uint)uVar5;
          if (uVar4 == 0) {
            return uVar5;
          }
          if (uVar4 == 2) break;
          ppcVar7 = (code **)param_1[2];
          if ((ppcVar7 != (code **)0x0) && ((uVar4 & 0xfffffffd) == 1)) {
            pcVar1 = ppcVar7[1];
            ppcVar7[1] = pcVar1 + 1;
            if ((long)ppcVar7[2] <= (long)(pcVar1 + 1)) {
              ppcVar7[2] = ppcVar7[2] + *(uint *)(param_1 + 0x32);
            }
          }
        }
      }
      *(undefined4 *)((long)param_1 + 0xa4) = *(undefined4 *)((long)param_1 + 0x9c);
      iVar2 = *(int *)((long)param_1 + 0x24);
    }
    else {
      if (iVar2 == 0xca) {
        jinit_master_decompress(param_1);
        if (*(char *)(param_1 + 0xb) != '\0') {
          uVar6 = 0xcf;
          goto LAB_00d6e700;
        }
        *(undefined4 *)((long)param_1 + 0x24) = 0xcb;
        goto LAB_00d6e594;
      }
      lVar8 = *param_1;
      *(int *)(lVar8 + 0x2c) = iVar2;
      ppcVar7 = (code **)*param_1;
      *(undefined4 *)(lVar8 + 0x28) = 0x15;
      (**ppcVar7)(param_1);
      iVar2 = *(int *)((long)param_1 + 0x24);
    }
    if (iVar2 != 0xcc) {
      (**(code **)param_1[0x44])(param_1);
      *(undefined4 *)(param_1 + 0x13) = 0;
      *(undefined4 *)((long)param_1 + 0x24) = 0xcc;
    }
  }
  if (*(char *)(param_1[0x44] + 0x10) != '\0') {
    uVar4 = *(uint *)(param_1 + 0x13);
    do {
      while (uVar3 = *(uint *)(param_1 + 0xf), uVar4 < uVar3) {
        ppcVar7 = (code **)param_1[2];
        uVar9 = uVar4;
        if (ppcVar7 != (code **)0x0) {
          ppcVar7[1] = (code *)(ulong)uVar4;
          ppcVar7[2] = (code *)(ulong)uVar3;
          (**ppcVar7)(param_1);
          uVar9 = *(uint *)(param_1 + 0x13);
        }
        (**(code **)(param_1[0x45] + 8))(param_1,0,param_1 + 0x13,0);
        uVar4 = *(uint *)(param_1 + 0x13);
        if (uVar4 == uVar9) {
          return 0;
        }
      }
      (**(code **)(param_1[0x44] + 8))(param_1);
      (**(code **)param_1[0x44])(param_1);
      uVar4 = 0;
      *(undefined4 *)(param_1 + 0x13) = 0;
    } while (*(char *)(param_1[0x44] + 0x10) != '\0');
  }
  uVar6 = 0xcd;
  if (*(char *)((long)param_1 + 0x59) != '\0') {
    uVar6 = 0xce;
  }
LAB_00d6e700:
  *(undefined4 *)((long)param_1 + 0x24) = uVar6;
  return 1;
}


