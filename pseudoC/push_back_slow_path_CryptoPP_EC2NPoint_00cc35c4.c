// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __push_back_slow_path<CryptoPP::EC2NPoint>
// Entry Point: 00cc35c4
// Size: 408 bytes
// Signature: void __thiscall __push_back_slow_path<CryptoPP::EC2NPoint>(vector<CryptoPP::EC2NPoint,std::__ndk1::allocator<CryptoPP::EC2NPoint>> * this, EC2NPoint * param_1)


/* void std::__ndk1::vector<CryptoPP::EC2NPoint, std::__ndk1::allocator<CryptoPP::EC2NPoint>
   >::__push_back_slow_path<CryptoPP::EC2NPoint>(CryptoPP::EC2NPoint&&) */

void __thiscall
std::__ndk1::vector<CryptoPP::EC2NPoint,std::__ndk1::allocator<CryptoPP::EC2NPoint>>::
__push_back_slow_path<CryptoPP::EC2NPoint>
          (vector<CryptoPP::EC2NPoint,std::__ndk1::allocator<CryptoPP::EC2NPoint>> *this,
          EC2NPoint *param_1)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  void *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  void *pvStack_68;
  long *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  lVar4 = *(long *)(this + 8) - *(long *)this >> 4;
  uVar1 = lVar4 * -0x3333333333333333 + 1;
  if (0x333333333333333 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  local_60 = (long *)(this + 0x10);
  lVar5 = *local_60 - *(long *)this >> 4;
  uVar6 = lVar5 * -0x6666666666666666;
  if (uVar1 <= uVar6) {
    uVar1 = uVar6;
  }
  if (0x199999999999998 < (ulong)(lVar5 * -0x3333333333333333)) {
    uVar1 = 0x333333333333333;
  }
  if (uVar1 == 0) {
    pvVar3 = (void *)0x0;
  }
  else {
    if (0x333333333333333 < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar3 = operator_new(uVar1 * 0x50);
  }
  puVar7 = (undefined8 *)((long)pvVar3 + lVar4 * 0x10);
  pvStack_68 = (void *)((long)pvVar3 + uVar1 * 0x50);
  *puVar7 = &PTR__EC2NPoint_010026a8;
  local_80 = pvVar3;
  local_78 = puVar7;
  local_70 = puVar7;
                    /* try { // try from 00cc36a8 to 00cc36ab has its CatchHandler @ 00cc379c */
  CryptoPP::PolynomialMod2::PolynomialMod2
            ((PolynomialMod2 *)(puVar7 + 1),(PolynomialMod2 *)(param_1 + 8));
                    /* try { // try from 00cc36bc to 00cc36bf has its CatchHandler @ 00cc375c */
  CryptoPP::PolynomialMod2::PolynomialMod2
            ((PolynomialMod2 *)((long)pvVar3 + lVar4 * 0x10 + 0x28),
             (PolynomialMod2 *)(param_1 + 0x28));
  local_70 = puVar7 + 10;
  *(EC2NPoint *)((long)pvVar3 + lVar4 * 0x10 + 0x48) = param_1[0x48];
                    /* try { // try from 00cc36d8 to 00cc36e3 has its CatchHandler @ 00cc379c */
  __swap_out_circular_buffer(this,(__split_buffer *)&local_80);
  puVar7 = local_78;
  while (local_70 != puVar7) {
    local_70 = local_70 + -10;
    (**(code **)*local_70)();
  }
  if (local_80 != (void *)0x0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


