// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __append
// Entry Point: 008a5914
// Size: 500 bytes
// Signature: undefined __thiscall __append(vector<GranularSynthesisRuntimeSettings::Grain,std::__ndk1::allocator<GranularSynthesisRuntimeSettings::Grain>> * this, ulong param_1)


/* std::__ndk1::vector<GranularSynthesisRuntimeSettings::Grain,
   std::__ndk1::allocator<GranularSynthesisRuntimeSettings::Grain> >::__append(unsigned long) */

void __thiscall
std::__ndk1::
vector<GranularSynthesisRuntimeSettings::Grain,std::__ndk1::allocator<GranularSynthesisRuntimeSettings::Grain>>
::__append(vector<GranularSynthesisRuntimeSettings::Grain,std::__ndk1::allocator<GranularSynthesisRuntimeSettings::Grain>>
           *this,ulong param_1)

{
  ulong uVar1;
  void *__dest;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  void *pvVar8;
  size_t __n;
  
  puVar3 = *(undefined8 **)(this + 8);
  if (param_1 <= (ulong)(*(long *)(this + 0x10) - (long)puVar3 >> 4)) {
    puVar4 = puVar3;
    if (param_1 != 0) {
      puVar4 = puVar3 + param_1 * 2;
      uVar1 = param_1 - 1 & 0xfffffffffffffff;
      if (uVar1 != 0) {
        uVar1 = uVar1 + 1;
        puVar7 = puVar3 + 2;
        uVar5 = uVar1 & 0x1ffffffffffffffe;
        puVar3 = puVar3 + uVar5 * 2;
        uVar2 = uVar5;
        do {
          puVar7[-2] = 0;
          uVar2 = uVar2 - 2;
          *puVar7 = 0;
          *(undefined4 *)(puVar7 + -1) = 0;
          *(undefined4 *)(puVar7 + 1) = 0;
          *(undefined *)((long)puVar7 + -4) = 1;
          *(undefined *)((long)puVar7 + 0xc) = 1;
          puVar7 = puVar7 + 4;
        } while (uVar2 != 0);
        if (uVar1 == uVar5) goto LAB_008a5a14;
      }
      do {
        *puVar3 = 0;
        *(undefined4 *)(puVar3 + 1) = 0;
        *(undefined *)((long)puVar3 + 0xc) = 1;
        puVar3 = puVar3 + 2;
      } while (puVar3 != puVar4);
    }
LAB_008a5a14:
    *(undefined8 **)(this + 8) = puVar4;
    return;
  }
  pvVar8 = *(void **)this;
  __n = (long)puVar3 - (long)pvVar8;
  uVar1 = ((long)__n >> 4) + param_1;
  if (uVar1 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  uVar2 = *(long *)(this + 0x10) - (long)pvVar8;
  uVar5 = (long)uVar2 >> 3;
  if (uVar1 <= uVar5) {
    uVar1 = uVar5;
  }
  if (0x7fffffffffffffef < uVar2) {
    uVar1 = 0xfffffffffffffff;
  }
  if (uVar1 == 0) {
    __dest = (void *)0x0;
  }
  else {
    if (uVar1 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    __dest = operator_new(uVar1 << 4);
  }
  puVar3 = (undefined8 *)((long)__dest + ((long)__n >> 4) * 0x10);
  puVar4 = puVar3 + param_1 * 2;
  uVar2 = param_1 - 1 & 0xfffffffffffffff;
  if (uVar2 != 0) {
    uVar2 = uVar2 + 1;
    puVar7 = puVar3 + 2;
    uVar6 = uVar2 & 0x1ffffffffffffffe;
    puVar3 = puVar3 + uVar6 * 2;
    uVar5 = uVar6;
    do {
      puVar7[-2] = 0;
      uVar5 = uVar5 - 2;
      *puVar7 = 0;
      *(undefined4 *)(puVar7 + -1) = 0;
      *(undefined4 *)(puVar7 + 1) = 0;
      *(undefined *)((long)puVar7 + -4) = 1;
      *(undefined *)((long)puVar7 + 0xc) = 1;
      puVar7 = puVar7 + 4;
    } while (uVar5 != 0);
    if (uVar2 == uVar6) goto LAB_008a5a98;
  }
  do {
    *puVar3 = 0;
    *(undefined4 *)(puVar3 + 1) = 0;
    *(undefined *)((long)puVar3 + 0xc) = 1;
    puVar3 = puVar3 + 2;
  } while (puVar3 != puVar4);
LAB_008a5a98:
  if (0 < (long)__n) {
    memcpy(__dest,pvVar8,__n);
  }
  pvVar8 = *(void **)this;
  *(void **)this = __dest;
  *(undefined8 **)(this + 8) = puVar4;
  *(void **)(this + 0x10) = (void *)((long)__dest + uVar1 * 0x10);
  if (pvVar8 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar8);
  return;
}


