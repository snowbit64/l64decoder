// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __swap_out_circular_buffer
// Entry Point: 00cc31d0
// Size: 192 bytes
// Signature: undefined __thiscall __swap_out_circular_buffer(vector<CryptoPP::EC2NPoint,std::__ndk1::allocator<CryptoPP::EC2NPoint>> * this, __split_buffer * param_1)


/* std::__ndk1::vector<CryptoPP::EC2NPoint, std::__ndk1::allocator<CryptoPP::EC2NPoint>
   >::__swap_out_circular_buffer(std::__ndk1::__split_buffer<CryptoPP::EC2NPoint,
   std::__ndk1::allocator<CryptoPP::EC2NPoint>&>&) */

void __thiscall
std::__ndk1::vector<CryptoPP::EC2NPoint,std::__ndk1::allocator<CryptoPP::EC2NPoint>>::
__swap_out_circular_buffer
          (vector<CryptoPP::EC2NPoint,std::__ndk1::allocator<CryptoPP::EC2NPoint>> *this,
          __split_buffer *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *(long *)this;
  lVar4 = *(long *)(this + 8);
  lVar5 = *(long *)(param_1 + 8);
  if (lVar4 != lVar6) {
    do {
      *(undefined ***)(lVar5 + -0x50) = &PTR__EC2NPoint_010026a8;
      CryptoPP::PolynomialMod2::PolynomialMod2
                ((PolynomialMod2 *)(lVar5 + -0x48),(PolynomialMod2 *)(lVar4 + -0x48));
                    /* try { // try from 00cc3220 to 00cc3223 has its CatchHandler @ 00cc3290 */
      CryptoPP::PolynomialMod2::PolynomialMod2
                ((PolynomialMod2 *)(lVar5 + -0x28),(PolynomialMod2 *)(lVar4 + -0x28));
      puVar1 = (undefined *)(lVar4 + -8);
      lVar4 = lVar4 + -0x50;
      lVar2 = *(long *)(param_1 + 8);
      *(undefined *)(lVar5 + -8) = *puVar1;
      lVar5 = lVar2 + -0x50;
      *(long *)(param_1 + 8) = lVar5;
    } while (lVar4 != lVar6);
    lVar6 = *(long *)this;
  }
  *(long *)this = lVar5;
  *(long *)(param_1 + 8) = lVar6;
  uVar3 = *(undefined8 *)(this + 8);
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  uVar3 = *(undefined8 *)(this + 0x10);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  *(undefined8 *)param_1 = *(undefined8 *)(param_1 + 8);
  return;
}


