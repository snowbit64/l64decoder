// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d8e00c
// Entry Point: 00d8e00c
// Size: 164 bytes
// Signature: undefined FUN_00d8e00c(void)


void FUN_00d8e00c(long *param_1,int param_2,undefined param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  code **ppcVar4;
  long lVar5;
  
  lVar5 = param_1[1];
  if (param_2 != 1) {
    lVar2 = *param_1;
    *(int *)(lVar2 + 0x2c) = param_2;
    ppcVar4 = (code **)*param_1;
    *(undefined4 *)(lVar2 + 0x28) = 0xf;
    (**ppcVar4)(param_1);
  }
  puVar1 = (undefined8 *)FUN_00d8d8cc(param_1,param_2,0x90);
  *(undefined4 *)(puVar1 + 1) = param_5;
  *(undefined4 *)((long)puVar1 + 0xc) = param_4;
  uVar3 = *(undefined8 *)(lVar5 + 0x90);
  *(undefined4 *)(puVar1 + 2) = param_6;
  *(undefined *)((long)puVar1 + 0x24) = param_3;
  *(undefined8 **)(lVar5 + 0x90) = puVar1;
  *puVar1 = 0;
  *(undefined *)((long)puVar1 + 0x26) = 0;
  puVar1[5] = uVar3;
  return;
}


