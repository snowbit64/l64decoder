// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0094db3c
// Entry Point: 0094db3c
// Size: 344 bytes
// Signature: undefined FUN_0094db3c(void)


long * FUN_0094db3c(long *param_1,ulong param_2,int *param_3)

{
  bool bVar1;
  byte bVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  undefined2 uVar11;
  undefined8 uVar12;
  
  uVar5 = param_1[1];
  if ((uVar5 == 0) ||
     (*(float *)(param_1 + 4) * (float)(unkuint9)uVar5 < (float)(unkuint9)(param_1[3] + 1))) {
    if (uVar5 < 3) {
      uVar6 = 1;
    }
    else {
      uVar6 = (ulong)((uVar5 & uVar5 - 1) != 0);
    }
    uVar6 = uVar6 | uVar5 << 1;
    uVar5 = (ulong)((float)(unkuint9)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar5 <= uVar6) {
      uVar5 = uVar6;
    }
    std::__ndk1::
    __hash_table<std::__ndk1::__hash_value_type<unsigned_int,CustomShader::UvUsage>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,CustomShader::UvUsage>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,CustomShader::UvUsage>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,CustomShader::UvUsage>>>
    ::rehash((__hash_table<std::__ndk1::__hash_value_type<unsigned_int,CustomShader::UvUsage>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,CustomShader::UvUsage>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,CustomShader::UvUsage>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,CustomShader::UvUsage>>>
              *)param_1,uVar5);
    uVar5 = param_1[1];
  }
  uVar12 = NEON_cnt(uVar5,1);
  uVar11 = NEON_uaddlv(uVar12,1);
  uVar6 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
  if (uVar6 < 2) {
    uVar7 = uVar5 - 1 & param_2;
  }
  else {
    uVar7 = param_2;
    if (uVar5 <= param_2) {
      uVar7 = 0;
      if (uVar5 != 0) {
        uVar7 = param_2 / uVar5;
      }
      uVar7 = param_2 - uVar7 * uVar5;
    }
  }
  plVar8 = *(long **)(*param_1 + uVar7 * 8);
  if (plVar8 == (long *)0x0) {
    plVar4 = (long *)0x0;
  }
  else {
    bVar2 = 0;
    do {
      plVar4 = plVar8;
      plVar8 = (long *)*plVar4;
      if (plVar8 == (long *)0x0) {
        return plVar4;
      }
      uVar9 = plVar8[1];
      if (uVar6 < 2) {
        uVar10 = uVar9 & uVar5 - 1;
      }
      else {
        uVar10 = uVar9;
        if (uVar5 <= uVar9) {
          uVar10 = 0;
          if (uVar5 != 0) {
            uVar10 = uVar9 / uVar5;
          }
          uVar10 = uVar9 - uVar10 * uVar5;
        }
      }
      if (uVar10 != uVar7) {
        return plVar4;
      }
      if (uVar9 == param_2) {
        bVar3 = *(int *)(plVar8 + 2) == *param_3;
      }
      else {
        bVar3 = false;
      }
      bVar1 = (bool)(bVar2 & (bVar3 ^ 1U));
      bVar2 = bVar2 | bVar3;
    } while (!bVar1);
  }
  return plVar4;
}


