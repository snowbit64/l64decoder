// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeScriptContactCallback
// Entry Point: 00751eb8
// Size: 292 bytes
// Signature: undefined __thiscall removeScriptContactCallback(EngineManager * this, TransformGroup * param_1)


/* EngineManager::removeScriptContactCallback(TransformGroup*) */

void __thiscall
EngineManager::removeScriptContactCallback(EngineManager *this,TransformGroup *param_1)

{
  uint uVar1;
  TransformGroup *pTVar2;
  LuauScriptSystem *this_00;
  __tree_node_base **pp_Var3;
  __tree_node_base **pp_Var4;
  __tree_node_base *p_Var5;
  __tree_node_base **pp_Var6;
  
  pp_Var4 = (__tree_node_base **)(this + 0x90);
  p_Var5 = *pp_Var4;
  if (p_Var5 != (__tree_node_base *)0x0) {
    uVar1 = *(uint *)(param_1 + 0x18);
    pp_Var6 = pp_Var4;
    do {
      if (*(uint *)(p_Var5 + 0x20) >= uVar1) {
        pp_Var6 = (__tree_node_base **)p_Var5;
      }
      p_Var5 = *(__tree_node_base **)(p_Var5 + (ulong)(*(uint *)(p_Var5 + 0x20) < uVar1) * 8);
    } while (p_Var5 != (__tree_node_base *)0x0);
    if ((pp_Var6 != pp_Var4) && (*(uint *)(pp_Var6 + 4) <= uVar1)) {
      ScenegraphPhysicsContextManager::getInstance();
      pTVar2 = (TransformGroup *)ScenegraphPhysicsContextManager::getContext();
      Bt2ScenegraphPhysicsContext::enqueueEnableContactReport(pTVar2,SUB81(param_1,0),0.0);
      if (pp_Var6[8] != (__tree_node_base *)0x0) {
        ScriptSystemManager::getInstance();
        this_00 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
        LuauScriptSystem::destroyObjectRef(this_00,pp_Var6[8]);
      }
      pp_Var4 = (__tree_node_base **)pp_Var6[1];
      if ((__tree_node_base **)pp_Var6[1] == (__tree_node_base **)0x0) {
        pp_Var4 = pp_Var6 + 2;
        pp_Var3 = (__tree_node_base **)*pp_Var4;
        if ((__tree_node_base **)*pp_Var3 != pp_Var6) {
          do {
            p_Var5 = *pp_Var4;
            pp_Var4 = (__tree_node_base **)(p_Var5 + 0x10);
            pp_Var3 = (__tree_node_base **)*pp_Var4;
          } while (*pp_Var3 != p_Var5);
        }
      }
      else {
        do {
          pp_Var3 = pp_Var4;
          pp_Var4 = (__tree_node_base **)*pp_Var3;
        } while ((__tree_node_base **)*pp_Var3 != (__tree_node_base **)0x0);
      }
      if ((__tree_node_base **)*(__tree_node_base **)(this + 0x88) == pp_Var6) {
        *(__tree_node_base ***)(this + 0x88) = pp_Var3;
      }
      *(long *)(this + 0x98) = *(long *)(this + 0x98) + -1;
      std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(this + 0x90),(__tree_node_base *)pp_Var6);
      if (((byte)*(__tree_node_base *)(pp_Var6 + 5) & 1) != 0) {
        operator_delete(pp_Var6[7]);
      }
      operator_delete(pp_Var6);
      return;
    }
  }
  return;
}


