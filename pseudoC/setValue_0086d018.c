// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setValue
// Entry Point: 0086d018
// Size: 120 bytes
// Signature: undefined __thiscall setValue(ConditionalAnimationInformation * this, uint param_1, ConditionalAnimationValue * param_2)


/* ConditionalAnimationInformation::setValue(unsigned int, ConditionalAnimationValue const&) */

undefined8 __thiscall
ConditionalAnimationInformation::setValue
          (ConditionalAnimationInformation *this,uint param_1,ConditionalAnimationValue *param_2)

{
  long lVar1;
  pair pVar2;
  uint local_3c [3];
  uint *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = local_3c;
  local_3c[0] = param_1;
  pVar2 = std::__ndk1::
          __tree<std::__ndk1::__value_type<unsigned_int,ConditionalAnimationValue>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,ConditionalAnimationValue>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,ConditionalAnimationValue>>>
          ::
          __emplace_unique_key_args<unsigned_int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<unsigned_int_const&>,std::__ndk1::tuple<>>
                    ((uint *)this,(piecewise_construct_t *)local_3c,(tuple *)&DAT_00518eb0,
                     (tuple *)&local_30);
  ConditionalAnimationValue::operator=((ConditionalAnimationValue *)((ulong)pVar2 + 0x20),param_2);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


