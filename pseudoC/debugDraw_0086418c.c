// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: debugDraw
// Entry Point: 0086418c
// Size: 20 bytes
// Signature: undefined __thiscall debugDraw(ConditionalAnimationEntity * this, Vector3 * param_1)


/* ConditionalAnimationEntity::debugDraw(Vector3 const&) const */

void __thiscall
ConditionalAnimationEntity::debugDraw(ConditionalAnimationEntity *this,Vector3 *param_1)

{
  ConditionalAnimationPlayer::debugDraw
            ((ConditionalAnimationPlayer *)(this + 0x20),(ConditionalAnimationShared *)(this + 0xa8)
             ,param_1);
  return;
}


