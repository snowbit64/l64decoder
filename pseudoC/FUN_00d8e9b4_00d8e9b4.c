// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d8e9b4
// Entry Point: 00d8e9b4
// Size: 340 bytes
// Signature: undefined FUN_00d8e9b4(void)


void FUN_00d8e9b4(long *param_1,uint param_2)

{
  long *plVar1;
  long lVar2;
  code **ppcVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = param_1[1];
  if (param_2 < 2) {
    if (param_2 == 1) {
      for (lVar2 = *(long *)(lVar4 + 0x88); lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x28)) {
        if (*(char *)(lVar2 + 0x26) != '\0') {
          *(undefined *)(lVar2 + 0x26) = 0;
          (**(code **)(lVar2 + 0x40))(param_1,lVar2 + 0x30);
        }
      }
      lVar2 = *(long *)(lVar4 + 0x90);
      *(undefined8 *)(lVar4 + 0x88) = 0;
      for (; lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x28)) {
        if (*(char *)(lVar2 + 0x26) != '\0') {
          *(undefined *)(lVar2 + 0x26) = 0;
          (**(code **)(lVar2 + 0x40))(param_1,lVar2 + 0x30);
        }
      }
      *(undefined8 *)(lVar4 + 0x90) = 0;
    }
  }
  else {
    lVar2 = *param_1;
    *(uint *)(lVar2 + 0x2c) = param_2;
    ppcVar3 = (code **)*param_1;
    *(undefined4 *)(lVar2 + 0x28) = 0xf;
    (**ppcVar3)(param_1);
  }
  lVar2 = lVar4 + (long)(int)param_2 * 8;
  plVar1 = *(long **)(lVar2 + 0x78);
  *(undefined8 *)(lVar2 + 0x78) = 0;
  while (plVar1 != (long *)0x0) {
    lVar5 = *plVar1;
    lVar2 = plVar1[1] + plVar1[2] + 0x18;
    jpeg_free_large(param_1,plVar1,lVar2);
    *(long *)(lVar4 + 0x98) = *(long *)(lVar4 + 0x98) - lVar2;
    plVar1 = (long *)lVar5;
  }
  lVar2 = lVar4 + (long)(int)param_2 * 8;
  plVar1 = *(long **)(lVar2 + 0x68);
  *(undefined8 *)(lVar2 + 0x68) = 0;
  while (plVar1 != (long *)0x0) {
    lVar5 = *plVar1;
    lVar2 = plVar1[1] + plVar1[2] + 0x18;
    jpeg_free_small(param_1,plVar1,lVar2);
    *(long *)(lVar4 + 0x98) = *(long *)(lVar4 + 0x98) - lVar2;
    plVar1 = (long *)lVar5;
  }
  return;
}


