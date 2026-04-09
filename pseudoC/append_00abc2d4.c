// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __append
// Entry Point: 00abc2d4
// Size: 608 bytes
// Signature: undefined __thiscall __append(vector<VulkanProgramObject::DescriptorSetLayoutElement,std::__ndk1::allocator<VulkanProgramObject::DescriptorSetLayoutElement>> * this, ulong param_1)


/* std::__ndk1::vector<VulkanProgramObject::DescriptorSetLayoutElement,
   std::__ndk1::allocator<VulkanProgramObject::DescriptorSetLayoutElement> >::__append(unsigned
   long) */

void __thiscall
std::__ndk1::
vector<VulkanProgramObject::DescriptorSetLayoutElement,std::__ndk1::allocator<VulkanProgramObject::DescriptorSetLayoutElement>>
::__append(vector<VulkanProgramObject::DescriptorSetLayoutElement,std::__ndk1::allocator<VulkanProgramObject::DescriptorSetLayoutElement>>
           *this,ulong param_1)

{
  long lVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  void *pvVar12;
  size_t __n;
  
  puVar6 = *(undefined **)(this + 8);
  if (param_1 <= (ulong)((*(long *)(this + 0x10) - (long)puVar6 >> 2) * -0x5555555555555555)) {
    puVar4 = puVar6;
    if (param_1 != 0) {
      puVar4 = puVar6 + param_1 * 0xc;
      uVar8 = param_1 * 0xc - 0xc;
      puVar11 = puVar6;
      if (0xb < uVar8) {
        uVar8 = uVar8 / 0xc + 1;
        uVar9 = uVar8 & 0x3ffffffffffffffe;
        puVar11 = puVar6 + uVar9 * 0xc;
        puVar3 = (undefined8 *)(puVar6 + 0x10);
        uVar7 = uVar9;
        do {
          uVar7 = uVar7 - 2;
          *(undefined *)(puVar3 + -2) = 0;
          *(undefined *)((long)puVar3 + -4) = 0;
          *(undefined8 *)((long)puVar3 + -0xc) = 6;
          *puVar3 = 6;
          puVar3 = puVar3 + 3;
        } while (uVar7 != 0);
        if (uVar8 == uVar9) goto LAB_00abc424;
      }
      do {
        *puVar11 = 0;
        *(undefined8 *)(puVar11 + 4) = 6;
        puVar11 = puVar11 + 0xc;
      } while (puVar11 != puVar4);
    }
LAB_00abc424:
    *(undefined **)(this + 8) = puVar4;
    return;
  }
  pvVar12 = *(void **)this;
  __n = (long)puVar6 - (long)pvVar12;
  lVar1 = (long)__n / 0xc;
  uVar8 = lVar1 + param_1;
  if (0x1555555555555555 < uVar8) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  lVar5 = *(long *)(this + 0x10) - (long)pvVar12 >> 2;
  uVar7 = lVar5 * 0x5555555555555556;
  if (uVar8 <= uVar7) {
    uVar8 = uVar7;
  }
  if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar5 * -0x5555555555555555)) {
    uVar8 = 0x1555555555555555;
  }
  if (uVar8 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (0x1555555555555555 < uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar2 = operator_new(uVar8 * 0xc);
  }
  puVar4 = (undefined *)((long)pvVar2 + lVar1 * 0xc);
  uVar7 = param_1 * 0xc - 0xc;
  puVar6 = puVar4;
  if (0xb < uVar7) {
    uVar7 = uVar7 / 0xc + 1;
    uVar10 = uVar7 & 0x3ffffffffffffffe;
    puVar6 = puVar4 + uVar10 * 0xc;
    puVar3 = (undefined8 *)((long)pvVar2 + lVar1 * 0xc + 0x10);
    uVar9 = uVar10;
    do {
      uVar9 = uVar9 - 2;
      *(undefined *)(puVar3 + -2) = 0;
      *(undefined *)((long)puVar3 + -4) = 0;
      *(undefined8 *)((long)puVar3 + -0xc) = 6;
      *puVar3 = 6;
      puVar3 = puVar3 + 3;
    } while (uVar9 != 0);
    if (uVar7 == uVar10) goto LAB_00abc4c0;
  }
  do {
    *puVar6 = 0;
    *(undefined8 *)(puVar6 + 4) = 6;
    puVar6 = puVar6 + 0xc;
  } while (puVar6 != puVar4 + param_1 * 0xc);
LAB_00abc4c0:
  if (0 < (long)__n) {
    memcpy(puVar4 + -__n,pvVar12,__n);
  }
  pvVar12 = *(void **)this;
  *(undefined **)this = puVar4 + -__n;
  *(undefined **)(this + 8) = puVar4 + param_1 * 0xc;
  *(void **)(this + 0x10) = (void *)((long)pvVar2 + uVar8 * 0xc);
  if (pvVar12 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar12);
  return;
}


