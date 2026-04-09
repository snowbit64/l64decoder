// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: find<ResourceManager::InternalResourceDesc>
// Entry Point: 00b2ca18
// Size: 248 bytes
// Signature: __tree_iterator __thiscall find<ResourceManager::InternalResourceDesc>(__tree<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::__map_value_compare<ResourceManager::InternalResourceDesc,std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::less<ResourceManager::InternalResourceDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>>> * this, InternalResourceDesc * param_1)


/* std::__ndk1::__tree_iterator<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,
   Resource*>,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,
   Resource*>, void*>*, long>
   std::__ndk1::__tree<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc, Resource*>,
   std::__ndk1::__map_value_compare<ResourceManager::InternalResourceDesc,
   std::__ndk1::__value_type<ResourceManager::InternalResourceDesc, Resource*>,
   std::__ndk1::less<ResourceManager::InternalResourceDesc>, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,
   Resource*> > >::find<ResourceManager::InternalResourceDesc>(ResourceManager::InternalResourceDesc
   const&) */

__tree_iterator __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::__map_value_compare<ResourceManager::InternalResourceDesc,std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::less<ResourceManager::InternalResourceDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>>>
::find<ResourceManager::InternalResourceDesc>
          (__tree<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::__map_value_compare<ResourceManager::InternalResourceDesc,std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::less<ResourceManager::InternalResourceDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>>>
           *this,InternalResourceDesc *param_1)

{
  __tree_node *p_Var1;
  __tree_node *p_Var2;
  __tree_node *__n;
  byte bVar3;
  InternalResourceDesc IVar4;
  __tree_iterator _Var5;
  int iVar6;
  ulong uVar8;
  __tree_node *__s2;
  InternalResourceDesc *__s1;
  __tree_node **pp_Var9;
  __tree_node **pp_Var7;
  
  pp_Var9 = (__tree_node **)(this + 8);
  _Var5 = __lower_bound<ResourceManager::InternalResourceDesc>
                    (this,param_1,*pp_Var9,(__tree_end_node *)pp_Var9);
  pp_Var7 = (__tree_node **)(ulong)_Var5;
  if (pp_Var9 != pp_Var7) {
    if (*(uint *)(param_1 + 0x18) == *(uint *)(pp_Var7 + 7)) {
      bVar3 = *(byte *)(pp_Var7 + 4);
      IVar4 = *param_1;
      p_Var1 = (__tree_node *)(ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        p_Var1 = pp_Var7[5];
      }
      p_Var2 = (__tree_node *)(ulong)((byte)IVar4 >> 1);
      if (((byte)IVar4 & 1) != 0) {
        p_Var2 = *(__tree_node **)(param_1 + 8);
      }
      __n = p_Var1;
      if (p_Var2 <= p_Var1) {
        __n = p_Var2;
      }
      if (__n == (__tree_node *)0x0) {
LAB_00b2cab4:
        iVar6 = 1;
        if (p_Var2 < p_Var1) {
          iVar6 = -1;
        }
        if (p_Var1 == p_Var2) {
          if (((*(long **)(param_1 + 0x20) == (long *)0x0) || (pp_Var7[8] == (__tree_node *)0x0)) ||
             (uVar8 = (**(code **)(**(long **)(param_1 + 0x20) + 0x18))(), (uVar8 & 1) == 0))
          goto LAB_00b2caf0;
          goto LAB_00b2caec;
        }
      }
      else {
        __s2 = pp_Var7[6];
        __s1 = *(InternalResourceDesc **)(param_1 + 0x10);
        if ((bVar3 & 1) == 0) {
          __s2 = (__tree_node *)((long)pp_Var7 + 0x21);
        }
        if (((byte)IVar4 & 1) == 0) {
          __s1 = param_1 + 1;
        }
        iVar6 = memcmp(__s1,__s2,(size_t)__n);
        if (iVar6 == 0) goto LAB_00b2cab4;
      }
      if (-1 < iVar6) goto LAB_00b2caf0;
    }
    else if (*(uint *)(pp_Var7 + 7) <= *(uint *)(param_1 + 0x18)) goto LAB_00b2caf0;
  }
LAB_00b2caec:
  pp_Var7 = pp_Var9;
LAB_00b2caf0:
  return (__tree_iterator)pp_Var7;
}


