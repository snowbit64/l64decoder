// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addShape
// Entry Point: 0097bd34
// Size: 1220 bytes
// Signature: undefined __thiscall addShape(MeshSplitManager * this, MeshSplitShape * param_1, STREAM_QUEUE param_2, MeshSplitFileState * param_3, bool * param_4)


/* MeshSplitManager::addShape(MeshSplitShape*, StreamManager::STREAM_QUEUE, MeshSplitFileState
   const*, bool&) */

void __thiscall
MeshSplitManager::addShape
          (MeshSplitManager *this,MeshSplitShape *param_1,STREAM_QUEUE param_2,
          MeshSplitFileState *param_3,bool *param_4)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  int iVar7;
  pair pVar8;
  long lVar9;
  ulong uVar10;
  void *__dest;
  Bt2ScenegraphPhysicsContext *pBVar11;
  Bt2PhysicsRBObject *this_00;
  MeshSplitShape **ppMVar12;
  MeshSplitManager **ppMVar13;
  MeshSplitManager **ppMVar14;
  MeshSplitShape *pMVar15;
  MeshSplitManager **ppMVar16;
  void *__src;
  ulong __n;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  float fVar20;
  float fVar21;
  uint local_8c [3];
  uint *local_80;
  long local_78;
  
  lVar5 = tpidr_el0;
  local_78 = *(long *)(lVar5 + 0x28);
  *param_4 = false;
  if (((param_3 == (MeshSplitFileState *)0x0) || (*(int *)param_3 == -1)) ||
     (lVar9 = RawTransformGroup::getPhysicsObject(), (*(byte *)(lVar9 + 8) >> 3 & 1) == 0))
  goto LAB_0097bf74;
  Mutex::enterCriticalSection();
  ppMVar12 = *(MeshSplitShape ***)(this + 0x60);
  do {
    if (ppMVar12 == *(MeshSplitShape ***)(this + 0x68)) {
      uVar2 = *(uint *)param_3;
      uVar3 = *(uint *)(param_3 + 4);
      puVar18 = (undefined8 *)(this + 0xa8);
      puVar19 = puVar18;
      local_8c[0] = uVar3;
      if ((undefined8 *)*puVar18 == (undefined8 *)0x0) goto LAB_0097be28;
      puVar17 = (undefined8 *)*puVar18;
      puVar19 = (undefined8 *)(this + 0xa8);
      goto LAB_0097bde8;
    }
    pMVar15 = *ppMVar12;
    ppMVar12 = ppMVar12 + 1;
  } while (pMVar15 != param_1);
  goto LAB_0097bf70;
  while( true ) {
    if (uVar2 <= *(uint *)((long)puVar18 + 0x1c)) break;
    puVar19 = puVar18 + 1;
    puVar17 = (undefined8 *)*puVar19;
    if ((undefined8 *)*puVar19 == (undefined8 *)0x0) break;
LAB_0097bde8:
    puVar18 = puVar17;
    if (uVar2 < *(uint *)((long)puVar18 + 0x1c)) {
      puVar17 = (undefined8 *)*puVar18;
      puVar19 = puVar18;
      if ((undefined8 *)*puVar18 == (undefined8 *)0x0) {
        puVar17 = (undefined8 *)*puVar18;
        if (puVar17 != (undefined8 *)0x0) goto LAB_0097be90;
        goto LAB_0097be30;
      }
      goto LAB_0097bde8;
    }
  }
LAB_0097be28:
  puVar17 = (undefined8 *)*puVar19;
  if (puVar17 == (undefined8 *)0x0) {
LAB_0097be30:
    puVar17 = (undefined8 *)operator_new(0x28);
    puVar17[4] = 0;
    *(uint *)((long)puVar17 + 0x1c) = uVar2;
    *puVar17 = 0;
    puVar17[1] = 0;
    puVar17[2] = puVar18;
    *puVar19 = puVar17;
    puVar18 = puVar17;
    if (**(long **)(this + 0xa0) != 0) {
      *(long *)(this + 0xa0) = **(long **)(this + 0xa0);
      puVar18 = (undefined8 *)*puVar19;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 0xa8),(__tree_node_base *)puVar18);
    *(long *)(this + 0xb0) = *(long *)(this + 0xb0) + 1;
  }
