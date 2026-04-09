// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clone
// Entry Point: 00a5bac8
// Size: 1192 bytes
// Signature: undefined __cdecl clone(TransformGroup * param_1, map * param_2, vector * param_3, map * param_4, vector * param_5)


/* WARNING: Type propagation algorithm not settling */
/* ScenegraphUtil::clone(TransformGroup*, std::__ndk1::map<TransformGroup*, TransformGroup*,
   std::__ndk1::less<TransformGroup*>, std::__ndk1::allocator<std::__ndk1::pair<TransformGroup*
   const, TransformGroup*> > >&, std::__ndk1::vector<TransformGroup*,
   std::__ndk1::allocator<TransformGroup*> >&, std::__ndk1::map<GsShape*, GsShape*,
   std::__ndk1::less<GsShape*>, std::__ndk1::allocator<std::__ndk1::pair<GsShape* const, GsShape*> >
   >&, std::__ndk1::vector<MeshSplitShape*, std::__ndk1::allocator<MeshSplitShape*> >&) */

long * ScenegraphUtil::clone
                 (TransformGroup *param_1,map *param_2,vector *param_3,map *param_4,vector *param_5)

{
  undefined8 *puVar1;
  void *pvVar2;
  TransformGroup *pTVar3;
  long lVar4;
  size_t __n;
  uint uVar5;
  long **pplVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long **pplVar11;
  void *pvVar12;
  long lVar13;
  long **pplVar14;
  ulong uVar15;
  long **pplVar16;
  
  pplVar16 = (long **)(param_2 + 8);
  pplVar6 = (long **)*pplVar16;
  pplVar11 = pplVar16;
  if (pplVar6 == (long **)0x0) {
LAB_00a5bb38:
    uVar5 = (uint)*(ulong *)(param_1 + 0x10);
    if ((uVar5 >> 0x10 & 1) == 0) {
      if ((uVar5 >> 0xf & 1) == 0) {
        if ((uVar5 >> 0xb & 1) == 0) {
          if ((uVar5 >> 0xd & 1) == 0) {
            if ((uVar5 >> 0xe & 1) == 0) {
              if ((uVar5 >> 6 & 1) == 0) {
                if ((*(ulong *)(param_1 + 0x10) >> 0x3b & 1) == 0) {
                  if ((uVar5 >> 5 & 1) == 0) goto LAB_00a5bb5c;
                  plVar10 = (long *)TransformGroup::clone();
                }
                else {
                  plVar10 = (long *)NoteNode::clone();
                }
              }
              else {
                plVar10 = (long *)LODTransformGroup::clone();
              }
            }
            else {
              plVar10 = (long *)AudioSource::clone();
            }
          }
          else {
            plVar10 = (long *)LightSource::clone();
          }
        }
        else {
          plVar10 = (long *)(**(code **)(*(long *)param_1 + 0x38))
                                      (param_1,*(undefined8 *)(param_1 + 8),0,0,1);
          pplVar11 = (long **)(param_4 + 8);
          pplVar14 = (long **)*pplVar11;
          pplVar6 = pplVar11;
          if (pplVar14 != (long **)0x0) {
            pplVar11 = (long **)(param_4 + 8);
            do {
              while (pplVar6 = pplVar14, param_1 < pplVar6[4]) {
                pplVar11 = pplVar6;
                pplVar14 = (long **)*pplVar6;
                if ((long **)*pplVar6 == (long **)0x0) {
                  plVar7 = *pplVar6;
                  goto joined_r0x00a5be44;
                }
              }
              if (param_1 <= pplVar6[4]) break;
              pplVar11 = pplVar6 + 1;
              pplVar14 = (long **)*pplVar11;
            } while ((long **)*pplVar11 != (long **)0x0);
          }
          plVar7 = *pplVar11;
joined_r0x00a5be44:
          if (plVar7 == (long *)0x0) {
            plVar7 = (long *)operator_new(0x30);
            plVar7[4] = (long)param_1;
            plVar7[5] = (long)plVar10;
            *plVar7 = 0;
            plVar7[1] = 0;
            plVar7[2] = (long)pplVar6;
            *pplVar11 = plVar7;
            if (**(long **)param_4 != 0) {
              *(long *)param_4 = **(long **)param_4;
              plVar7 = *pplVar11;
            }
            std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                      (*(__tree_node_base **)(param_4 + 8),(__tree_node_base *)plVar7);
            *(long *)(param_4 + 0x10) = *(long *)(param_4 + 0x10) + 1;
          }
          if (((byte)param_1[0x12] >> 2 & 1) != 0) {
            pplVar11 = *(long ***)(param_5 + 8);
            if (pplVar11 < *(long ***)(param_5 + 0x10)) {
              *pplVar11 = plVar10;
              *(long ***)(param_5 + 8) = pplVar11 + 1;
            }
            else {
              pvVar12 = *(void **)param_5;
              __n = (long)pplVar11 - (long)pvVar12;
              uVar8 = ((long)__n >> 3) + 1;
              if (uVar8 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                std::__ndk1::__vector_base_common<true>::__throw_length_error();
              }
              uVar15 = (long)*(long ***)(param_5 + 0x10) - (long)pvVar12;
              uVar9 = (long)uVar15 >> 2;
              if (uVar8 <= uVar9) {
                uVar8 = uVar9;
              }
              if (0x7ffffffffffffff7 < uVar15) {
                uVar8 = 0x1fffffffffffffff;
              }
              if (uVar8 == 0) {
                pvVar2 = (void *)0x0;
              }
              else {
                if (uVar8 >> 0x3d != 0) goto LAB_00a5bf5c;
                pvVar2 = operator_new(uVar8 << 3);
              }
              pplVar11 = (long **)((long)pvVar2 + ((long)__n >> 3) * 8);
              *pplVar11 = plVar10;
              if (0 < (long)__n) {
                memcpy(pvVar2,pvVar12,__n);
              }
              *(void **)param_5 = pvVar2;
              *(long ***)(param_5 + 8) = pplVar11 + 1;
              *(void **)(param_5 + 0x10) = (void *)((long)pvVar2 + uVar8 * 8);
              if (pvVar12 != (void *)0x0) {
                operator_delete(pvVar12);
              }
            }
          }
        }
      }
      else {
        plVar10 = (long *)Camera::clone();
      }
    }
    else {
      plVar10 = (long *)NavigationMeshScenegraphNode::clone();
    }
    if (plVar10 != (long *)0x0) {
      if (*pplVar16 == (long *)0x0) {
        plVar7 = *pplVar16;
        pplVar11 = pplVar16;
      }
      else {
        pplVar6 = (long **)*pplVar16;
        pplVar11 = (long **)(param_2 + 8);
        do {
          while (pplVar16 = pplVar6, param_1 < (TransformGroup *)pplVar16[4]) {
            pplVar6 = (long **)*pplVar16;
            pplVar11 = pplVar16;
            if ((long **)*pplVar16 == (long **)0x0) {
              plVar7 = *pplVar16;
              goto joined_r0x00a5bbc4;
            }
          }
          if (param_1 <= (TransformGroup *)pplVar16[4]) break;
          pplVar11 = pplVar16 + 1;
          pplVar6 = (long **)*pplVar11;
        } while ((long **)*pplVar11 != (long **)0x0);
        plVar7 = *pplVar11;
      }
joined_r0x00a5bbc4:
      if (plVar7 == (long *)0x0) {
        puVar1 = (undefined8 *)operator_new(0x30);
        puVar1[4] = param_1;
        puVar1[5] = plVar10;
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = pplVar16;
        *pplVar11 = puVar1;
        if (**(long **)param_2 != 0) {
          *(long *)param_2 = **(long **)param_2;
          puVar1 = *pplVar11;
        }
        std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                  (*(__tree_node_base **)(param_2 + 8),(__tree_node_base *)puVar1);
        *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + 1;
      }
      pplVar11 = *(long ***)(param_3 + 8);
      if (pplVar11 == *(long ***)(param_3 + 0x10)) {
        pvVar12 = *(void **)param_3;
        uVar15 = (long)pplVar11 - (long)pvVar12;
        uVar8 = ((long)uVar15 >> 3) + 1;
        if (uVar8 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        if (uVar8 <= (ulong)((long)uVar15 >> 2)) {
          uVar8 = (long)uVar15 >> 2;
        }
        if (0x7ffffffffffffff7 < uVar15) {
          uVar8 = 0x1fffffffffffffff;
        }
        if (uVar8 == 0) {
          pvVar2 = (void *)0x0;
        }
        else {
          if (uVar8 >> 0x3d != 0) {
LAB_00a5bf5c:
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
          pvVar2 = operator_new(uVar8 << 3);
        }
        pplVar11 = (long **)((long)pvVar2 + ((long)uVar15 >> 3) * 8);
        *pplVar11 = plVar10;
        if (0 < (long)uVar15) {
          memcpy(pvVar2,pvVar12,uVar15);
        }
        *(void **)param_3 = pvVar2;
        *(long ***)(param_3 + 8) = pplVar11 + 1;
        *(void **)(param_3 + 0x10) = (void *)((long)pvVar2 + uVar8 * 8);
        if (pvVar12 != (void *)0x0) {
          operator_delete(pvVar12);
        }
      }
      else {
        *pplVar11 = plVar10;
        *(long ***)(param_3 + 8) = pplVar11 + 1;
      }
      uVar8 = *(long *)(param_1 + 0x30) - (long)*(TransformGroup ***)(param_1 + 0x28);
      if ((int)(uVar8 >> 3) != 0) {
        lVar13 = 0;
        pTVar3 = **(TransformGroup ***)(param_1 + 0x28);
        while( true ) {
          if (((pTVar3 != (TransformGroup *)0x0) && (((byte)pTVar3[0x10] >> 5 & 1) != 0)) &&
             (lVar4 = clone(pTVar3,param_2,param_3,param_4,param_5), lVar4 != 0)) {
            (**(code **)(*plVar10 + 0x18))(plVar10,lVar4,0xffffffff);
          }
          if ((uVar8 >> 3 & 0xffffffff) * 8 + -8 == lVar13) break;
          lVar13 = lVar13 + 8;
          pTVar3 = *(TransformGroup **)(*(long *)(param_1 + 0x28) + lVar13);
        }
      }
    }
  }
  else {
    do {
      if (pplVar6[4] >= param_1) {
        pplVar11 = pplVar6;
      }
      pplVar6 = (long **)pplVar6[pplVar6[4] < param_1];
    } while (pplVar6 != (long **)0x0);
    if ((pplVar11 == pplVar16) || (param_1 < pplVar11[4])) goto LAB_00a5bb38;
LAB_00a5bb5c:
    plVar10 = (long *)0x0;
  }
  return plVar10;
}


