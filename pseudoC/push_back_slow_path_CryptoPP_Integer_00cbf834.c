// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __push_back_slow_path<CryptoPP::Integer>
// Entry Point: 00cbf834
// Size: 420 bytes
// Signature: void __thiscall __push_back_slow_path<CryptoPP::Integer>(vector<CryptoPP::Integer,std::__ndk1::allocator<CryptoPP::Integer>> * this, Integer * param_1)


/* void std::__ndk1::vector<CryptoPP::Integer, std::__ndk1::allocator<CryptoPP::Integer>
   >::__push_back_slow_path<CryptoPP::Integer>(CryptoPP::Integer&&) */

void __thiscall
std::__ndk1::vector<CryptoPP::Integer,std::__ndk1::allocator<CryptoPP::Integer>>::
__push_back_slow_path<CryptoPP::Integer>
          (vector<CryptoPP::Integer,std::__ndk1::allocator<CryptoPP::Integer>> *this,
          Integer *param_1)

{
  ulong uVar1;
  Integer *pIVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  Integer *this_00;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  lVar6 = *(long *)(this + 8) - *(long *)this >> 4;
  uVar1 = lVar6 * -0x5555555555555555 + 1;
  if (0x555555555555555 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  lVar7 = *(long *)(this + 0x10) - *(long *)this >> 4;
  uVar8 = lVar7 * 0x5555555555555556;
  if (uVar1 <= uVar8) {
    uVar1 = uVar8;
  }
  if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar7 * -0x5555555555555555)) {
    uVar1 = 0x555555555555555;
  }
  if (uVar1 == 0) {
    pvVar4 = (void *)0x0;
  }
  else {
    if (0x555555555555555 < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar4 = operator_new(uVar1 * 0x30);
  }
  this_00 = (Integer *)((long)pvVar4 + lVar6 * 0x10);
  pvVar4 = (void *)((long)pvVar4 + uVar1 * 0x30);
                    /* try { // try from 00cbf8f8 to 00cbf903 has its CatchHandler @ 00cbf9d8 */
  CryptoPP::Integer::Integer(this_00,param_1);
  puVar10 = *(undefined8 **)this;
  puVar9 = *(undefined8 **)(this + 8);
  pIVar2 = this_00 + 0x30;
  if (puVar9 == puVar10) {
    *(Integer **)this = this_00;
    *(Integer **)(this + 8) = pIVar2;
    *(void **)(this + 0x10) = pvVar4;
  }
  else {
    do {
      this_00 = this_00 + -0x30;
      puVar9 = puVar9 + -6;
                    /* try { // try from 00cbf920 to 00cbf92b has its CatchHandler @ 00cbf9dc */
      CryptoPP::Integer::Integer(this_00,(Integer *)puVar9);
    } while (puVar9 != puVar10);
    puVar10 = *(undefined8 **)this;
    puVar9 = *(undefined8 **)(this + 8);
    *(Integer **)this = this_00;
    *(Integer **)(this + 8) = pIVar2;
    *(void **)(this + 0x10) = pvVar4;
    while (puVar9 != puVar10) {
      puVar9 = puVar9 + -6;
      (**(code **)*puVar9)(puVar9);
    }
  }
  if (puVar10 != (undefined8 *)0x0) {
    operator_delete(puVar10);
  }
  if (*(long *)(lVar3 + 0x28) != lVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


