// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: releaseCustomShaderHash
// Entry Point: 0094c5c8
// Size: 268 bytes
// Signature: undefined __thiscall releaseCustomShaderHash(MaterialShaderManager * this, uint param_1)


/* MaterialShaderManager::releaseCustomShaderHash(unsigned int) */

void __thiscall
MaterialShaderManager::releaseCustomShaderHash(MaterialShaderManager *this,uint param_1)

{
  int iVar1;
  __tree_node_base **pp_Var2;
  __tree_node_base **pp_Var3;
  __tree_node_base *p_Var4;
  __tree_node_base **pp_Var5;
  CustomShaderInfo *this_00;
  
  Mutex::enterCriticalSection();
  pp_Var2 = (__tree_node_base **)(this + 0xe0);
  p_Var4 = *pp_Var2;
  pp_Var5 = pp_Var2;
  if (p_Var4 != (__tree_node_base *)0x0) {
    do {
      if (*(uint *)(p_Var4 + 0x20) >= param_1) {
        pp_Var5 = (__tree_node_base **)p_Var4;
      }
      p_Var4 = *(__tree_node_base **)(p_Var4 + (ulong)(*(uint *)(p_Var4 + 0x20) < param_1) * 8);
    } while (p_Var4 != (__tree_node_base *)0x0);
    if ((pp_Var5 != pp_Var2) && (*(uint *)(pp_Var5 + 4) <= param_1)) {
      this_00 = (CustomShaderInfo *)pp_Var5[5];
      iVar1 = *(int *)(this_00 + 0x98) + -1;
      if (*(int *)(this_00 + 0x98) == 0 || iVar1 == 0) {
        CustomShaderInfo::~CustomShaderInfo(this_00);
        operator_delete(this_00);
        pp_Var2 = (__tree_node_base **)pp_Var5[1];
        if ((__tree_node_base **)pp_Var5[1] == (__tree_node_base **)0x0) {
          pp_Var2 = pp_Var5 + 2;
          pp_Var3 = (__tree_node_base **)*pp_Var2;
          if ((__tree_node_base **)*pp_Var3 != pp_Var5) {
            do {
              p_Var4 = *pp_Var2;
              pp_Var2 = (__tree_node_base **)(p_Var4 + 0x10);
              pp_Var3 = (__tree_node_base **)*pp_Var2;
            } while (*pp_Var3 != p_Var4);
          }
        }
        else {
          do {
            pp_Var3 = pp_Var2;
            pp_Var2 = (__tree_node_base **)*pp_Var3;
          } while ((__tree_node_base **)*pp_Var3 != (__tree_node_base **)0x0);
        }
        if ((__tree_node_base **)*(__tree_node_base **)(this + 0xd8) == pp_Var5) {
          *(__tree_node_base ***)(this + 0xd8) = pp_Var3;
        }
        *(long *)(this + 0xe8) = *(long *)(this + 0xe8) + -1;
        std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
                  (*(__tree_node_base **)(this + 0xe0),(__tree_node_base *)pp_Var5);
        operator_delete(pp_Var5);
      }
      else {
        *(int *)(this_00 + 0x98) = iVar1;
      }
    }
  }
  Mutex::leaveCriticalSection();
  return;
}


