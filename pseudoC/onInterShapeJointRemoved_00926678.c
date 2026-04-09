// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onInterShapeJointRemoved
// Entry Point: 00926678
// Size: 400 bytes
// Signature: undefined __thiscall onInterShapeJointRemoved(DestructionShape * this, uint param_1, bool param_2, bool param_3)


/* DestructionShape::onInterShapeJointRemoved(unsigned int, bool, bool) */

void __thiscall
DestructionShape::onInterShapeJointRemoved
          (DestructionShape *this,uint param_1,bool param_2,bool param_3)

{
  void *__dest;
  size_t __n;
  __tree_node_base *p_Var1;
  long lVar2;
  __tree_node_base **pp_Var3;
  long lVar4;
  __tree_node_base **pp_Var5;
  ulong uVar6;
  __tree_node_base *p_Var7;
  long lVar8;
  long *plVar9;
  
  p_Var1 = *(__tree_node_base **)(this + 0x268);
  if (p_Var1 != (__tree_node_base *)0x0) {
    p_Var7 = (__tree_node_base *)(this + 0x268);
    do {
      if (*(uint *)(p_Var1 + 0x20) >= param_1) {
        p_Var7 = p_Var1;
      }
      p_Var1 = *(__tree_node_base **)(p_Var1 + (ulong)(*(uint *)(p_Var1 + 0x20) < param_1) * 8);
    } while (p_Var1 != (__tree_node_base *)0x0);
    if ((p_Var7 != (__tree_node_base *)(this + 0x268)) && (*(uint *)(p_Var7 + 0x20) <= param_1)) {
      lVar8 = *(long *)(this + 0x228) + (ulong)*(uint *)(p_Var7 + 0x28) * 0x30;
      plVar9 = (long *)(lVar8 + 0x10);
      lVar2 = *plVar9;
      lVar4 = *(long *)(lVar8 + 8);
      lVar8 = lVar2 - lVar4;
      if (lVar8 != 0) {
        uVar6 = 0;
        do {
          if (*(uint *)(lVar4 + uVar6 * 4) == param_1) {
            __dest = (void *)(lVar4 + uVar6 * 4);
            __n = lVar2 - (long)(void *)((long)__dest + 4);
            if (__n != 0) {
              memmove(__dest,(void *)((long)__dest + 4),__n);
            }
            *plVar9 = (long)__dest + __n;
            if (!param_2) goto LAB_00926738;
            goto LAB_00926724;
          }
          uVar6 = (ulong)((int)uVar6 + 1);
        } while (uVar6 < (ulong)(lVar8 >> 2));
      }
      if (param_2) {
LAB_00926724:
        onInterShapeJointRemoved(*(DestructionShape **)(p_Var7 + 0x30),param_1,false,true);
      }
LAB_00926738:
      if (param_3) {
        pp_Var5 = *(__tree_node_base ***)(p_Var7 + 8);
        if (*(__tree_node_base ***)(p_Var7 + 8) == (__tree_node_base **)0x0) {
          pp_Var5 = (__tree_node_base **)(p_Var7 + 0x10);
          pp_Var3 = (__tree_node_base **)*pp_Var5;
          if (*pp_Var3 != p_Var7) {
            do {
              p_Var1 = *pp_Var5;
              pp_Var5 = (__tree_node_base **)(p_Var1 + 0x10);
              pp_Var3 = (__tree_node_base **)*pp_Var5;
            } while (*pp_Var3 != p_Var1);
          }
        }
        else {
          do {
            pp_Var3 = pp_Var5;
            pp_Var5 = (__tree_node_base **)*pp_Var3;
          } while ((__tree_node_base **)*pp_Var3 != (__tree_node_base **)0x0);
        }
        if (*(__tree_node_base **)(this + 0x260) == p_Var7) {
          *(__tree_node_base ***)(this + 0x260) = pp_Var3;
        }
        *(long *)(this + 0x270) = *(long *)(this + 0x270) + -1;
        std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
                  (*(__tree_node_base **)(this + 0x268),p_Var7);
        operator_delete(p_Var7);
        return;
      }
    }
  }
  return;
}


