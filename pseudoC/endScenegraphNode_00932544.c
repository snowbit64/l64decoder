// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: endScenegraphNode
// Entry Point: 00932544
// Size: 860 bytes
// Signature: undefined __cdecl endScenegraphNode(void * param_1, char * param_2)


/* I3DSceneGraphFactory::endScenegraphNode(void*, char const*) */

void I3DSceneGraphFactory::endScenegraphNode(void *param_1,char *param_2)

{
  long lVar1;
  bool bVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  void *__dest;
  long lVar6;
  ulong uVar7;
  long **pplVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  void *__src;
  long **pplVar14;
  size_t __n;
  bool local_6c [4];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  lVar6 = *(long *)((long)param_1 + 0x280);
  plVar13 = *(long **)(lVar6 + 0x60);
  if ((*(byte *)((long)plVar13 + 0x12) >> 2 & 1) == 0) goto LAB_00932854;
  lVar6 = *(long *)((long)param_1 + 0x180);
  if (lVar6 != 0) {
    uVar7 = plVar13[0x2e];
    lVar12 = (long)param_1 + 0x180;
    do {
      bVar2 = *(ulong *)(lVar6 + 0x20) < uVar7;
      if (!bVar2) {
        lVar12 = lVar6;
      }
      lVar6 = *(long *)(lVar6 + (ulong)bVar2 * 8);
    } while (lVar6 != 0);
    if (((lVar12 != (long)param_1 + 0x180) && (*(ulong *)(lVar12 + 0x20) <= uVar7)) &&
       (((int)((ulong)(plVar13[6] - (long)(long *)plVar13[5]) >> 3) == 0 ||
        ((lVar6 = *(long *)plVar13[5], (*(byte *)(lVar6 + 0x11) >> 3 & 1) == 0 ||
         ((*(byte *)(*(long *)(lVar6 + 0x170) + 0x31) >> 1 & 1) == 0)))))) {
      plVar10 = *(long **)((long)param_1 + 0x198);
      pplVar14 = (long **)((long)param_1 + 0x198);
      plVar3 = (long *)pplVar14;
      if (plVar10 == (long *)0x0) {
LAB_00932628:
        plVar3 = (long *)MeshSplitAttachmentGeometry::createAttachmentShapeFromChildren
                                   ("attachments",(MeshSplitShape *)plVar13,
                                    *(STREAM_QUEUE *)((long)param_1 + 0x254));
        uVar7 = plVar13[0x2e];
        pplVar8 = *(long ***)((long)param_1 + 0x198);
        while (plVar10 = (long *)pplVar14, pplVar8 != (long **)0x0) {
          while (pplVar14 = pplVar8, pplVar14[4] <= uVar7) {
            if (uVar7 <= pplVar14[4]) goto LAB_009326a4;
            plVar10 = (long *)(pplVar14 + 1);
            pplVar8 = (long **)*plVar10;
            if ((long **)*plVar10 == (long **)0x0) goto LAB_009326a4;
          }
          pplVar8 = (long **)*pplVar14;
        }
LAB_009326a4:
        if (*plVar10 == 0) {
          puVar4 = (undefined8 *)operator_new(0x30);
          puVar4[4] = uVar7;
          puVar4[5] = plVar3;
          *puVar4 = 0;
          puVar4[1] = 0;
          puVar4[2] = pplVar14;
          *plVar10 = (long)puVar4;
          if (**(long **)((long)param_1 + 400) != 0) {
            *(long *)((long)param_1 + 400) = **(long **)((long)param_1 + 400);
            puVar4 = (undefined8 *)*plVar10;
          }
          std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                    (*(__tree_node_base **)((long)param_1 + 0x198),(__tree_node_base *)puVar4);
          *(long *)((long)param_1 + 0x1a0) = *(long *)((long)param_1 + 0x1a0) + 1;
        }
      }
      else {
        do {
          if ((ulong)plVar10[4] >= uVar7) {
            plVar3 = plVar10;
          }
          plVar10 = (long *)plVar10[(ulong)plVar10[4] < uVar7];
        } while (plVar10 != (long *)0x0);
        if (((long **)plVar3 == pplVar14) || (uVar7 < (ulong)plVar3[4])) goto LAB_00932628;
        plVar3 = (long *)plVar3[5];
      }
      uVar7 = plVar13[6] - plVar13[5];
      if ((int)(uVar7 >> 3) != 0) {
        lVar6 = (uVar7 >> 3 & 0xffffffff) * 8 + -8;
        plVar10 = *(long **)(plVar13[5] + lVar6);
        while( true ) {
          if (plVar10 != (long *)0x0) {
            (**(code **)(*plVar10 + 8))();
          }
          if (lVar6 == 0) break;
          lVar6 = lVar6 + -8;
          plVar10 = *(long **)(plVar13[5] + lVar6);
        }
      }
      if (plVar3 != (long *)0x0) {
        uVar5 = (**(code **)(*plVar3 + 0x38))
                          (plVar3,"attachments",0,0,*(undefined4 *)((long)param_1 + 0x254));
        (**(code **)(*plVar13 + 0x18))(plVar13,uVar5,0);
      }
    }
  }
  MeshSplitManager::addShape
            ((MeshSplitManager *)&MeshSplitManager::s_singletonMeshSplitManager,
             (MeshSplitShape *)plVar13,*(STREAM_QUEUE *)((long)param_1 + 0x254),
             *(MeshSplitFileState **)((long)param_1 + 0x1a8),local_6c);
  if (local_6c[0] != false) {
    lVar6 = *(long *)((long)param_1 + 0x280);
    pplVar14 = *(long ***)(lVar6 + 0x50);
    if (pplVar14 < *(long ***)(lVar6 + 0x58)) {
      *pplVar14 = plVar13;
      *(long ***)(lVar6 + 0x50) = pplVar14 + 1;
    }
    else {
      __src = *(void **)(lVar6 + 0x48);
      __n = (long)pplVar14 - (long)__src;
      uVar7 = ((long)__n >> 3) + 1;
      if (uVar7 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      uVar9 = (long)*(long ***)(lVar6 + 0x58) - (long)__src;
      uVar11 = (long)uVar9 >> 2;
      if (uVar7 <= uVar11) {
        uVar7 = uVar11;
      }
      if (0x7ffffffffffffff7 < uVar9) {
        uVar7 = 0x1fffffffffffffff;
      }
      if (uVar7 == 0) {
        __dest = (void *)0x0;
      }
      else {
        if (uVar7 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
        __dest = operator_new(uVar7 << 3);
      }
      pplVar14 = (long **)((long)__dest + ((long)__n >> 3) * 8);
      *pplVar14 = plVar13;
      if (0 < (long)__n) {
        memcpy(__dest,__src,__n);
      }
      *(void **)(lVar6 + 0x48) = __dest;
      *(long ***)(lVar6 + 0x50) = pplVar14 + 1;
      *(void **)(lVar6 + 0x58) = (void *)((long)__dest + uVar7 * 8);
      if (__src != (void *)0x0) {
        operator_delete(__src);
      }
    }
  }
  lVar6 = *(long *)((long)param_1 + 0x280);
LAB_00932854:
  *(long *)(lVar6 + 0x60) = plVar13[4];
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


