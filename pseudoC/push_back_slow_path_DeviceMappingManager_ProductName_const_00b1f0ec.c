// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __push_back_slow_path<DeviceMappingManager::ProductName_const&>
// Entry Point: 00b1f0ec
// Size: 468 bytes
// Signature: void __thiscall __push_back_slow_path<DeviceMappingManager::ProductName_const&>(vector<DeviceMappingManager::ProductName,std::__ndk1::allocator<DeviceMappingManager::ProductName>> * this, ProductName * param_1)


/* void std::__ndk1::vector<DeviceMappingManager::ProductName,
   std::__ndk1::allocator<DeviceMappingManager::ProductName>
   >::__push_back_slow_path<DeviceMappingManager::ProductName
   const&>(DeviceMappingManager::ProductName const&) */

void __thiscall
std::__ndk1::
vector<DeviceMappingManager::ProductName,std::__ndk1::allocator<DeviceMappingManager::ProductName>>
::__push_back_slow_path<DeviceMappingManager::ProductName_const&>
          (vector<DeviceMappingManager::ProductName,std::__ndk1::allocator<DeviceMappingManager::ProductName>>
           *this,ProductName *param_1)

{
  ulong uVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  long lVar4;
  void *pvVar5;
  long lVar6;
  undefined2 *puVar7;
  byte *pbVar8;
  ulong uVar9;
  ulong uVar10;
  undefined2 *puVar11;
  long lVar12;
  undefined2 *puVar13;
  undefined2 *puVar14;
  byte *pbVar15;
  byte *pbVar16;
  
  lVar4 = tpidr_el0;
  lVar6 = *(long *)(lVar4 + 0x28);
  lVar12 = *(long *)(this + 8) - *(long *)this >> 5;
  uVar1 = lVar12 + 1;
  if (uVar1 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  uVar9 = *(long *)(this + 0x10) - *(long *)this;
  uVar10 = (long)uVar9 >> 4;
  if (uVar1 <= uVar10) {
    uVar1 = uVar10;
  }
  if (0x7fffffffffffffdf < uVar9) {
    uVar1 = 0x7ffffffffffffff;
  }
  if (uVar1 == 0) {
    pvVar5 = (void *)0x0;
  }
  else {
    if (uVar1 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar5 = operator_new(uVar1 << 5);
  }
  puVar14 = (undefined2 *)((long)pvVar5 + lVar12 * 0x20);
  *puVar14 = *(undefined2 *)param_1;
                    /* try { // try from 00b1f194 to 00b1f19b has its CatchHandler @ 00b1f2c0 */
  vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
  ::vector((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
            *)(puVar14 + 4),(vector *)(param_1 + 8));
  puVar11 = *(undefined2 **)this;
  puVar2 = puVar14 + 0x10;
  puVar7 = *(undefined2 **)(this + 8);
  puVar13 = puVar11;
  if (*(undefined2 **)(this + 8) != puVar11) {
    do {
      puVar13 = puVar7 + -0x10;
      uVar3 = *puVar13;
      *(undefined8 *)(puVar14 + -8) = 0;
      *(undefined8 *)(puVar14 + -4) = 0;
      *(undefined8 *)(puVar14 + -0xc) = 0;
      puVar14[-0x10] = uVar3;
      *(undefined8 *)(puVar14 + -0xc) = *(undefined8 *)(puVar7 + -0xc);
      *(undefined8 *)(puVar14 + -8) = *(undefined8 *)(puVar7 + -8);
      *(undefined8 *)(puVar14 + -4) = *(undefined8 *)(puVar7 + -4);
      *(undefined8 *)(puVar7 + -0xc) = 0;
      *(undefined8 *)(puVar7 + -8) = 0;
      *(undefined8 *)(puVar7 + -4) = 0;
      puVar14 = puVar14 + -0x10;
      puVar7 = puVar13;
    } while (puVar13 != puVar11);
    puVar11 = *(undefined2 **)this;
    puVar13 = *(undefined2 **)(this + 8);
  }
  *(undefined2 **)this = puVar14;
  *(undefined2 **)(this + 8) = puVar2;
  *(void **)(this + 0x10) = (void *)((long)pvVar5 + uVar1 * 0x20);
  while (puVar2 = puVar13, puVar2 != puVar11) {
    pbVar15 = *(byte **)(puVar2 + -0xc);
    puVar13 = puVar2 + -0x10;
    if (pbVar15 != (byte *)0x0) {
      pbVar8 = *(byte **)(puVar2 + -8);
      pbVar16 = pbVar15;
      if (pbVar8 != pbVar15) {
        do {
          pbVar16 = pbVar8 + -0x18;
          if ((*pbVar16 & 1) != 0) {
            operator_delete(*(void **)(pbVar8 + -8));
          }
          pbVar8 = pbVar16;
        } while (pbVar16 != pbVar15);
        pbVar16 = *(byte **)(puVar2 + -0xc);
      }
      *(byte **)(puVar2 + -8) = pbVar15;
      operator_delete(pbVar16);
    }
  }
  if (puVar11 != (undefined2 *)0x0) {
    operator_delete(puVar11);
  }
  if (*(long *)(lVar4 + 0x28) == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


