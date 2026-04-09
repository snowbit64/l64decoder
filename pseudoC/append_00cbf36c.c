// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __append
// Entry Point: 00cbf36c
// Size: 532 bytes
// Signature: undefined __thiscall __append(vector<CryptoPP::Integer,std::__ndk1::allocator<CryptoPP::Integer>> * this, ulong param_1, Integer * param_2)


/* std::__ndk1::vector<CryptoPP::Integer, std::__ndk1::allocator<CryptoPP::Integer>
   >::__append(unsigned long, CryptoPP::Integer const&) */

void __thiscall
std::__ndk1::vector<CryptoPP::Integer,std::__ndk1::allocator<CryptoPP::Integer>>::__append
          (vector<CryptoPP::Integer,std::__ndk1::allocator<CryptoPP::Integer>> *this,ulong param_1,
          Integer *param_2)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  Integer *pIVar10;
  Integer *this_00;
  Integer *pIVar11;
  
  lVar2 = tpidr_el0;
  lVar4 = *(long *)(lVar2 + 0x28);
  pIVar10 = *(Integer **)(this + 8);
  if ((ulong)((*(long *)(this + 0x10) - (long)pIVar10 >> 4) * -0x5555555555555555) < param_1) {
    lVar6 = (long)pIVar10 - *(long *)this >> 4;
    uVar1 = lVar6 * -0x5555555555555555 + param_1;
    if (0x555555555555555 < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    lVar5 = *(long *)(this + 0x10) - *(long *)this >> 4;
    uVar7 = lVar5 * 0x5555555555555556;
    if (uVar1 <= uVar7) {
      uVar1 = uVar7;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar5 * -0x5555555555555555)) {
      uVar1 = 0x555555555555555;
    }
    if (uVar1 == 0) {
      pvVar3 = (void *)0x0;
    }
    else {
      if (0x555555555555555 < uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar3 = operator_new(uVar1 * 0x30);
    }
    lVar5 = param_1 * 0x30;
    this_00 = (Integer *)((long)pvVar3 + lVar6 * 0x10);
    pvVar3 = (void *)((long)pvVar3 + uVar1 * 0x30);
    pIVar11 = this_00 + lVar5;
    pIVar10 = this_00;
    do {
                    /* try { // try from 00cbf498 to 00cbf4a3 has its CatchHandler @ 00cbf590 */
      CryptoPP::Integer::Integer(pIVar10,param_2);
      pIVar10 = pIVar10 + 0x30;
      lVar5 = lVar5 + -0x30;
    } while (lVar5 != 0);
    puVar9 = *(undefined8 **)this;
    puVar8 = *(undefined8 **)(this + 8);
    if (puVar8 == puVar9) {
      *(Integer **)this = this_00;
      *(Integer **)(this + 8) = pIVar11;
      *(void **)(this + 0x10) = pvVar3;
    }
    else {
      do {
        this_00 = this_00 + -0x30;
        puVar8 = puVar8 + -6;
                    /* try { // try from 00cbf4c8 to 00cbf4d3 has its CatchHandler @ 00cbf580 */
        CryptoPP::Integer::Integer(this_00,(Integer *)puVar8);
      } while (puVar8 != puVar9);
      puVar9 = *(undefined8 **)this;
      puVar8 = *(undefined8 **)(this + 8);
      *(Integer **)this = this_00;
      *(Integer **)(this + 8) = pIVar11;
      *(void **)(this + 0x10) = pvVar3;
      while (puVar8 != puVar9) {
        puVar8 = puVar8 + -6;
        (**(code **)*puVar8)(puVar8);
      }
    }
    if (puVar9 != (undefined8 *)0x0) {
      operator_delete(puVar9);
    }
  }
  else {
    pIVar11 = pIVar10;
    if (param_1 != 0) {
      pIVar11 = pIVar10 + param_1 * 0x30;
      lVar6 = param_1 * 0x30;
      do {
                    /* try { // try from 00cbf44c to 00cbf457 has its CatchHandler @ 00cbf588 */
        CryptoPP::Integer::Integer(pIVar10,param_2);
        pIVar10 = pIVar10 + 0x30;
        lVar6 = lVar6 + -0x30;
      } while (lVar6 != 0);
    }
    *(Integer **)(this + 8) = pIVar11;
  }
  if (*(long *)(lVar2 + 0x28) != lVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


