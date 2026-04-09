// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getAllI3DLoadTaskRequestIds
// Entry Point: 009444cc
// Size: 568 bytes
// Signature: undefined getAllI3DLoadTaskRequestIds(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* I3DStreamingManager::getAllI3DLoadTaskRequestIds() */

void I3DStreamingManager::getAllI3DLoadTaskRequestIds(void)

{
  ulong uVar1;
  long *plVar2;
  long in_x0;
  void *__dest;
  void *pvVar3;
  void **in_x8;
  long lVar4;
  ulong uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  long *plVar9;
  
  *in_x8 = (void *)0x0;
  in_x8[1] = (void *)0x0;
  in_x8[2] = (void *)0x0;
                    /* try { // try from 00944500 to 00944507 has its CatchHandler @ 00944704 */
  Mutex::enterCriticalSection();
  plVar9 = *(long **)(in_x0 + 8);
  plVar2 = *(long **)(in_x0 + 0x10);
  if (plVar9 == plVar2) {
    __dest = (void *)0x0;
    puVar8 = (undefined4 *)0x0;
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar8 = (undefined4 *)0x0;
    pvVar3 = (void *)0x0;
    puVar7 = (undefined4 *)0x0;
    do {
      lVar4 = *plVar9;
      if (puVar7 == puVar8) {
        uVar5 = (long)puVar8 - (long)pvVar3;
        uVar1 = ((long)uVar5 >> 2) + 1;
        if (uVar1 >> 0x3e != 0) {
                    /* try { // try from 009446dc to 009446e3 has its CatchHandler @ 00944714 */
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        if (uVar1 <= (ulong)((long)uVar5 >> 1)) {
          uVar1 = (long)uVar5 >> 1;
        }
        if (0x7ffffffffffffffb < uVar5) {
          uVar1 = 0x3fffffffffffffff;
        }
        if (uVar1 == 0) {
          __dest = (void *)0x0;
        }
        else {
          if (uVar1 >> 0x3e != 0) {
                    /* try { // try from 009446ec to 009446f7 has its CatchHandler @ 00944714 */
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
                    /* try { // try from 0094458c to 0094458f has its CatchHandler @ 0094470c */
          __dest = operator_new(uVar1 << 2);
        }
        puVar8 = (undefined4 *)((long)__dest + ((long)uVar5 >> 2) * 4);
        puVar6 = puVar8 + 1;
        *puVar8 = *(undefined4 *)(lVar4 + 0x4c8);
        if (0 < (long)uVar5) {
          memcpy(__dest,pvVar3,uVar5);
        }
        puVar8 = (undefined4 *)((long)__dest + uVar1 * 4);
        *in_x8 = __dest;
        in_x8[1] = puVar6;
        in_x8[2] = puVar8;
        if (pvVar3 != (void *)0x0) {
          operator_delete(pvVar3);
        }
      }
      else {
        puVar6 = puVar7 + 1;
        *puVar7 = *(undefined4 *)(lVar4 + 0x4c8);
        in_x8[1] = puVar6;
        __dest = pvVar3;
      }
      plVar9 = plVar9 + 1;
      pvVar3 = __dest;
      puVar7 = puVar6;
    } while (plVar9 != plVar2);
  }
  plVar9 = *(long **)(in_x0 + 0x20);
  plVar2 = *(long **)(in_x0 + 0x28);
  do {
    if (plVar9 == plVar2) {
                    /* try { // try from 009446b4 to 009446bb has its CatchHandler @ 00944704 */
      Mutex::leaveCriticalSection();
      return;
    }
    lVar4 = *plVar9;
    if (puVar6 == puVar8) {
      uVar5 = (long)puVar8 - (long)__dest;
      uVar1 = ((long)uVar5 >> 2) + 1;
      if (uVar1 >> 0x3e != 0) {
                    /* try { // try from 009446e4 to 009446eb has its CatchHandler @ 00944710 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      if (uVar1 <= (ulong)((long)uVar5 >> 1)) {
        uVar1 = (long)uVar5 >> 1;
      }
      if (0x7ffffffffffffffb < uVar5) {
        uVar1 = 0x3fffffffffffffff;
      }
      if (uVar1 == 0) {
        pvVar3 = (void *)0x0;
      }
      else {
        if (uVar1 >> 0x3e != 0) {
                    /* try { // try from 009446f8 to 00944703 has its CatchHandler @ 00944710 */
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
                    /* try { // try from 00944660 to 00944663 has its CatchHandler @ 00944708 */
        pvVar3 = operator_new(uVar1 << 2);
      }
      puVar8 = (undefined4 *)((long)pvVar3 + ((long)uVar5 >> 2) * 4);
      puVar7 = puVar8 + 1;
      *puVar8 = *(undefined4 *)(lVar4 + 0x4c8);
      if (0 < (long)uVar5) {
        memcpy(pvVar3,__dest,uVar5);
      }
      puVar8 = (undefined4 *)((long)pvVar3 + uVar1 * 4);
      *in_x8 = pvVar3;
      in_x8[1] = puVar7;
      in_x8[2] = puVar8;
      if (__dest != (void *)0x0) {
        operator_delete(__dest);
      }
    }
    else {
      puVar7 = puVar6 + 1;
      *puVar6 = *(undefined4 *)(lVar4 + 0x4c8);
      in_x8[1] = puVar7;
      pvVar3 = __dest;
    }
    plVar9 = plVar9 + 1;
    __dest = pvVar3;
    puVar6 = puVar7;
  } while( true );
}


