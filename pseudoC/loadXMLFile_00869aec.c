// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadXMLFile
// Entry Point: 00869aec
// Size: 180 bytes
// Signature: undefined __thiscall loadXMLFile(ConditionalAnimationClipInfo * this, DomXMLFile * param_1, char * param_2)


/* ConditionalAnimationClipInfo::loadXMLFile(DomXMLFile&, char const*) */

void __thiscall
ConditionalAnimationClipInfo::loadXMLFile
          (ConditionalAnimationClipInfo *this,DomXMLFile *param_1,char *param_2)

{
  long lVar1;
  byte bVar2;
  char acStack_b8 [128];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00869ba0(acStack_b8,param_1,param_2,"%s#clipName",param_2);
  Properties::getString((Properties *)param_1,acStack_b8,"");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)this);
  FUN_00869ba0(acStack_b8);
  bVar2 = Properties::getBoolDefault((Properties *)param_1,acStack_b8,true);
  this[0x24] = (ConditionalAnimationClipInfo)(bVar2 & 1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


