// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: requestResourceDelete
// Entry Point: 00b2c4c0
// Size: 496 bytes
// Signature: undefined __thiscall requestResourceDelete(ResourceManager * this, Resource * param_1)


/* ResourceManager::requestResourceDelete(Resource const*) */

void __thiscall ResourceManager::requestResourceDelete(ResourceManager *this,Resource *param_1)

{
  void *pvVar1;
  __tree_node_base **pp_Var2;
  long **pplVar3;
  long *plVar4;
  __tree_node_base **pp_Var5;
  __tree_node_base *p_Var6;
  ulong uVar7;
  long **pplVar8;
  __tree_node_base **pp_Var9;
  long *plVar10;
  ulong uVar11;
  
  Mutex::enterCriticalSection();
  if (*(int *)(param_1 + 8) < 1) {
    pp_Var2 = (__tree_node_base **)(this + 0x20);
    p_Var6 = *pp_Var2;
    pp_Var9 = pp_Var2;
    if (p_Var6 != (__tree_node_base *)0x0) {
      do {
        if (*(Resource **)(p_Var6 + 0x20) >= param_1) {
          pp_Var9 = (__tree_node_base **)p_Var6;
        }
        p_Var6 = *(__tree_node_base **)
                  (p_Var6 + (ulong)(*(Resource **)(p_Var6 + 0x20) < param_1) * 8);
      } while (p_Var6 != (__tree_node_base *)0x0);
      if ((pp_Var9 != pp_Var2) && ((Resource *)pp_Var9[4] <= param_1)) {
        plVar4 = (long *)pp_Var9[5];
        uVar7 = (long)pp_Var9[6] - (long)plVar4;
        if ((int)(uVar7 >> 3) != 0) {
          uVar11 = 0;
          plVar10 = *(long **)(*plVar4 + 0x40);
          while( true ) {
            p_Var6 = (__tree_node_base *)plVar4[uVar11];
            pplVar8 = *(long ***)(p_Var6 + 8);
            if (*(long ***)(p_Var6 + 8) == (long **)0x0) {
              pplVar8 = (long **)(p_Var6 + 0x10);
              pplVar3 = (long **)*pplVar8;
              if ((__tree_node_base *)*pplVar3 != p_Var6) {
                do {
                  plVar4 = *pplVar8;
                  pplVar8 = (long **)(plVar4 + 2);
                  pplVar3 = (long **)*pplVar8;
                } while (*pplVar3 != plVar4);
              }
            }
            else {
              do {
                pplVar3 = pplVar8;
                pplVar8 = (long **)*pplVar3;
              } while (*pplVar3 != (long *)0x0);
            }
            if (*(__tree_node_base **)this == p_Var6) {
              *(long ***)this = pplVar3;
            }
            *(long *)(this + 0x10) = *(long *)(this + 0x10) + -1;
            std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
                      (*(__tree_node_base **)(this + 8),p_Var6);
            if (((byte)p_Var6[0x20] & 1) != 0) {
              operator_delete(*(void **)(p_Var6 + 0x30));
            }
            operator_delete(p_Var6);
            uVar11 = uVar11 + 1;
            if (uVar11 == (uVar7 >> 3 & 0xffffffff)) break;
            plVar4 = (long *)pp_Var9[5];
          }
          if (plVar10 != (long *)0x0) {
            (**(code **)(*plVar10 + 8))(plVar10);
          }
        }
        pp_Var2 = (__tree_node_base **)pp_Var9[1];
        if ((__tree_node_base **)pp_Var9[1] == (__tree_node_base **)0x0) {
          pp_Var2 = pp_Var9 + 2;
          pp_Var5 = (__tree_node_base **)*pp_Var2;
          if ((__tree_node_base **)*pp_Var5 != pp_Var9) {
            do {
              p_Var6 = *pp_Var2;
              pp_Var2 = (__tree_node_base **)(p_Var6 + 0x10);
              pp_Var5 = (__tree_node_base **)*pp_Var2;
            } while (*pp_Var5 != p_Var6);
          }
        }
        else {
          do {
            pp_Var5 = pp_Var2;
            pp_Var2 = (__tree_node_base **)*pp_Var5;
          } while ((__tree_node_base **)*pp_Var5 != (__tree_node_base **)0x0);
        }
        if ((__tree_node_base **)*(__tree_node_base **)(this + 0x18) == pp_Var9) {
          *(__tree_node_base ***)(this + 0x18) = pp_Var5;
        }
        *(long *)(this + 0x28) = *(long *)(this + 0x28) + -1;
        std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
                  (*(__tree_node_base **)(this + 0x20),(__tree_node_base *)pp_Var9);
        pvVar1 = pp_Var9[5];
        if (pvVar1 != (void *)0x0) {
          pp_Var9[6] = (__tree_node_base *)pvVar1;
          operator_delete(pvVar1);
        }
        operator_delete(pp_Var9);
      }
      if (param_1 == (Resource *)0x0) goto LAB_00b2c694;
    }
    (**(code **)(*(long *)param_1 + 8))(param_1);
  }
LAB_00b2c694:
  Mutex::leaveCriticalSection();
  return;
}


