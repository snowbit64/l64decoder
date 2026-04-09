// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unregisterSoftInstances
// Entry Point: 008c68e8
// Size: 228 bytes
// Signature: undefined __thiscall unregisterSoftInstances(InstancedGeometryManager * this, TransformGroup * param_1)


/* InstancedGeometryManager::unregisterSoftInstances(TransformGroup*) */

void __thiscall
InstancedGeometryManager::unregisterSoftInstances
          (InstancedGeometryManager *this,TransformGroup *param_1)

{
  __tree_node_base **pp_Var1;
  __tree_node_base **pp_Var2;
  __tree_node_base **pp_Var3;
  __tree_node_base **pp_Var4;
  __tree_node_base *p_Var5;
  __tree_node_base **pp_Var6;
  
  pp_Var3 = (__tree_node_base **)(this + 0x48);
  pp_Var2 = (__tree_node_base **)*pp_Var3;
  pp_Var4 = pp_Var2;
  pp_Var6 = pp_Var3;
  if (pp_Var2 != (__tree_node_base **)0x0) {
    do {
      if (pp_Var4[4] >= param_1) {
        pp_Var6 = pp_Var4;
      }
      pp_Var1 = pp_Var4 + (pp_Var4[4] < param_1);
      pp_Var4 = (__tree_node_base **)*pp_Var1;
    } while ((__tree_node_base **)*pp_Var1 != (__tree_node_base **)0x0);
    if ((pp_Var6 != pp_Var3) && (pp_Var6[4] <= param_1)) {
      pp_Var4 = (__tree_node_base **)pp_Var6[1];
      *(ulong *)(this + 0x58) =
           CONCAT44((int)((ulong)*(undefined8 *)(this + 0x58) >> 0x20) -
                    (int)((ulong)pp_Var6[5] >> 0x20),
                    (int)*(undefined8 *)(this + 0x58) - (int)pp_Var6[5]);
      if (pp_Var4 == (__tree_node_base **)0x0) {
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
      if (*(__tree_node_base ***)(this + 0x40) == pp_Var6) {
        *(__tree_node_base ***)(this + 0x40) = pp_Var3;
      }
      *(long *)(this + 0x50) = *(long *)(this + 0x50) + -1;
      std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
                ((__tree_node_base *)pp_Var2,(__tree_node_base *)pp_Var6);
      operator_delete(pp_Var6);
      return;
    }
  }
  return;
}


