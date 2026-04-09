// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ConditionalAnimationEntity
// Entry Point: 00864080
// Size: 100 bytes
// Signature: undefined __thiscall ConditionalAnimationEntity(ConditionalAnimationEntity * this)


/* ConditionalAnimationEntity::ConditionalAnimationEntity() */

void __thiscall
ConditionalAnimationEntity::ConditionalAnimationEntity(ConditionalAnimationEntity *this)

{
  Entity::Entity((Entity *)this,"ConditionalAnimation",true);
  *(undefined ***)this = &PTR__ConditionalAnimationEntity_00fdbe48;
                    /* try { // try from 008640b8 to 008640bf has its CatchHandler @ 008640f4 */
  ConditionalAnimationPlayer::ConditionalAnimationPlayer
            ((ConditionalAnimationPlayer *)(this + 0x20));
                    /* try { // try from 008640c4 to 008640c7 has its CatchHandler @ 008640e4 */
  ConditionalAnimationShared::ConditionalAnimationShared
            ((ConditionalAnimationShared *)(this + 0xa8));
  *(ulong *)(this + 0x10) = *(ulong *)(this + 0x10) | 0x100000;
  return;
}


