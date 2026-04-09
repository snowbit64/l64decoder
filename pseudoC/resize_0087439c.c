// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: resize
// Entry Point: 0087439c
// Size: 200 bytes
// Signature: undefined __thiscall resize(vector<AnimalSteering,std::__ndk1::allocator<AnimalSteering>> * this, ulong param_1)


/* std::__ndk1::vector<AnimalSteering, std::__ndk1::allocator<AnimalSteering> >::resize(unsigned
   long) */

void __thiscall
std::__ndk1::vector<AnimalSteering,std::__ndk1::allocator<AnimalSteering>>::resize
          (vector<AnimalSteering,std::__ndk1::allocator<AnimalSteering>> *this,ulong param_1)

{
  void *pvVar1;
  __tree<std::__ndk1::__value_type<unsigned_int,SteeringTargetProvider*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,SteeringTargetProvider*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,SteeringTargetProvider*>>>
  *p_Var2;
  ulong uVar3;
  long lVar4;
  __tree<std::__ndk1::__value_type<unsigned_int,SteeringTargetProvider*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,SteeringTargetProvider*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,SteeringTargetProvider*>>>
  *p_Var5;
  __tree<std::__ndk1::__value_type<unsigned_int,SteeringTargetProvider*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,SteeringTargetProvider*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,SteeringTargetProvider*>>>
  *p_Var6;
  
  p_Var5 = *(__tree<std::__ndk1::__value_type<unsigned_int,SteeringTargetProvider*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,SteeringTargetProvider*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,SteeringTargetProvider*>>>
             **)(this + 8);
  lVar4 = (long)p_Var5 - *(long *)this >> 5;
  uVar3 = lVar4 * 0x6db6db6db6db6db7;
  if (uVar3 < param_1) {
    __append(this,param_1 + lVar4 * -0x6db6db6db6db6db7);
    return;
  }
  if (uVar3 >= param_1 && uVar3 - param_1 != 0) {
    p_Var6 = (__tree<std::__ndk1::__value_type<unsigned_int,SteeringTargetProvider*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,SteeringTargetProvider*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,SteeringTargetProvider*>>>
              *)(*(long *)this + param_1 * 0xe0);
    if (p_Var5 != p_Var6) {
      p_Var5 = p_Var5 + -0x20;
      do {
        __tree<std::__ndk1::__value_type<unsigned_int,SteeringTargetProvider*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,SteeringTargetProvider*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,SteeringTargetProvider*>>>
        ::destroy(p_Var5,*(__tree_node **)(p_Var5 + 8));
        pvVar1 = *(void **)(p_Var5 + -0x28);
        if (pvVar1 != (void *)0x0) {
          *(void **)(p_Var5 + -0x20) = pvVar1;
          operator_delete(pvVar1);
        }
        pvVar1 = *(void **)(p_Var5 + -0x40);
        if (pvVar1 != (void *)0x0) {
          *(void **)(p_Var5 + -0x38) = pvVar1;
          operator_delete(pvVar1);
        }
        p_Var2 = p_Var5 + -0xc0;
        p_Var5 = p_Var5 + -0xe0;
      } while (p_Var2 != p_Var6);
    }
    *(__tree<std::__ndk1::__value_type<unsigned_int,SteeringTargetProvider*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,SteeringTargetProvider*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,SteeringTargetProvider*>>>
      **)(this + 8) = p_Var6;
  }
  return;
}


