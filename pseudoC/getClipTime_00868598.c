// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getClipTime
// Entry Point: 00868598
// Size: 212 bytes
// Signature: undefined __thiscall getClipTime(ConditionalAnimationItem * this, CharacterSet * param_1)


/* ConditionalAnimationItem::getClipTime(CharacterSet&) */

undefined  [16] __thiscall
ConditionalAnimationItem::getClipTime(ConditionalAnimationItem *this,CharacterSet *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined auVar4 [16];
  
  iVar1 = *(int *)(this + 0x68);
  iVar2 = CharacterSet::getAssignedClip(param_1,0);
  uVar3 = 0;
  if (iVar2 != iVar1) {
    uVar3 = 1;
    iVar2 = CharacterSet::getAssignedClip(param_1,1);
    if (iVar2 != iVar1) {
      uVar3 = 2;
      iVar2 = CharacterSet::getAssignedClip(param_1,2);
      if (iVar2 != iVar1) {
        uVar3 = 3;
        iVar2 = CharacterSet::getAssignedClip(param_1,3);
        if (iVar2 != iVar1) {
          uVar3 = 4;
          iVar2 = CharacterSet::getAssignedClip(param_1,4);
          if (iVar2 != iVar1) {
            uVar3 = 5;
            iVar2 = CharacterSet::getAssignedClip(param_1,5);
            if (iVar2 != iVar1) {
              return ZEXT816(0);
            }
          }
        }
      }
    }
  }
  auVar4 = CharacterSet::getWrappedTime(param_1,uVar3);
  return auVar4;
}


