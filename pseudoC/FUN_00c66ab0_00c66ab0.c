// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00c66ab0
// Entry Point: 00c66ab0
// Size: 308 bytes
// Signature: undefined FUN_00c66ab0(void)


undefined8 * FUN_00c66ab0(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  puVar2 = *(undefined8 **)(param_1 + 8);
  puVar4 = param_2 + 10;
  puVar1 = param_2;
  puVar3 = param_2;
  if (puVar4 != puVar2) {
    do {
      if ((*(byte *)puVar3 & 1) != 0) {
        operator_delete((void *)puVar3[2]);
      }
      uVar5 = puVar3[10];
      *(undefined2 *)(puVar3 + 10) = 0;
      puVar3[1] = puVar3[0xb];
      *puVar3 = uVar5;
      puVar3[2] = puVar3[0xc];
      if ((*(byte *)(puVar3 + 3) & 1) != 0) {
        operator_delete((void *)puVar3[5]);
      }
      uVar5 = puVar3[0xd];
      *(undefined2 *)(puVar3 + 0xd) = 0;
      puVar3[4] = puVar3[0xe];
      puVar3[3] = uVar5;
      puVar3[5] = puVar3[0xf];
      *(undefined4 *)(puVar3 + 6) = *(undefined4 *)(puVar3 + 0x10);
      if ((*(byte *)(puVar3 + 7) & 1) != 0) {
        operator_delete((void *)puVar3[9]);
      }
      uVar5 = puVar3[0x11];
      puVar1 = puVar3 + 10;
      *(undefined2 *)(puVar3 + 0x11) = 0;
      puVar3[8] = puVar3[0x12];
      puVar3[7] = uVar5;
      puVar3[9] = puVar3[0x13];
      puVar4 = puVar3 + 0x14;
      puVar3 = puVar1;
    } while (puVar4 != puVar2);
    puVar4 = *(undefined8 **)(param_1 + 8);
    if (puVar1 == *(undefined8 **)(param_1 + 8)) goto LAB_00c66b7c;
  }
  do {
    if ((*(byte *)(puVar4 + -3) & 1) != 0) {
      operator_delete((void *)puVar4[-1]);
    }
    if ((*(byte *)(puVar4 + -7) & 1) != 0) {
      operator_delete((void *)puVar4[-5]);
    }
    puVar3 = puVar4 + -10;
    if ((*(byte *)(puVar4 + -10) & 1) != 0) {
      operator_delete((void *)puVar4[-8]);
    }
    puVar4 = puVar3;
  } while (puVar3 != puVar1);
LAB_00c66b7c:
  *(undefined8 **)(param_1 + 8) = puVar1;
  return param_2;
}


