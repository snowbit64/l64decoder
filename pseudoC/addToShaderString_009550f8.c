// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addToShaderString
// Entry Point: 009550f8
// Size: 368 bytes
// Signature: undefined __thiscall addToShaderString(MaterialShaderManager * this, char * param_1)


/* MaterialShaderManager::addToShaderString(char const*) */

void __thiscall MaterialShaderManager::addToShaderString(MaterialShaderManager *this,char *param_1)

{
  MaterialShaderManager *pMVar1;
  long lVar2;
  void *pvVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  void *pvVar7;
  char *pcVar8;
  uint uVar9;
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  plVar5 = (long *)FileManager::get((FileManager *)FileManager::s_singletonFileManager,param_1,0,
                                    false);
  if (plVar5 != (long *)0x0) {
    uVar6 = (**(code **)(*plVar5 + 0x10))();
    if ((uVar6 & 1) != 0) {
      uVar4 = (**(code **)(*plVar5 + 0x48))(plVar5);
      pvVar7 = operator_new__((long)(int)(uVar4 + 1));
      uVar9 = uVar4;
      (**(code **)(*plVar5 + 0x28))(plVar5,pvVar7);
      pMVar1 = this + 0x18;
      *(undefined *)((long)pvVar7 + (long)(int)uVar4) = 0;
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)pMVar1);
      Preprocessor::formatHashLineDirective((Preprocessor *)param_1,(char *)0x1,uVar9);
      pvVar3 = (void *)((ulong)local_60 | 1);
      if ((local_60[0] & 1) != 0) {
        pvVar3 = local_50;
      }
                    /* try { // try from 009551d4 to 009551db has its CatchHandler @ 00955268 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)pMVar1,(ulong)pvVar3);
      if ((local_60[0] & 1) != 0) {
        operator_delete(local_50);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)pMVar1);
      operator_delete__(pvVar7);
      (**(code **)(*plVar5 + 8))(plVar5);
      if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    (**(code **)(*plVar5 + 8))(plVar5);
  }
  pcVar8 = (char *)LogManager::getInstance();
  LogManager::errorf(pcVar8,"Error: Could not find shader data file \'%s\'.\n",param_1);
                    /* WARNING: Subroutine does not return */
  exit(1);
}


