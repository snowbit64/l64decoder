// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __append
// Entry Point: 007470c0
// Size: 444 bytes
// Signature: undefined __thiscall __append(vector<std::__ndk1::pair<Candidate,unsigned_int*>,std::__ndk1::allocator<std::__ndk1::pair<Candidate,unsigned_int*>>> * this, ulong param_1)


/* std::__ndk1::vector<std::__ndk1::pair<Candidate, unsigned int*>,
   std::__ndk1::allocator<std::__ndk1::pair<Candidate, unsigned int*> > >::__append(unsigned long)
    */

void __thiscall
std::__ndk1::
vector<std::__ndk1::pair<Candidate,unsigned_int*>,std::__ndk1::allocator<std::__ndk1::pair<Candidate,unsigned_int*>>>
::__append(vector<std::__ndk1::pair<Candidate,unsigned_int*>,std::__ndk1::allocator<std::__ndk1::pair<Candidate,unsigned_int*>>>
           *this,ulong param_1)

{
  void *pvVar1;
  void *__src;
  size_t __n;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  
  puVar8 = *(undefined8 **)(this + 8);
  if (param_1 <= (ulong)(*(long *)(this + 0x10) - (long)puVar8 >> 4)) {
    puVar9 = puVar8;
    if (param_1 != 0) {
      puVar9 = puVar8 + param_1 * 2;
      uVar3 = param_1 - 1 & 0xfffffffffffffff;
      if (2 < uVar3) {
        uVar3 = uVar3 + 1;
        uVar5 = uVar3 & 0x1ffffffffffffffc;
        puVar4 = puVar8 + 4;
        puVar8 = puVar8 + uVar5 * 2;
        uVar2 = uVar5;
        do {
          uVar2 = uVar2 - 4;
          puVar4[-3] = 0;
          puVar4[-4] = 0xffffffffffff0000;
          puVar4[-1] = 0;
          puVar4[-2] = 0xffffffffffff0000;
          puVar4[1] = 0;
          *puVar4 = 0xffffffffffff0000;
          puVar4[3] = 0;
          puVar4[2] = 0xffffffffffff0000;
          puVar4 = puVar4 + 8;
        } while (uVar2 != 0);
        if (uVar3 == uVar5) goto LAB_007471a0;
      }
      do {
        puVar4 = puVar8 + 2;
        *puVar8 = 0xffffffffffff0000;
        puVar8[1] = 0;
        puVar8 = puVar4;
      } while (puVar4 != puVar9);
    }
LAB_007471a0:
    *(undefined8 **)(this + 8) = puVar9;
    return;
  }
  lVar10 = (long)puVar8 - *(long *)this >> 4;
  uVar3 = lVar10 + param_1;
  if (uVar3 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  uVar2 = *(long *)(this + 0x10) - *(long *)this;
  uVar5 = (long)uVar2 >> 3;
  if (uVar3 <= uVar5) {
    uVar3 = uVar5;
  }
  if (0x7fffffffffffffef < uVar2) {
    uVar3 = 0xfffffffffffffff;
  }
  if (uVar3 == 0) {
    pvVar1 = (void *)0x0;
  }
  else {
    if (uVar3 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar1 = operator_new(uVar3 << 4);
  }
  puVar9 = (undefined8 *)((long)pvVar1 + lVar10 * 0x10);
  uVar2 = param_1 - 1 & 0xfffffffffffffff;
  puVar4 = puVar9;
  if (2 < uVar2) {
    uVar2 = uVar2 + 1;
    uVar6 = uVar2 & 0x1ffffffffffffffc;
    puVar4 = puVar9 + uVar6 * 2;
    puVar7 = puVar9 + 4;
    uVar5 = uVar6;
    do {
      uVar5 = uVar5 - 4;
      puVar7[-3] = 0;
      puVar7[-4] = 0xffffffffffff0000;
      puVar7[-1] = 0;
      puVar7[-2] = 0xffffffffffff0000;
      puVar7[1] = 0;
      *puVar7 = 0xffffffffffff0000;
      puVar7[3] = 0;
      puVar7[2] = 0xffffffffffff0000;
      puVar7 = puVar7 + 8;
    } while (uVar5 != 0);
    if (uVar2 == uVar6) goto LAB_0074720c;
  }
  do {
    puVar7 = puVar4 + 2;
    *puVar4 = 0xffffffffffff0000;
    puVar4[1] = 0;
    puVar4 = puVar7;
  } while (puVar7 != puVar9 + param_1 * 2);
LAB_0074720c:
  __src = *(void **)this;
  __n = (long)puVar8 - (long)__src;
  if (0 < (long)__n) {
    memcpy((void *)((long)puVar9 - __n),__src,__n);
    __src = *(void **)this;
  }
  *(void **)this = (void *)((long)puVar9 - __n);
  *(undefined8 **)(this + 8) = puVar9 + param_1 * 2;
  *(void **)(this + 0x10) = (void *)((long)pvVar1 + uVar3 * 0x10);
  if (__src == (void *)0x0) {
    return;
  }
  operator_delete(__src);
  return;
}


