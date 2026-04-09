// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: startWander
// Entry Point: 00880c6c
// Size: 284 bytes
// Signature: undefined startWander(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AnimalSteering::startWander() */

void AnimalSteering::startWander(void)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined4 *in_x0;
  void *__dest;
  ulong uVar3;
  ulong uVar4;
  void *__src;
  size_t __n;
  
  puVar2 = *(undefined4 **)(in_x0 + 0x28);
  in_x0[0xd] = 0;
  in_x0[0xe] = 0;
  *in_x0 = 1;
  if (puVar2 < *(undefined4 **)(in_x0 + 0x2a)) {
    *(undefined8 *)(puVar2 + 1) = 0;
    *(undefined *)(puVar2 + 3) = 0;
    *puVar2 = 3;
    *(undefined4 **)(in_x0 + 0x28) = puVar2 + 4;
  }
  else {
    __src = *(void **)(in_x0 + 0x26);
    __n = (long)puVar2 - (long)__src;
    uVar1 = ((long)__n >> 4) + 1;
    if (uVar1 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    uVar3 = (long)*(undefined4 **)(in_x0 + 0x2a) - (long)__src;
    uVar4 = (long)uVar3 >> 3;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    if (0x7fffffffffffffef < uVar3) {
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
    puVar2 = (undefined4 *)((long)__dest + ((long)__n >> 4) * 0x10);
    *puVar2 = 3;
    *(undefined8 *)(puVar2 + 1) = 0;
    *(undefined *)(puVar2 + 3) = 0;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *(void **)(in_x0 + 0x26) = __dest;
    *(undefined4 **)(in_x0 + 0x28) = puVar2 + 4;
    *(void **)(in_x0 + 0x2a) = (void *)((long)__dest + uVar1 * 0x10);
    if (__src != (void *)0x0) {
      operator_delete(__src);
    }
  }
  in_x0[0x11] = 0x3f800000;
  return;
}


