// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ConditionalAnimationBlending
// Entry Point: 00865764
// Size: 128 bytes
// Signature: undefined __thiscall ~ConditionalAnimationBlending(ConditionalAnimationBlending * this)


/* ConditionalAnimationBlending::~ConditionalAnimationBlending() */

void __thiscall
ConditionalAnimationBlending::~ConditionalAnimationBlending(ConditionalAnimationBlending *this)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar2 = *(byte **)(this + 0x10);
  if (pbVar2 == (byte *)0x0) {
    return;
  }
  pbVar1 = *(byte **)(this + 0x18);
  pbVar3 = pbVar2;
  if (pbVar1 != pbVar2) {
    do {
      pbVar3 = pbVar1 + -0x38;
      if ((*pbVar3 & 1) != 0) {
        operator_delete(*(void **)(pbVar1 + -0x28));
      }
      pbVar1 = pbVar3;
    } while (pbVar3 != pbVar2);
    pbVar3 = *(byte **)(this + 0x10);
  }
  *(byte **)(this + 0x18) = pbVar2;
  operator_delete(pbVar3);
  return;
}


