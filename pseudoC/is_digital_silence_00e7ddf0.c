// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: is_digital_silence
// Entry Point: 00e7ddf0
// Size: 108 bytes
// Signature: undefined is_digital_silence(void)


bool is_digital_silence(short *param_1,int param_2,int param_3)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = (ulong)(uint)(param_3 * param_2);
  if (param_3 * param_2 < 1) {
    return true;
  }
  uVar2 = 0;
  uVar3 = 0;
  do {
    uVar4 = (uint)*param_1;
    if ((int)uVar3 <= (int)*param_1) {
      uVar3 = uVar4;
    }
    if ((int)uVar4 <= (int)uVar2) {
      uVar2 = uVar4;
    }
    uVar3 = uVar3 & 0xffff;
    uVar1 = uVar1 - 1;
    param_1 = param_1 + 1;
  } while (uVar1 != 0);
  if (uVar3 == -uVar2 || (int)(uVar3 + uVar2) < 0 != SBORROW4(uVar3,-uVar2)) {
    uVar3 = -uVar2;
  }
  return uVar3 == 0;
}


