// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: find<VisibilityConditionDesc>
// Entry Point: 007a80dc
// Size: 224 bytes
// Signature: __tree_iterator __thiscall find<VisibilityConditionDesc>(__tree<std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>,std::__ndk1::__map_value_compare<VisibilityConditionDesc,std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>,std::__ndk1::less<VisibilityConditionDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>>> * this, VisibilityConditionDesc * param_1)


/* std::__ndk1::__tree_iterator<std::__ndk1::__value_type<VisibilityConditionDesc,
   VisibilityCondition>, std::__ndk1::__tree_node<std::__ndk1::__value_type<VisibilityConditionDesc,
   VisibilityCondition>, void*>*, long>
   std::__ndk1::__tree<std::__ndk1::__value_type<VisibilityConditionDesc, VisibilityCondition>,
   std::__ndk1::__map_value_compare<VisibilityConditionDesc,
   std::__ndk1::__value_type<VisibilityConditionDesc, VisibilityCondition>,
   std::__ndk1::less<VisibilityConditionDesc>, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<VisibilityConditionDesc, VisibilityCondition> >
   >::find<VisibilityConditionDesc>(VisibilityConditionDesc const&) */

__tree_iterator __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>,std::__ndk1::__map_value_compare<VisibilityConditionDesc,std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>,std::__ndk1::less<VisibilityConditionDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>>>
::find<VisibilityConditionDesc>
          (__tree<std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>,std::__ndk1::__map_value_compare<VisibilityConditionDesc,std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>,std::__ndk1::less<VisibilityConditionDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>>>
           *this,VisibilityConditionDesc *param_1)

{
  bool bVar1;
  __tree_iterator _Var2;
  __tree_node **pp_Var4;
  __tree_node **pp_Var3;
  
  pp_Var4 = (__tree_node **)(this + 8);
  _Var2 = __lower_bound<VisibilityConditionDesc>(this,param_1,*pp_Var4,(__tree_end_node *)pp_Var4);
  pp_Var3 = (__tree_node **)(ulong)_Var2;
  if (pp_Var4 != pp_Var3) {
    bVar1 = *(ushort *)((long)pp_Var3 + 0x1c) <= *(ushort *)param_1;
    if ((((((*(ushort *)param_1 == *(ushort *)((long)pp_Var3 + 0x1c)) &&
           (bVar1 = *(ushort *)((long)pp_Var3 + 0x1e) <= *(ushort *)(param_1 + 2),
           *(ushort *)(param_1 + 2) == *(ushort *)((long)pp_Var3 + 0x1e))) &&
          (bVar1 = *(ushort *)(pp_Var3 + 4) <= *(ushort *)(param_1 + 4),
          *(ushort *)(param_1 + 4) == *(ushort *)(pp_Var3 + 4))) &&
         ((bVar1 = *(ushort *)((long)pp_Var3 + 0x22) <= *(ushort *)(param_1 + 6),
          *(ushort *)(param_1 + 6) == *(ushort *)((long)pp_Var3 + 0x22) &&
          (bVar1 = *(uint *)((long)pp_Var3 + 0x24) <= *(uint *)(param_1 + 8),
          *(uint *)(param_1 + 8) == *(uint *)((long)pp_Var3 + 0x24))))) &&
        ((bVar1 = *(uint *)(pp_Var3 + 5) <= *(uint *)(param_1 + 0xc),
         *(uint *)(param_1 + 0xc) == *(uint *)(pp_Var3 + 5) &&
         ((bVar1 = *(uint *)((long)pp_Var3 + 0x2c) <= *(uint *)(param_1 + 0x10),
          *(uint *)(param_1 + 0x10) == *(uint *)((long)pp_Var3 + 0x2c) &&
          (bVar1 = *(uint *)(pp_Var3 + 6) <= *(uint *)(param_1 + 0x14),
          *(uint *)(param_1 + 0x14) == *(uint *)(pp_Var3 + 6))))))) &&
       (bVar1 = (byte)*(VisibilityConditionDesc *)((long)pp_Var3 + 0x34) <= (byte)param_1[0x18],
       param_1[0x18] == *(VisibilityConditionDesc *)((long)pp_Var3 + 0x34))) {
      if (*(float *)(pp_Var3 + 7) <= *(float *)(param_1 + 0x1c)) goto LAB_007a81b0;
    }
    else if (bVar1) goto LAB_007a81b0;
  }
  pp_Var3 = pp_Var4;
LAB_007a81b0:
  return (__tree_iterator)pp_Var3;
}


