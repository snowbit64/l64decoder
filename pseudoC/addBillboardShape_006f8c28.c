// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addBillboardShape
// Entry Point: 006f8c28
// Size: 308 bytes
// Signature: undefined __thiscall addBillboardShape(AdsBrockerManager * this, GsShape * param_1, uchar * param_2, uint param_3)


/* AdsBrockerManager::addBillboardShape(GsShape*, unsigned char const*, unsigned int) */

void __thiscall
AdsBrockerManager::addBillboardShape
          (AdsBrockerManager *this,GsShape *param_1,uchar *param_2,uint param_3)

{
  ulong uVar1;
  BillboardShape **ppBVar2;
  BillboardShape *this_00;
  void *__dest;
  ulong uVar3;
  ulong uVar4;
  void *__src;
  size_t __n;
  
  Mutex::enterCriticalSection();
  this_00 = (BillboardShape *)operator_new(0xa0);
                    /* try { // try from 006f8c70 to 006f8c7f has its CatchHandler @ 006f8d5c */
  BillboardShape::BillboardShape(this_00,*(uint *)(param_1 + 0x18),param_2,param_3,this);
  ppBVar2 = *(BillboardShape ***)(this + 8);
  if (ppBVar2 < *(BillboardShape ***)(this + 0x10)) {
    *ppBVar2 = this_00;
    *(BillboardShape ***)(this + 8) = ppBVar2 + 1;
  }
  else {
    __src = *(void **)this;
    __n = (long)ppBVar2 - (long)__src;
    uVar1 = ((long)__n >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    uVar3 = (long)*(BillboardShape ***)(this + 0x10) - (long)__src;
    uVar4 = (long)uVar3 >> 2;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    if (0x7ffffffffffffff7 < uVar3) {
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
    ppBVar2 = (BillboardShape **)((long)__dest + ((long)__n >> 3) * 8);
    *ppBVar2 = this_00;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *(void **)this = __dest;
    *(BillboardShape ***)(this + 8) = ppBVar2 + 1;
    *(void **)(this + 0x10) = (void *)((long)__dest + uVar1 * 8);
    if (__src != (void *)0x0) {
      operator_delete(__src);
    }
  }
  Mutex::leaveCriticalSection();
  return;
}


