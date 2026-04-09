// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __assign_multi<std::__ndk1::__hash_const_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<unsigned_int,CustomShader::UvUsage>,void*>*>>
// Entry Point: 0094d8e8
// Size: 236 bytes
// Signature: void __thiscall __assign_multi<std::__ndk1::__hash_const_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<unsigned_int,CustomShader::UvUsage>,void*>*>>(__hash_table<std::__ndk1::__hash_value_type<unsigned_int,CustomShader::UvUsage>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,CustomShader::UvUsage>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,CustomShader::UvUsage>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,CustomShader::UvUsage>>> * this, __hash_const_iterator param_1, __hash_const_iterator param_2)


/* void std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<unsigned int,
   CustomShader::UvUsage>, std::__ndk1::__unordered_map_hasher<unsigned int,
   std::__ndk1::__hash_value_type<unsigned int, CustomShader::UvUsage>, std::__ndk1::hash<unsigned
   int>, true>, std::__ndk1::__unordered_map_equal<unsigned int,
   std::__ndk1::__hash_value_type<unsigned int, CustomShader::UvUsage>,
   std::__ndk1::equal_to<unsigned int>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned int, CustomShader::UvUsage> >
   >::__assign_multi<std::__ndk1::__hash_const_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<unsigned
   int, CustomShader::UvUsage>, void*>*>
   >(std::__ndk1::__hash_const_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<unsigned
   int, CustomShader::UvUsage>, void*>*>,
   std::__ndk1::__hash_const_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<unsigned
   int, CustomShader::UvUsage>, void*>*>) */

void __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<unsigned_int,CustomShader::UvUsage>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,CustomShader::UvUsage>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,CustomShader::UvUsage>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,CustomShader::UvUsage>>>
::
__assign_multi<std::__ndk1::__hash_const_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<unsigned_int,CustomShader::UvUsage>,void*>*>>
          (__hash_table<std::__ndk1::__hash_value_type<unsigned_int,CustomShader::UvUsage>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,CustomShader::UvUsage>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,CustomShader::UvUsage>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,CustomShader::UvUsage>>>
           *this,__hash_const_iterator param_1,__hash_const_iterator param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  ulong **ppuVar7;
  long *plVar8;
  
  ppuVar7 = (ulong **)(ulong)param_1;
  lVar3 = *(long *)(this + 8);
  if (lVar3 != 0) {
    lVar5 = 0;
    do {
      *(undefined8 *)(*(long *)this + lVar5 * 8) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar3 != lVar5);
    plVar8 = *(long **)(this + 0x10);
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined8 *)(this + 0x18) = 0;
    while (plVar8 != (long *)0x0) {
      if (ppuVar7 == (ulong **)(ulong *)(ulong)param_2) {
        do {
          plVar6 = (long *)*plVar8;
          operator_delete(plVar8);
          plVar8 = plVar6;
        } while (plVar6 != (long *)0x0);
        return;
      }
      lVar3 = *plVar8;
      *(undefined4 *)(plVar8 + 2) = *(undefined4 *)(ppuVar7 + 2);
      *(undefined8 *)((long)plVar8 + 0x14) = *(undefined8 *)((long)ppuVar7 + 0x14);
                    /* try { // try from 0094d950 to 0094d95b has its CatchHandler @ 0094d9d4 */
      FUN_0094da18(this,plVar8);
      ppuVar7 = (ulong **)*ppuVar7;
      plVar8 = (long *)lVar3;
    }
  }
  for (; ppuVar7 != (ulong **)(ulong *)(ulong)param_2; ppuVar7 = (ulong **)*ppuVar7) {
    puVar2 = (undefined8 *)operator_new(0x20);
    uVar4 = (ulong)ppuVar7[2];
    uVar1 = *(undefined4 *)(ppuVar7 + 3);
    puVar2[2] = uVar4;
    *(undefined4 *)(puVar2 + 3) = uVar1;
    *puVar2 = 0;
    puVar2[1] = uVar4 & 0xffffffff;
                    /* try { // try from 0094d99c to 0094d9a7 has its CatchHandler @ 0094da04 */
    FUN_0094da18(this,puVar2);
  }
  return;
}


