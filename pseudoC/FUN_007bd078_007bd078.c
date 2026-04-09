// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007bd078
// Entry Point: 007bd078
// Size: 64 bytes
// Signature: undefined FUN_007bd078(void)


void FUN_007bd078(long param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = *param_2;
  fVar2 = param_2[4];
  fVar3 = param_2[8];
  fVar4 = param_2[0xc];
  fVar5 = param_2[0x10];
  fVar6 = param_2[0x14];
  if (param_2[0x18] == 0.0) {
    fVar3 = fVar3 - fVar1;
    fVar4 = fVar4 - fVar2;
    fVar5 = fVar5 - fVar1;
    fVar6 = fVar6 - fVar2;
  }
  *(float *)(param_1 + 8) = fVar1;
  *(float *)(param_1 + 0xc) = fVar2;
  *(float *)(param_1 + 0x10) = fVar3;
  *(float *)(param_1 + 0x14) = fVar4;
  *(float *)(param_1 + 0x18) = fVar5;
  *(float *)(param_1 + 0x1c) = fVar6;
  return;
}


