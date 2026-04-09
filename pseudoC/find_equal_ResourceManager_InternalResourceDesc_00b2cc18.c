// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __find_equal<ResourceManager::InternalResourceDesc>
// Entry Point: 00b2cc18
// Size: 464 bytes
// Signature: __tree_node_base * * __thiscall __find_equal<ResourceManager::InternalResourceDesc>(__tree<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::__map_value_compare<ResourceManager::InternalResourceDesc,std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::less<ResourceManager::InternalResourceDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>>> * this, __tree_end_node * * param_1, InternalResourceDesc * param_2)


/* std::__ndk1::__tree_node_base<void*>*&
   std::__ndk1::__tree<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc, Resource*>,
   std::__ndk1::__map_value_compare<ResourceManager::InternalResourceDesc,
   std::__ndk1::__value_type<ResourceManager::InternalResourceDesc, Resource*>,
   std::__ndk1::less<ResourceManager::InternalResourceDesc>, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,
   Resource*> >
   >::__find_equal<ResourceManager::InternalResourceDesc>(std::__ndk1::__tree_end_node<std::__ndk1::__tree_node_base<void*>*>*&,
   ResourceManager::InternalResourceDesc const&) */

__tree_node_base ** __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::__map_value_compare<ResourceManager::InternalResourceDesc,std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::less<ResourceManager::InternalResourceDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>>>
::__find_equal<ResourceManager::InternalResourceDesc>
          (__tree<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::__map_value_compare<ResourceManager::InternalResourceDesc,std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::less<ResourceManager::InternalResourceDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>>>
           *this,__tree_end_node **param_1,InternalResourceDesc *param_2)

