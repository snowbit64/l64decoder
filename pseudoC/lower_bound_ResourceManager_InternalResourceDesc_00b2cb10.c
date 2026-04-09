// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __lower_bound<ResourceManager::InternalResourceDesc>
// Entry Point: 00b2cb10
// Size: 264 bytes
// Signature: __tree_iterator __thiscall __lower_bound<ResourceManager::InternalResourceDesc>(__tree<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::__map_value_compare<ResourceManager::InternalResourceDesc,std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::less<ResourceManager::InternalResourceDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>>> * this, InternalResourceDesc * param_1, __tree_node * param_2, __tree_end_node * param_3)


/* std::__ndk1::__tree_iterator<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,
   Resource*>,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,
   Resource*>, void*>*, long>
   std::__ndk1::__tree<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc, Resource*>,
   std::__ndk1::__map_value_compare<ResourceManager::InternalResourceDesc,
   std::__ndk1::__value_type<ResourceManager::InternalResourceDesc, Resource*>,
   std::__ndk1::less<ResourceManager::InternalResourceDesc>, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,
   Resource*> >
   >::__lower_bound<ResourceManager::InternalResourceDesc>(ResourceManager::InternalResourceDesc
   const&, std::__ndk1::__tree_node<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,
   Resource*>, void*>*, std::__ndk1::__tree_end_node<std::__ndk1::__tree_node_base<void*>*>*) */

__tree_iterator __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::__map_value_compare<ResourceManager::InternalResourceDesc,std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::less<ResourceManager::InternalResourceDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>>>
::__lower_bound<ResourceManager::InternalResourceDesc>
          (__tree<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::__map_value_compare<ResourceManager::InternalResourceDesc,std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::less<ResourceManager::InternalResourceDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>>>
           *this,InternalResourceDesc *param_1,__tree_node *param_2,__tree_end_node *param_3)

{
  __tree_node **pp_Var1;
  __tree_node *p_Var2;
  __tree_node *p_Var3;
  __tree_node *__n;
  InternalResourceDesc *__s2;
  InternalResourceDesc IVar4;
  __tree_node _Var5;
  int iVar6;
  ulong uVar7;
  __tree_node *__s1;
  __tree_node **pp_Var8;
  
  if (param_2 != (__tree_node *)0x0) {
    pp_Var8 = (__tree_node **)param_3;
    do {
      while (param_3 = (__tree_end_node *)param_2,
            *(uint *)((long)param_3 + 0x38) != *(uint *)(param_1 + 0x18)) {
        if (*(uint *)((long)param_3 + 0x38) < *(uint *)(param_1 + 0x18)) goto LAB_00b2cbf0;
LAB_00b2cb48:
        pp_Var8 = (__tree_node **)param_3;
        param_2 = (__tree_node *)*(__tree_node ***)param_3;
        if (*(__tree_node ***)param_3 == (__tree_node **)0x0) goto LAB_00b2cbfc;
      }
      IVar4 = *param_1;
      _Var5 = *(__tree_node *)((long)param_3 + 0x20);
      p_Var2 = (__tree_node *)(ulong)((byte)IVar4 >> 1);
      if (((byte)IVar4 & 1) != 0) {
        p_Var2 = *(__tree_node **)(param_1 + 8);
      }
      p_Var3 = (__tree_node *)(ulong)((byte)_Var5 >> 1);
      if (((byte)_Var5 & 1) != 0) {
        p_Var3 = *(__tree_node **)((long)param_3 + 0x28);
      }
      __n = p_Var2;
      if (p_Var3 <= p_Var2) {
        __n = p_Var3;
      }
      if (__n == (__tree_node *)0x0) {
LAB_00b2cbbc:
        iVar6 = 1;
        if (p_Var3 < p_Var2) {
          iVar6 = -1;
        }
        if (p_Var2 == p_Var3) {
          if (((*(long **)((long)param_3 + 0x40) != (long *)0x0) && (*(long *)(param_1 + 0x20) != 0)
              ) && (uVar7 = (**(code **)(**(long **)((long)param_3 + 0x40) + 0x18))(),
                   (uVar7 & 1) != 0)) goto LAB_00b2cbf0;
          goto LAB_00b2cb48;
        }
      }
      else {
        __s1 = *(__tree_node **)((long)param_3 + 0x30);
        __s2 = param_1 + 1;
        if (((byte)IVar4 & 1) != 0) {
          __s2 = *(InternalResourceDesc **)(param_1 + 0x10);
        }
        if (((byte)_Var5 & 1) == 0) {
          __s1 = (__tree_node *)((long)param_3 + 0x21);
        }
        iVar6 = memcmp(__s1,__s2,(size_t)__n);
        if (iVar6 == 0) goto LAB_00b2cbbc;
      }
      if (-1 < iVar6) goto LAB_00b2cb48;
LAB_00b2cbf0:
      pp_Var1 = (__tree_node **)((long)param_3 + 8);
      param_3 = (__tree_end_node *)pp_Var8;
      param_2 = *pp_Var1;
    } while ((__tree_node **)*pp_Var1 != (__tree_node **)0x0);
  }
LAB_00b2cbfc:
  return (__tree_iterator)param_3;
}


