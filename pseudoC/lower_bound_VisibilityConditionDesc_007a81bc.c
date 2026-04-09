// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __lower_bound<VisibilityConditionDesc>
// Entry Point: 007a81bc
// Size: 196 bytes
// Signature: __tree_iterator __thiscall __lower_bound<VisibilityConditionDesc>(__tree<std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>,std::__ndk1::__map_value_compare<VisibilityConditionDesc,std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>,std::__ndk1::less<VisibilityConditionDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>>> * this, VisibilityConditionDesc * param_1, __tree_node * param_2, __tree_end_node * param_3)


/* std::__ndk1::__tree_iterator<std::__ndk1::__value_type<VisibilityConditionDesc,
   VisibilityCondition>, std::__ndk1::__tree_node<std::__ndk1::__value_type<VisibilityConditionDesc,
   VisibilityCondition>, void*>*, long>
   std::__ndk1::__tree<std::__ndk1::__value_type<VisibilityConditionDesc, VisibilityCondition>,
   std::__ndk1::__map_value_compare<VisibilityConditionDesc,
   std::__ndk1::__value_type<VisibilityConditionDesc, VisibilityCondition>,
   std::__ndk1::less<VisibilityConditionDesc>, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<VisibilityConditionDesc, VisibilityCondition> >
   >::__lower_bound<VisibilityConditionDesc>(VisibilityConditionDesc const&,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<VisibilityConditionDesc, VisibilityCondition>,
   void*>*, std::__ndk1::__tree_end_node<std::__ndk1::__tree_node_base<void*>*>*) */

__tree_iterator __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>,std::__ndk1::__map_value_compare<VisibilityConditionDesc,std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>,std::__ndk1::less<VisibilityConditionDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>>>
::__lower_bound<VisibilityConditionDesc>
          (__tree<std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>,std::__ndk1::__map_value_compare<VisibilityConditionDesc,std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>,std::__ndk1::less<VisibilityConditionDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>>>
           *this,VisibilityConditionDesc *param_1,__tree_node *param_2,__tree_end_node *param_3)

{
  long lVar1;
  bool bVar2;
  __tree_iterator _Var3;
  
  _Var3 = (__tree_iterator)param_3;
  if (param_2 != (__tree_node *)0x0) {
    do {
      bVar2 = *(ushort *)param_1 <= *(ushort *)(param_2 + 0x1c);
      if ((((((*(ushort *)(param_2 + 0x1c) == *(ushort *)param_1) &&
             (bVar2 = *(ushort *)(param_1 + 2) <= *(ushort *)(param_2 + 0x1e),
             *(ushort *)(param_2 + 0x1e) == *(ushort *)(param_1 + 2))) &&
            (bVar2 = *(ushort *)(param_1 + 4) <= *(ushort *)(param_2 + 0x20),
            *(ushort *)(param_2 + 0x20) == *(ushort *)(param_1 + 4))) &&
           ((bVar2 = *(ushort *)(param_1 + 6) <= *(ushort *)(param_2 + 0x22),
            *(ushort *)(param_2 + 0x22) == *(ushort *)(param_1 + 6) &&
            (bVar2 = *(uint *)(param_1 + 8) <= *(uint *)(param_2 + 0x24),
            *(uint *)(param_2 + 0x24) == *(uint *)(param_1 + 8))))) &&
          ((bVar2 = *(uint *)(param_1 + 0xc) <= *(uint *)(param_2 + 0x28),
           *(uint *)(param_2 + 0x28) == *(uint *)(param_1 + 0xc) &&
           ((bVar2 = *(uint *)(param_1 + 0x10) <= *(uint *)(param_2 + 0x2c),
            *(uint *)(param_2 + 0x2c) == *(uint *)(param_1 + 0x10) &&
            (bVar2 = *(uint *)(param_1 + 0x14) <= *(uint *)(param_2 + 0x30),
            *(uint *)(param_2 + 0x30) == *(uint *)(param_1 + 0x14))))))) &&
         (bVar2 = (byte)param_1[0x18] <= (byte)*(VisibilityConditionDesc *)(param_2 + 0x34),
         *(VisibilityConditionDesc *)(param_2 + 0x34) == param_1[0x18])) {
        bVar2 = *(float *)(param_2 + 0x38) < *(float *)(param_1 + 0x1c);
      }
      else {
        bVar2 = !bVar2;
      }
      lVar1 = 8;
      if (!bVar2) {
        lVar1 = 0;
        param_3 = (__tree_end_node *)param_2;
      }
      _Var3 = (__tree_iterator)param_3;
      param_2 = *(__tree_node **)(param_2 + lVar1);
    } while (param_2 != (__tree_node *)0x0);
  }
  return _Var3;
}


