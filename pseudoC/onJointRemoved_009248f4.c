// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onJointRemoved
// Entry Point: 009248f4
// Size: 524 bytes
// Signature: undefined __thiscall onJointRemoved(DestructionShape * this, uint param_1, bool param_2)


/* DestructionShape::onJointRemoved(unsigned int, bool) */

void __thiscall DestructionShape::onJointRemoved(DestructionShape *this,uint param_1,bool param_2)

{
  void *pvVar1;
  uint uVar2;
  size_t sVar3;
  __tree_node_base *p_Var4;
  long lVar5;
  __tree_node_base **pp_Var6;
  long lVar7;
  __tree_node_base **pp_Var8;
  ulong uVar9;
  __tree_node_base *p_Var10;
  long lVar11;
  long *plVar12;
  
  p_Var4 = *(__tree_node_base **)(this + 0x250);
  if (p_Var4 != (__tree_node_base *)0x0) {
    p_Var10 = (__tree_node_base *)(this + 0x250);
    do {
      if (*(uint *)(p_Var4 + 0x1c) >= param_1) {
        p_Var10 = p_Var4;
      }
      p_Var4 = *(__tree_node_base **)(p_Var4 + (ulong)(*(uint *)(p_Var4 + 0x1c) < param_1) * 8);
    } while (p_Var4 != (__tree_node_base *)0x0);
    if ((p_Var10 != (__tree_node_base *)(this + 0x250)) && (*(uint *)(p_Var10 + 0x1c) <= param_1)) {
      lVar11 = *(long *)(this + 0x228) + (ulong)*(uint *)(p_Var10 + 0x20) * 0x30;
      plVar12 = (long *)(lVar11 + 0x10);
      lVar5 = *plVar12;
      lVar7 = *(long *)(lVar11 + 8);
      lVar11 = lVar5 - lVar7;
      if (lVar11 != 0) {
        uVar9 = 0;
        do {
          if (*(uint *)(lVar7 + uVar9 * 4) == param_1) {
            pvVar1 = (void *)(lVar7 + uVar9 * 4);
            sVar3 = lVar5 - (long)(void *)((long)pvVar1 + 4);
            if (sVar3 != 0) {
              memmove(pvVar1,(void *)((long)pvVar1 + 4),sVar3);
            }
            *plVar12 = (long)pvVar1 + sVar3;
            uVar2 = *(uint *)(p_Var10 + 0x24);
            goto joined_r0x009249f4;
          }
          uVar9 = (ulong)((int)uVar9 + 1);
        } while (uVar9 < (ulong)(lVar11 >> 2));
      }
      uVar2 = *(uint *)(p_Var10 + 0x24);
joined_r0x009249f4:
      if (uVar2 != 0) {
        lVar11 = *(long *)(this + 0x228) + (ulong)uVar2 * 0x30;
        plVar12 = (long *)(lVar11 + 0x10);
        lVar5 = *plVar12;
        lVar7 = *(long *)(lVar11 + 8);
        lVar11 = lVar5 - lVar7;
        if (lVar11 != 0) {
          uVar9 = 0;
          do {
            if (*(uint *)(lVar7 + uVar9 * 4) == param_1) {
              pvVar1 = (void *)(lVar7 + uVar9 * 4);
              sVar3 = lVar5 - (long)(void *)((long)pvVar1 + 4);
              if (sVar3 != 0) {
                memmove(pvVar1,(void *)((long)pvVar1 + 4),sVar3);
              }
              *plVar12 = (long)pvVar1 + sVar3;
              break;
            }
            uVar9 = (ulong)((int)uVar9 + 1);
          } while (uVar9 < (ulong)(lVar11 >> 2));
        }
      }
      if (param_2) {
        pp_Var8 = *(__tree_node_base ***)(p_Var10 + 8);
        if (*(__tree_node_base ***)(p_Var10 + 8) == (__tree_node_base **)0x0) {
          pp_Var8 = (__tree_node_base **)(p_Var10 + 0x10);
          pp_Var6 = (__tree_node_base **)*pp_Var8;
          if (*pp_Var6 != p_Var10) {
            do {
              p_Var4 = *pp_Var8;
              pp_Var8 = (__tree_node_base **)(p_Var4 + 0x10);
              pp_Var6 = (__tree_node_base **)*pp_Var8;
            } while (*pp_Var6 != p_Var4);
          }
        }
        else {
          do {
            pp_Var6 = pp_Var8;
            pp_Var8 = (__tree_node_base **)*pp_Var6;
          } while ((__tree_node_base **)*pp_Var6 != (__tree_node_base **)0x0);
        }
        if (*(__tree_node_base **)(this + 0x248) == p_Var10) {
          *(__tree_node_base ***)(this + 0x248) = pp_Var6;
        }
        *(long *)(this + 600) = *(long *)(this + 600) + -1;
        std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
                  (*(__tree_node_base **)(this + 0x250),p_Var10);
        operator_delete(p_Var10);
        return;
      }
      return;
    }
  }
  onInterShapeJointRemoved(this,param_1,true,param_2);
  return;
}


