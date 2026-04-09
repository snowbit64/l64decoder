// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: softReset
// Entry Point: 0074e770
// Size: 932 bytes
// Signature: undefined softReset(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* EngineManager::softReset() */

void EngineManager::softReset(void)

{
  long lVar1;
  void **ppvVar2;
  bool bVar3;
  long in_x0;
  LuauScriptSystem *pLVar4;
  long lVar5;
  long **pplVar6;
  long lVar7;
  long **pplVar8;
  long *plVar9;
  void *pvVar10;
  long **pplVar11;
  long **pplVar12;
  byte local_68;
  void *local_58;
  long *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar9 = *(long **)(in_x0 + 0x58);
  *(undefined *)(in_x0 + 0x2af) = 0;
  *(undefined2 *)(in_x0 + 0x2ad) = 0;
  for (; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
    if (plVar9[7] != 0) {
      ScriptSystemManager::getInstance();
      pLVar4 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
      LuauScriptSystem::destroyObjectRef(pLVar4,(void *)plVar9[7]);
    }
    if (plVar9[8] != 0) {
      ScriptSystemManager::getInstance();
      pLVar4 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
      LuauScriptSystem::destroyObjectRef(pLVar4,(void *)plVar9[8]);
    }
  }
  if (*(long *)(in_x0 + 0x60) != 0) {
    ppvVar2 = (void **)*(void **)(in_x0 + 0x58);
    while (ppvVar2 != (void **)0x0) {
      pvVar10 = *ppvVar2;
      if ((*(byte *)(ppvVar2 + 4) & 1) != 0) {
        operator_delete(ppvVar2[6]);
      }
      operator_delete(ppvVar2);
      ppvVar2 = (void **)pvVar10;
    }
    lVar5 = *(long *)(in_x0 + 0x50);
    *(undefined8 *)(in_x0 + 0x58) = 0;
    if (lVar5 != 0) {
      lVar7 = 0;
      do {
        *(undefined8 *)(*(long *)(in_x0 + 0x48) + lVar7 * 8) = 0;
        lVar7 = lVar7 + 1;
      } while (lVar5 != lVar7);
    }
    *(undefined8 *)(in_x0 + 0x60) = 0;
  }
  pplVar11 = *(long ***)(undefined8 *)(in_x0 + 0x70);
  while (pplVar11 != (long **)(in_x0 + 0x78)) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string *)&local_68);
    local_50 = pplVar11[8];
    if (local_50 != (long *)0x0) {
                    /* try { // try from 0074e88c to 0074e89b has its CatchHandler @ 0074eb1c */
      ScriptSystemManager::getInstance();
      pLVar4 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
      LuauScriptSystem::destroyObjectRef(pLVar4,local_50);
    }
    if ((local_68 & 1) != 0) {
      operator_delete(local_58);
    }
    pplVar12 = (long **)pplVar11[1];
    if ((long **)pplVar11[1] == (long **)0x0) {
      pplVar12 = pplVar11 + 2;
      bVar3 = (long **)**pplVar12 != pplVar11;
      pplVar11 = (long **)*pplVar12;
      if (bVar3) {
        do {
          plVar9 = *pplVar12;
          pplVar12 = (long **)(plVar9 + 2);
          pplVar11 = (long **)*pplVar12;
        } while (*pplVar11 != plVar9);
      }
    }
    else {
      do {
        pplVar11 = pplVar12;
        pplVar12 = (long **)*pplVar11;
      } while (*pplVar11 != (long *)0x0);
    }
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<unsigned_int,EngineManager::ScriptCallbackInfo>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,EngineManager::ScriptCallbackInfo>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,EngineManager::ScriptCallbackInfo>>>
  ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,EngineManager::ScriptCallbackInfo>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,EngineManager::ScriptCallbackInfo>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,EngineManager::ScriptCallbackInfo>>>
             *)(undefined8 *)(in_x0 + 0x70),*(__tree_node **)(in_x0 + 0x78));
  *(undefined8 *)(in_x0 + 0x78) = 0;
  *(long ***)(in_x0 + 0x70) = (long **)(in_x0 + 0x78);
  *(undefined8 *)(in_x0 + 0x80) = 0;
  pplVar11 = *(long ***)(long *)(in_x0 + 0x88);
  while (pplVar11 != (long **)(long *)(in_x0 + 0x90)) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string *)&local_68);
    local_50 = pplVar11[8];
    if (local_50 != (long *)0x0) {
                    /* try { // try from 0074e984 to 0074e993 has its CatchHandler @ 0074eb18 */
      ScriptSystemManager::getInstance();
      pLVar4 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
      LuauScriptSystem::destroyObjectRef(pLVar4,local_50);
    }
    if ((local_68 & 1) != 0) {
      operator_delete(local_58);
    }
    pplVar12 = (long **)pplVar11[1];
    if ((long **)pplVar11[1] == (long **)0x0) {
      pplVar12 = pplVar11 + 2;
      bVar3 = (long **)**pplVar12 != pplVar11;
      pplVar11 = (long **)*pplVar12;
      if (bVar3) {
        do {
          plVar9 = *pplVar12;
          pplVar12 = (long **)(plVar9 + 2);
          pplVar11 = (long **)*pplVar12;
        } while (*pplVar11 != plVar9);
      }
    }
    else {
      do {
        pplVar11 = pplVar12;
        pplVar12 = (long **)*pplVar11;
      } while (*pplVar11 != (long *)0x0);
    }
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<unsigned_int,EngineManager::ScriptCallbackInfo>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,EngineManager::ScriptCallbackInfo>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,EngineManager::ScriptCallbackInfo>>>
  ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,EngineManager::ScriptCallbackInfo>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,EngineManager::ScriptCallbackInfo>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,EngineManager::ScriptCallbackInfo>>>
             *)(long *)(in_x0 + 0x88),*(__tree_node **)(in_x0 + 0x90));
  *(undefined8 *)(in_x0 + 0x90) = 0;
  pplVar12 = *(long ***)(long **)(in_x0 + 0xa0);
  *(long **)(in_x0 + 0x88) = (long *)(in_x0 + 0x90);
  pplVar11 = (long **)(in_x0 + 0xa8);
  *(undefined8 *)(in_x0 + 0x98) = 0;
  if (pplVar12 != pplVar11) {
    do {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string((basic_string *)&local_68);
      local_50 = pplVar12[8];
      if (local_50 != (long *)0x0) {
                    /* try { // try from 0074ea18 to 0074ea27 has its CatchHandler @ 0074eb14 */
        ScriptSystemManager::getInstance();
        pLVar4 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
        LuauScriptSystem::destroyObjectRef(pLVar4,local_50);
      }
      if ((local_68 & 1) != 0) {
        operator_delete(local_58);
      }
      pplVar6 = (long **)pplVar12[1];
      if ((long **)pplVar12[1] == (long **)0x0) {
        pplVar6 = pplVar12 + 2;
        pplVar8 = (long **)*pplVar6;
        if ((long **)*pplVar8 != pplVar12) {
          do {
            plVar9 = *pplVar6;
            pplVar6 = (long **)(plVar9 + 2);
            pplVar8 = (long **)*pplVar6;
          } while (*pplVar8 != plVar9);
        }
      }
      else {
        do {
          pplVar8 = pplVar6;
          pplVar6 = (long **)*pplVar8;
        } while (*pplVar8 != (long *)0x0);
      }
      pplVar12 = pplVar8;
    } while (pplVar8 != pplVar11);
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<unsigned_int,EngineManager::ScriptCallbackInfo>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,EngineManager::ScriptCallbackInfo>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,EngineManager::ScriptCallbackInfo>>>
  ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,EngineManager::ScriptCallbackInfo>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,EngineManager::ScriptCallbackInfo>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,EngineManager::ScriptCallbackInfo>>>
             *)(long **)(in_x0 + 0xa0),*(__tree_node **)(in_x0 + 0xa8));
  *(undefined8 *)(in_x0 + 0xa8) = 0;
  *(undefined8 *)(in_x0 + 0xb0) = 0;
  *(long ***)(in_x0 + 0xa0) = pplVar11;
  if ((*(byte *)(in_x0 + 0x2f8) & 1) == 0) {
    *(undefined2 *)(in_x0 + 0x2f8) = 0;
  }
  else {
    **(undefined **)(in_x0 + 0x308) = 0;
    *(undefined8 *)(in_x0 + 0x300) = 0;
  }
  *(undefined4 *)(in_x0 + 0x310) = 0x1ff;
  if ((*(byte *)(in_x0 + 800) & 1) == 0) {
    *(undefined2 *)(in_x0 + 800) = 0;
  }
  else {
    **(undefined **)(in_x0 + 0x330) = 0;
    *(undefined8 *)(in_x0 + 0x328) = 0;
  }
  *(undefined *)(in_x0 + 0x2f0) = 1;
  **(undefined2 **)(in_x0 + 0xb8) = 0x101;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


