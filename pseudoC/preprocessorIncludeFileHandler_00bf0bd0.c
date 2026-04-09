// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: preprocessorIncludeFileHandler
// Entry Point: 00bf0bd0
// Size: 336 bytes
// Signature: undefined __cdecl preprocessorIncludeFileHandler(basic_string * param_1, bool param_2, char * param_3, char * * param_4)


/* ShaderManager::preprocessorIncludeFileHandler(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&, bool, char const*, char*&) */

void ShaderManager::preprocessorIncludeFileHandler
               (basic_string *param_1,bool param_2,char *param_3,char **param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  char *pcVar6;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  lVar1 = tpidr_el0;
  lVar5 = *(long *)(lVar1 + 0x28);
  pcVar6 = *(char **)(param_1 + 4);
  if ((*(byte *)param_1 & 1) == 0) {
    pcVar6 = (char *)((long)param_1 + 1);
  }
  plVar4 = (long *)FileManager::get((FileManager *)FileManager::s_singletonFileManager,pcVar6,0,
                                    false);
  if (plVar4 == (long *)0x0) {
    std::__ndk1::operator+("shared/shader/",param_1);
    if ((*(byte *)param_1 & 1) != 0) {
      operator_delete(*(void **)(param_1 + 4));
    }
    *(undefined8 *)(param_1 + 2) = uStack_58;
    *(undefined8 *)param_1 = local_60;
    *(undefined8 *)(param_1 + 4) = local_50;
    pcVar6 = (char *)((long)param_1 + 1);
    if ((*(byte *)param_1 & 1) != 0) {
      pcVar6 = *(char **)(param_1 + 4);
    }
    plVar4 = (long *)FileManager::get((FileManager *)FileManager::s_singletonFileManager,pcVar6,0,
                                      false);
    if (plVar4 == (long *)0x0) goto LAB_00bf0cf4;
  }
  uVar2 = (**(code **)(*plVar4 + 0x48))(plVar4);
  pcVar6 = (char *)operator_new__((ulong)(uVar2 + 1));
  *param_4 = pcVar6;
  uVar3 = (**(code **)(*plVar4 + 0x28))(plVar4,pcVar6,uVar2);
  (**(code **)(*plVar4 + 8))(plVar4);
  if (uVar3 == uVar2) {
    plVar4 = (long *)0x1;
    (*param_4)[uVar2] = '\0';
  }
  else {
    plVar4 = (long *)0x0;
  }
LAB_00bf0cf4:
  if (*(long *)(lVar1 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar4);
}


