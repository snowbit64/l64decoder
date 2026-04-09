// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeScriptTriggerCallback
// Entry Point: 00750d18
// Size: 520 bytes
// Signature: undefined __thiscall removeScriptTriggerCallback(EngineManager * this, TransformGroup * param_1, uint param_2)


/* EngineManager::removeScriptTriggerCallback(TransformGroup*, unsigned int) */

void __thiscall
EngineManager::removeScriptTriggerCallback(EngineManager *this,TransformGroup *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  LuauScriptSystem *pLVar4;
  Bt2PhysicsRBObject *this_00;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  long **pplVar11;
  long **pplVar12;
  long **pplVar13;
  undefined2 uVar14;
  undefined8 uVar15;
  void *local_60;
  char local_50;
  ulong uVar16;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  plVar7 = *(long **)(this + 0x50);
  if (plVar7 != (long *)0x0) {
    uVar1 = *(uint *)(param_1 + 0x18);
    plVar6 = (long *)(ulong)uVar1;
    uVar15 = NEON_cnt(plVar7,1);
    uVar14 = NEON_uaddlv(uVar15,1);
    uVar16 = CONCAT62((int6)((ulong)uVar15 >> 0x10),uVar14);
    if ((uVar16 & 0xffffffff) < 2) {
      plVar8 = (long *)(ulong)((int)plVar7 - 1U & uVar1);
    }
    else {
      plVar8 = plVar6;
      if (plVar7 <= plVar6) {
        uVar2 = 0;
        if (plVar7 != (long *)0x0) {
          uVar2 = (ulong)plVar6 / (ulong)plVar7;
        }
        plVar8 = (long *)((long)plVar6 - uVar2 * (long)plVar7);
      }
    }
    puVar9 = *(undefined8 **)(*(long *)(this + 0x48) + (long)plVar8 * 8);
    if ((puVar9 != (undefined8 *)0x0) && (pplVar12 = (long **)*puVar9, pplVar12 != (long **)0x0)) {
      do {
        plVar10 = pplVar12[1];
        if (plVar10 == plVar6) {
          pplVar13 = pplVar12;
          if (*(uint *)(pplVar12 + 2) == uVar1) goto LAB_00750df4;
        }
        else {
          if ((uVar16 & 0xffffffff) < 2) {
            plVar10 = (long *)((ulong)plVar10 & (long)plVar7 - 1U);
          }
          else if (plVar7 <= plVar10) {
            uVar2 = 0;
            if (plVar7 != (long *)0x0) {
              uVar2 = (ulong)plVar10 / (ulong)plVar7;
            }
            plVar10 = (long *)((long)plVar10 - uVar2 * (long)plVar7);
          }
          if (plVar10 != plVar8) break;
        }
        pplVar12 = (long **)*pplVar12;
      } while (pplVar12 != (long **)0x0);
    }
  }
  goto LAB_00750e34;
  while (pplVar12 = (long **)*pplVar12, pplVar12 != pplVar13) {
LAB_00750ea8:
    if ((pplVar11 != pplVar12) && (*(char *)((long)pplVar12 + 0x1c) != '\0')) goto LAB_00750ed8;
  }
  this_00 = (Bt2PhysicsRBObject *)RawTransformGroup::getPhysicsObject();
  *(uint *)(this_00 + 8) = *(uint *)(this_00 + 8) & 0xffffdfff;
  Bt2PhysicsRBObject::raiseDirtyFlags(this_00,0x2000);
LAB_00750ed8:
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<unsigned_int,EngineManager::TriggerScriptCallbackInfo>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,EngineManager::TriggerScriptCallbackInfo>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,EngineManager::TriggerScriptCallbackInfo>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,EngineManager::TriggerScriptCallbackInfo>>>
  ::remove((__hash_const_iterator)(this + 0x48));
  if (local_60 != (void *)0x0) {
    if ((local_50 != '\0') && ((*(byte *)((long)local_60 + 0x20) & 1) != 0)) {
      operator_delete(*(void **)((long)local_60 + 0x30));
    }
    operator_delete(local_60);
  }
  uVar15 = 1;
  goto LAB_00750e38;
  while (*(uint *)(pplVar13 + 2) == uVar1) {
LAB_00750df4:
    pplVar13 = (long **)*pplVar13;
    if (pplVar13 == (long **)0x0) break;
  }
  pplVar11 = pplVar12;
  if (pplVar13 != pplVar12) {
    do {
      if (*(uint *)(pplVar11 + 3) == param_2) {
        if (pplVar11[8] != (long *)0x0) {
          ScriptSystemManager::getInstance();
          pLVar4 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
          LuauScriptSystem::destroyObjectRef(pLVar4,pplVar11[8]);
        }
        if (pplVar11[7] != (long *)0x0) {
          ScriptSystemManager::getInstance();
          pLVar4 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
          LuauScriptSystem::destroyObjectRef(pLVar4,pplVar11[7]);
        }
        if (*(char *)((long)pplVar11 + 0x1c) == '\0') goto LAB_00750ed8;
        goto LAB_00750ea8;
      }
      pplVar11 = (long **)*pplVar11;
      uVar15 = 0;
    } while (pplVar11 != pplVar13);
    goto LAB_00750e38;
  }
LAB_00750e34:
  uVar15 = 0;
LAB_00750e38:
  if (*(long *)(lVar3 + 0x28) != lVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar15);
  }
  return;
}