LAB_0097be90:
  uVar4 = *(uint *)((long)puVar17 + 0x24);
  *(uint *)((long)puVar17 + 0x24) = uVar4 + 1;
  ppMVar14 = (MeshSplitManager **)(this + 0xe0);
  ppMVar16 = (MeshSplitManager **)*ppMVar14;
  ppMVar13 = ppMVar14;
  if (ppMVar16 == (MeshSplitManager **)0x0) {
LAB_0097bed8:
    if (*(uint *)(this + 0xf0) <= uVar3) {
LAB_0097bf64:
      if (*param_4 == false) {
LAB_0097bfac:
        if (uVar3 < *(uint *)(this + 0xf0)) {
          local_80 = local_8c;
          pVar8 = std::__ndk1::
                  __hash_table<std::__ndk1::__hash_value_type<unsigned_int,unsigned_int>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,unsigned_int>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,unsigned_int>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,unsigned_int>>>
                  ::
                  __emplace_unique_key_args<unsigned_int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<unsigned_int_const&>,std::__ndk1::tuple<>>
                            ((uint *)(this + 0xf8),(piecewise_construct_t *)local_8c,
                             (tuple *)&DAT_00519f41,(tuple *)&local_80);
          *(uint *)((ulong)pVar8 + 0x14) = uVar2;
        }
        *(int *)(puVar17 + 4) = *(int *)(puVar17 + 4) + 1;
        *(uint *)(param_1 + 0x208) = uVar2;
        *(uint *)(param_1 + 0x20c) = uVar4;
        *(undefined4 *)(param_1 + 0x214) = 0xffffffff;
        ppMVar12 = *(MeshSplitShape ***)(this + 0x68);
        if (ppMVar12 == *(MeshSplitShape ***)(this + 0x70)) {
          __src = *(void **)(this + 0x60);
          __n = (long)ppMVar12 - (long)__src;
          uVar10 = ((long)__n >> 3) + 1;
          if (uVar10 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          if (uVar10 <= (ulong)((long)__n >> 2)) {
            uVar10 = (long)__n >> 2;
          }
          if (0x7ffffffffffffff7 < __n) {
            uVar10 = 0x1fffffffffffffff;
          }
          if (uVar10 == 0) {
            __dest = (void *)0x0;
          }
          else {
            if (uVar10 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
            }
            __dest = operator_new(uVar10 << 3);
          }
          ppMVar12 = (MeshSplitShape **)((long)__dest + ((long)__n >> 3) * 8);
          *ppMVar12 = param_1;
          if (0 < (long)__n) {
            memcpy(__dest,__src,__n);
          }
          *(void **)(this + 0x60) = __dest;
          *(MeshSplitShape ***)(this + 0x68) = ppMVar12 + 1;
          *(void **)(this + 0x70) = (void *)((long)__dest + uVar10 * 8);
          if (__src != (void *)0x0) {
            operator_delete(__src);
          }
        }
        else {
          *ppMVar12 = param_1;
          *(MeshSplitShape ***)(this + 0x68) = ppMVar12 + 1;
        }
        Mutex::leaveCriticalSection();
        lVar9 = RawTransformGroup::getPhysicsObject();
        uVar2 = *(uint *)(lVar9 + 8) & 3;
        if (uVar2 != 0) {
          ScenegraphPhysicsContextManager::getInstance();
          pBVar11 = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
          Bt2ScenegraphPhysicsContext::enqueueRemoveTransformGroup
                    (pBVar11,(TransformGroup *)param_1,true);
        }
        lVar9 = RawTransformGroup::getPhysicsObject();
        plVar1 = (long *)(*(long *)(param_1 + 0x170) + 0x168);
        plVar6 = (long *)0x0;
        if (*(long *)(param_1 + 0x170) != 0) {
          (**(code **)(*plVar1 + 8))(plVar1);
          plVar6 = plVar1;
        }
        if (*(undefined8 **)(lVar9 + 0x50) != (undefined8 *)0x0) {
          (**(code **)**(undefined8 **)(lVar9 + 0x50))();
        }
        *(long **)(lVar9 + 0x50) = plVar6;
        fVar20 = 0.0;
        if ((((int)((ulong)(*(long *)(param_1 + 0x30) - (long)*(long **)(param_1 + 0x28)) >> 3) != 0
             ) && (lVar9 = **(long **)(param_1 + 0x28), (*(byte *)(lVar9 + 0x11) >> 3 & 1) != 0)) &&
           (lVar9 = *(long *)(lVar9 + 0x170), (*(byte *)(lVar9 + 0x31) >> 1 & 1) != 0)) {
          fVar20 = (float)((ulong)(*(long *)(lVar9 + 0x98) - *(long *)(lVar9 + 0x90)) >> 2 &
                          0xffffffff) * 0.25 * 0.1;
        }
        fVar21 = (float)NEON_fminnm(fVar20,0x3dcccccd);
        fVar20 = (float)NEON_fminnm(fVar20,0x3d4ccccd);
        this_00 = (Bt2PhysicsRBObject *)RawTransformGroup::getPhysicsObject();
        Bt2PhysicsRBObject::setAngularDamping(this_00,fVar20 + 0.1);
        Bt2PhysicsRBObject::setRollingFriction(this_00,fVar21 + 0.17);
        if (uVar2 != 0) {
          ScenegraphPhysicsContextManager::getInstance();
          pBVar11 = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
          Bt2ScenegraphPhysicsContext::enqueueAddTransformGroup(pBVar11,(TransformGroup *)param_1);
        }
        goto LAB_0097bf74;
      }
      goto LAB_0097bf70;
    }
  }
  else {
    do {
      if (*(uint *)(ppMVar16 + 4) >= uVar3) {
        ppMVar13 = ppMVar16;
      }
      ppMVar16 = (MeshSplitManager **)ppMVar16[*(uint *)(ppMVar16 + 4) < uVar3];
    } while (ppMVar16 != (MeshSplitManager **)0x0);
    if ((ppMVar13 == ppMVar14) || (uVar3 < *(uint *)(ppMVar13 + 4))) goto LAB_0097bed8;
    if ((uVar4 < *(uint *)(ppMVar13 + 6)) &&
       (ppMVar13 = ppMVar13 + 5,
       (*(byte *)(*(long *)(*ppMVar13 + ((ulong)(uVar4 >> 0x10) & 0xfff8)) +
                 ((ulong)(uVar4 >> 3) & 0xffff)) >> (ulong)(uVar4 & 7) & 1) != 0)) {
      iVar7 = LoadedFileId::findFirstSplitShape((LoadedFileId *)ppMVar13,uVar4);
      if (iVar7 < 0) goto LAB_0097bf64;
      *param_4 = true;
      uVar10 = createLoadedShapes(this,param_1,(LoadedFileId *)ppMVar13,iVar7,uVar2,uVar4,true,
                                  param_2);
      if ((uVar10 & 1) != 0) goto LAB_0097bf64;
      *param_4 = false;
      goto LAB_0097bfac;
    }
  }
  *param_4 = true;
LAB_0097bf70:
  Mutex::leaveCriticalSection();
LAB_0097bf74:
  if (*(long *)(lVar5 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


