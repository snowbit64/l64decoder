// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: readFile
// Entry Point: 00b2eecc
// Size: 348 bytes
// Signature: undefined __thiscall readFile(AndroidCloudDevice * this, Session * param_1, char * param_2, Operation * * param_3, void * param_4)


/* AndroidCloudDevice::readFile(ICloudDevice::Session*, char const*, ICloudDevice::Operation**,
   void*) */

void __thiscall
AndroidCloudDevice::readFile
          (AndroidCloudDevice *this,Session *param_1,char *param_2,Operation **param_3,void *param_4
          )

{
  int iVar1;
  ulong uVar2;
  int **ppiVar3;
  int **ppiVar4;
  int *piVar5;
  void *__dest;
  int iVar6;
  void *__src;
  ulong __n;
  
  piVar5 = (int *)operator_new(0x18);
  *(Session **)(piVar5 + 2) = param_1;
  *(void **)(piVar5 + 4) = param_4;
  iVar6 = AndroidOperation::s_nextId;
  ppiVar3 = *(int ***)(this + 0x28);
  ppiVar4 = *(int ***)(this + 0x30);
  iVar1 = AndroidOperation::s_nextId + 1;
  *piVar5 = AndroidOperation::s_nextId;
  AndroidOperation::s_nextId = iVar1;
  if (ppiVar3 == ppiVar4) {
    __src = *(void **)(this + 0x20);
    __n = (long)ppiVar3 - (long)__src;
    uVar2 = ((long)__n >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar2 <= (ulong)((long)__n >> 2)) {
      uVar2 = (long)__n >> 2;
    }
    if (0x7ffffffffffffff7 < __n) {
      uVar2 = 0x1fffffffffffffff;
    }
    if (uVar2 == 0) {
      __dest = (void *)0x0;
    }
    else {
      if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      __dest = operator_new(uVar2 << 3);
    }
    ppiVar3 = (int **)((long)__dest + ((long)__n >> 3) * 8);
    *ppiVar3 = piVar5;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *(void **)(this + 0x20) = __dest;
    *(int ***)(this + 0x28) = ppiVar3 + 1;
    *(void **)(this + 0x30) = (void *)((long)__dest + uVar2 * 8);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      iVar6 = *piVar5;
    }
  }
  else {
    *ppiVar3 = piVar5;
    *(int ***)(this + 0x28) = ppiVar3 + 1;
  }
  *param_3 = (Operation *)piVar5;
  AndroidJNICall::callVoidFromStringInt
            (*(AndroidJNICall **)(this + 0x38),"readFile",param_2,*(uint *)(param_1 + 0x20),iVar6);
  return;
}


