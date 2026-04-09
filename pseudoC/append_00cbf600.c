// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __append
// Entry Point: 00cbf600
// Size: 520 bytes
// Signature: undefined __thiscall __append(vector<CryptoPP::Integer,std::__ndk1::allocator<CryptoPP::Integer>> * this, ulong param_1)


/* std::__ndk1::vector<CryptoPP::Integer, std::__ndk1::allocator<CryptoPP::Integer>
   >::__append(unsigned long) */

void __thiscall
std::__ndk1::vector<CryptoPP::Integer,std::__ndk1::allocator<CryptoPP::Integer>>::__append
          (vector<CryptoPP::Integer,std::__ndk1::allocator<CryptoPP::Integer>> *this,ulong param_1)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  Integer *pIVar8;
  Integer *this_00;
  undefined8 *puVar9;
  undefined8 *puVar10;
  Integer *pIVar11;
  
  lVar2 = tpidr_el0;
  lVar4 = *(long *)(lVar2 + 0x28);
  pIVar8 = *(Integer **)(this + 8);
  if ((ulong)((*(long *)(this + 0x10) - (long)pIVar8 >> 4) * -0x5555555555555555) < param_1) {
    lVar6 = (long)pIVar8 - *(long *)this >> 4;
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
    pIVar8 = this_00;
    do {
                    /* try { // try from 00cbf724 to 00cbf72b has its CatchHandler @ 00cbf818 */
      CryptoPP::Integer::Integer(pIVar8);
      pIVar8 = pIVar8 + 0x30;
      lVar5 = lVar5 + -0x30;
    } while (lVar5 != 0);
    puVar10 = *(undefined8 **)this;
    puVar9 = *(undefined8 **)(this + 8);
    if (puVar9 == puVar10) {
      *(Integer **)this = this_00;
      *(Integer **)(this + 8) = pIVar11;
      *(void **)(this + 0x10) = pvVar3;
    }
    else {
      do {
        this_00 = this_00 + -0x30;
        puVar9 = puVar9 + -6;
                    /* try { // try from 00cbf750 to 00cbf75b has its CatchHandler @ 00cbf808 */
        CryptoPP::Integer::Integer(this_00,(Integer *)puVar9);
      } while (puVar9 != puVar10);
      puVar10 = *(undefined8 **)this;
      puVar9 = *(undefined8 **)(this + 8);
      *(Integer **)this = this_00;
      *(Integer **)(this + 8) = pIVar11;
      *(void **)(this + 0x10) = pvVar3;
      while (puVar9 != puVar10) {
        puVar9 = puVar9 + -6;
        (**(code **)*puVar9)(puVar9);
      }
    }
    if (puVar10 != (undefined8 *)0x0) {
      operator_delete(puVar10);
    }
  }
  else {
    pIVar11 = pIVar8;
    if (param_1 != 0) {
      pIVar11 = pIVar8 + param_1 * 0x30;
      lVar6 = param_1 * 0x30;
      do {
                    /* try { // try from 00cbf6dc to 00cbf6e3 has its CatchHandler @ 00cbf810 */
        CryptoPP::Integer::Integer(pIVar8);
        pIVar8 = pIVar8 + 0x30;
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


