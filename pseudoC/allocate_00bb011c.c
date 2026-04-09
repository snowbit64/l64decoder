// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: allocate
// Entry Point: 00bb011c
// Size: 292 bytes
// Signature: undefined __thiscall allocate(BtSerializerWrapper * this, ulong param_1, int param_2)


/* Bt2PhysicsSerialization::BtSerializerWrapper::allocate(unsigned long, int) */

undefined8 * __thiscall
Bt2PhysicsSerialization::BtSerializerWrapper::allocate
          (BtSerializerWrapper *this,ulong param_1,int param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  void *pvVar6;
  void *__dest;
  ulong __n;
  
  puVar5 = (undefined8 *)operator_new(0x18);
  iVar4 = (int)param_1 * param_2;
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  pvVar6 = operator_new__((long)iVar4);
  puVar2 = *(undefined8 **)(this + 0x10);
  puVar3 = *(undefined8 **)(this + 0x18);
  *(int *)((long)puVar5 + 4) = iVar4;
  puVar5[1] = pvVar6;
  *(undefined4 *)(puVar5 + 2) = 0;
  *(int *)((long)puVar5 + 0x14) = param_2;
  if (puVar2 == puVar3) {
    pvVar6 = *(void **)(this + 8);
    __n = (long)puVar2 - (long)pvVar6;
    uVar1 = ((long)__n >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar1 <= (ulong)((long)__n >> 2)) {
      uVar1 = (long)__n >> 2;
    }
    if (0x7ffffffffffffff7 < __n) {
      uVar1 = 0x1fffffffffffffff;
    }
    if (uVar1 == 0) {
      __dest = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      __dest = operator_new(uVar1 << 3);
    }
    puVar2 = (undefined8 *)((long)__dest + ((long)__n >> 3) * 8);
    *puVar2 = puVar5;
    if (0 < (long)__n) {
      memcpy(__dest,pvVar6,__n);
    }
    *(void **)(this + 8) = __dest;
    *(undefined8 **)(this + 0x10) = puVar2 + 1;
    *(void **)(this + 0x18) = (void *)((long)__dest + uVar1 * 8);
    if (pvVar6 != (void *)0x0) {
      operator_delete(pvVar6);
    }
  }
  else {
    *puVar2 = puVar5;
    *(undefined8 **)(this + 0x10) = puVar2 + 1;
  }
  return puVar5;
}


