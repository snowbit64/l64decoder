// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addInternal
// Entry Point: 00b2be3c
// Size: 904 bytes
// Signature: undefined __thiscall addInternal(ResourceManager * this, char * param_1, ResourceDesc * param_2, Resource * param_3)


/* ResourceManager::addInternal(char const*, ResourceDesc const*, Resource*) */

void __thiscall
ResourceManager::addInternal
          (ResourceManager *this,char *param_1,ResourceDesc *param_2,Resource *param_3)

{
  long lVar1;
  undefined4 uVar2;
  size_t sVar3;
  __tree_node_base **pp_Var4;
  void *__dest;
  undefined8 *puVar5;
  ulong __n;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  void *pvVar9;
  ulong uVar10;
  undefined8 local_c8;
  size_t sStack_c0;
  void *local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  ResourceDesc *pRStack_a8;
  ulong local_a0;
  size_t sStack_98;
  void *local_90;
  undefined8 local_88;
  ResourceDesc *pRStack_80;
  Resource *local_78;
  __tree_end_node *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  puVar6 = (undefined8 *)(this + 0x20);
  puVar7 = (undefined8 *)*puVar6;
  puVar5 = puVar6;
  if (puVar7 != (undefined8 *)0x0) {
    puVar6 = (undefined8 *)(this + 0x20);
    do {
      while (puVar8 = puVar7, puVar5 = puVar8, param_3 < (Resource *)puVar8[4]) {
        puVar6 = puVar8;
        puVar7 = (undefined8 *)*puVar8;
        if ((undefined8 *)*puVar8 == (undefined8 *)0x0) {
          puVar7 = (undefined8 *)*puVar8;
          goto joined_r0x00b2bec8;
        }
      }
      if (param_3 <= (Resource *)puVar8[4]) break;
      puVar6 = puVar8 + 1;
      puVar7 = (undefined8 *)*puVar6;
    } while ((undefined8 *)*puVar6 != (undefined8 *)0x0);
  }
  puVar7 = (undefined8 *)*puVar6;
  puVar8 = puVar6;
joined_r0x00b2bec8:
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)operator_new(0x40);
    puVar7[4] = param_3;
    puVar7[5] = 0;
    puVar7[6] = 0;
    puVar7[7] = 0;
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = puVar5;
    *puVar8 = puVar7;
    puVar5 = puVar7;
    if (**(long **)(this + 0x18) != 0) {
      *(long *)(this + 0x18) = **(long **)(this + 0x18);
      puVar5 = (undefined8 *)*puVar8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 0x20),(__tree_node_base *)puVar5);
    *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
  }
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) goto LAB_00b2c178;
  if ((long *)puVar7[5] == (long *)puVar7[6]) {
    if (param_2 != (ResourceDesc *)0x0) {
      param_2 = (ResourceDesc *)(**(code **)(*(long *)param_2 + 0x10))(param_2);
    }
  }
  else {
    param_2 = *(ResourceDesc **)(*(long *)puVar7[5] + 0x40);
  }
  uVar2 = Resource::getResourceType();
  sVar3 = strlen(param_1);
  if (0xffffffffffffffef < sVar3) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar3 < 0x17) {
    pvVar9 = (void *)((ulong)&local_c8 | 1);
    local_c8 = CONCAT71(local_c8._1_7_,(char)((int)sVar3 << 1));
    if (sVar3 != 0) goto LAB_00b2bfcc;
  }
  else {
    uVar10 = sVar3 + 0x10 & 0xfffffffffffffff0;
    pvVar9 = operator_new(uVar10);
    local_c8 = uVar10 | 1;
    sStack_c0 = sVar3;
    local_b8 = pvVar9;
LAB_00b2bfcc:
    memcpy(pvVar9,param_1,sVar3);
  }
  sStack_98 = sStack_c0;
  local_a0 = local_c8;
  *(undefined *)((long)pvVar9 + sVar3) = 0;
  local_c8 = 0;
  sStack_c0 = 0;
  local_88 = CONCAT44(uStack_ac,uVar2);
  local_90 = local_b8;
  local_b8 = (void *)0x0;
                    /* try { // try from 00b2c010 to 00b2c06b has its CatchHandler @ 00b2c1c4 */
  local_b0 = uVar2;
  pRStack_a8 = param_2;
  pRStack_80 = param_2;
  local_78 = param_3;
  pp_Var4 = std::__ndk1::
            __tree<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::__map_value_compare<ResourceManager::InternalResourceDesc,std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::less<ResourceManager::InternalResourceDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>>>
            ::__find_equal<ResourceManager::InternalResourceDesc>
                      ((__tree<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::__map_value_compare<ResourceManager::InternalResourceDesc,std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::less<ResourceManager::InternalResourceDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>>>
                        *)this,&local_70,(InternalResourceDesc *)&local_a0);
  puVar5 = (undefined8 *)*pp_Var4;
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)operator_new(0x50);
    pvVar9 = local_90;
    sVar3 = sStack_98;
    uVar10 = local_a0;
    sStack_98 = 0;
    local_90 = (void *)0x0;
    local_a0 = 0;
    puVar5[5] = sVar3;
    puVar5[4] = uVar10;
    puVar5[6] = pvVar9;
    puVar5[9] = local_78;
    puVar5[8] = pRStack_80;
    puVar5[7] = local_88;
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = local_70;
    *pp_Var4 = (__tree_node_base *)puVar5;
    puVar6 = puVar5;
    if (**(long **)this != 0) {
      *(long *)this = **(long **)this;
      puVar6 = (undefined8 *)*pp_Var4;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),(__tree_node_base *)puVar6);
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
  }
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  if ((local_c8 & 1) != 0) {
    operator_delete(local_b8);
  }
  puVar6 = (undefined8 *)puVar7[6];
  if (puVar6 == (undefined8 *)puVar7[7]) {
    pvVar9 = (void *)puVar7[5];
    __n = (long)puVar6 - (long)pvVar9;
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
    puVar6 = (undefined8 *)((long)__dest + ((long)__n >> 3) * 8);
    *puVar6 = puVar5;
    if (0 < (long)__n) {
      memcpy(__dest,pvVar9,__n);
    }
    puVar7[5] = __dest;
    puVar7[6] = puVar6 + 1;
    puVar7[7] = (void *)((long)__dest + uVar10 * 8);
    if (pvVar9 != (void *)0x0) {
      operator_delete(pvVar9);
    }
  }
  else {
    *puVar6 = puVar5;
    puVar7[6] = puVar6 + 1;
  }
LAB_00b2c178:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


