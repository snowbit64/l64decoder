// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __append
// Entry Point: 00cc3324
// Size: 512 bytes
// Signature: undefined __thiscall __append(vector<CryptoPP::EC2NPoint,std::__ndk1::allocator<CryptoPP::EC2NPoint>> * this, ulong param_1)


/* std::__ndk1::vector<CryptoPP::EC2NPoint, std::__ndk1::allocator<CryptoPP::EC2NPoint>
   >::__append(unsigned long) */

void __thiscall
std::__ndk1::vector<CryptoPP::EC2NPoint,std::__ndk1::allocator<CryptoPP::EC2NPoint>>::__append
          (vector<CryptoPP::EC2NPoint,std::__ndk1::allocator<CryptoPP::EC2NPoint>> *this,
          ulong param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  void *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  void *pvStack_68;
  vector<CryptoPP::EC2NPoint,std::__ndk1::allocator<CryptoPP::EC2NPoint>> *local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  puVar8 = *(undefined8 **)(this + 8);
  if ((ulong)((*(long *)(this + 0x10) - (long)puVar8 >> 4) * -0x3333333333333333) < param_1) {
    lVar5 = (long)puVar8 - *(long *)this >> 4;
    uVar2 = lVar5 * -0x3333333333333333 + param_1;
    if (0x333333333333333 < uVar2) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    lVar4 = *(long *)(this + 0x10) - *(long *)this >> 4;
    uVar6 = lVar4 * -0x6666666666666666;
    if (uVar2 <= uVar6) {
      uVar2 = uVar6;
    }
    local_60 = this + 0x10;
    if (0x199999999999998 < (ulong)(lVar4 * -0x3333333333333333)) {
      uVar2 = 0x333333333333333;
    }
    if (uVar2 == 0) {
      local_80 = (void *)0x0;
    }
    else {
      if (0x333333333333333 < uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      local_80 = operator_new(uVar2 * 0x50);
    }
    local_78 = (undefined8 *)((long)local_80 + lVar5 * 0x10);
    pvStack_68 = (void *)((long)local_80 + uVar2 * 0x50);
    puVar7 = local_78 + param_1 * 10;
    puVar8 = local_78;
    local_70 = local_78;
    do {
      *puVar8 = &PTR__EC2NPoint_010026a8;
                    /* try { // try from 00cc3478 to 00cc347f has its CatchHandler @ 00cc35ac */
      CryptoPP::PolynomialMod2::PolynomialMod2((PolynomialMod2 *)(puVar8 + 1));
                    /* try { // try from 00cc3484 to 00cc348b has its CatchHandler @ 00cc3574 */
      CryptoPP::PolynomialMod2::PolynomialMod2((PolynomialMod2 *)(puVar8 + 5));
      puVar1 = puVar8 + 10;
      *(undefined *)(puVar8 + 9) = 1;
      puVar8 = puVar1;
    } while (puVar1 != puVar7);
    local_70 = puVar7;
                    /* try { // try from 00cc34a0 to 00cc34ab has its CatchHandler @ 00cc3524 */
    __swap_out_circular_buffer(this,(__split_buffer *)&local_80);
    puVar8 = local_78;
    while (local_70 != puVar8) {
      local_70 = local_70 + -10;
      (**(code **)*local_70)();
    }
    if (local_80 != (void *)0x0) {
      operator_delete(local_80);
    }
  }
  else {
    puVar7 = puVar8;
    if (param_1 != 0) {
      puVar7 = puVar8 + param_1 * 10;
      do {
        *puVar8 = &PTR__EC2NPoint_010026a8;
                    /* try { // try from 00cc3410 to 00cc3417 has its CatchHandler @ 00cc3564 */
        CryptoPP::PolynomialMod2::PolynomialMod2((PolynomialMod2 *)(puVar8 + 1));
                    /* try { // try from 00cc341c to 00cc3423 has its CatchHandler @ 00cc352c */
        CryptoPP::PolynomialMod2::PolynomialMod2((PolynomialMod2 *)(puVar8 + 5));
        puVar1 = puVar8 + 10;
        *(undefined *)(puVar8 + 9) = 1;
        puVar8 = puVar1;
      } while (puVar1 != puVar7);
    }
    *(undefined8 **)(this + 8) = puVar7;
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


