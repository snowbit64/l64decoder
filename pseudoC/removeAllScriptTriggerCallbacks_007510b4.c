// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeAllScriptTriggerCallbacks
// Entry Point: 007510b4
// Size: 452 bytes
// Signature: undefined __thiscall removeAllScriptTriggerCallbacks(EngineManager * this, TransformGroup * param_1)


/* EngineManager::removeAllScriptTriggerCallbacks(TransformGroup*) */

bool __thiscall
EngineManager::removeAllScriptTriggerCallbacks(EngineManager *this,TransformGroup *param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  void *pvVar4;
  bool bVar5;
  LuauScriptSystem *pLVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long **pplVar12;
  long **pplVar13;
  long **pplVar14;
  undefined2 uVar15;
  undefined8 uVar16;
  void *local_60;
  char local_50;
  ulong uVar17;
  
  lVar3 = tpidr_el0;
  lVar7 = *(long *)(lVar3 + 0x28);
  plVar9 = *(long **)(this + 0x50);
  if (plVar9 != (long *)0x0) {
    uVar1 = *(uint *)(param_1 + 0x18);
    plVar8 = (long *)(ulong)uVar1;
    uVar16 = NEON_cnt(plVar9,1);
    uVar15 = NEON_uaddlv(uVar16,1);
    uVar17 = CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15);
    if ((uVar17 & 0xffffffff) < 2) {
      plVar10 = (long *)(ulong)((int)plVar9 - 1U & uVar1);
    }
    else {
      plVar10 = plVar8;
      if (plVar9 <= plVar8) {
        uVar2 = 0;
        if (plVar9 != (long *)0x0) {
          uVar2 = (ulong)plVar8 / (ulong)plVar9;
        }
        plVar10 = (long *)((long)plVar8 - uVar2 * (long)plVar9);
      }
    }
    plVar11 = *(long **)(*(long *)(this + 0x48) + (long)plVar10 * 8);
    if ((plVar11 != (long *)0x0) && (pplVar12 = (long **)*plVar11, pplVar12 != (long **)0x0)) {
      do {
        plVar11 = pplVar12[1];
        if (plVar11 == plVar8) {
          pplVar13 = pplVar12;
          if (*(uint *)(pplVar12 + 2) == uVar1) goto LAB_0075118c;
        }
        else {
          if ((uVar17 & 0xffffffff) < 2) {
            plVar11 = (long *)((ulong)plVar11 & (long)plVar9 - 1U);
          }
          else if (plVar9 <= plVar11) {
            uVar2 = 0;
            if (plVar9 != (long *)0x0) {
              uVar2 = (ulong)plVar11 / (ulong)plVar9;
            }
            plVar11 = (long *)((long)plVar11 - uVar2 * (long)plVar9);
          }
          if (plVar11 != plVar10) break;
        }
        pplVar12 = (long **)*pplVar12;
      } while (pplVar12 != (long **)0x0);
    }
  }
  goto LAB_007511f4;
  while (*(uint *)(pplVar13 + 2) == uVar1) {
LAB_0075118c:
    pplVar13 = (long **)*pplVar13;
    if (pplVar13 == (long **)0x0) break;
  }
  bVar5 = pplVar13 != pplVar12;
  pplVar14 = pplVar12;
  if (bVar5) {
    do {
      if (pplVar14[8] != (long *)0x0) {
        ScriptSystemManager::getInstance();
        pLVar6 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
        LuauScriptSystem::destroyObjectRef(pLVar6,pplVar14[8]);
      }
      if (pplVar14[7] != (long *)0x0) {
        ScriptSystemManager::getInstance();
        pLVar6 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
        LuauScriptSystem::destroyObjectRef(pLVar6,pplVar14[7]);
      }
      pplVar14 = (long **)*pplVar14;
    } while (pplVar14 != pplVar13);
    do {
      pvVar4 = local_60;
      pplVar12 = (long **)*pplVar12;
      std::__ndk1::
      __hash_table<std::__ndk1::__hash_value_type<unsigned_int,EngineManager::TriggerScriptCallbackInfo>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,EngineManager::TriggerScriptCallbackInfo>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,EngineManager::TriggerScriptCallbackInfo>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,EngineManager::TriggerScriptCallbackInfo>>>
      ::remove((__hash_const_iterator)(this + 0x48));
      local_60 = (void *)0x0;
      if (pvVar4 != (void *)0x0) {
        if ((local_50 != '\0') && ((*(byte *)((long)pvVar4 + 0x20) & 1) != 0)) {
          operator_delete(*(void **)((long)pvVar4 + 0x30));
        }
        operator_delete(pvVar4);
      }
    } while (pplVar12 != pplVar13);
    goto LAB_007511f8;
  }
LAB_007511f4:
  bVar5 = false;
LAB_007511f8:
  if (*(long *)(lVar3 + 0x28) != lVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar5;
}


