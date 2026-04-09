// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createDelay
// Entry Point: 00b1347c
// Size: 124 bytes
// Signature: undefined __thiscall createDelay(FDNReverb * this, Delay * param_1, float param_2)


/* FDNReverb::createDelay(FDNReverb::Delay&, float) */

void __thiscall FDNReverb::createDelay(FDNReverb *this,Delay *param_1,float param_2)

{
  void *__s;
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)(*(float *)this * param_2);
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    uVar2 = iVar1 - 1U | iVar1 - 1U >> 1;
    uVar2 = uVar2 | uVar2 >> 2;
    uVar2 = uVar2 | uVar2 >> 4;
    uVar2 = uVar2 | uVar2 >> 8;
    uVar2 = (uVar2 | uVar2 >> 0x10) + 1;
  }
  __s = operator_new__((ulong)uVar2 << 2);
  *(void **)param_1 = __s;
  *(int *)(param_1 + 8) = iVar1;
  *(uint *)(param_1 + 0xc) = uVar2 - 1;
  memset(__s,0,(ulong)uVar2 << 2);
  return;
}


