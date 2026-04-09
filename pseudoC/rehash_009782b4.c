// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: rehash
// Entry Point: 009782b4
// Size: 220 bytes
// Signature: undefined __thiscall rehash(__hash_table<std::__ndk1::__hash_value_type<unsigned_long_long,Texture*>,std::__ndk1::__unordered_map_hasher<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,Texture*>,std::__ndk1::hash<unsigned_long_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,Texture*>,std::__ndk1::equal_to<unsigned_long_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long_long,Texture*>>> * this, ulong param_1)


/* std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<unsigned long long, Texture*>,
   std::__ndk1::__unordered_map_hasher<unsigned long long, std::__ndk1::__hash_value_type<unsigned
   long long, Texture*>, std::__ndk1::hash<unsigned long long>, true>,
   std::__ndk1::__unordered_map_equal<unsigned long long, std::__ndk1::__hash_value_type<unsigned
   long long, Texture*>, std::__ndk1::equal_to<unsigned long long>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned long long, Texture*> >
   >::rehash(unsigned long) */

void __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<unsigned_long_long,Texture*>,std::__ndk1::__unordered_map_hasher<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,Texture*>,std::__ndk1::hash<unsigned_long_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,Texture*>,std::__ndk1::equal_to<unsigned_long_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long_long,Texture*>>>
::rehash(__hash_table<std::__ndk1::__hash_value_type<unsigned_long_long,Texture*>,std::__ndk1::__unordered_map_hasher<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,Texture*>,std::__ndk1::hash<unsigned_long_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,Texture*>,std::__ndk1::equal_to<unsigned_long_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long_long,Texture*>>>
         *this,ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined2 uVar3;
  undefined8 uVar4;
  
  if (param_1 - 1 == 0) {
    param_1 = 2;
  }
  else if ((param_1 & param_1 - 1) != 0) {
    param_1 = std::__ndk1::__next_prime(param_1);
  }
  uVar2 = *(ulong *)(this + 8);
  uVar1 = param_1;
  if (uVar2 < param_1) goto LAB_00978368;
  if (uVar2 <= param_1) {
    return;
  }
  uVar1 = (ulong)((float)(unkuint9)*(ulong *)(this + 0x18) / *(float *)(this + 0x20));
  if (uVar2 < 3) {
LAB_00978354:
    uVar1 = std::__ndk1::__next_prime(uVar1);
  }
  else {
    uVar4 = NEON_cnt(uVar2,1);
    uVar3 = NEON_uaddlv(uVar4,1);
    if (1 < (uint)CONCAT62((int6)((ulong)uVar4 >> 0x10),uVar3)) goto LAB_00978354;
    if (1 < uVar1) {
      uVar1 = 1L << (-LZCOUNT(uVar1 - 1) & 0x3fU);
    }
  }
  if (uVar1 <= param_1) {
    uVar1 = param_1;
  }
  if (uVar2 <= uVar1) {
    return;
  }
LAB_00978368:
  __rehash(this,uVar1);
  return;
}


