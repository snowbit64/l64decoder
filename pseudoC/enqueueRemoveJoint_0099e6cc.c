// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enqueueRemoveJoint
// Entry Point: 0099e6cc
// Size: 792 bytes
// Signature: undefined __thiscall enqueueRemoveJoint(Bt2ScenegraphPhysicsContext * this, Bt2PhysicsJointObject * param_1, btRigidBody * param_2)


/* Bt2ScenegraphPhysicsContext::enqueueRemoveJoint(Bt2PhysicsJointObject*, btRigidBody*) */

void __thiscall
Bt2ScenegraphPhysicsContext::enqueueRemoveJoint
          (Bt2ScenegraphPhysicsContext *this,Bt2PhysicsJointObject *param_1,btRigidBody *param_2)

{
  __tree_node_base **pp_Var1;
  long **pplVar2;
  long lVar3;
  bool bVar4;
  btRigidBody *pbVar5;
  void *__dest;
  uint uVar6;
  __tree_node_base *p_Var7;
  __tree_node_base **pp_Var8;
  Bt2PhysicsJointObject **ppBVar9;
  __tree_node_base **pp_Var10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  void *__src;
  ulong __n;
  __tree_node_base **pp_Var14;
  long lVar15;
  btRigidBody *pbVar16;
  btRigidBody *local_78;
  long lStack_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  plVar12 = *(long **)(param_1 + 0x28);
  if (plVar12 != (long *)0x0) {
    pbVar16 = (btRigidBody *)plVar12[5];
    lVar15 = 0;
    pp_Var1 = (__tree_node_base **)(this + 0x238);
    lStack_70 = plVar12[6];
    local_78 = pbVar16;
    do {
      if ((((pbVar16 != (btRigidBody *)0x0) && (pbVar16 != param_2)) &&
          (pbVar5 = (btRigidBody *)btTypedConstraint::getFixedBody(), pbVar16 != pbVar5)) &&
         (p_Var7 = *pp_Var1, pp_Var14 = pp_Var1, p_Var7 != (__tree_node_base *)0x0)) {
        do {
          if (*(btRigidBody **)(p_Var7 + 0x20) >= pbVar16) {
            pp_Var14 = (__tree_node_base **)p_Var7;
          }
          p_Var7 = *(__tree_node_base **)
                    (p_Var7 + (ulong)(*(btRigidBody **)(p_Var7 + 0x20) < pbVar16) * 8);
        } while (p_Var7 != (__tree_node_base *)0x0);
        if ((pp_Var14 != pp_Var1) && ((btRigidBody *)pp_Var14[4] <= pbVar16)) {
          uVar6 = *(uint *)(pp_Var14 + 6);
          if (uVar6 != 0) {
            ppBVar9 = (Bt2PhysicsJointObject **)pp_Var14[5];
            if (*ppBVar9 == param_1) {
              uVar11 = 0;
              bVar4 = true;
            }
            else {
              uVar11 = 0;
              do {
                if ((ulong)uVar6 - 1 == uVar11) {
                  bVar4 = false;
                  goto LAB_0099e7e8;
                }
                lVar13 = uVar11 + 1;
                uVar11 = uVar11 + 1;
              } while (ppBVar9[lVar13] != param_1);
              bVar4 = uVar11 < uVar6;
            }
            uVar6 = uVar6 - 1;
            *(uint *)(pp_Var14 + 6) = uVar6;
            if ((uint)uVar11 < uVar6) {
              ppBVar9[uVar11 & 0xffffffff] = ppBVar9[uVar6];
              if (bVar4) {
                uVar6 = *(uint *)(pp_Var14 + 6);
LAB_0099e7ec:
                if (uVar6 == 0) {
                  pp_Var10 = (__tree_node_base **)pp_Var14[1];
                  if ((__tree_node_base **)pp_Var14[1] == (__tree_node_base **)0x0) {
                    pp_Var10 = pp_Var14 + 2;
                    pp_Var8 = (__tree_node_base **)*pp_Var10;
                    if ((__tree_node_base **)*pp_Var8 != pp_Var14) {
                      do {
                        p_Var7 = *pp_Var10;
                        pp_Var10 = (__tree_node_base **)(p_Var7 + 0x10);
                        pp_Var8 = (__tree_node_base **)*pp_Var10;
                      } while (*pp_Var8 != p_Var7);
                    }
                  }
                  else {
                    do {
                      pp_Var8 = pp_Var10;
                      pp_Var10 = (__tree_node_base **)*pp_Var8;
                    } while ((__tree_node_base **)*pp_Var8 != (__tree_node_base **)0x0);
                  }
                  if ((__tree_node_base **)*(__tree_node_base **)(this + 0x230) == pp_Var14) {
                    *(__tree_node_base ***)(this + 0x230) = pp_Var8;
                  }
                  *(long *)(this + 0x240) = *(long *)(this + 0x240) + -1;
                  std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
                            (*(__tree_node_base **)(this + 0x238),(__tree_node_base *)pp_Var14);
                  operator_delete__(pp_Var14[5]);
                  operator_delete(pp_Var14);
                }
              }
            }
            else {
LAB_0099e7e8:
              if (bVar4) goto LAB_0099e7ec;
            }
          }
        }
      }
      lVar15 = lVar15 + 1;
      if (lVar15 == 2) goto LAB_0099e884;
      pbVar16 = (&local_78)[lVar15];
    } while( true );
  }
LAB_0099e9a0:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_0099e884:
  if (this[0x488] == (Bt2ScenegraphPhysicsContext)0x0) {
    lVar13 = plVar12[5];
    lVar15 = btTypedConstraint::getFixedBody();
    if (lVar13 != lVar15) {
      btCollisionObject::activate((btCollisionObject *)plVar12[5],false);
    }
    lVar13 = plVar12[6];
    lVar15 = btTypedConstraint::getFixedBody();
    if (lVar13 != lVar15) {
      btCollisionObject::activate((btCollisionObject *)plVar12[6],false);
    }
    (**(code **)(**(long **)(this + 0x30) + 0x78))(*(long **)(this + 0x30),plVar12);
    if ((void *)plVar12[2] != (void *)0x0) {
      operator_delete((void *)plVar12[2]);
    }
    (**(code **)(*plVar12 + 8))(plVar12);
  }
  else {
    pplVar2 = *(long ***)(this + 0x160);
    if (pplVar2 == *(long ***)(this + 0x168)) {
      __src = *(void **)(this + 0x158);
      __n = (long)pplVar2 - (long)__src;
      uVar11 = ((long)__n >> 3) + 1;
      if (uVar11 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      if (uVar11 <= (ulong)((long)__n >> 2)) {
        uVar11 = (long)__n >> 2;
      }
      if (0x7ffffffffffffff7 < __n) {
        uVar11 = 0x1fffffffffffffff;
      }
      if (uVar11 == 0) {
        __dest = (void *)0x0;
      }
      else {
        if (uVar11 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
        __dest = operator_new(uVar11 << 3);
      }
      pplVar2 = (long **)((long)__dest + ((long)__n >> 3) * 8);
      *pplVar2 = plVar12;
      if (0 < (long)__n) {
        memcpy(__dest,__src,__n);
      }
      *(void **)(this + 0x158) = __dest;
      *(long ***)(this + 0x160) = pplVar2 + 1;
      *(void **)(this + 0x168) = (void *)((long)__dest + uVar11 * 8);
      if (__src != (void *)0x0) {
        operator_delete(__src);
      }
    }
    else {
      *pplVar2 = plVar12;
      *(long ***)(this + 0x160) = pplVar2 + 1;
    }
  }
  goto LAB_0099e9a0;
}


