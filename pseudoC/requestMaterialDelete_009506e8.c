// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: requestMaterialDelete
// Entry Point: 009506e8
// Size: 412 bytes
// Signature: undefined __thiscall requestMaterialDelete(MaterialManager * this, GsMaterial * param_1)


/* MaterialManager::requestMaterialDelete(GsMaterial const*) */

void __thiscall MaterialManager::requestMaterialDelete(MaterialManager *this,GsMaterial *param_1)

{
  __tree_node_base **pp_Var1;
  long **pplVar2;
  __tree_node_base **pp_Var3;
  __tree_node_base *p_Var4;
  long **pplVar5;
  long *plVar6;
  __tree_node_base **pp_Var7;
  
  Mutex::enterCriticalSection();
  if (*(int *)(param_1 + 0x28) < 1) {
    pp_Var1 = (__tree_node_base **)(this + 0x28);
    p_Var4 = *pp_Var1;
    pp_Var7 = pp_Var1;
    if (p_Var4 != (__tree_node_base *)0x0) {
      do {
        if (*(GsMaterial **)(p_Var4 + 0x20) >= param_1) {
          pp_Var7 = (__tree_node_base **)p_Var4;
        }
        p_Var4 = *(__tree_node_base **)
                  (p_Var4 + (ulong)(*(GsMaterial **)(p_Var4 + 0x20) < param_1) * 8);
      } while (p_Var4 != (__tree_node_base *)0x0);
      if ((pp_Var7 != pp_Var1) && ((GsMaterial *)pp_Var7[4] <= param_1)) {
        p_Var4 = pp_Var7[5];
        if (p_Var4 != (__tree_node_base *)(this + 0x10)) {
          pplVar5 = *(long ***)(p_Var4 + 8);
          if (*(long ***)(p_Var4 + 8) == (long **)0x0) {
            pplVar5 = (long **)(p_Var4 + 0x10);
            pplVar2 = (long **)*pplVar5;
            if ((__tree_node_base *)*pplVar2 != p_Var4) {
              do {
                plVar6 = *pplVar5;
                pplVar5 = (long **)(plVar6 + 2);
                pplVar2 = (long **)*pplVar5;
              } while (*pplVar2 != plVar6);
            }
          }
          else {
            do {
              pplVar2 = pplVar5;
              pplVar5 = (long **)*pplVar2;
            } while (*pplVar2 != (long *)0x0);
          }
          if (*(__tree_node_base **)(this + 8) == p_Var4) {
            *(long ***)(this + 8) = pplVar2;
          }
          *(long *)(this + 0x18) = *(long *)(this + 0x18) + -1;
          std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
                    (*(__tree_node_base **)(this + 0x10),p_Var4);
          operator_delete(p_Var4);
        }
        pp_Var1 = (__tree_node_base **)pp_Var7[1];
        if ((__tree_node_base **)pp_Var7[1] == (__tree_node_base **)0x0) {
          pp_Var1 = pp_Var7 + 2;
          pp_Var3 = (__tree_node_base **)*pp_Var1;
          if ((__tree_node_base **)*pp_Var3 != pp_Var7) {
            do {
              p_Var4 = *pp_Var1;
              pp_Var1 = (__tree_node_base **)(p_Var4 + 0x10);
              pp_Var3 = (__tree_node_base **)*pp_Var1;
            } while (*pp_Var3 != p_Var4);
          }
        }
        else {
          do {
            pp_Var3 = pp_Var1;
            pp_Var1 = (__tree_node_base **)*pp_Var3;
          } while ((__tree_node_base **)*pp_Var3 != (__tree_node_base **)0x0);
        }
        if ((__tree_node_base **)*(__tree_node_base **)(this + 0x20) == pp_Var7) {
          *(__tree_node_base ***)(this + 0x20) = pp_Var3;
        }
        *(long *)(this + 0x30) = *(long *)(this + 0x30) + -1;
        std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
                  (*(__tree_node_base **)(this + 0x28),(__tree_node_base *)pp_Var7);
        operator_delete(pp_Var7);
      }
    }
    if (*(GsMaterial **)this == param_1) {
      *(undefined8 *)this = 0;
    }
    if (param_1 != (GsMaterial *)0x0) {
      (**(code **)(*(long *)param_1 + 8))(param_1);
    }
  }
  Mutex::leaveCriticalSection();
  return;
}


