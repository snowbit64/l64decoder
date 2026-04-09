// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadClips
// Entry Point: 00867d54
// Size: 316 bytes
// Signature: undefined __thiscall loadClips(ConditionalAnimationItem * this, DomXMLFile * param_1, char * param_2, ConditionalAnimationShared * param_3)


/* ConditionalAnimationItem::loadClips(DomXMLFile&, char const*, ConditionalAnimationShared const&)
    */

void __thiscall
ConditionalAnimationItem::loadClips
          (ConditionalAnimationItem *this,DomXMLFile *param_1,char *param_2,
          ConditionalAnimationShared *param_3)

{
  long lVar1;
  byte bVar2;
  ulong uVar3;
  char acStack_1c8 [128];
  char acStack_148 [128];
  char acStack_c8 [128];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_008676ac(acStack_c8,0x80,0x80,"%s.clips(0)",param_2);
  uVar3 = (**(code **)(*(long *)param_1 + 0x20))(param_1,acStack_c8,0);
  if ((uVar3 & 1) != 0) {
    SpeedScaleInfo::loadXMLFile((SpeedScaleInfo *)(this + 0xb0),param_1,acStack_c8);
    FUN_008676ac(acStack_148,0x80,0x80,"%s#blended",acStack_c8);
    bVar2 = Properties::getBoolDefault((Properties *)param_1,acStack_148,false);
    this[0xc] = (ConditionalAnimationItem)(bVar2 & 1);
    if ((bVar2 & 1) == 0) {
      FUN_008676ac(acStack_1c8,0x80,0x80,"%s.clip(0)",acStack_c8);
      uVar3 = (**(code **)(*(long *)param_1 + 0x20))(param_1,acStack_1c8,0);
      if ((uVar3 & 1) != 0) {
        ConditionalAnimationClipInfo::loadXMLFile
                  ((ConditionalAnimationClipInfo *)(this + 0x48),param_1,acStack_1c8);
      }
    }
    else {
      ConditionalAnimationBlending::loadXMLFile
                ((ConditionalAnimationBlending *)(this + 0x70),param_1,acStack_c8,param_3);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


