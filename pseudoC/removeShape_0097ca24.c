// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeShape
// Entry Point: 0097ca24
// Size: 952 bytes
// Signature: undefined __thiscall removeShape(MeshSplitManager * this, MeshSplitShape * param_1)


/* MeshSplitManager::removeShape(MeshSplitShape*) */

void __thiscall MeshSplitManager::removeShape(MeshSplitManager *this,MeshSplitShape *param_1)

{
  __tree_node_base **pp_Var1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  bool bVar5;
  void *pvVar6;
  __tree_node_base **pp_Var7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  __tree_node_base **pp_Var11;
  __tree_node_base **pp_Var12;
  __tree_node_base *p_Var13;
  int iVar14;
  ulong uVar15;
  ulong uVar16;
  __tree_node_base **pp_Var17;
  MeshSplitShape **__dest;
  void *__src;
  size_t sVar18;
  void *pvVar19;
  
  Mutex::enterCriticalSection();
  lVar8 = *(long *)(this + 0x60);
  uVar10 = *(long *)(this + 0x68) - lVar8;
  iVar14 = (int)(uVar10 >> 3);
  if (iVar14 != 0) {
    uVar16 = 0;
    do {
      if (*(MeshSplitShape **)(lVar8 + uVar16 * 8) == param_1) {
        uVar4 = iVar14 - 1;
        uVar15 = (ulong)uVar4;
        if ((uint)uVar16 < uVar4) {
          *(undefined8 *)(lVar8 + uVar16 * 8) = *(undefined8 *)(*(long *)(this + 0x68) + -8);
          lVar8 = *(long *)(this + 0x60);
          uVar10 = *(long *)(this + 0x68) - lVar8;
        }
        uVar10 = (long)uVar10 >> 3;
        if (uVar10 < uVar15) {
          std::__ndk1::vector<MeshSplitShape*,std::__ndk1::allocator<MeshSplitShape*>>::__append
                    ((vector<MeshSplitShape*,std::__ndk1::allocator<MeshSplitShape*>> *)
                     (this + 0x60),uVar15 - uVar10);
        }
        else if (uVar15 < uVar10) {
          *(ulong *)(this + 0x68) = lVar8 + uVar15 * 8;
        }
        __dest = *(MeshSplitShape ***)(this + 0x150);
        puVar9 = *(undefined8 **)(this + 0x158);
        uVar10 = (long)puVar9 - (long)__dest;
        if ((int)(uVar10 >> 4) == 0) goto LAB_0097cb24;
        uVar16 = uVar10 >> 4 & 0xffffffff;
        goto LAB_0097cae4;
      }
      uVar16 = uVar16 + 1;
    } while ((uVar10 >> 3 & 0xffffffff) != uVar16);
  }
  goto LAB_0097cdac;
  while( true ) {
    uVar16 = uVar16 - 1;
    __dest = __dest + 2;
    if (uVar16 == 0) break;
LAB_0097cae4:
    uVar10 = uVar10 - 0x10;
    if (*__dest == param_1) {
      if (uVar10 != 0) {
        memmove(__dest,__dest + 2,uVar10);
      }
      puVar9 = (undefined8 *)((long)__dest + (uVar10 & 0xfffffffffffffff0));
      *(undefined8 **)(this + 0x158) = puVar9;
      break;
    }
  }
LAB_0097cb24:
  if (*(long *)(this + 0x198) != *(long *)(this + 0x1a0)) {
    if (((byte)param_1[0x210] >> 6 & 1) == 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x208);
      uVar3 = *(undefined4 *)(param_1 + 0x20c);
      if (puVar9 < *(undefined8 **)(this + 0x160)) {
        *puVar9 = 0;
        *(undefined4 *)(puVar9 + 1) = uVar2;
        *(undefined4 *)((long)puVar9 + 0xc) = uVar3;
        *(undefined8 **)(this + 0x158) = puVar9 + 2;
      }
      else {
        __src = *(void **)(this + 0x150);
        sVar18 = (long)puVar9 - (long)__src;
        uVar10 = ((long)sVar18 >> 4) + 1;
        if (uVar10 >> 0x3c != 0) {
LAB_0097cdcc:
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        uVar16 = (long)*(undefined8 **)(this + 0x160) - (long)__src;
        uVar15 = (long)uVar16 >> 3;
        if (uVar10 <= uVar15) {
          uVar10 = uVar15;
        }
        if (0x7fffffffffffffef < uVar16) {
          uVar10 = 0xfffffffffffffff;
        }
        if (uVar10 >> 0x3c != 0) {
LAB_0097cdd0:
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
        pvVar6 = operator_new(uVar10 * 0x10);
        puVar9 = (undefined8 *)((long)pvVar6 + ((long)sVar18 >> 4) * 0x10);
        pvVar19 = (void *)((long)pvVar6 + uVar10 * 0x10);
        *puVar9 = 0;
        *(undefined4 *)(puVar9 + 1) = uVar2;
        *(undefined4 *)((long)puVar9 + 0xc) = uVar3;
        if (0 < (long)sVar18) {
          memcpy(pvVar6,__src,sVar18);
        }
        *(void **)(this + 0x150) = pvVar6;
        *(undefined8 **)(this + 0x158) = puVar9 + 2;
LAB_0097cc94:
        *(void **)(this + 0x160) = pvVar19;
        if (__src != (void *)0x0) {
          operator_delete(__src);
        }
      }
    }
    else {
      uVar2 = *(undefined4 *)(param_1 + 0x214);
      if (*(undefined8 **)(this + 0x160) <= puVar9) {
        __src = *(void **)(this + 0x150);
        sVar18 = (long)puVar9 - (long)__src;
        uVar10 = ((long)sVar18 >> 4) + 1;
        if (uVar10 >> 0x3c != 0) goto LAB_0097cdcc;
        uVar16 = (long)*(undefined8 **)(this + 0x160) - (long)__src;
        uVar15 = (long)uVar16 >> 3;
        if (uVar10 <= uVar15) {
          uVar10 = uVar15;
        }
        if (0x7fffffffffffffef < uVar16) {
          uVar10 = 0xfffffffffffffff;
        }
        if (uVar10 >> 0x3c != 0) goto LAB_0097cdd0;
        pvVar6 = operator_new(uVar10 * 0x10);
        puVar9 = (undefined8 *)((long)pvVar6 + ((long)sVar18 >> 4) * 0x10);
        pvVar19 = (void *)((long)pvVar6 + uVar10 * 0x10);
        *puVar9 = 0;
        *(undefined4 *)(puVar9 + 1) = uVar2;
        *(undefined4 *)((long)puVar9 + 0xc) = 0xffffffff;
        if (0 < (long)sVar18) {
          memcpy(pvVar6,__src,sVar18);
        }
        *(void **)(this + 0x150) = pvVar6;
        *(undefined8 **)(this + 0x158) = puVar9 + 2;
        goto LAB_0097cc94;
      }
      *puVar9 = 0;
      *(undefined4 *)(puVar9 + 1) = uVar2;
      *(undefined4 *)((long)puVar9 + 0xc) = 0xffffffff;
      *(undefined8 **)(this + 0x158) = puVar9 + 2;
    }
  }
  if (*(int *)(param_1 + 0x214) != -1) {
    std::__ndk1::
    __tree<std::__ndk1::__value_type<unsigned_int,MeshSplitShape*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,MeshSplitShape*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,MeshSplitShape*>>>
    ::__erase_unique<unsigned_int>
              ((__tree<std::__ndk1::__value_type<unsigned_int,MeshSplitShape*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,MeshSplitShape*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,MeshSplitShape*>>>
                *)(this + 0xc0),(uint *)(param_1 + 0x214));
  }
  uVar4 = *(uint *)(param_1 + 0x208);
  if (((byte)param_1[0x210] >> 6 & 1) != 0) {
    *(int *)(this + 0x78) = *(int *)(this + 0x78) + -1;
  }
  pp_Var11 = (__tree_node_base **)(this + 0xa8);
  pp_Var7 = (__tree_node_base **)*pp_Var11;
  *(int *)(this + 0x7c) = *(int *)(this + 0x7c) - *(int *)(*(long *)(param_1 + 0x170) + 0x1a8);
  pp_Var12 = pp_Var7;
  pp_Var17 = pp_Var11;
  if (pp_Var7 != (__tree_node_base **)0x0) {
    do {
      bVar5 = *(uint *)((long)pp_Var12 + 0x1c) < uVar4;
      if (!bVar5) {
        pp_Var17 = pp_Var12;
      }
      pp_Var1 = pp_Var12 + bVar5;
      pp_Var12 = (__tree_node_base **)*pp_Var1;
    } while ((__tree_node_base **)*pp_Var1 != (__tree_node_base **)0x0);
    if ((pp_Var17 != pp_Var11) && (*(uint *)((long)pp_Var17 + 0x1c) <= uVar4)) {
      iVar14 = *(int *)(pp_Var17 + 4) + -1;
      if (*(int *)(pp_Var17 + 4) == 0 || iVar14 == 0) {
        pp_Var12 = (__tree_node_base **)pp_Var17[1];
        if ((__tree_node_base **)pp_Var17[1] == (__tree_node_base **)0x0) {
          pp_Var12 = pp_Var17 + 2;
          pp_Var11 = (__tree_node_base **)*pp_Var12;
          if ((__tree_node_base **)*pp_Var11 != pp_Var17) {
            do {
              p_Var13 = *pp_Var12;
              pp_Var12 = (__tree_node_base **)(p_Var13 + 0x10);
              pp_Var11 = (__tree_node_base **)*pp_Var12;
            } while (*pp_Var11 != p_Var13);
          }
        }
        else {
          do {
            pp_Var11 = pp_Var12;
            pp_Var12 = (__tree_node_base **)*pp_Var11;
          } while ((__tree_node_base **)*pp_Var11 != (__tree_node_base **)0x0);
        }
        if (*(__tree_node_base ***)(this + 0xa0) == pp_Var17) {
          *(__tree_node_base ***)(this + 0xa0) = pp_Var11;
        }
        *(long *)(this + 0xb0) = *(long *)(this + 0xb0) + -1;
        std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
                  ((__tree_node_base *)pp_Var7,(__tree_node_base *)pp_Var17);
        operator_delete(pp_Var17);
      }
      else {
        *(int *)(pp_Var17 + 4) = iVar14;
      }
    }
  }
LAB_0097cdac:
  Mutex::leaveCriticalSection();
  return;
}


