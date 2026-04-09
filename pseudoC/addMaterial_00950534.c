// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addMaterial
// Entry Point: 00950534
// Size: 436 bytes
// Signature: undefined __thiscall addMaterial(MaterialManager * this, GsMaterial * param_1, MaterialDesc * param_2, GsMaterial * * param_3)


/* MaterialManager::addMaterial(GsMaterial*, MaterialDesc const&, GsMaterial**) */

bool __thiscall
MaterialManager::addMaterial
          (MaterialManager *this,GsMaterial *param_1,MaterialDesc *param_2,GsMaterial **param_3)

{
  long lVar1;
  bool bVar2;
  pair pVar3;
  undefined ***pppuVar5;
  GsMaterial *pGVar6;
  long *plVar7;
  long **pplVar8;
  long **pplVar9;
  long **pplVar10;
  long **pplVar11;
  undefined **local_2b8;
  undefined auStack_2b0 [576];
  GsMaterial *local_70;
  long local_68;
  ulong uVar4;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  Mutex::enterCriticalSection();
  local_2b8 = &PTR__MaterialDesc_00fd99f8;
  memcpy(auStack_2b0,param_2 + 8,0x23c);
  pppuVar5 = &local_2b8;
  local_70 = param_1;
  pVar3 = std::__ndk1::
          __tree<std::__ndk1::__value_type<MaterialDesc,GsMaterial*>,std::__ndk1::__map_value_compare<MaterialDesc,std::__ndk1::__value_type<MaterialDesc,GsMaterial*>,std::__ndk1::less<MaterialDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<MaterialDesc,GsMaterial*>>>
          ::__emplace_unique_key_args<MaterialDesc,std::__ndk1::pair<MaterialDesc,GsMaterial*>>
                    ((__tree<std::__ndk1::__value_type<MaterialDesc,GsMaterial*>,std::__ndk1::__map_value_compare<MaterialDesc,std::__ndk1::__value_type<MaterialDesc,GsMaterial*>,std::__ndk1::less<MaterialDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<MaterialDesc,GsMaterial*>>>
                      *)(this + 8),(MaterialDesc *)pppuVar5,(pair *)&local_2b8);
  uVar4 = (ulong)pVar3;
  if (((ulong)pppuVar5 & 0xff) == 0) {
    if ((param_3 == (GsMaterial **)0x0) ||
       (pGVar6 = *(GsMaterial **)(uVar4 + 0x268), pGVar6 == param_1)) {
      bVar2 = false;
      goto LAB_009506a8;
    }
  }
  else {
    pplVar8 = (long **)(this + 0x28);
    pplVar9 = (long **)*pplVar8;
    pplVar11 = pplVar8;
    if (pplVar9 != (long **)0x0) {
      pplVar8 = (long **)(this + 0x28);
      do {
        while (pplVar10 = pplVar9, pplVar11 = pplVar10, param_1 < pplVar10[4]) {
          pplVar8 = pplVar10;
          pplVar9 = (long **)*pplVar10;
          if ((long **)*pplVar10 == (long **)0x0) {
            plVar7 = *pplVar10;
            goto joined_r0x0095062c;
          }
        }
        if (param_1 <= pplVar10[4]) break;
        pplVar8 = pplVar10 + 1;
        pplVar9 = (long **)*pplVar8;
      } while ((long **)*pplVar8 != (long **)0x0);
    }
    plVar7 = *pplVar8;
    pplVar10 = pplVar8;
joined_r0x0095062c:
    if (plVar7 == (long *)0x0) {
      plVar7 = (long *)operator_new(0x30);
      plVar7[4] = (long)param_1;
      plVar7[5] = uVar4;
      *plVar7 = 0;
      plVar7[1] = 0;
      plVar7[2] = (long)pplVar11;
      *pplVar10 = plVar7;
      if (**(long **)(this + 0x20) != 0) {
        *(long *)(this + 0x20) = **(long **)(this + 0x20);
        plVar7 = *pplVar10;
      }
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(this + 0x28),(__tree_node_base *)plVar7);
      *(long *)(this + 0x30) = *(long *)(this + 0x30) + 1;
    }
    else {
      plVar7[5] = uVar4;
    }
    if (param_3 == (GsMaterial **)0x0) {
      bVar2 = true;
      goto LAB_009506a8;
    }
    pGVar6 = (GsMaterial *)0x0;
  }
  bVar2 = ((ulong)pppuVar5 & 0xff) != 0;
  *param_3 = pGVar6;
LAB_009506a8:
  Mutex::leaveCriticalSection();
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


