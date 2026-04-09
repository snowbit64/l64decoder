// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadXMLFile
// Entry Point: 008678ac
// Size: 344 bytes
// Signature: undefined __thiscall loadXMLFile(ConditionalAnimationItem * this, DomXMLFile * param_1, char * param_2, ConditionalAnimationShared * param_3)


/* ConditionalAnimationItem::loadXMLFile(DomXMLFile&, char const*, ConditionalAnimationShared
   const&) */

void __thiscall
ConditionalAnimationItem::loadXMLFile
          (ConditionalAnimationItem *this,DomXMLFile *param_1,char *param_2,
          ConditionalAnimationShared *param_3)

{
  long lVar1;
  float fVar2;
  char acStack_d8 [128];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  FUN_008676ac(acStack_d8,0x80,0x80,"%s#entryTransitionDuration",param_2);
  fVar2 = (float)Properties::getFloat((Properties *)param_1,acStack_d8,0.2);
  *(float *)(this + 0x28) = fVar2 * 1000.0;
  FUN_008676ac(acStack_d8,0x80,0x80,"%s#exitTransitionDuration",param_2);
  fVar2 = (float)Properties::getFloat((Properties *)param_1,acStack_d8,0.2);
  *(float *)(this + 0x2c) = fVar2 * 1000.0;
  FUN_008676ac(acStack_d8,0x80,0x80,"%s#id",param_2);
  Properties::getString((Properties *)param_1,acStack_d8,"");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(this + 0x10));
  ConditionalAnimationConditions::loadXMLFile
            ((ConditionalAnimationConditions *)(this + 0x98),param_1,param_2,param_3);
  loadCallbacks(this,param_1,param_2);
  loadClips(this,param_1,param_2,param_3);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


