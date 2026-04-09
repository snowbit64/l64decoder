// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enqueueRemoveActor
// Entry Point: 0099dafc
// Size: 1216 bytes
// Signature: undefined __thiscall enqueueRemoveActor(Bt2ScenegraphPhysicsContext * this, Bt2PhysicsRBObject * param_1, bool param_2)


/* Bt2ScenegraphPhysicsContext::enqueueRemoveActor(Bt2PhysicsRBObject*, bool) */

void __thiscall
Bt2ScenegraphPhysicsContext::enqueueRemoveActor
          (Bt2ScenegraphPhysicsContext *this,Bt2PhysicsRBObject *param_1,bool param_2)

{
  bool bVar1;
  btRigidBody **ppbVar2;
  uint uVar3;
  int iVar4;
  Bt2ScenegraphPhysicsContext BVar5;
  size_t __n;
  long *__dest;
  void *__dest_00;
  long lVar6;
  __tree_node_base *p_Var7;
  __tree_node_base **pp_Var8;
  Bt2ScenegraphPhysicsContext *pBVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  __tree_node_base **pp_Var13;
  btRigidBody *pbVar14;
  ulong uVar15;
  void *pvVar16;
  __tree_node_base *p_Var17;
  Bt2ScenegraphPhysicsContext *pBVar18;
  int iVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  
  lVar21 = *(long *)(this + 0xb0);
  lVar6 = *(long *)(this + 0xb8);
  lVar20 = *(long *)(param_1 + 0x28);
  if ((int)((ulong)(lVar6 - lVar21) >> 3) != 0) {
    uVar10 = (ulong)(lVar6 - lVar21) >> 3 & 0xffffffff;
    lVar11 = uVar10 * 8;
    lVar22 = uVar10 * -8;
    while( true ) {
      lVar11 = lVar11 + -8;
      if (*(Bt2PhysicsRBObject **)(lVar21 + lVar11) == param_1) {
        uVar10 = lVar22 + (lVar6 - lVar21);
        if (uVar10 != 0) {
          memmove((void *)(lVar21 + lVar11),(void *)((long)(void *)(lVar21 + lVar11) + 8),uVar10);
        }
        lVar6 = lVar21 + (uVar10 & 0xfffffffffffffff8) + lVar11;
        *(long *)(this + 0xb8) = lVar6;
      }
      if (lVar11 == 0) break;
      lVar21 = *(long *)(this + 0xb0);
      lVar22 = lVar22 + 8;
    }
  }
  lVar6 = *(long *)(this + 0x378);
  lVar21 = *(long *)(this + 0x370);
  if ((int)((ulong)(lVar6 - lVar21) >> 4) != 0) {
    uVar10 = (ulong)(lVar6 - lVar21) >> 4 & 0xffffffff;
    lVar11 = uVar10 * 0x10;
    lVar22 = uVar10 * -0x10;
    while( true ) {
      lVar11 = lVar11 + -0x10;
      if (*(long *)(lVar21 + lVar11) == lVar20) {
        uVar10 = lVar22 + (lVar6 - lVar21);
        if (uVar10 != 0) {
          memmove((void *)(lVar21 + lVar11),(void *)((long)(void *)(lVar21 + lVar11) + 0x10),uVar10)
          ;
        }
        lVar6 = lVar21 + (uVar10 & 0xfffffffffffffff0) + lVar11;
        *(long *)(this + 0x378) = lVar6;
      }
      if (lVar11 == 0) break;
      lVar21 = *(long *)(this + 0x370);
      lVar22 = lVar22 + 0x10;
    }
  }
  uVar3 = *(uint *)(this + 0x178);
  if (0 < (int)uVar3) {
    iVar19 = -uVar3;
    uVar10 = (ulong)uVar3;
    do {
      uVar15 = uVar10 - 1;
      lVar6 = *(long *)(this + 0x170);
      uVar12 = uVar15 & 0xffffffff;
      __dest = (long *)(lVar6 + uVar12 * 0x50);
      if (*__dest == lVar20) {
        if (*(int *)(__dest + 1) != 0x10 || *(char *)(lVar6 + uVar12 * 0x50 + 0x28) == '\0')
        goto LAB_0099dc7c;
        *__dest = 0;
      }
      else if ((0x10 < *(int *)(__dest + 1)) && (*(long *)(lVar6 + uVar12 * 0x50 + 0x10) == lVar20))
      {
LAB_0099dc7c:
        iVar4 = *(int *)(this + 0x178);
        uVar3 = iVar4 - 1;
        *(uint *)(this + 0x178) = uVar3;
        if ((uint)uVar15 < uVar3) {
          memmove(__dest,__dest + 10,(ulong)(uint)(iVar19 + iVar4) * 0x50);
        }
      }
      iVar19 = iVar19 + 1;
      bVar1 = 1 < uVar10;
      uVar10 = uVar15;
    } while (bVar1);
  }
  lVar21 = *(long *)(this + 0x1d8);
  lVar6 = *(long *)(this + 0x1e0);
  uVar10 = (lVar6 - lVar21 >> 5) * 0xba2e8ba3;
  if (0 < (int)uVar10) {
    uVar10 = uVar10 & 0xffffffff;
    while( true ) {
      uVar12 = (ulong)((int)uVar10 - 1);
      pvVar16 = (void *)(lVar21 + uVar12 * 0x160);
      if ((((*(uint *)((long)pvVar16 + 4) >> 0x14 & 1) == 0) &&
          (*(long *)((long)pvVar16 + 8) == lVar20)) ||
         (((*(uint *)((long)pvVar16 + 4) >> 0x15 & 1) == 0 &&
          (*(long *)(lVar21 + uVar12 * 0x160 + 0x10) == lVar20)))) {
        __n = lVar6 - (long)(void *)((long)pvVar16 + 0x160);
        if (__n != 0) {
          memmove(pvVar16,(void *)((long)pvVar16 + 0x160),__n);
        }
        lVar6 = (long)pvVar16 + __n;
        *(long *)(this + 0x1e0) = lVar6;
      }
      if (uVar10 < 2) break;
      lVar21 = *(long *)(this + 0x1d8);
      uVar10 = uVar10 - 1;
    }
  }
  pbVar14 = *(btRigidBody **)(param_1 + 0x30);
  if (pbVar14 != (btRigidBody *)0x0) {
    p_Var7 = *(__tree_node_base **)(this + 0x220);
    if (p_Var7 != (__tree_node_base *)0x0) {
      p_Var17 = (__tree_node_base *)(this + 0x220);
      do {
        if (*(btRigidBody **)(p_Var7 + 0x20) >= pbVar14) {
          p_Var17 = p_Var7;
        }
        p_Var7 = *(__tree_node_base **)
                  (p_Var7 + (ulong)(*(btRigidBody **)(p_Var7 + 0x20) < pbVar14) * 8);
      } while (p_Var7 != (__tree_node_base *)0x0);
      if ((p_Var17 != (__tree_node_base *)(this + 0x220)) &&
         (*(btRigidBody **)(p_Var17 + 0x20) <= pbVar14)) {
        if (*(int *)(p_Var17 + 0x30) != 0) {
          uVar10 = 0;
          do {
            enqueueRemoveLightJoint(this,*(uint *)(*(long *)(p_Var17 + 0x28) + uVar10 * 4),pbVar14);
            uVar10 = uVar10 + 1;
          } while (uVar10 < *(uint *)(p_Var17 + 0x30));
        }
        pp_Var13 = *(__tree_node_base ***)(p_Var17 + 8);
        if (*(__tree_node_base ***)(p_Var17 + 8) == (__tree_node_base **)0x0) {
          pp_Var13 = (__tree_node_base **)(p_Var17 + 0x10);
          pp_Var8 = (__tree_node_base **)*pp_Var13;
          if (*pp_Var8 != p_Var17) {
            do {
              p_Var7 = *pp_Var13;
              pp_Var13 = (__tree_node_base **)(p_Var7 + 0x10);
              pp_Var8 = (__tree_node_base **)*pp_Var13;
            } while (*pp_Var8 != p_Var7);
          }
        }
        else {
          do {
            pp_Var8 = pp_Var13;
            pp_Var13 = (__tree_node_base **)*pp_Var8;
          } while ((__tree_node_base **)*pp_Var8 != (__tree_node_base **)0x0);
        }
        if (*(__tree_node_base **)(this + 0x218) == p_Var17) {
          *(__tree_node_base ***)(this + 0x218) = pp_Var8;
        }
        *(long *)(this + 0x228) = *(long *)(this + 0x228) + -1;
        std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
                  (*(__tree_node_base **)(this + 0x220),p_Var17);
        operator_delete__(*(void **)(p_Var17 + 0x28));
        operator_delete(p_Var17);
      }
    }
    pBVar9 = *(Bt2ScenegraphPhysicsContext **)(this + 0x238);
    if (pBVar9 != (Bt2ScenegraphPhysicsContext *)0x0) {
      pBVar18 = this + 0x238;
      do {
        if (*(btRigidBody **)(pBVar9 + 0x20) >= pbVar14) {
          pBVar18 = pBVar9;
        }
        pBVar9 = *(Bt2ScenegraphPhysicsContext **)
                  (pBVar9 + (ulong)(*(btRigidBody **)(pBVar9 + 0x20) < pbVar14) * 8);
      } while (pBVar9 != (Bt2ScenegraphPhysicsContext *)0x0);
      if (((pBVar18 != this + 0x238) && (*(btRigidBody **)(pBVar18 + 0x20) <= pbVar14)) &&
         (*(uint *)(pBVar18 + 0x30) != 0)) {
        lVar6 = (ulong)*(uint *)(pBVar18 + 0x30) * 8 + -8;
        do {
          (**(code **)(**(long **)(*(long *)(pBVar18 + 0x28) + lVar6) + 0x28))();
          lVar6 = lVar6 + -8;
        } while (lVar6 != -8);
      }
    }
    BVar5 = this[0x488];
    **(uint **)(pbVar14 + 0x108) = **(uint **)(pbVar14 + 0x108) | 0x100;
    if (BVar5 == (Bt2ScenegraphPhysicsContext)0x0) {
      removeActor(this,pbVar14,param_2);
      return;
    }
    ppbVar2 = *(btRigidBody ***)(this + 0x148);
    if (ppbVar2 == *(btRigidBody ***)(this + 0x150)) {
      pvVar16 = *(void **)(this + 0x140);
      uVar12 = (long)ppbVar2 - (long)pvVar16;
      uVar10 = ((long)uVar12 >> 4) + 1;
      if (uVar10 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      if (uVar10 <= (ulong)((long)uVar12 >> 3)) {
        uVar10 = (long)uVar12 >> 3;
      }
      if (0x7fffffffffffffef < uVar12) {
        uVar10 = 0xfffffffffffffff;
      }
      if (uVar10 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      __dest_00 = operator_new(uVar10 * 0x10);
      ppbVar2 = (btRigidBody **)((long)__dest_00 + ((long)uVar12 >> 4) * 0x10);
      *ppbVar2 = pbVar14;
      *(bool *)(ppbVar2 + 1) = param_2;
      if (0 < (long)uVar12) {
        memcpy(__dest_00,pvVar16,uVar12);
      }
      *(void **)(this + 0x140) = __dest_00;
      *(btRigidBody ***)(this + 0x148) = ppbVar2 + 2;
      *(void **)(this + 0x150) = (void *)((long)__dest_00 + uVar10 * 0x10);
      if (pvVar16 != (void *)0x0) {
        operator_delete(pvVar16);
        return;
      }
    }
    else {
      *ppbVar2 = pbVar14;
      *(bool *)(ppbVar2 + 1) = param_2;
      *(btRigidBody ***)(this + 0x148) = ppbVar2 + 2;
    }
  }
  return;
}


