// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: changeMaterial
// Entry Point: 009508d0
// Size: 824 bytes
// Signature: undefined __thiscall changeMaterial(MaterialManager * this, GsMaterial * param_1, MaterialDesc * param_2, CHANGE_MATERIAL_TYPE param_3, GsMaterial * * param_4)


/* MaterialManager::changeMaterial(GsMaterial*, MaterialDesc const&,
   MaterialManager::CHANGE_MATERIAL_TYPE, GsMaterial**) */

undefined4 __thiscall
MaterialManager::changeMaterial
          (MaterialManager *this,GsMaterial *param_1,MaterialDesc *param_2,
          CHANGE_MATERIAL_TYPE param_3,GsMaterial **param_4)

{
  long lVar1;
  pair pVar2;
  undefined ***pppuVar3;
  MaterialManager **ppMVar4;
  MaterialManager *pMVar5;
  long **pplVar6;
  long **pplVar7;
  long **pplVar8;
  long *plVar9;
  MaterialManager **ppMVar10;
  undefined4 uVar11;
  long *plVar12;
  long *plVar13;
  MaterialManager **ppMVar14;
  MaterialManager **ppMVar15;
  undefined **local_2c0;
  undefined auStack_2b8 [576];
  GsMaterial *local_78;
  long local_70;
  
  pppuVar3 = &local_2c0;
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  Mutex::enterCriticalSection();
  ppMVar15 = (MaterialManager **)(this + 0x28);
  ppMVar4 = (MaterialManager **)*ppMVar15;
  ppMVar14 = ppMVar15;
  if (ppMVar4 != (MaterialManager **)0x0) {
    do {
      if (ppMVar4[4] >= param_1) {
        ppMVar14 = ppMVar4;
      }
      ppMVar4 = (MaterialManager **)ppMVar4[ppMVar4[4] < param_1];
    } while (ppMVar4 != (MaterialManager **)0x0);
    if ((ppMVar14 != ppMVar15) && (ppMVar14[4] <= param_1)) {
      if (param_3 == 3) {
        plVar12 = (long *)ppMVar14[5];
        plVar13 = (long *)(this + 0x10);
        if (plVar12 == plVar13) {
LAB_00950a68:
          uVar11 = 1;
          goto LAB_0095095c;
        }
        pplVar8 = (long **)plVar12[1];
        if ((long **)plVar12[1] == (long **)0x0) {
          pplVar8 = (long **)(plVar12 + 2);
          pplVar6 = (long **)*pplVar8;
          if (*pplVar6 != plVar12) {
            do {
              plVar9 = *pplVar8;
              pplVar8 = (long **)(plVar9 + 2);
              pplVar6 = (long **)*pplVar8;
            } while (*pplVar6 != plVar9);
          }
        }
        else {
          do {
            pplVar6 = pplVar8;
            pplVar8 = (long **)*pplVar6;
          } while (*pplVar6 != (long *)0x0);
        }
        if (*(long **)(this + 8) == plVar12) {
          *(long ***)(this + 8) = pplVar6;
        }
        *(long *)(this + 0x18) = *(long *)(this + 0x18) + -1;
        std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
                  (*(__tree_node_base **)(this + 0x10),(__tree_node_base *)plVar12);
LAB_00950b90:
        operator_delete(plVar12);
      }
      else {
        pplVar8 = (long **)(this + 8);
        local_2c0 = &PTR__MaterialDesc_00fd99f8;
        memcpy(auStack_2b8,param_2 + 8,0x23c);
        local_78 = param_1;
        pVar2 = std::__ndk1::
                __tree<std::__ndk1::__value_type<MaterialDesc,GsMaterial*>,std::__ndk1::__map_value_compare<MaterialDesc,std::__ndk1::__value_type<MaterialDesc,GsMaterial*>,std::__ndk1::less<MaterialDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<MaterialDesc,GsMaterial*>>>
                ::
                __emplace_unique_key_args<MaterialDesc,std::__ndk1::pair<MaterialDesc,GsMaterial*>>
                          ((__tree<std::__ndk1::__value_type<MaterialDesc,GsMaterial*>,std::__ndk1::__map_value_compare<MaterialDesc,std::__ndk1::__value_type<MaterialDesc,GsMaterial*>,std::__ndk1::less<MaterialDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<MaterialDesc,GsMaterial*>>>
                            *)pplVar8,(MaterialDesc *)&local_2c0,(pair *)&local_2c0);
        plVar13 = (long *)(ulong)pVar2;
        if (((ulong)pppuVar3 & 0xff) == 0) {
          pMVar5 = (MaterialManager *)plVar13[0x4d];
          if (pMVar5 == (MaterialManager *)param_1) goto LAB_00950a68;
        }
        else {
          pMVar5 = (MaterialManager *)0x0;
        }
        if (param_4 != (GsMaterial **)0x0) {
          *param_4 = (GsMaterial *)pMVar5;
        }
        if ((param_3 != 1) && (pMVar5 != (MaterialManager *)0x0)) {
          if (param_3 == 2) {
            plVar13 = (long *)ppMVar14[5];
            if (plVar13 != (long *)(this + 0x10)) {
              pplVar6 = (long **)plVar13[1];
              if ((long **)plVar13[1] == (long **)0x0) {
                pplVar6 = (long **)(plVar13 + 2);
                pplVar7 = (long **)*pplVar6;
                if (*pplVar7 != plVar13) {
                  do {
                    plVar12 = *pplVar6;
                    pplVar6 = (long **)(plVar12 + 2);
                    pplVar7 = (long **)*pplVar6;
                  } while (*pplVar7 != plVar12);
                }
              }
              else {
                do {
                  pplVar7 = pplVar6;
                  pplVar6 = (long **)*pplVar7;
                } while (*pplVar7 != (long *)0x0);
              }
              if (*pplVar8 == plVar13) {
                *pplVar8 = (long *)pplVar7;
              }
              *(long *)(this + 0x18) = *(long *)(this + 0x18) + -1;
              std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
                        (*(__tree_node_base **)(this + 0x10),(__tree_node_base *)plVar13);
              operator_delete(plVar13);
              uVar11 = 1;
              ppMVar14[5] = this + 0x10;
              goto LAB_0095095c;
            }
            goto LAB_00950a68;
          }
          goto LAB_00950958;
        }
        if (pMVar5 != (MaterialManager *)0x0) {
          ppMVar10 = *(MaterialManager ***)(this + 0x28);
          ppMVar4 = ppMVar15;
          if (ppMVar10 == (MaterialManager **)0x0) {
LAB_00950ab0:
            ppMVar4 = ppMVar15;
          }
          else {
            do {
              if (ppMVar10[4] >= pMVar5) {
                ppMVar4 = ppMVar10;
              }
              ppMVar10 = (MaterialManager **)ppMVar10[ppMVar10[4] < pMVar5];
            } while (ppMVar10 != (MaterialManager **)0x0);
            if ((ppMVar4 == ppMVar15) || (pMVar5 < ppMVar4[4])) goto LAB_00950ab0;
          }
          ppMVar4[5] = this + 0x10;
          plVar13[0x4d] = (long)param_1;
        }
        plVar12 = (long *)ppMVar14[5];
        if (plVar12 != (long *)(this + 0x10)) {
          pplVar6 = (long **)plVar12[1];
          if ((long **)plVar12[1] == (long **)0x0) {
            pplVar6 = (long **)(plVar12 + 2);
            pplVar7 = (long **)*pplVar6;
            if (*pplVar7 != plVar12) {
              do {
                plVar9 = *pplVar6;
                pplVar6 = (long **)(plVar9 + 2);
                pplVar7 = (long **)*pplVar6;
              } while (*pplVar7 != plVar9);
            }
          }
          else {
            do {
              pplVar7 = pplVar6;
              pplVar6 = (long **)*pplVar7;
            } while ((long **)*pplVar7 != (long **)0x0);
          }
          if (*pplVar8 == plVar12) {
            *pplVar8 = (long *)pplVar7;
          }
          *(long *)(this + 0x18) = *(long *)(this + 0x18) + -1;
          std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
                    (*(__tree_node_base **)(this + 0x10),(__tree_node_base *)plVar12);
          goto LAB_00950b90;
        }
      }
      uVar11 = 1;
      ppMVar14[5] = (MaterialManager *)plVar13;
      goto LAB_0095095c;
    }
  }
LAB_00950958:
  uVar11 = 0;
LAB_0095095c:
  Mutex::leaveCriticalSection();
  if (*(long *)(lVar1 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar11;
}


