// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeCloneReferences
// Entry Point: 00a5c344
// Size: 500 bytes
// Signature: undefined __cdecl removeCloneReferences(TransformGroup * param_1, map * param_2, map * param_3)


/* ScenegraphUtil::removeCloneReferences(TransformGroup*, std::__ndk1::map<TransformGroup*,
   TransformGroup*, std::__ndk1::less<TransformGroup*>,
   std::__ndk1::allocator<std::__ndk1::pair<TransformGroup* const, TransformGroup*> > >&,
   std::__ndk1::map<GsShape*, GsShape*, std::__ndk1::less<GsShape*>,
   std::__ndk1::allocator<std::__ndk1::pair<GsShape* const, GsShape*> > >&) */

void ScenegraphUtil::removeCloneReferences(TransformGroup *param_1,map *param_2,map *param_3)

{
  __tree_node_base **pp_Var1;
  __tree_node_base **pp_Var2;
  TransformGroup *pTVar3;
  __tree_node_base **pp_Var4;
  __tree_node_base **pp_Var5;
  ulong uVar6;
  __tree_node_base *p_Var7;
  __tree_node_base **pp_Var8;
  long lVar9;
  
  if (((byte)param_1[0x11] >> 3 & 1) != 0) {
    pp_Var4 = (__tree_node_base **)(param_3 + 8);
    pp_Var2 = (__tree_node_base **)*pp_Var4;
    pp_Var5 = pp_Var2;
    pp_Var8 = pp_Var4;
    if (pp_Var2 != (__tree_node_base **)0x0) {
      do {
        if ((TransformGroup *)pp_Var5[4] >= param_1) {
          pp_Var8 = pp_Var5;
        }
        pp_Var1 = pp_Var5 + ((TransformGroup *)pp_Var5[4] < param_1);
        pp_Var5 = (__tree_node_base **)*pp_Var1;
      } while ((__tree_node_base **)*pp_Var1 != (__tree_node_base **)0x0);
      if ((pp_Var8 != pp_Var4) && ((TransformGroup *)pp_Var8[4] <= param_1)) {
        pp_Var5 = (__tree_node_base **)pp_Var8[1];
        if ((__tree_node_base **)pp_Var8[1] == (__tree_node_base **)0x0) {
          pp_Var5 = pp_Var8 + 2;
          pp_Var4 = (__tree_node_base **)*pp_Var5;
          if ((__tree_node_base **)*pp_Var4 != pp_Var8) {
            do {
              p_Var7 = *pp_Var5;
              pp_Var5 = (__tree_node_base **)(p_Var7 + 0x10);
              pp_Var4 = (__tree_node_base **)*pp_Var5;
            } while (*pp_Var4 != p_Var7);
          }
        }
        else {
          do {
            pp_Var4 = pp_Var5;
            pp_Var5 = (__tree_node_base **)*pp_Var4;
          } while ((__tree_node_base **)*pp_Var4 != (__tree_node_base **)0x0);
        }
        if (*(__tree_node_base ***)param_3 == pp_Var8) {
          *(__tree_node_base ***)param_3 = pp_Var4;
        }
        *(long *)(param_3 + 0x10) = *(long *)(param_3 + 0x10) + -1;
        std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
                  ((__tree_node_base *)pp_Var2,(__tree_node_base *)pp_Var8);
        operator_delete(pp_Var8);
      }
    }
  }
  pp_Var4 = (__tree_node_base **)(param_2 + 8);
  pp_Var2 = (__tree_node_base **)*pp_Var4;
  pp_Var5 = pp_Var2;
  pp_Var8 = pp_Var4;
  if (pp_Var2 != (__tree_node_base **)0x0) {
    do {
      if ((TransformGroup *)pp_Var5[4] >= param_1) {
        pp_Var8 = pp_Var5;
      }
      pp_Var1 = pp_Var5 + ((TransformGroup *)pp_Var5[4] < param_1);
      pp_Var5 = (__tree_node_base **)*pp_Var1;
    } while ((__tree_node_base **)*pp_Var1 != (__tree_node_base **)0x0);
    if ((pp_Var8 != pp_Var4) && ((TransformGroup *)pp_Var8[4] <= param_1)) {
      pp_Var5 = (__tree_node_base **)pp_Var8[1];
      if ((__tree_node_base **)pp_Var8[1] == (__tree_node_base **)0x0) {
        pp_Var5 = pp_Var8 + 2;
        pp_Var4 = (__tree_node_base **)*pp_Var5;
        if ((__tree_node_base **)*pp_Var4 != pp_Var8) {
          do {
            p_Var7 = *pp_Var5;
            pp_Var5 = (__tree_node_base **)(p_Var7 + 0x10);
            pp_Var4 = (__tree_node_base **)*pp_Var5;
          } while (*pp_Var4 != p_Var7);
        }
      }
      else {
        do {
          pp_Var4 = pp_Var5;
          pp_Var5 = (__tree_node_base **)*pp_Var4;
        } while ((__tree_node_base **)*pp_Var4 != (__tree_node_base **)0x0);
      }
      if (*(__tree_node_base ***)param_2 == pp_Var8) {
        *(__tree_node_base ***)param_2 = pp_Var4;
      }
      *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
      std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
                ((__tree_node_base *)pp_Var2,(__tree_node_base *)pp_Var8);
      operator_delete(pp_Var8);
    }
  }
  uVar6 = *(long *)(param_1 + 0x30) - (long)*(TransformGroup ***)(param_1 + 0x28);
  if ((int)(uVar6 >> 3) != 0) {
    lVar9 = 0;
    pTVar3 = **(TransformGroup ***)(param_1 + 0x28);
    while( true ) {
      if ((pTVar3 != (TransformGroup *)0x0) && (((byte)pTVar3[0x10] >> 5 & 1) != 0)) {
        removeCloneReferences(pTVar3,param_2,param_3);
      }
      if ((uVar6 >> 3 & 0xffffffff) * 8 + -8 == lVar9) break;
      lVar9 = lVar9 + 8;
      pTVar3 = *(TransformGroup **)(*(long *)(param_1 + 0x28) + lVar9);
    }
  }
  return;
}


