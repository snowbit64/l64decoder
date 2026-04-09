// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __append
// Entry Point: 00cc2f04
// Size: 556 bytes
// Signature: undefined __thiscall __append(vector<CryptoPP::EC2NPoint,std::__ndk1::allocator<CryptoPP::EC2NPoint>> * this, ulong param_1, EC2NPoint * param_2)


/* std::__ndk1::vector<CryptoPP::EC2NPoint, std::__ndk1::allocator<CryptoPP::EC2NPoint>
   >::__append(unsigned long, CryptoPP::EC2NPoint const&) */

void __thiscall
std::__ndk1::vector<CryptoPP::EC2NPoint,std::__ndk1::allocator<CryptoPP::EC2NPoint>>::__append
          (vector<CryptoPP::EC2NPoint,std::__ndk1::allocator<CryptoPP::EC2NPoint>> *this,
          ulong param_1,EC2NPoint *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  void *local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  void *pvStack_78;
  vector<CryptoPP::EC2NPoint,std::__ndk1::allocator<CryptoPP::EC2NPoint>> *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
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
    local_70 = this + 0x10;
    if (0x199999999999998 < (ulong)(lVar4 * -0x3333333333333333)) {
      uVar2 = 0x333333333333333;
    }
    if (uVar2 == 0) {
      local_90 = (void *)0x0;
    }
    else {
      if (0x333333333333333 < uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      local_90 = operator_new(uVar2 * 0x50);
    }
    local_88 = (undefined8 *)((long)local_90 + lVar5 * 0x10);
    pvStack_78 = (void *)((long)local_90 + uVar2 * 0x50);
    puVar7 = local_88 + param_1 * 10;
    puVar8 = local_88;
    local_80 = local_88;
    do {
      *puVar8 = &PTR__EC2NPoint_010026a8;
                    /* try { // try from 00cc3074 to 00cc307f has its CatchHandler @ 00cc31b8 */
      CryptoPP::PolynomialMod2::PolynomialMod2
                ((PolynomialMod2 *)(puVar8 + 1),(PolynomialMod2 *)(param_2 + 8));
                    /* try { // try from 00cc3084 to 00cc308f has its CatchHandler @ 00cc3180 */
      CryptoPP::PolynomialMod2::PolynomialMod2
                ((PolynomialMod2 *)(puVar8 + 5),(PolynomialMod2 *)(param_2 + 0x28));
      puVar1 = puVar8 + 10;
      *(EC2NPoint *)(puVar8 + 9) = param_2[0x48];
      puVar8 = puVar1;
    } while (puVar1 != puVar7);
    local_80 = puVar7;
                    /* try { // try from 00cc30a8 to 00cc30b3 has its CatchHandler @ 00cc3130 */
    __swap_out_circular_buffer(this,(__split_buffer *)&local_90);
    puVar8 = local_88;
    while (local_80 != puVar8) {
      local_80 = local_80 + -10;
      (**(code **)*local_80)();
    }
    if (local_90 != (void *)0x0) {
      operator_delete(local_90);
    }
  }
  else {
    puVar7 = puVar8;
    if (param_1 != 0) {
      puVar7 = puVar8 + param_1 * 10;
      do {
        *puVar8 = &PTR__EC2NPoint_010026a8;
                    /* try { // try from 00cc2ffc to 00cc3007 has its CatchHandler @ 00cc3170 */
        CryptoPP::PolynomialMod2::PolynomialMod2
                  ((PolynomialMod2 *)(puVar8 + 1),(PolynomialMod2 *)(param_2 + 8));
                    /* try { // try from 00cc300c to 00cc3017 has its CatchHandler @ 00cc3138 */
        CryptoPP::PolynomialMod2::PolynomialMod2
                  ((PolynomialMod2 *)(puVar8 + 5),(PolynomialMod2 *)(param_2 + 0x28));
        puVar1 = puVar8 + 10;
        *(EC2NPoint *)(puVar8 + 9) = param_2[0x48];
        puVar8 = puVar1;
      } while (puVar1 != puVar7);
    }
    *(undefined8 **)(this + 8) = puVar7;
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


