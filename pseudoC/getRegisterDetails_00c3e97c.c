// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getRegisterDetails
// Entry Point: 00c3e97c
// Size: 68 bytes
// Signature: undefined __thiscall getRegisterDetails(IR_RegisterSet * this, uint param_1)


/* IR_RegisterSet::getRegisterDetails(unsigned int) const */

char * __thiscall IR_RegisterSet::getRegisterDetails(IR_RegisterSet *this,uint param_1)

{
  char *pcVar1;
  char *pcVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = (*(long *)(this + 0x10) - *(long *)(this + 8) >> 3) * -0x3333333333333333;
  uVar3 = (ulong)param_1;
  if (uVar3 <= uVar4 && uVar4 - uVar3 != 0) {
    pcVar2 = (char *)(*(long *)(this + 8) + uVar3 * 0x28);
    pcVar1 = (char *)0x0;
    if (*pcVar2 != '\0') {
      pcVar1 = pcVar2;
    }
    return pcVar1;
  }
  return (char *)0x0;
}


