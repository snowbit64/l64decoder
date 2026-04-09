// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeScriptJointBreakCallback
// Entry Point: 0075244c
// Size: 248 bytes
// Signature: undefined __thiscall removeScriptJointBreakCallback(EngineManager * this, uint param_1)


/* EngineManager::removeScriptJointBreakCallback(unsigned int) */

void __thiscall EngineManager::removeScriptJointBreakCallback(EngineManager *this,uint param_1)

{
  LuauScriptSystem *this_00;
  __tree_node_base **pp_Var1;
  __tree_node_base **pp_Var2;
  __tree_node_base *p_Var3;
  __tree_node_base **pp_Var4;
  
  pp_Var1 = (__tree_node_base **)(this + 0xa8);
  p_Var3 = *pp_Var1;
  pp_Var4 = pp_Var1;
  if (p_Var3 != (__tree_node_base *)0x0) {
    do {
      if (*(uint *)(p_Var3 + 0x20) >= param_1) {
        pp_Var4 = (__tree_node_base **)p_Var3;
      }
      p_Var3 = *(__tree_node_base **)(p_Var3 + (ulong)(*(uint *)(p_Var3 + 0x20) < param_1) * 8);
    } while (p_Var3 != (__tree_node_base *)0x0);
    if ((pp_Var4 != pp_Var1) && (*(uint *)(pp_Var4 + 4) <= param_1)) {
      if (pp_Var4[8] != (__tree_node_base *)0x0) {
        ScriptSystemManager::getInstance();
        this_00 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
        LuauScriptSystem::destroyObjectRef(this_00,pp_Var4[8]);
      }
      pp_Var1 = (__tree_node_base **)pp_Var4[1];
      if ((__tree_node_base **)pp_Var4[1] == (__tree_node_base **)0x0) {
        pp_Var1 = pp_Var4 + 2;
        pp_Var2 = (__tree_node_base **)*pp_Var1;
        if ((__tree_node_base **)*pp_Var2 != pp_Var4) {
          do {
            p_Var3 = *pp_Var1;
            pp_Var1 = (__tree_node_base **)(p_Var3 + 0x10);
            pp_Var2 = (__tree_node_base **)*pp_Var1;
          } while (*pp_Var2 != p_Var3);
        }
      }
      else {
        do {
          pp_Var2 = pp_Var1;
          pp_Var1 = (__tree_node_base **)*pp_Var2;
        } while ((__tree_node_base **)*pp_Var2 != (__tree_node_base **)0x0);
      }
      if ((__tree_node_base **)*(__tree_node_base **)(this + 0xa0) == pp_Var4) {
        *(__tree_node_base ***)(this + 0xa0) = pp_Var2;
      }
      *(long *)(this + 0xb0) = *(long *)(this + 0xb0) + -1;
      std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(this + 0xa8),(__tree_node_base *)pp_Var4);
      if (((byte)*(__tree_node_base *)(pp_Var4 + 5) & 1) != 0) {
        operator_delete(pp_Var4[7]);
      }
      operator_delete(pp_Var4);
      return;
    }
  }
  return;
}


