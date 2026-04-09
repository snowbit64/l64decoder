// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadItems
// Entry Point: 00864694
// Size: 332 bytes
// Signature: undefined __thiscall loadItems(ConditionalAnimationPlayer * this, DomXMLFile * param_1, char * param_2, ConditionalAnimationShared * param_3)


/* ConditionalAnimationPlayer::loadItems(DomXMLFile&, char const*, ConditionalAnimationShared
   const&) */

void __thiscall
ConditionalAnimationPlayer::loadItems
          (ConditionalAnimationPlayer *this,DomXMLFile *param_1,char *param_2,
          ConditionalAnimationShared *param_3)

{
  ConditionalAnimationItem *this_00;
  long lVar1;
  ulong uVar2;
  int iVar3;
  ConditionalAnimationItem aCStack_1e0 [8];
  int local_1d8;
  char acStack_e8 [128];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  FUN_008652f4(acStack_e8,param_1,param_2,"%s.item(%u)",param_2,0);
  uVar2 = (**(code **)(*(long *)param_1 + 0x20))(param_1,acStack_e8,0);
  if ((uVar2 & 1) != 0) {
    iVar3 = 1;
    do {
      ConditionalAnimationItem::ConditionalAnimationItem(aCStack_1e0,this);
                    /* try { // try from 0086476c to 0086477f has its CatchHandler @ 008647ec */
      ConditionalAnimationItem::loadXMLFile(aCStack_1e0,param_1,acStack_e8,param_3);
      this_00 = *(ConditionalAnimationItem **)(this + 0x10);
      local_1d8 = iVar3 + -1;
      if (this_00 == *(ConditionalAnimationItem **)(this + 0x18)) {
                    /* try { // try from 00864718 to 00864723 has its CatchHandler @ 008647ec */
        std::__ndk1::
        vector<ConditionalAnimationItem,std::__ndk1::allocator<ConditionalAnimationItem>>::
        __push_back_slow_path<ConditionalAnimationItem_const&>
                  ((vector<ConditionalAnimationItem,std::__ndk1::allocator<ConditionalAnimationItem>>
                    *)(this + 8),aCStack_1e0);
      }
      else {
                    /* try { // try from 00864794 to 0086479f has its CatchHandler @ 008647e0 */
        ConditionalAnimationItem::ConditionalAnimationItem(this_00,aCStack_1e0);
        *(ConditionalAnimationItem **)(this + 0x10) = this_00 + 0xf8;
      }
      ConditionalAnimationItem::~ConditionalAnimationItem(aCStack_1e0);
      FUN_008652f4(acStack_e8);
      uVar2 = (**(code **)(*(long *)param_1 + 0x20))(param_1,acStack_e8,0);
      iVar3 = iVar3 + 1;
    } while ((uVar2 & 1) != 0);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


