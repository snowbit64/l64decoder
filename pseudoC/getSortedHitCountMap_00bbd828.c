// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSortedHitCountMap
// Entry Point: 00bbd828
// Size: 312 bytes
// Signature: undefined __thiscall getSortedHitCountMap(LuaScriptProfiler * this, vector * param_1)


/* LuaScriptProfiler::getSortedHitCountMap(std::__ndk1::vector<std::__ndk1::pair<unsigned int,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<unsigned int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > >&) const */

int __thiscall LuaScriptProfiler::getSortedHitCountMap(LuaScriptProfiler *this,vector *param_1)

{
  pair *ppVar1;
  long lVar2;
  LuaScriptProfiler **ppLVar3;
  LuaScriptProfiler **ppLVar4;
  LuaScriptProfiler *pLVar5;
  int iVar6;
  LuaScriptProfiler **ppLVar7;
  pair local_68 [2];
  byte local_60;
  undefined7 uStack_5f;
  undefined8 uStack_58;
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (*(LuaScriptProfiler ***)(this + 8) == (LuaScriptProfiler **)(this + 0x10)) {
    iVar6 = 0;
  }
  else {
    iVar6 = 0;
    ppLVar7 = *(LuaScriptProfiler ***)(this + 8);
    do {
      local_68[0] = *(pair *)(ppLVar7 + 7);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string((basic_string *)&local_60);
      ppVar1 = *(pair **)(param_1 + 8);
      if (ppVar1 < *(pair **)(param_1 + 0x10)) {
        *ppVar1 = local_68[0];
        *(void **)(ppVar1 + 6) = local_50;
        *(undefined8 *)(ppVar1 + 4) = uStack_58;
        *(ulong *)(ppVar1 + 2) = CONCAT71(uStack_5f,local_60);
        *(pair **)(param_1 + 8) = ppVar1 + 8;
      }
      else {
                    /* try { // try from 00bbd8c4 to 00bbd8cf has its CatchHandler @ 00bbd960 */
        std::__ndk1::
        vector<std::__ndk1::pair<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
        ::
        __push_back_slow_path<std::__ndk1::pair<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                  ((vector<std::__ndk1::pair<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                    *)param_1,local_68);
        if ((local_60 & 1) != 0) {
          operator_delete(local_50);
        }
      }
      ppLVar3 = (LuaScriptProfiler **)ppLVar7[1];
      if ((LuaScriptProfiler **)ppLVar7[1] == (LuaScriptProfiler **)0x0) {
        ppLVar3 = ppLVar7 + 2;
        ppLVar4 = (LuaScriptProfiler **)*ppLVar3;
        if ((LuaScriptProfiler **)*ppLVar4 != ppLVar7) {
          do {
            pLVar5 = *ppLVar3;
            ppLVar3 = (LuaScriptProfiler **)(pLVar5 + 0x10);
            ppLVar4 = (LuaScriptProfiler **)*ppLVar3;
          } while (*ppLVar4 != pLVar5);
        }
      }
      else {
        do {
          ppLVar4 = ppLVar3;
          ppLVar3 = (LuaScriptProfiler **)*ppLVar4;
        } while ((LuaScriptProfiler **)*ppLVar4 != (LuaScriptProfiler **)0x0);
      }
      iVar6 = *(int *)(ppLVar7 + 7) + iVar6;
      ppLVar7 = ppLVar4;
    } while (ppLVar4 != (LuaScriptProfiler **)(this + 0x10));
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar6;
}


