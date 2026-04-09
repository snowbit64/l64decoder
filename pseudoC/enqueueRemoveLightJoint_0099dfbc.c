// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enqueueRemoveLightJoint
// Entry Point: 0099dfbc
// Size: 932 bytes
// Signature: undefined __thiscall enqueueRemoveLightJoint(Bt2ScenegraphPhysicsContext * this, uint param_1, btRigidBody * param_2)


/* Bt2ScenegraphPhysicsContext::enqueueRemoveLightJoint(unsigned int, btRigidBody*) */

void __thiscall
Bt2ScenegraphPhysicsContext::enqueueRemoveLightJoint
          (Bt2ScenegraphPhysicsContext *this,uint param_1,btRigidBody *param_2)

{
  __tree_node_base **pp_Var1;
  size_t __n;
  long lVar2;
  bool bVar3;
  btRigidBody *pbVar4;
  void *__dest;
  uint uVar5;
  Bt2ScenegraphPhysicsContext *pBVar6;
  __tree_node_base *p_Var7;
  __tree_node_base **pp_Var8;
  ulong uVar9;
  uint *puVar10;
  __tree_node_base **pp_Var11;
  void *__src;
  long lVar12;
  __tree_node_base **pp_Var13;
  ulong __n_00;
  Bt2ScenegraphPhysicsContext *pBVar14;
  long lVar15;
  btRigidBody *pbVar16;
  btRigidBody *local_78 [2];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  pBVar6 = *(Bt2ScenegraphPhysicsContext **)(this + 0x1c8);
  if (pBVar6 != (Bt2ScenegraphPhysicsContext *)0x0) {
    pBVar14 = this + 0x1c8;
    do {
      if (*(uint *)(pBVar6 + 0x20) >= param_1) {
        pBVar14 = pBVar6;
      }
      pBVar6 = *(Bt2ScenegraphPhysicsContext **)
                (pBVar6 + (ulong)(*(uint *)(pBVar6 + 0x20) < param_1) * 8);
    } while (pBVar6 != (Bt2ScenegraphPhysicsContext *)0x0);
    if ((pBVar14 != this + 0x1c8) && (*(uint *)(pBVar14 + 0x20) <= param_1)) {
      if (((byte)pBVar14[0x29] & 1) == 0) {
        lVar15 = 0;
        pp_Var1 = (__tree_node_base **)(this + 0x220);
        pbVar16 = *(btRigidBody **)(*(long *)(pBVar14 + 0x30) + 0x28);
        local_78[1] = (btRigidBody *)*(undefined8 *)(*(long *)(pBVar14 + 0x30) + 0x30);
        local_78[0] = pbVar16;
        do {
          if ((((pbVar16 != (btRigidBody *)0x0) && (pbVar16 != param_2)) &&
              (pbVar4 = (btRigidBody *)btTypedConstraint::getFixedBody(), pbVar16 != pbVar4)) &&
             (p_Var7 = *pp_Var1, pp_Var13 = pp_Var1, p_Var7 != (__tree_node_base *)0x0)) {
            do {
              if (*(btRigidBody **)(p_Var7 + 0x20) >= pbVar16) {
                pp_Var13 = (__tree_node_base **)p_Var7;
              }
              p_Var7 = *(__tree_node_base **)
                        (p_Var7 + (ulong)(*(btRigidBody **)(p_Var7 + 0x20) < pbVar16) * 8);
            } while (p_Var7 != (__tree_node_base *)0x0);
            if ((pp_Var13 != pp_Var1) && ((btRigidBody *)pp_Var13[4] <= pbVar16)) {
              uVar5 = *(uint *)(pp_Var13 + 6);
              if (uVar5 != 0) {
                puVar10 = (uint *)pp_Var13[5];
                if (*puVar10 == param_1) {
                  uVar9 = 0;
                  bVar3 = true;
                }
                else {
                  uVar9 = 0;
                  do {
                    if ((ulong)uVar5 - 1 == uVar9) {
                      bVar3 = false;
                      goto LAB_0099e1b4;
                    }
                    lVar12 = uVar9 + 1;
                    uVar9 = uVar9 + 1;
                  } while (puVar10[lVar12] != param_1);
                  bVar3 = uVar9 < uVar5;
                }
                uVar5 = uVar5 - 1;
                *(uint *)(pp_Var13 + 6) = uVar5;
                if ((uint)uVar9 < uVar5) {
                  puVar10[uVar9 & 0xffffffff] = puVar10[uVar5];
                  if (bVar3) {
                    uVar5 = *(uint *)(pp_Var13 + 6);
LAB_0099e1b8:
                    if (uVar5 == 0) {
                      pp_Var11 = (__tree_node_base **)pp_Var13[1];
                      if ((__tree_node_base **)pp_Var13[1] == (__tree_node_base **)0x0) {
                        pp_Var11 = pp_Var13 + 2;
                        pp_Var8 = (__tree_node_base **)*pp_Var11;
                        if ((__tree_node_base **)*pp_Var8 != pp_Var13) {
                          do {
                            p_Var7 = *pp_Var11;
                            pp_Var11 = (__tree_node_base **)(p_Var7 + 0x10);
                            pp_Var8 = (__tree_node_base **)*pp_Var11;
                          } while (*pp_Var8 != p_Var7);
                        }
                      }
                      else {
                        do {
                          pp_Var8 = pp_Var11;
                          pp_Var11 = (__tree_node_base **)*pp_Var8;
                        } while ((__tree_node_base **)*pp_Var8 != (__tree_node_base **)0x0);
                      }
                      if ((__tree_node_base **)*(__tree_node_base **)(this + 0x218) == pp_Var13) {
                        *(__tree_node_base ***)(this + 0x218) = pp_Var8;
                      }
                      *(long *)(this + 0x228) = *(long *)(this + 0x228) + -1;
                      std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
                                (*(__tree_node_base **)(this + 0x220),(__tree_node_base *)pp_Var13);
                      operator_delete__(pp_Var13[5]);
                      operator_delete(pp_Var13);
                    }
                  }
                }
                else {
LAB_0099e1b4:
                  if (bVar3) goto LAB_0099e1b8;
                }
              }
            }
          }
          lVar15 = lVar15 + 1;
          if (lVar15 == 2) goto LAB_0099e250;
          pbVar16 = local_78[lVar15];
        } while( true );
      }
      goto LAB_0099e31c;
    }
  }
  lVar15 = *(long *)(this + 0x1d8);
  uVar9 = (*(long *)(this + 0x1e0) - lVar15 >> 5) * 0xba2e8ba3;
  if ((int)uVar9 != 0) {
    lVar12 = 0;
    do {
      if (*(uint *)(lVar15 + lVar12) == param_1) {
        __n = ((*(long *)(this + 0x1e0) - lVar15) + -0x160) - lVar12;
        if (__n != 0) {
          memmove((void *)(lVar15 + lVar12),(void *)((long)(void *)(lVar15 + lVar12) + 0x160),__n);
        }
        *(long *)(this + 0x1e0) = lVar15 + ((long)__n / 0x160) * 0x160 + lVar12;
        break;
      }
      lVar12 = lVar12 + 0x160;
    } while ((uVar9 & 0xffffffff) * 0x160 - lVar12 != 0);
  }
  goto LAB_0099e31c;
LAB_0099e250:
  *(uint *)(pBVar14 + 0x28) = *(uint *)(pBVar14 + 0x28) | 0x100;
  if (this[0x488] == (Bt2ScenegraphPhysicsContext)0x0) {
    removeLightJoint(this,param_1);
  }
  else {
    puVar10 = *(uint **)(this + 0x1f8);
    if (puVar10 == *(uint **)(this + 0x200)) {
      __src = *(void **)(this + 0x1f0);
      __n_00 = (long)puVar10 - (long)__src;
      uVar9 = ((long)__n_00 >> 2) + 1;
      if (uVar9 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      if (uVar9 <= (ulong)((long)__n_00 >> 1)) {
        uVar9 = (long)__n_00 >> 1;
      }
      if (0x7ffffffffffffffb < __n_00) {
        uVar9 = 0x3fffffffffffffff;
      }
      if (uVar9 == 0) {
        __dest = (void *)0x0;
      }
      else {
        if (uVar9 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
        __dest = operator_new(uVar9 << 2);
      }
      puVar10 = (uint *)((long)__dest + ((long)__n_00 >> 2) * 4);
      *puVar10 = param_1;
      if (0 < (long)__n_00) {
        memcpy(__dest,__src,__n_00);
      }
      *(void **)(this + 0x1f0) = __dest;
      *(uint **)(this + 0x1f8) = puVar10 + 1;
      *(void **)(this + 0x200) = (void *)((long)__dest + uVar9 * 4);
      if (__src != (void *)0x0) {
        operator_delete(__src);
      }
    }
    else {
      *puVar10 = param_1;
      *(uint **)(this + 0x1f8) = puVar10 + 1;
    }
  }
LAB_0099e31c:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


