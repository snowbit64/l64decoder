// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_008745c4
// Entry Point: 008745c4
// Size: 164 bytes
// Signature: undefined FUN_008745c4(void)


void FUN_008745c4(__tree<std::__ndk1::__value_type<unsigned_int,SteeringTargetProvider*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,SteeringTargetProvider*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,SteeringTargetProvider*>>>
                  **param_1)

{
  void *pvVar1;
  __tree<std::__ndk1::__value_type<unsigned_int,SteeringTargetProvider*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,SteeringTargetProvider*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,SteeringTargetProvider*>>>
  *p_Var2;
  __tree<std::__ndk1::__value_type<unsigned_int,SteeringTargetProvider*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,SteeringTargetProvider*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,SteeringTargetProvider*>>>
  *p_Var3;
  __tree<std::__ndk1::__value_type<unsigned_int,SteeringTargetProvider*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,SteeringTargetProvider*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,SteeringTargetProvider*>>>
  *p_Var4;
  
  p_Var4 = *param_1;
  if (p_Var4 == (__tree<std::__ndk1::__value_type<unsigned_int,SteeringTargetProvider*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,SteeringTargetProvider*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,SteeringTargetProvider*>>>
                 *)0x0) {
    return;
  }
  p_Var2 = p_Var4;
  if (param_1[1] != p_Var4) {
    p_Var2 = param_1[1] + -0x20;
    do {
      std::__ndk1::
      __tree<std::__ndk1::__value_type<unsigned_int,SteeringTargetProvider*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,SteeringTargetProvider*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,SteeringTargetProvider*>>>
      ::destroy(p_Var2,*(__tree_node **)(p_Var2 + 8));
      pvVar1 = *(void **)(p_Var2 + -0x28);
      if (pvVar1 != (void *)0x0) {
        *(void **)(p_Var2 + -0x20) = pvVar1;
        operator_delete(pvVar1);
      }
      pvVar1 = *(void **)(p_Var2 + -0x40);
      if (pvVar1 != (void *)0x0) {
        *(void **)(p_Var2 + -0x38) = pvVar1;
        operator_delete(pvVar1);
      }
      p_Var3 = p_Var2 + -0xc0;
      p_Var2 = p_Var2 + -0xe0;
    } while (p_Var3 != p_Var4);
    p_Var2 = *param_1;
  }
  param_1[1] = p_Var4;
  operator_delete(p_Var2);
  return;
}


