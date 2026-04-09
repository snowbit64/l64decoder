// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initClip
// Entry Point: 0086a39c
// Size: 124 bytes
// Signature: undefined __thiscall initClip(ConditionalAnimationBlending * this, CharacterSet * param_1)


/* ConditionalAnimationBlending::initClip(CharacterSet&) */

void __thiscall
ConditionalAnimationBlending::initClip(ConditionalAnimationBlending *this,CharacterSet *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = (*(long *)(this + 0x18) - (long)*(ConditionalAnimationClipInfo **)(this + 0x10) >> 3) *
          0xb6db6db7;
  if ((int)uVar1 != 0) {
    ConditionalAnimationClipInfo::init(*(ConditionalAnimationClipInfo **)(this + 0x10),param_1);
    lVar2 = (uVar1 & 0xffffffff) - 1;
    if (lVar2 != 0) {
      lVar3 = 0x38;
      do {
        ConditionalAnimationClipInfo::init
                  ((ConditionalAnimationClipInfo *)(*(long *)(this + 0x10) + lVar3),param_1);
        lVar2 = lVar2 + -1;
        lVar3 = lVar3 + 0x38;
      } while (lVar2 != 0);
    }
  }
  return;
}


