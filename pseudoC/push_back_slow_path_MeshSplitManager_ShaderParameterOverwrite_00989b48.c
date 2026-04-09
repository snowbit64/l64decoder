// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __push_back_slow_path<MeshSplitManager::ShaderParameterOverwrite>
// Entry Point: 00989b48
// Size: 412 bytes
// Signature: void __thiscall __push_back_slow_path<MeshSplitManager::ShaderParameterOverwrite>(vector<MeshSplitManager::ShaderParameterOverwrite,std::__ndk1::allocator<MeshSplitManager::ShaderParameterOverwrite>> * this, ShaderParameterOverwrite * param_1)


/* void std::__ndk1::vector<MeshSplitManager::ShaderParameterOverwrite,
   std::__ndk1::allocator<MeshSplitManager::ShaderParameterOverwrite>
   >::__push_back_slow_path<MeshSplitManager::ShaderParameterOverwrite>(MeshSplitManager::ShaderParameterOverwrite&&)
    */

void __thiscall
std::__ndk1::
vector<MeshSplitManager::ShaderParameterOverwrite,std::__ndk1::allocator<MeshSplitManager::ShaderParameterOverwrite>>
::__push_back_slow_path<MeshSplitManager::ShaderParameterOverwrite>
          (vector<MeshSplitManager::ShaderParameterOverwrite,std::__ndk1::allocator<MeshSplitManager::ShaderParameterOverwrite>>
           *this,ShaderParameterOverwrite *param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  void *pvVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  lVar4 = *(long *)(this + 8) - *(long *)this >> 4;
  uVar1 = lVar4 * -0x5555555555555555 + 1;
  if (0x555555555555555 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  lVar9 = *(long *)(this + 0x10) - *(long *)this >> 4;
  uVar10 = lVar9 * 0x5555555555555556;
  if (uVar1 <= uVar10) {
    uVar1 = uVar10;
  }
  if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar9 * -0x5555555555555555)) {
    uVar1 = 0x555555555555555;
  }
  if (uVar1 == 0) {
    pvVar3 = (void *)0x0;
  }
  else {
    if (0x555555555555555 < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar3 = operator_new(uVar1 * 0x30);
  }
  uVar15 = *(undefined8 *)(param_1 + 8);
  uVar14 = *(undefined8 *)param_1;
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  puVar6 = (undefined8 *)((long)pvVar3 + lVar4 * 0x10);
  *(undefined8 *)param_1 = 0;
  pbVar13 = *(byte **)this;
  pbVar12 = *(byte **)(this + 8);
  pvVar3 = (void *)((long)pvVar3 + uVar1 * 0x30);
  uVar2 = *(undefined4 *)(param_1 + 0x28);
  puVar6[1] = uVar15;
  *puVar6 = uVar14;
  uVar15 = *(undefined8 *)(param_1 + 0x20);
  uVar14 = *(undefined8 *)(param_1 + 0x18);
  puVar6[2] = uVar5;
  *(undefined4 *)(puVar6 + 5) = uVar2;
  puVar6[4] = uVar15;
  puVar6[3] = uVar14;
  puVar7 = puVar6;
  if (pbVar12 == pbVar13) {
    *(undefined8 **)this = puVar6;
    *(undefined8 **)(this + 8) = puVar6 + 6;
    *(void **)(this + 0x10) = pvVar3;
  }
  else {
    do {
      uVar14 = *(undefined8 *)(pbVar12 + -0x28);
      uVar5 = *(undefined8 *)(pbVar12 + -0x30);
      pbVar11 = pbVar12 + -0x30;
      puVar7[-4] = *(undefined8 *)(pbVar12 + -0x20);
      puVar8 = puVar7 + -6;
      puVar7[-5] = uVar14;
      puVar7[-6] = uVar5;
      *(undefined8 *)(pbVar12 + -0x28) = 0;
      *(undefined8 *)(pbVar12 + -0x20) = 0;
      *(undefined8 *)(pbVar12 + -0x30) = 0;
      uVar14 = *(undefined8 *)(pbVar12 + -0x10);
      uVar5 = *(undefined8 *)(pbVar12 + -0x18);
      *(undefined4 *)(puVar7 + -1) = *(undefined4 *)(pbVar12 + -8);
      puVar7[-2] = uVar14;
      puVar7[-3] = uVar5;
      puVar7 = puVar8;
      pbVar12 = pbVar11;
    } while (pbVar11 != pbVar13);
    pbVar13 = *(byte **)this;
    pbVar12 = *(byte **)(this + 8);
    *(undefined8 **)this = puVar8;
    *(undefined8 **)(this + 8) = puVar6 + 6;
    *(void **)(this + 0x10) = pvVar3;
    while (pbVar11 = pbVar12, pbVar11 != pbVar13) {
      pbVar12 = pbVar11 + -0x30;
      if ((*pbVar12 & 1) != 0) {
        operator_delete(*(void **)(pbVar11 + -0x20));
      }
    }
  }
  if (pbVar13 == (byte *)0x0) {
    return;
  }
  operator_delete(pbVar13);
  return;
}


