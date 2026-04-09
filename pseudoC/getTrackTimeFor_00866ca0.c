// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getTrackTimeFor
// Entry Point: 00866ca0
// Size: 360 bytes
// Signature: undefined __thiscall getTrackTimeFor(ConditionalAnimationTracks * this, CharacterSet * param_1, int param_2)


/* ConditionalAnimationTracks::getTrackTimeFor(CharacterSet&, int) const */

undefined  [16] __thiscall
ConditionalAnimationTracks::getTrackTimeFor
          (ConditionalAnimationTracks *this,CharacterSet *param_1,int param_2)

{
  int *piVar1;
  ulong uVar2;
  uint uVar3;
  undefined auVar4 [16];
  
  piVar1 = (int *)(this + (long)param_2 * 8);
  if (-1 < *piVar1) {
    uVar2 = CharacterSet::isVisible(param_1,param_2);
    if ((((uVar2 & 1) == 0) || (param_2 == 0)) || (*piVar1 != *(int *)this)) {
      uVar2 = CharacterSet::isVisible(param_1,param_2);
      if ((((uVar2 & 1) == 0) || (param_2 == 1)) || (*piVar1 != *(int *)(this + 8))) {
        uVar2 = CharacterSet::isVisible(param_1,param_2);
        if ((((uVar2 & 1) == 0) || (param_2 == 2)) || (*piVar1 != *(int *)(this + 0x10))) {
          uVar2 = CharacterSet::isVisible(param_1,param_2);
          if ((((uVar2 & 1) == 0) || (param_2 == 3)) || (*piVar1 != *(int *)(this + 0x18))) {
            uVar2 = CharacterSet::isVisible(param_1,param_2);
            if ((((uVar2 & 1) == 0) || (param_2 == 4)) || (*piVar1 != *(int *)(this + 0x20))) {
              uVar2 = CharacterSet::isVisible(param_1,param_2);
              if ((((uVar2 & 1) == 0) || (param_2 == 5)) || (*piVar1 != *(int *)(this + 0x28)))
              goto LAB_00866df4;
              uVar3 = 5;
            }
            else {
              uVar3 = 4;
            }
          }
          else {
            uVar3 = 3;
          }
        }
        else {
          uVar3 = 2;
        }
      }
      else {
        uVar3 = 1;
      }
    }
    else {
      uVar3 = 0;
    }
    auVar4 = CharacterSet::getTime(param_1,uVar3);
    return auVar4;
  }
LAB_00866df4:
  return ZEXT816(0);
}


