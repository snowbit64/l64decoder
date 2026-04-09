// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __assign_multi<std::__ndk1::__hash_const_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<CustomShader::STANDARD_TEXTURE,CustomShader::UvUsage>,void*>*>>
// Entry Point: 0094def0
// Size: 236 bytes
// Signature: void __thiscall __assign_multi<std::__ndk1::__hash_const_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<CustomShader::STANDARD_TEXTURE,CustomShader::UvUsage>,void*>*>>(__hash_table<std::__ndk1::__hash_value_type<CustomShader::STANDARD_TEXTURE,CustomShader::UvUsage>,std::__ndk1::__unordered_map_hasher<CustomShader::STANDARD_TEXTURE,std::__ndk1::__hash_value_type<CustomShader::STANDARD_TEXTURE,CustomShader::UvUsage>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<CustomShader::STANDARD_TEXTURE,std::__ndk1::__hash_value_type<CustomShader::STANDARD_TEXTURE,CustomShader::UvUsage>,std::__ndk1::equal_to<CustomShader::STANDARD_TEXTURE>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<CustomShader::STANDARD_TEXTURE,CustomShader::UvUsage>>> * this, __hash_const_iterator param_1, __hash_const_iterator param_2)


/* void std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<CustomShader::STANDARD_TEXTURE,
   CustomShader::UvUsage>, std::__ndk1::__unordered_map_hasher<CustomShader::STANDARD_TEXTURE,
   std::__ndk1::__hash_value_type<CustomShader::STANDARD_TEXTURE, CustomShader::UvUsage>,
   std::__ndk1::hash<int>, true>, std::__ndk1::__unordered_map_equal<CustomShader::STANDARD_TEXTURE,
   std::__ndk1::__hash_value_type<CustomShader::STANDARD_TEXTURE, CustomShader::UvUsage>,
   std::__ndk1::equal_to<CustomShader::STANDARD_TEXTURE>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<CustomShader::STANDARD_TEXTURE,
   CustomShader::UvUsage> >
   >::__assign_multi<std::__ndk1::__hash_const_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<CustomShader::STANDARD_TEXTURE,
   CustomShader::UvUsage>, void*>*>
   >(std::__ndk1::__hash_const_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<CustomShader::STANDARD_TEXTURE,
   CustomShader::UvUsage>, void*>*>,
   std::__ndk1::__hash_const_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<CustomShader::STANDARD_TEXTURE,
   CustomShader::UvUsage>, void*>*>) */

void __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<CustomShader::STANDARD_TEXTURE,CustomShader::UvUsage>,std::__ndk1::__unordered_map_hasher<CustomShader::STANDARD_TEXTURE,std::__ndk1::__hash_value_type<CustomShader::STANDARD_TEXTURE,CustomShader::UvUsage>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<CustomShader::STANDARD_TEXTURE,std::__ndk1::__hash_value_type<CustomShader::STANDARD_TEXTURE,CustomShader::UvUsage>,std::__ndk1::equal_to<CustomShader::STANDARD_TEXTURE>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<CustomShader::STANDARD_TEXTURE,CustomShader::UvUsage>>>
::
__assign_multi<std::__ndk1::__hash_const_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<CustomShader::STANDARD_TEXTURE,CustomShader::UvUsage>,void*>*>>
          (__hash_table<std::__ndk1::__hash_value_type<CustomShader::STANDARD_TEXTURE,CustomShader::UvUsage>,std::__ndk1::__unordered_map_hasher<CustomShader::STANDARD_TEXTURE,std::__ndk1::__hash_value_type<CustomShader::STANDARD_TEXTURE,CustomShader::UvUsage>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<CustomShader::STANDARD_TEXTURE,std::__ndk1::__hash_value_type<CustomShader::STANDARD_TEXTURE,CustomShader::UvUsage>,std::__ndk1::equal_to<CustomShader::STANDARD_TEXTURE>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<CustomShader::STANDARD_TEXTURE,CustomShader::UvUsage>>>
           *this,__hash_const_iterator param_1,__hash_const_iterator param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong **ppuVar6;
  long *plVar7;
  
  ppuVar6 = (ulong **)(ulong)param_1;
  lVar3 = *(long *)(this + 8);
  if (lVar3 != 0) {
    lVar4 = 0;
    do {
      *(undefined8 *)(*(long *)this + lVar4 * 8) = 0;
      lVar4 = lVar4 + 1;
    } while (lVar3 != lVar4);
    plVar7 = *(long **)(this + 0x10);
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined8 *)(this + 0x18) = 0;
    while (plVar7 != (long *)0x0) {
      if (ppuVar6 == (ulong **)(ulong *)(ulong)param_2) {
        do {
          plVar5 = (long *)*plVar7;
          operator_delete(plVar7);
          plVar7 = plVar5;
        } while (plVar5 != (long *)0x0);
        return;
      }
      lVar3 = *plVar7;
      *(undefined4 *)(plVar7 + 2) = *(undefined4 *)(ppuVar6 + 2);
      *(undefined8 *)((long)plVar7 + 0x14) = *(undefined8 *)((long)ppuVar6 + 0x14);
                    /* try { // try from 0094df58 to 0094df63 has its CatchHandler @ 0094dfdc */
      FUN_0094e020(this,plVar7);
      ppuVar6 = (ulong **)*ppuVar6;
      plVar7 = (long *)lVar3;
    }
  }
  for (; ppuVar6 != (ulong **)(ulong *)(ulong)param_2; ppuVar6 = (ulong **)*ppuVar6) {
    puVar2 = (undefined8 *)operator_new(0x20);
    uVar1 = *(undefined4 *)(ppuVar6 + 3);
    puVar2[2] = ppuVar6[2];
    *(undefined4 *)(puVar2 + 3) = uVar1;
    *puVar2 = 0;
    puVar2[1] = (long)*(int *)(puVar2 + 2);
                    /* try { // try from 0094dfa4 to 0094dfaf has its CatchHandler @ 0094e00c */
    FUN_0094e020(this,puVar2);
  }
  return;
}


