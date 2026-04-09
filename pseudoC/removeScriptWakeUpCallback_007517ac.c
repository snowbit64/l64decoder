// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeScriptWakeUpCallback
// Entry Point: 007517ac
// Size: 288 bytes
// Signature: undefined __thiscall removeScriptWakeUpCallback(EngineManager * this, TransformGroup * param_1)


/* EngineManager::removeScriptWakeUpCallback(TransformGroup*) */

void __thiscall
EngineManager::removeScriptWakeUpCallback(EngineManager *this,TransformGroup *param_1)

{
  uint uVar1;
  Bt2ScenegraphPhysicsContext *this_00;
  LuauScriptSystem *this_01;
  __tree_node_base **pp_Var2;
  __tree_node_base **pp_Var3;
  __tree_node_base *p_Var4;
  __tree_node_base **pp_Var5;
  
  pp_Var3 = (__tree_node_base **)(this + 0x78);
  p_Var4 = *pp_Var3;
  if (p_Var4 != (__tree_node_base *)0x0) {
    uVar1 = *(uint *)(param_1 + 0x18);
    pp_Var5 = pp_Var3;
    do {
      if (*(uint *)(p_Var4 + 0x20) >= uVar1) {
        pp_Var5 = (__tree_node_base **)p_Var4;
      }
      p_Var4 = *(__tree_node_base **)(p_Var4 + (ulong)(*(uint *)(p_Var4 + 0x20) < uVar1) * 8);
    } while (p_Var4 != (__tree_node_base *)0x0);
    if ((pp_Var5 != pp_Var3) && (*(uint *)(pp_Var5 + 4) <= uVar1)) {
      ScenegraphPhysicsContextManager::getInstance();
      this_00 = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
      Bt2ScenegraphPhysicsContext::enqueueEnableWakeUpReport(this_00,param_1,false);
      if (pp_Var5[8] != (__tree_node_base *)0x0) {
        ScriptSystemManager::getInstance();
        this_01 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
        LuauScriptSystem::destroyObjectRef(this_01,pp_Var5[8]);
      }
      pp_Var3 = (__tree_node_base **)pp_Var5[1];
      if ((__tree_node_base **)pp_Var5[1] == (__tree_node_base **)0x0) {
        pp_Var3 = pp_Var5 + 2;
        pp_Var2 = (__tree_node_base **)*pp_Var3;
        if ((__tree_node_base **)*pp_Var2 != pp_Var5) {
          do {
            p_Var4 = *pp_Var3;
            pp_Var3 = (__tree_node_base **)(p_Var4 + 0x10);
            pp_Var2 = (__tree_node_base **)*pp_Var3;
          } while (*pp_Var2 != p_Var4);
        }
      }
      else {
        do {
          pp_Var2 = pp_Var3;
          pp_Var3 = (__tree_node_base **)*pp_Var2;
        } while ((__tree_node_base **)*pp_Var2 != (__tree_node_base **)0x0);
      }
      if ((__tree_node_base **)*(__tree_node_base **)(this + 0x70) == pp_Var5) {
        *(__tree_node_base ***)(this + 0x70) = pp_Var2;
      }
      *(long *)(this + 0x80) = *(long *)(this + 0x80) + -1;
      std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(this + 0x78),(__tree_node_base *)pp_Var5);
      if (((byte)*(__tree_node_base *)(pp_Var5 + 5) & 1) != 0) {
        operator_delete(pp_Var5[7]);
      }
      operator_delete(pp_Var5);
      return;
    }
  }
  return;
}


