// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeFunctionNameScriptTriggerCallback
// Entry Point: 00750f20
// Size: 404 bytes
// Signature: undefined __thiscall removeFunctionNameScriptTriggerCallback(EngineManager * this, TransformGroup * param_1)


/* EngineManager::removeFunctionNameScriptTriggerCallback(TransformGroup*) */

void __thiscall
EngineManager::removeFunctionNameScriptTriggerCallback(EngineManager *this,TransformGroup *param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  LuauScriptSystem *this_00;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long **pplVar7;
  ulong uVar8;
  long *plVar9;
  long **pplVar10;
  long *plVar11;
  undefined2 uVar12;
  undefined8 uVar13;
  void *local_50;
  char local_40;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  plVar6 = *(long **)(this + 0x50);
  if (plVar6 != (long *)0x0) {
    uVar1 = *(uint *)(param_1 + 0x18);
    plVar5 = (long *)(ulong)uVar1;
    uVar13 = NEON_cnt(plVar6,1);
    uVar12 = NEON_uaddlv(uVar13,1);
    uVar8 = CONCAT62((int6)((ulong)uVar13 >> 0x10),uVar12) & 0xffffffff;
    if (uVar8 < 2) {
      plVar9 = (long *)(ulong)((int)plVar6 - 1U & uVar1);
    }
    else {
      plVar9 = plVar5;
      if (plVar6 <= plVar5) {
        uVar2 = 0;
        if (plVar6 != (long *)0x0) {
          uVar2 = (ulong)plVar5 / (ulong)plVar6;
        }
        plVar9 = (long *)((long)plVar5 - uVar2 * (long)plVar6);
      }
    }
    pplVar10 = *(long ***)(*(long *)(this + 0x48) + (long)plVar9 * 8);
    if ((pplVar10 != (long **)0x0) && (pplVar10 = (long **)*pplVar10, pplVar10 != (long **)0x0)) {
      do {
        plVar11 = pplVar10[1];
        if (plVar11 == plVar5) {
          pplVar7 = pplVar10;
          if (*(uint *)(pplVar10 + 2) == uVar1) goto LAB_00750ff4;
        }
        else {
          if (uVar8 < 2) {
            plVar11 = (long *)((ulong)plVar11 & (long)plVar6 - 1U);
          }
          else if (plVar6 <= plVar11) {
            uVar2 = 0;
            if (plVar6 != (long *)0x0) {
              uVar2 = (ulong)plVar11 / (ulong)plVar6;
            }
            plVar11 = (long *)((long)plVar11 - uVar2 * (long)plVar6);
          }
          if (plVar11 != plVar9) break;
        }
        pplVar10 = (long **)*pplVar10;
      } while (pplVar10 != (long **)0x0);
    }
  }
  goto LAB_0075102c;
  while (*(uint *)(pplVar7 + 2) == uVar1) {
LAB_00750ff4:
    pplVar7 = (long **)*pplVar7;
    if (pplVar7 == (long **)0x0) break;
  }
  if (pplVar7 != pplVar10) {
    do {
      if (pplVar10[7] == (long *)0x0) {
        if (pplVar10[8] != (long *)0x0) {
          ScriptSystemManager::getInstance();
          this_00 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
          LuauScriptSystem::destroyObjectRef(this_00,pplVar10[8]);
        }
        std::__ndk1::
        __hash_table<std::__ndk1::__hash_value_type<unsigned_int,EngineManager::TriggerScriptCallbackInfo>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,EngineManager::TriggerScriptCallbackInfo>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,EngineManager::TriggerScriptCallbackInfo>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,EngineManager::TriggerScriptCallbackInfo>>>
        ::remove((__hash_const_iterator)(this + 0x48));
        if (local_50 != (void *)0x0) {
          if ((local_40 != '\0') && ((*(byte *)((long)local_50 + 0x20) & 1) != 0)) {
            operator_delete(*(void **)((long)local_50 + 0x30));
          }
          operator_delete(local_50);
        }
        uVar13 = 1;
        break;
      }
      pplVar10 = (long **)*pplVar10;
      uVar13 = 0;
    } while (pplVar10 != pplVar7);
    goto LAB_00751030;
  }
LAB_0075102c:
  uVar13 = 0;
LAB_00751030:
  if (*(long *)(lVar3 + 0x28) != lVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar13);
  }
  return;
}


