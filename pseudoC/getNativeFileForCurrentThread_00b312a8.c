// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNativeFileForCurrentThread
// Entry Point: 00b312a8
// Size: 468 bytes
// Signature: undefined getNativeFileForCurrentThread(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CompressedFileArchive::getNativeFileForCurrentThread() */

long * CompressedFileArchive::getNativeFileForCurrentThread(void)

{
  ACCESS_MODE AVar1;
  long *plVar2;
  long lVar3;
  long in_x0;
  long lVar4;
  long *this;
  void *__dest;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  void *pvVar8;
  size_t __n;
  
  Mutex::enterCriticalSection();
  lVar4 = ThreadUtil::getCurrentThreadHandle();
  if (lVar4 == *(long *)(in_x0 + 0xa0)) {
    this = (long *)(in_x0 + 0x78);
  }
  else {
    pvVar8 = *(void **)(in_x0 + 0xa8);
    lVar3 = *(long *)(in_x0 + 0xb0) - (long)pvVar8;
    if (lVar3 != 0) {
      uVar6 = 0;
      do {
        if (*(long *)((long)pvVar8 + uVar6 * 0x10) == lVar4) {
          this = *(long **)((long)pvVar8 + uVar6 * 0x10 + 8);
          if (this != (long *)0x0) goto LAB_00b313b0;
          break;
        }
        uVar6 = (ulong)((int)uVar6 + 1);
      } while (uVar6 < (ulong)(lVar3 >> 4));
    }
    this = (long *)operator_new(0x28);
                    /* try { // try from 00b31340 to 00b31343 has its CatchHandler @ 00b3147c */
    NativeFile::NativeFile((NativeFile *)this);
    AVar1 = (int)in_x0 + 0x31;
    if ((*(byte *)(in_x0 + 0x30) & 1) != 0) {
      AVar1 = (ACCESS_MODE)*(undefined8 *)(in_x0 + 0x40);
    }
    uVar6 = NativeFile::open((char *)this,AVar1,false);
    if (((uVar6 & 1) == 0) || (uVar6 = (**(code **)(*this + 0x10))(this), (uVar6 & 1) == 0)) {
      (**(code **)(*this + 8))(this);
      this = (long *)0x0;
    }
    else {
      plVar2 = *(long **)(in_x0 + 0xb0);
      if (plVar2 < *(long **)(in_x0 + 0xb8)) {
        *plVar2 = lVar4;
        plVar2[1] = (long)this;
        *(long **)(in_x0 + 0xb0) = plVar2 + 2;
      }
      else {
        pvVar8 = *(void **)(in_x0 + 0xa8);
        __n = (long)plVar2 - (long)pvVar8;
        uVar6 = ((long)__n >> 4) + 1;
        if (uVar6 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        uVar5 = (long)*(long **)(in_x0 + 0xb8) - (long)pvVar8;
        uVar7 = (long)uVar5 >> 3;
        if (uVar6 <= uVar7) {
          uVar6 = uVar7;
        }
        if (0x7fffffffffffffef < uVar5) {
          uVar6 = 0xfffffffffffffff;
        }
        if (uVar6 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
        __dest = operator_new(uVar6 * 0x10);
        plVar2 = (long *)((long)__dest + ((long)__n >> 4) * 0x10);
        *plVar2 = lVar4;
        plVar2[1] = (long)this;
        if (0 < (long)__n) {
          memcpy(__dest,pvVar8,__n);
        }
        *(void **)(in_x0 + 0xa8) = __dest;
        *(long **)(in_x0 + 0xb0) = plVar2 + 2;
        *(void **)(in_x0 + 0xb8) = (void *)((long)__dest + uVar6 * 0x10);
        if (pvVar8 != (void *)0x0) {
          operator_delete(pvVar8);
        }
      }
    }
  }
LAB_00b313b0:
  Mutex::leaveCriticalSection();
  return this;
}


