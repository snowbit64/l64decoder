// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __append
// Entry Point: 00b2f2a4
// Size: 328 bytes
// Signature: undefined __thiscall __append(vector<ICloudDevice::MetaData,std::__ndk1::allocator<ICloudDevice::MetaData>> * this, ulong param_1)


/* std::__ndk1::vector<ICloudDevice::MetaData, std::__ndk1::allocator<ICloudDevice::MetaData>
   >::__append(unsigned long) */

void __thiscall
std::__ndk1::vector<ICloudDevice::MetaData,std::__ndk1::allocator<ICloudDevice::MetaData>>::__append
          (vector<ICloudDevice::MetaData,std::__ndk1::allocator<ICloudDevice::MetaData>> *this,
          ulong param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *__src;
  size_t __n;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  
  puVar7 = *(undefined8 **)(this + 8);
  if ((ulong)(*(long *)(this + 0x10) - (long)puVar7 >> 5) < param_1) {
    lVar8 = (long)puVar7 - *(long *)this >> 5;
    uVar1 = lVar8 + param_1;
    if (uVar1 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    uVar4 = *(long *)(this + 0x10) - *(long *)this;
    uVar5 = (long)uVar4 >> 4;
    if (uVar1 <= uVar5) {
      uVar1 = uVar5;
    }
    if (0x7fffffffffffffdf < uVar4) {
      uVar1 = 0x7ffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar3 = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar3 = operator_new(uVar1 << 5);
    }
    puVar2 = (undefined8 *)((long)pvVar3 + lVar8 * 0x20);
    lVar8 = param_1 * 0x20;
    puVar6 = puVar2;
    do {
      *puVar6 = 0;
      puVar6[1] = 0;
      lVar8 = lVar8 + -0x20;
      *(undefined *)(puVar6 + 3) = 0;
      puVar6[2] = 0;
      puVar6 = puVar6 + 4;
    } while (lVar8 != 0);
    __src = *(void **)this;
    __n = (long)puVar7 - (long)__src;
    if (0 < (long)__n) {
      memcpy((void *)((long)puVar2 - __n),__src,__n);
      __src = *(void **)this;
    }
    *(void **)this = (void *)((long)puVar2 - __n);
    *(undefined8 **)(this + 8) = puVar2 + param_1 * 4;
    *(void **)(this + 0x10) = (void *)((long)pvVar3 + uVar1 * 0x20);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  else {
    puVar6 = puVar7;
    if (param_1 != 0) {
      puVar6 = puVar7 + param_1 * 4;
      lVar8 = param_1 << 5;
      do {
        *puVar7 = 0;
        puVar7[1] = 0;
        lVar8 = lVar8 + -0x20;
        *(undefined *)(puVar7 + 3) = 0;
        puVar7[2] = 0;
        puVar7 = puVar7 + 4;
      } while (lVar8 != 0);
    }
    *(undefined8 **)(this + 8) = puVar6;
  }
  return;
}


