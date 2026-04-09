// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateCallbacks
// Entry Point: 0086707c
// Size: 276 bytes
// Signature: undefined __thiscall updateCallbacks(ConditionalAnimationTracks * this, CharacterSet * param_1, vector * param_2)


/* ConditionalAnimationTracks::updateCallbacks(CharacterSet&,
   std::__ndk1::vector<ConditionalAnimationItem, std::__ndk1::allocator<ConditionalAnimationItem>
   >&) */

void __thiscall
ConditionalAnimationTracks::updateCallbacks
          (ConditionalAnimationTracks *this,CharacterSet *param_1,vector *param_2)

{
  if (-1 < (int)*(uint *)this) {
    ConditionalAnimationItem::updateCallbacks
              ((ConditionalAnimationItem *)(*(long *)param_2 + (ulong)*(uint *)this * 0xf8),param_1,
               *(int *)(this + 4),0);
  }
  if (-1 < (int)*(uint *)(this + 8)) {
    ConditionalAnimationItem::updateCallbacks
              ((ConditionalAnimationItem *)(*(long *)param_2 + (ulong)*(uint *)(this + 8) * 0xf8),
               param_1,*(int *)(this + 0xc),1);
  }
  if (-1 < (int)*(uint *)(this + 0x10)) {
    ConditionalAnimationItem::updateCallbacks
              ((ConditionalAnimationItem *)(*(long *)param_2 + (ulong)*(uint *)(this + 0x10) * 0xf8)
               ,param_1,*(int *)(this + 0x14),2);
  }
  if (-1 < (int)*(uint *)(this + 0x18)) {
    ConditionalAnimationItem::updateCallbacks
              ((ConditionalAnimationItem *)(*(long *)param_2 + (ulong)*(uint *)(this + 0x18) * 0xf8)
               ,param_1,*(int *)(this + 0x1c),3);
  }
  if (-1 < (int)*(uint *)(this + 0x20)) {
    ConditionalAnimationItem::updateCallbacks
              ((ConditionalAnimationItem *)(*(long *)param_2 + (ulong)*(uint *)(this + 0x20) * 0xf8)
               ,param_1,*(int *)(this + 0x24),4);
  }
  if (-1 < (int)*(uint *)(this + 0x28)) {
    ConditionalAnimationItem::updateCallbacks
              ((ConditionalAnimationItem *)(*(long *)param_2 + (ulong)*(uint *)(this + 0x28) * 0xf8)
               ,param_1,*(int *)(this + 0x2c),5);
    return;
  }
  return;
}


