// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getMaterial
// Entry Point: 00950384
// Size: 412 bytes
// Signature: undefined __thiscall getMaterial(MaterialManager * this, MaterialDesc * param_1)


/* MaterialManager::getMaterial(MaterialDesc const&) */

long * __thiscall MaterialManager::getMaterial(MaterialManager *this,MaterialDesc *param_1)

{
  long lVar1;
  pair pVar2;
  long *this_00;
  undefined ***pppuVar4;
  long *plVar5;
  long **pplVar6;
  long **pplVar7;
  long **pplVar8;
  undefined **local_2a8;
  undefined auStack_2a0 [576];
  undefined8 local_60;
  long local_58;
  ulong uVar3;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  Mutex::enterCriticalSection();
  local_2a8 = &PTR__MaterialDesc_00fd99f8;
  memcpy(auStack_2a0,param_1 + 8,0x23c);
  pppuVar4 = &local_2a8;
  local_60 = 0;
  pVar2 = std::__ndk1::
          __tree<std::__ndk1::__value_type<MaterialDesc,GsMaterial*>,std::__ndk1::__map_value_compare<MaterialDesc,std::__ndk1::__value_type<MaterialDesc,GsMaterial*>,std::__ndk1::less<MaterialDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<MaterialDesc,GsMaterial*>>>
          ::__emplace_unique_key_args<MaterialDesc,std::__ndk1::pair<MaterialDesc,GsMaterial*>>
                    ((__tree<std::__ndk1::__value_type<MaterialDesc,GsMaterial*>,std::__ndk1::__map_value_compare<MaterialDesc,std::__ndk1::__value_type<MaterialDesc,GsMaterial*>,std::__ndk1::less<MaterialDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<MaterialDesc,GsMaterial*>>>
                      *)(this + 8),(MaterialDesc *)pppuVar4,(pair *)&local_2a8);
  uVar3 = (ulong)pVar2;
  if (((ulong)pppuVar4 & 0xff) == 0) {
    this_00 = *(long **)(uVar3 + 0x268);
  }
  else {
    this_00 = (long *)operator_new(0x178);
                    /* try { // try from 00950410 to 00950417 has its CatchHandler @ 00950520 */
    GsMaterial::GsMaterial((GsMaterial *)this_00,param_1);
    GsMaterial::initMaterialAttributes();
    *(long **)(uVar3 + 0x268) = this_00;
    pplVar6 = (long **)(this + 0x28);
    pplVar7 = (long **)*pplVar6;
    pplVar8 = pplVar6;
    if (pplVar7 != (long **)0x0) {
      pplVar6 = (long **)(this + 0x28);
      do {
        while (pplVar8 = pplVar7, this_00 < pplVar8[4]) {
          pplVar6 = pplVar8;
          pplVar7 = (long **)*pplVar8;
          if ((long **)*pplVar8 == (long **)0x0) {
            plVar5 = *pplVar8;
            goto joined_r0x009504b8;
          }
        }
        if (this_00 <= pplVar8[4]) break;
        pplVar6 = pplVar8 + 1;
        pplVar7 = (long **)*pplVar6;
      } while ((long **)*pplVar6 != (long **)0x0);
    }
    plVar5 = *pplVar6;
joined_r0x009504b8:
    if (plVar5 == (long *)0x0) {
      plVar5 = (long *)operator_new(0x30);
      plVar5[4] = (long)this_00;
      plVar5[5] = uVar3;
      *plVar5 = 0;
      plVar5[1] = 0;
      plVar5[2] = (long)pplVar8;
      *pplVar6 = plVar5;
      if (**(long **)(this + 0x20) != 0) {
        *(long *)(this + 0x20) = **(long **)(this + 0x20);
        plVar5 = *pplVar6;
      }
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(this + 0x28),(__tree_node_base *)plVar5);
      *(long *)(this + 0x30) = *(long *)(this + 0x30) + 1;
    }
  }
  FUN_00f276d0(1,this_00 + 5);
  Mutex::leaveCriticalSection();
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return this_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