{
  InternalResourceDesc *pIVar1;
  __tree<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::__map_value_compare<ResourceManager::InternalResourceDesc,std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::less<ResourceManager::InternalResourceDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>>>
  *p_Var2;
  __tree<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::__map_value_compare<ResourceManager::InternalResourceDesc,std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::less<ResourceManager::InternalResourceDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>>>
  *p_Var3;
  __tree<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::__map_value_compare<ResourceManager::InternalResourceDesc,std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::less<ResourceManager::InternalResourceDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>>>
  *p_Var4;
  __tree<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::__map_value_compare<ResourceManager::InternalResourceDesc,std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::less<ResourceManager::InternalResourceDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>>>
  _Var5;
  InternalResourceDesc IVar6;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  __tree<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::__map_value_compare<ResourceManager::InternalResourceDesc,std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::less<ResourceManager::InternalResourceDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>>>
  *p_Var11;
  __tree<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::__map_value_compare<ResourceManager::InternalResourceDesc,std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::less<ResourceManager::InternalResourceDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>>>
  **pp_Var12;
  __tree<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::__map_value_compare<ResourceManager::InternalResourceDesc,std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::less<ResourceManager::InternalResourceDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>>>
  **pp_Var13;
  __tree<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::__map_value_compare<ResourceManager::InternalResourceDesc,std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::less<ResourceManager::InternalResourceDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>>>
  **pp_Var14;
  
  pp_Var12 = (__tree<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::__map_value_compare<ResourceManager::InternalResourceDesc,std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::less<ResourceManager::InternalResourceDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>>>
              **)(this + 8);
  pp_Var13 = (__tree<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::__map_value_compare<ResourceManager::InternalResourceDesc,std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::less<ResourceManager::InternalResourceDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>>>
              **)*pp_Var12;
  if (pp_Var13 ==
      (__tree<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::__map_value_compare<ResourceManager::InternalResourceDesc,std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::less<ResourceManager::InternalResourceDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>>>
       **)0x0) {
    *param_1 = (__tree_end_node *)pp_Var12;
  }
  else {
    pp_Var12 = (__tree<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::__map_value_compare<ResourceManager::InternalResourceDesc,std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::less<ResourceManager::InternalResourceDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>>>
                **)(this + 8);
LAB_00b2cc6c:
    do {
      pp_Var14 = pp_Var13;
      uVar10 = *(uint *)(param_2 + 0x18);
      uVar9 = *(uint *)(pp_Var14 + 7);
      if (uVar10 == uVar9) {
        _Var5 = *(__tree<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::__map_value_compare<ResourceManager::InternalResourceDesc,std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::less<ResourceManager::InternalResourceDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>>>
                  *)(pp_Var14 + 4);
        IVar6 = *param_2;
        p_Var2 = (__tree<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::__map_value_compare<ResourceManager::InternalResourceDesc,std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::less<ResourceManager::InternalResourceDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>>>
                  *)(ulong)((byte)_Var5 >> 1);
        if (((byte)_Var5 & 1) != 0) {
          p_Var2 = pp_Var14[5];
        }
        p_Var3 = (__tree<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::__map_value_compare<ResourceManager::InternalResourceDesc,std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::less<ResourceManager::InternalResourceDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>>>
                  *)(ulong)((byte)IVar6 >> 1);
        if (((byte)IVar6 & 1) != 0) {
          p_Var3 = *(__tree<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::__map_value_compare<ResourceManager::InternalResourceDesc,std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::less<ResourceManager::InternalResourceDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>>>
                     **)(param_2 + 8);
        }
        p_Var4 = p_Var2;
        if (p_Var3 <= p_Var2) {
          p_Var4 = p_Var3;
        }
        if (p_Var4 == (__tree<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::__map_value_compare<ResourceManager::InternalResourceDesc,std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::less<ResourceManager::InternalResourceDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>>>
                       *)0x0) {
LAB_00b2ccd4:
          iVar7 = 1;
          if (p_Var3 < p_Var2) {
            iVar7 = -1;
          }
          if (p_Var2 == p_Var3) {
            if ((*(long **)(param_2 + 0x20) == (long *)0x0) ||
               (pp_Var14[8] ==
                (__tree<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::__map_value_compare<ResourceManager::InternalResourceDesc,std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::less<ResourceManager::InternalResourceDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>>>
                 *)0x0)) goto LAB_00b2cd24;
            uVar8 = (**(code **)(**(long **)(param_2 + 0x20) + 0x18))();
            if ((uVar8 & 1) == 0) {
              uVar9 = *(uint *)(pp_Var14 + 7);
              uVar10 = *(uint *)(param_2 + 0x18);
              goto LAB_00b2cd10;
            }
            goto LAB_00b2cda8;
          }
        }
        else {
          p_Var11 = pp_Var14[6];
          if (((byte)_Var5 & 1) == 0) {
            p_Var11 = (__tree<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::__map_value_compare<ResourceManager::InternalResourceDesc,std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::less<ResourceManager::InternalResourceDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>>>
                       *)((long)pp_Var14 + 0x21);
          }
          pIVar1 = param_2 + 1;
          if (((byte)IVar6 & 1) != 0) {
            pIVar1 = *(InternalResourceDesc **)(param_2 + 0x10);
          }
          iVar7 = memcmp(pIVar1,p_Var11,(size_t)p_Var4);
          if (iVar7 == 0) goto LAB_00b2ccd4;
        }
        if (iVar7 < 0) {
LAB_00b2cda8:
          pp_Var12 = pp_Var14;
          pp_Var13 = (__tree<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::__map_value_compare<ResourceManager::InternalResourceDesc,std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::less<ResourceManager::InternalResourceDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>>>
                      **)*pp_Var14;
          if ((__tree<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::__map_value_compare<ResourceManager::InternalResourceDesc,std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::less<ResourceManager::InternalResourceDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>>>
               **)*pp_Var14 ==
              (__tree<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::__map_value_compare<ResourceManager::InternalResourceDesc,std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::less<ResourceManager::InternalResourceDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>>>
               **)0x0) break;
          goto LAB_00b2cc6c;
        }
LAB_00b2cd24:
        IVar6 = *param_2;
        _Var5 = *(__tree<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::__map_value_compare<ResourceManager::InternalResourceDesc,std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::less<ResourceManager::InternalResourceDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>>>
                  *)(pp_Var14 + 4);
        p_Var2 = (__tree<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::__map_value_compare<ResourceManager::InternalResourceDesc,std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::less<ResourceManager::InternalResourceDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>>>
                  *)(ulong)((byte)IVar6 >> 1);
        if (((byte)IVar6 & 1) != 0) {
          p_Var2 = *(__tree<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::__map_value_compare<ResourceManager::InternalResourceDesc,std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::less<ResourceManager::InternalResourceDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>>>
                     **)(param_2 + 8);
        }
        p_Var3 = (__tree<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::__map_value_compare<ResourceManager::InternalResourceDesc,std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::less<ResourceManager::InternalResourceDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>>>
                  *)(ulong)((byte)_Var5 >> 1);
        if (((byte)_Var5 & 1) != 0) {
          p_Var3 = pp_Var14[5];
        }
        p_Var4 = p_Var2;
        if (p_Var3 <= p_Var2) {
          p_Var4 = p_Var3;
        }
        if (p_Var4 == (__tree<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::__map_value_compare<ResourceManager::InternalResourceDesc,std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::less<ResourceManager::InternalResourceDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>>>
                       *)0x0) {
LAB_00b2cd78:
          iVar7 = 1;
          if (p_Var3 < p_Var2) {
            iVar7 = -1;
          }
          if (p_Var2 == p_Var3) {
            if ((((long *)pp_Var14[8] != (long *)0x0) && (*(long *)(param_2 + 0x20) != 0)) &&
               (uVar8 = (**(code **)(*(long *)pp_Var14[8] + 0x18))(), (uVar8 & 1) != 0))
            goto LAB_00b2cc5c;
            break;
          }
        }
        else {
          p_Var11 = pp_Var14[6];
          pIVar1 = param_2 + 1;
          if (((byte)IVar6 & 1) != 0) {
            pIVar1 = *(InternalResourceDesc **)(param_2 + 0x10);
          }
          if (((byte)_Var5 & 1) == 0) {
            p_Var11 = (__tree<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::__map_value_compare<ResourceManager::InternalResourceDesc,std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::less<ResourceManager::InternalResourceDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>>>
                       *)((long)pp_Var14 + 0x21);
          }
          iVar7 = memcmp(p_Var11,pIVar1,(size_t)p_Var4);
          if (iVar7 == 0) goto LAB_00b2cd78;
        }
        if (-1 < iVar7) break;
      }
      else {
        if (uVar10 < uVar9) goto LAB_00b2cda8;
LAB_00b2cd10:
        if (uVar9 == uVar10) goto LAB_00b2cd24;
        if (uVar10 <= uVar9) break;
      }
LAB_00b2cc5c:
      pp_Var12 = pp_Var14 + 1;
      pp_Var13 = (__tree<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::__map_value_compare<ResourceManager::InternalResourceDesc,std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::less<ResourceManager::InternalResourceDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>>>
                  **)*pp_Var12;
    } while ((__tree<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::__map_value_compare<ResourceManager::InternalResourceDesc,std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::less<ResourceManager::InternalResourceDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>>>
              **)*pp_Var12 !=
             (__tree<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::__map_value_compare<ResourceManager::InternalResourceDesc,std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::less<ResourceManager::InternalResourceDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>>>
              **)0x0);
    *param_1 = (__tree_end_node *)pp_Var14;
  }
  return (__tree_node_base **)pp_Var12;
}


