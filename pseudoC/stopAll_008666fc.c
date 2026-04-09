// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: stopAll
// Entry Point: 008666fc
// Size: 212 bytes
// Signature: undefined __thiscall stopAll(ConditionalAnimationTracks * this, CharacterSet * param_1, vector * param_2)


/* ConditionalAnimationTracks::stopAll(CharacterSet&, std::__ndk1::vector<ConditionalAnimationItem,
   std::__ndk1::allocator<ConditionalAnimationItem> >&) */

void __thiscall
ConditionalAnimationTracks::stopAll
          (ConditionalAnimationTracks *this,CharacterSet *param_1,vector *param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  lVar3 = 0;
  do {
    uVar1 = *(uint *)this;
    if ((-1 < (int)uVar1) && (*(char *)(*(long *)param_2 + (ulong)uVar1 * 0xf8 + 0xbc) != '\0')) {
      uVar2 = (uint)lVar3;
      ConditionalAnimationItem::stopClip
                ((ConditionalAnimationItem *)(*(long *)param_2 + (ulong)uVar1 * 0xf8),param_1,
                 *(int *)((long)this + 4),uVar2);
      ConditionalAnimationItem::reset();
      *(undefined8 *)this = 0xffffffffffffffff;
      CharacterSet::disable(param_1,uVar2);
      CharacterSet::clearClip(param_1,uVar2);
      CharacterSet::setBlendWeight(param_1,uVar2,0.0);
      CharacterSet::setTime(param_1,uVar2,0.0);
    }
    lVar3 = lVar3 + 1;
    this = (ConditionalAnimationTracks *)((long)this + 8);
  } while (lVar3 != 6);
  return;
}


