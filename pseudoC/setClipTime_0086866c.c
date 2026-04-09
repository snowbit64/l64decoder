// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setClipTime
// Entry Point: 0086866c
// Size: 272 bytes
// Signature: undefined __thiscall setClipTime(ConditionalAnimationItem * this, CharacterSet * param_1, float param_2)


/* ConditionalAnimationItem::setClipTime(CharacterSet&, float) */

void __thiscall
ConditionalAnimationItem::setClipTime
          (ConditionalAnimationItem *this,CharacterSet *param_1,float param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(this + 0x68);
  iVar2 = CharacterSet::getAssignedClip(param_1,0);
  if (iVar2 == iVar1) {
    CharacterSet::setTime(param_1,0,param_2);
  }
  iVar2 = CharacterSet::getAssignedClip(param_1,1);
  if (iVar2 == iVar1) {
    CharacterSet::setTime(param_1,1,param_2);
  }
  iVar2 = CharacterSet::getAssignedClip(param_1,2);
  if (iVar2 == iVar1) {
    CharacterSet::setTime(param_1,2,param_2);
  }
  iVar2 = CharacterSet::getAssignedClip(param_1,3);
  if (iVar2 == iVar1) {
    CharacterSet::setTime(param_1,3,param_2);
  }
  iVar2 = CharacterSet::getAssignedClip(param_1,4);
  if (iVar2 == iVar1) {
    CharacterSet::setTime(param_1,4,param_2);
  }
  iVar2 = CharacterSet::getAssignedClip(param_1,5);
  if (iVar2 == iVar1) {
    CharacterSet::setTime(param_1,5,param_2);
    return;
  }
  return;
}


