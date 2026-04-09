// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getAllSharedI3DLoadTaskRequestIds
// Entry Point: 00906774
// Size: 300 bytes
// Signature: undefined getAllSharedI3DLoadTaskRequestIds(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* I3DManager::getAllSharedI3DLoadTaskRequestIds() */

void I3DManager::getAllSharedI3DLoadTaskRequestIds(void)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *in_x0;
  void *__dest;
  void **in_x8;
  void *__src;
  undefined4 *puVar3;
  ulong __n;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  puVar4 = (undefined8 *)*in_x0;
  puVar2 = (undefined8 *)in_x0[1];
  *in_x8 = (void *)0x0;
  in_x8[1] = (void *)0x0;
  in_x8[2] = (void *)0x0;
  if (puVar4 != puVar2) {
    puVar3 = (undefined4 *)0x0;
    __src = (void *)0x0;
    puVar6 = (undefined4 *)0x0;
    do {
      puVar7 = (undefined4 *)*puVar4;
      if (puVar6 == puVar3) {
        __n = (long)puVar3 - (long)__src;
        uVar1 = ((long)__n >> 2) + 1;
        if (uVar1 >> 0x3e != 0) {
                    /* try { // try from 0090688c to 0090689f has its CatchHandler @ 009068a8 */
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        if (uVar1 <= (ulong)((long)__n >> 1)) {
          uVar1 = (long)__n >> 1;
        }
        if (0x7ffffffffffffffb < __n) {
          uVar1 = 0x3fffffffffffffff;
        }
        if (uVar1 == 0) {
          __dest = (void *)0x0;
        }
        else {
          if (uVar1 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
                    /* try { // try from 0090681c to 0090681f has its CatchHandler @ 009068a0 */
          __dest = operator_new(uVar1 << 2);
        }
        puVar3 = (undefined4 *)((long)__dest + ((long)__n >> 2) * 4);
        puVar5 = puVar3 + 1;
        *puVar3 = *puVar7;
        if (0 < (long)__n) {
          memcpy(__dest,__src,__n);
        }
        puVar3 = (undefined4 *)((long)__dest + uVar1 * 4);
        *in_x8 = __dest;
        in_x8[1] = puVar5;
        in_x8[2] = puVar3;
        if (__src != (void *)0x0) {
          operator_delete(__src);
        }
      }
      else {
        puVar5 = puVar6 + 1;
        *puVar6 = *puVar7;
        in_x8[1] = puVar5;
        __dest = __src;
      }
      puVar4 = puVar4 + 1;
      __src = __dest;
      puVar6 = puVar5;
    } while (puVar4 != puVar2);
  }
  return;
}


