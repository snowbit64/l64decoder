// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: releaseVisibilityCondition
// Entry Point: 007a7d10
// Size: 224 bytes
// Signature: undefined __thiscall releaseVisibilityCondition(VisibilityConditionManager * this, VisibilityCondition * param_1)


/* VisibilityConditionManager::releaseVisibilityCondition(VisibilityCondition const*) */

void __thiscall
VisibilityConditionManager::releaseVisibilityCondition
          (VisibilityConditionManager *this,VisibilityCondition *param_1)

{
  int iVar1;
  __tree_iterator _Var2;
  __tree_node_base **pp_Var4;
  __tree_node_base **pp_Var5;
  __tree_node_base *p_Var6;
  __tree_node_base *p_Var3;
  
  if ((param_1 != (VisibilityCondition *)0x0) &&
     (iVar1 = FUN_00f27700(0xffffffff,param_1 + 0x24), iVar1 < 2)) {
    Mutex::enterCriticalSection();
                    /* try { // try from 007a7d4c to 007a7d57 has its CatchHandler @ 007a7df4 */
    _Var2 = std::__ndk1::
            __tree<std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>,std::__ndk1::__map_value_compare<VisibilityConditionDesc,std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>,std::__ndk1::less<VisibilityConditionDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>>>
            ::find<VisibilityConditionDesc>
                      ((__tree<std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>,std::__ndk1::__map_value_compare<VisibilityConditionDesc,std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>,std::__ndk1::less<VisibilityConditionDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>>>
                        *)this,(VisibilityConditionDesc *)param_1);
    p_Var3 = (__tree_node_base *)(ulong)_Var2;
    if (this + 8 != (VisibilityConditionManager *)p_Var3) {
      pp_Var5 = *(__tree_node_base ***)(p_Var3 + 8);
      if (*(__tree_node_base ***)(p_Var3 + 8) == (__tree_node_base **)0x0) {
        pp_Var5 = (__tree_node_base **)(p_Var3 + 0x10);
        pp_Var4 = (__tree_node_base **)*pp_Var5;
        if (*pp_Var4 != p_Var3) {
          do {
            p_Var6 = *pp_Var5;
            pp_Var5 = (__tree_node_base **)(p_Var6 + 0x10);
            pp_Var4 = (__tree_node_base **)*pp_Var5;
          } while (*pp_Var4 != p_Var6);
        }
      }
      else {
        do {
          pp_Var4 = pp_Var5;
          pp_Var5 = (__tree_node_base **)*pp_Var4;
        } while ((__tree_node_base **)*pp_Var4 != (__tree_node_base **)0x0);
      }
      if (*(__tree_node_base **)this == p_Var3) {
        *(__tree_node_base ***)this = pp_Var4;
      }
      *(long *)(this + 0x10) = *(long *)(this + 0x10) + -1;
      std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(this + 8),p_Var3);
      operator_delete(p_Var3);
    }
                    /* try { // try from 007a7dd8 to 007a7ddf has its CatchHandler @ 007a7df0 */
    Mutex::leaveCriticalSection();
  }
  return;
}


