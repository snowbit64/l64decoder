// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __find_equal<VisibilityConditionDesc>
// Entry Point: 007a7f64
// Size: 376 bytes
// Signature: __tree_node_base * * __thiscall __find_equal<VisibilityConditionDesc>(__tree<std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>,std::__ndk1::__map_value_compare<VisibilityConditionDesc,std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>,std::__ndk1::less<VisibilityConditionDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>>> * this, __tree_end_node * * param_1, VisibilityConditionDesc * param_2)


/* std::__ndk1::__tree_node_base<void*>*&
   std::__ndk1::__tree<std::__ndk1::__value_type<VisibilityConditionDesc, VisibilityCondition>,
   std::__ndk1::__map_value_compare<VisibilityConditionDesc,
   std::__ndk1::__value_type<VisibilityConditionDesc, VisibilityCondition>,
   std::__ndk1::less<VisibilityConditionDesc>, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<VisibilityConditionDesc, VisibilityCondition> >
   >::__find_equal<VisibilityConditionDesc>(std::__ndk1::__tree_end_node<std::__ndk1::__tree_node_base<void*>*>*&,
   VisibilityConditionDesc const&) */

__tree_node_base ** __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>,std::__ndk1::__map_value_compare<VisibilityConditionDesc,std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>,std::__ndk1::less<VisibilityConditionDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>>>
::__find_equal<VisibilityConditionDesc>
          (__tree<std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>,std::__ndk1::__map_value_compare<VisibilityConditionDesc,std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>,std::__ndk1::less<VisibilityConditionDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>>>
           *this,__tree_end_node **param_1,VisibilityConditionDesc *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  __tree<std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>,std::__ndk1::__map_value_compare<VisibilityConditionDesc,std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>,std::__ndk1::less<VisibilityConditionDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>>>
  _Var5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  __tree<std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>,std::__ndk1::__map_value_compare<VisibilityConditionDesc,std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>,std::__ndk1::less<VisibilityConditionDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>>>
  **pp_Var11;
  bool bVar12;
  __tree_node_base **pp_Var13;
  __tree<std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>,std::__ndk1::__map_value_compare<VisibilityConditionDesc,std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>,std::__ndk1::less<VisibilityConditionDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>>>
  **pp_Var14;
  __tree<std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>,std::__ndk1::__map_value_compare<VisibilityConditionDesc,std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>,std::__ndk1::less<VisibilityConditionDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>>>
  **pp_Var15;
  
  pp_Var13 = (__tree_node_base **)(this + 8);
  if ((__tree<std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>,std::__ndk1::__map_value_compare<VisibilityConditionDesc,std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>,std::__ndk1::less<VisibilityConditionDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>>>
       **)*pp_Var13 ==
      (__tree<std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>,std::__ndk1::__map_value_compare<VisibilityConditionDesc,std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>,std::__ndk1::less<VisibilityConditionDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>>>
       **)0x0) {
    *param_1 = (__tree_end_node *)pp_Var13;
    return pp_Var13;
  }
  uVar1 = *(uint *)(param_2 + 8);
  uVar3 = *(uint *)(param_2 + 0xc);
  uVar2 = *(uint *)(param_2 + 0x10);
  uVar4 = *(uint *)(param_2 + 0x14);
  uVar6 = *(ushort *)param_2;
  uVar7 = *(ushort *)(param_2 + 2);
  uVar8 = *(ushort *)(param_2 + 4);
  uVar9 = *(ushort *)(param_2 + 6);
  _Var5 = *(__tree<std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>,std::__ndk1::__map_value_compare<VisibilityConditionDesc,std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>,std::__ndk1::less<VisibilityConditionDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>>>
            *)(param_2 + 0x18);
  pp_Var14 = (__tree<std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>,std::__ndk1::__map_value_compare<VisibilityConditionDesc,std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>,std::__ndk1::less<VisibilityConditionDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>>>
              **)(this + 8);
  pp_Var11 = (__tree<std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>,std::__ndk1::__map_value_compare<VisibilityConditionDesc,std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>,std::__ndk1::less<VisibilityConditionDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>>>
              **)*pp_Var13;
  do {
    while( true ) {
      pp_Var15 = pp_Var11;
      uVar10 = *(ushort *)((long)pp_Var15 + 0x1c);
      if (uVar6 == uVar10) break;
      if (uVar6 < uVar10) goto LAB_007a8048;
      if (uVar6 <= uVar10) goto LAB_007a80c0;
LAB_007a7fa0:
      pp_Var14 = pp_Var15 + 1;
      pp_Var11 = (__tree<std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>,std::__ndk1::__map_value_compare<VisibilityConditionDesc,std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>,std::__ndk1::less<VisibilityConditionDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>>>
                  **)*pp_Var14;
      if ((__tree<std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>,std::__ndk1::__map_value_compare<VisibilityConditionDesc,std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>,std::__ndk1::less<VisibilityConditionDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>>>
           **)*pp_Var14 ==
          (__tree<std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>,std::__ndk1::__map_value_compare<VisibilityConditionDesc,std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>,std::__ndk1::less<VisibilityConditionDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>>>
           **)0x0) {
LAB_007a80c0:
        *param_1 = (__tree_end_node *)pp_Var15;
        return (__tree_node_base **)pp_Var14;
      }
    }
    uVar10 = *(ushort *)((long)pp_Var15 + 0x1e);
    if (uVar7 != uVar10) {
      if (uVar7 < uVar10) goto LAB_007a8048;
      if (uVar7 <= uVar10) goto LAB_007a80c0;
      goto LAB_007a7fa0;
    }
    bVar12 = *(ushort *)(pp_Var15 + 4) <= uVar8;
    if ((((uVar8 == *(ushort *)(pp_Var15 + 4)) &&
         (bVar12 = *(ushort *)((long)pp_Var15 + 0x22) <= uVar9,
         uVar9 == *(ushort *)((long)pp_Var15 + 0x22))) &&
        (bVar12 = *(uint *)((long)pp_Var15 + 0x24) <= uVar1,
        uVar1 == *(uint *)((long)pp_Var15 + 0x24))) &&
       (((bVar12 = *(uint *)(pp_Var15 + 5) <= uVar3, uVar3 == *(uint *)(pp_Var15 + 5) &&
         (bVar12 = *(uint *)((long)pp_Var15 + 0x2c) <= uVar2,
         uVar2 == *(uint *)((long)pp_Var15 + 0x2c))) &&
        ((bVar12 = *(uint *)(pp_Var15 + 6) <= uVar4, uVar4 == *(uint *)(pp_Var15 + 6) &&
         (bVar12 = (byte)*(__tree<std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>,std::__ndk1::__map_value_compare<VisibilityConditionDesc,std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>,std::__ndk1::less<VisibilityConditionDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>>>
                           *)((long)pp_Var15 + 0x34) <= (byte)_Var5,
         _Var5 == *(__tree<std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>,std::__ndk1::__map_value_compare<VisibilityConditionDesc,std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>,std::__ndk1::less<VisibilityConditionDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>>>
                    *)((long)pp_Var15 + 0x34))))))) {
      if (*(float *)(param_2 + 0x1c) < *(float *)(pp_Var15 + 7)) goto LAB_007a8048;
LAB_007a8058:
      bVar12 = uVar8 <= *(ushort *)(pp_Var15 + 4);
      if ((((*(ushort *)(pp_Var15 + 4) == uVar8) &&
           (bVar12 = uVar9 <= *(ushort *)((long)pp_Var15 + 0x22),
           *(ushort *)((long)pp_Var15 + 0x22) == uVar9)) &&
          ((bVar12 = uVar1 <= *(uint *)((long)pp_Var15 + 0x24),
           *(uint *)((long)pp_Var15 + 0x24) == uVar1 &&
           (((bVar12 = uVar3 <= *(uint *)(pp_Var15 + 5), *(uint *)(pp_Var15 + 5) == uVar3 &&
             (bVar12 = uVar2 <= *(uint *)((long)pp_Var15 + 0x2c),
             *(uint *)((long)pp_Var15 + 0x2c) == uVar2)) &&
            (bVar12 = uVar4 <= *(uint *)(pp_Var15 + 6), *(uint *)(pp_Var15 + 6) == uVar4)))))) &&
         (bVar12 = (byte)_Var5 <=
                   (byte)*(__tree<std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>,std::__ndk1::__map_value_compare<VisibilityConditionDesc,std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>,std::__ndk1::less<VisibilityConditionDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>>>
                           *)((long)pp_Var15 + 0x34),
         *(__tree<std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>,std::__ndk1::__map_value_compare<VisibilityConditionDesc,std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>,std::__ndk1::less<VisibilityConditionDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>>>
           *)((long)pp_Var15 + 0x34) == _Var5)) {
        if (*(float *)(param_2 + 0x1c) <= *(float *)(pp_Var15 + 7)) goto LAB_007a80c0;
      }
      else if (bVar12) goto LAB_007a80c0;
      goto LAB_007a7fa0;
    }
    if (bVar12) goto LAB_007a8058;
LAB_007a8048:
    pp_Var14 = pp_Var15;
    pp_Var11 = (__tree<std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>,std::__ndk1::__map_value_compare<VisibilityConditionDesc,std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>,std::__ndk1::less<VisibilityConditionDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>>>
                **)*pp_Var15;
    if ((__tree<std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>,std::__ndk1::__map_value_compare<VisibilityConditionDesc,std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>,std::__ndk1::less<VisibilityConditionDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>>>
         **)*pp_Var15 ==
        (__tree<std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>,std::__ndk1::__map_value_compare<VisibilityConditionDesc,std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>,std::__ndk1::less<VisibilityConditionDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>>>
         **)0x0) {
      *param_1 = (__tree_end_node *)pp_Var15;
      return (__tree_node_base **)pp_Var15;
    }
  } while( true );
}


