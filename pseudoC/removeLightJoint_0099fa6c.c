// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeLightJoint
// Entry Point: 0099fa6c
// Size: 412 bytes
// Signature: undefined __thiscall removeLightJoint(Bt2ScenegraphPhysicsContext * this, uint param_1)


/* Bt2ScenegraphPhysicsContext::removeLightJoint(unsigned int) */

void __thiscall
Bt2ScenegraphPhysicsContext::removeLightJoint(Bt2ScenegraphPhysicsContext *this,uint param_1)

{
  uint uVar1;
  long lVar2;
  __tree_node_base *p_Var3;
  __tree_node_base **pp_Var4;
  __tree_node_base **pp_Var5;
  long *plVar6;
  ulong uVar7;
  __tree_node_base *p_Var8;
  long lVar9;
  
  p_Var3 = *(__tree_node_base **)(this + 0x1c8);
  if (p_Var3 != (__tree_node_base *)0x0) {
    p_Var8 = (__tree_node_base *)(this + 0x1c8);
    do {
      if (*(uint *)(p_Var3 + 0x20) >= param_1) {
        p_Var8 = p_Var3;
      }
      p_Var3 = *(__tree_node_base **)(p_Var3 + (ulong)(*(uint *)(p_Var3 + 0x20) < param_1) * 8);
    } while (p_Var3 != (__tree_node_base *)0x0);
    if ((p_Var8 != (__tree_node_base *)(this + 0x1c8)) && (*(uint *)(p_Var8 + 0x20) <= param_1)) {
      lVar9 = *(long *)(*(long *)(p_Var8 + 0x30) + 0x28);
      lVar2 = btTypedConstraint::getFixedBody();
      if (lVar9 != lVar2) {
        btCollisionObject::activate(*(btCollisionObject **)(*(long *)(p_Var8 + 0x30) + 0x28),false);
      }
      lVar9 = *(long *)(*(long *)(p_Var8 + 0x30) + 0x30);
      lVar2 = btTypedConstraint::getFixedBody();
      if (lVar9 != lVar2) {
        btCollisionObject::activate(*(btCollisionObject **)(*(long *)(p_Var8 + 0x30) + 0x30),false);
      }
      uVar1 = *(uint *)(this + 0x250);
      lVar2 = *(long *)(p_Var8 + 0x30);
      if (uVar1 != 0) {
        uVar7 = 0;
        plVar6 = *(long **)(this + 0x248);
        do {
          if (*plVar6 == lVar2) {
            uVar1 = uVar1 - 1;
            *(uint *)(this + 0x250) = uVar1;
            if ((uint)uVar7 < uVar1) {
              *plVar6 = (*(long **)(this + 0x248))[uVar1];
              lVar2 = *(long *)(p_Var8 + 0x30);
            }
            break;
          }
          uVar7 = uVar7 + 1;
          plVar6 = plVar6 + 1;
        } while (uVar1 != uVar7);
      }
      (**(code **)(**(long **)(this + 0x30) + 0x78))(*(long **)(this + 0x30),lVar2);
      if (*(long **)(p_Var8 + 0x30) != (long *)0x0) {
        (**(code **)(**(long **)(p_Var8 + 0x30) + 8))();
      }
      pp_Var5 = *(__tree_node_base ***)(p_Var8 + 8);
      if (*(__tree_node_base ***)(p_Var8 + 8) == (__tree_node_base **)0x0) {
        pp_Var5 = (__tree_node_base **)(p_Var8 + 0x10);
        pp_Var4 = (__tree_node_base **)*pp_Var5;
        if (*pp_Var4 != p_Var8) {
          do {
            p_Var3 = *pp_Var5;
            pp_Var5 = (__tree_node_base **)(p_Var3 + 0x10);
            pp_Var4 = (__tree_node_base **)*pp_Var5;
          } while (*pp_Var4 != p_Var3);
        }
      }
      else {
        do {
          pp_Var4 = pp_Var5;
          pp_Var5 = (__tree_node_base **)*pp_Var4;
        } while ((__tree_node_base **)*pp_Var4 != (__tree_node_base **)0x0);
      }
      if (*(__tree_node_base **)(this + 0x1c0) == p_Var8) {
        *(__tree_node_base ***)(this + 0x1c0) = pp_Var4;
      }
      *(long *)(this + 0x1d0) = *(long *)(this + 0x1d0) + -1;
      std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(this + 0x1c8),p_Var8);
      operator_delete(p_Var8);
      return;
    }
  }
  return;
}


