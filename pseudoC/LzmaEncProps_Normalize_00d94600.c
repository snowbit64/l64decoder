// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: LzmaEncProps_Normalize
// Entry Point: 00d94600
// Size: 340 bytes
// Signature: undefined LzmaEncProps_Normalize(void)


void LzmaEncProps_Normalize(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 5;
  if (-1 < (int)*param_1) {
    uVar2 = *param_1;
  }
  *param_1 = uVar2;
  if (param_1[1] == 0) {
    if (uVar2 < 6) {
      param_1[1] = 1 << (ulong)(uVar2 * 2 + 0xe & 0x1f);
      uVar3 = param_1[2];
    }
    else {
      uVar3 = 0x2000000;
      if (uVar2 != 6) {
        uVar3 = 0x4000000;
      }
      param_1[1] = uVar3;
      uVar3 = param_1[2];
    }
  }
  else {
    uVar3 = param_1[2];
  }
  if ((int)uVar3 < 0) {
    param_1[2] = 3;
    uVar3 = param_1[3];
  }
  else {
    uVar3 = param_1[3];
  }
  if ((int)uVar3 < 0) {
    param_1[3] = 0;
    uVar3 = param_1[4];
  }
  else {
    uVar3 = param_1[4];
  }
  if ((int)uVar3 < 0) {
    param_1[4] = 2;
    uVar3 = param_1[5];
  }
  else {
    uVar3 = param_1[5];
  }
  if ((int)uVar3 < 0) {
    uVar3 = (uint)(4 < uVar2);
    param_1[5] = uVar3;
    uVar1 = param_1[6];
  }
  else {
    uVar1 = param_1[6];
  }
  if ((int)uVar1 < 0) {
    uVar1 = 0x20;
    if (6 < uVar2) {
      uVar1 = 0x40;
    }
    param_1[6] = uVar1;
    uVar2 = param_1[7];
  }
  else {
    uVar2 = param_1[7];
  }
  if ((int)uVar2 < 0) {
    uVar2 = (uint)(uVar3 != 0);
    param_1[7] = uVar2;
    uVar3 = param_1[8];
  }
  else {
    uVar3 = param_1[8];
  }
  if ((int)uVar3 < 0) {
    param_1[8] = 4;
    uVar3 = param_1[9];
  }
  else {
    uVar3 = param_1[9];
  }
  if (uVar3 == 0) {
    param_1[9] = (uVar1 >> 1) + 0x10 >> (uVar2 == 0);
    uVar2 = param_1[0xb];
  }
  else {
    uVar2 = param_1[0xb];
  }
  if ((int)uVar2 < 0) {
    param_1[0xb] = 1;
    return;
  }
  return;
}


