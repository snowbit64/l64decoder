// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: vector
// Entry Point: 00c94a9c
// Size: 184 bytes
// Signature: undefined __thiscall vector(vector<CryptoPP::EC2NPoint,std::__ndk1::allocator<CryptoPP::EC2NPoint>> * this, ulong param_1)


/* std::__ndk1::vector<CryptoPP::EC2NPoint, std::__ndk1::allocator<CryptoPP::EC2NPoint>
   >::vector(unsigned long) */

void __thiscall
std::__ndk1::vector<CryptoPP::EC2NPoint,std::__ndk1::allocator<CryptoPP::EC2NPoint>>::vector
          (vector<CryptoPP::EC2NPoint,std::__ndk1::allocator<CryptoPP::EC2NPoint>> *this,
          ulong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  if (param_1 != 0) {
    if (0x333333333333333 < param_1) {
                    /* try { // try from 00c94b4c to 00c94b53 has its CatchHandler @ 00c94b54 */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
                    /* try { // try from 00c94ae0 to 00c94ae3 has its CatchHandler @ 00c94b54 */
    puVar2 = (undefined8 *)operator_new(param_1 * 0x50);
    puVar3 = puVar2 + param_1 * 10;
    *(undefined8 **)this = puVar2;
    *(undefined8 **)(this + 8) = puVar2;
    *(undefined8 **)(this + 0x10) = puVar3;
    do {
      *puVar2 = &PTR__EC2NPoint_010026a8;
                    /* try { // try from 00c94b10 to 00c94b17 has its CatchHandler @ 00c94b5c */
      CryptoPP::PolynomialMod2::PolynomialMod2((PolynomialMod2 *)(puVar2 + 1));
                    /* try { // try from 00c94b1c to 00c94b23 has its CatchHandler @ 00c94b64 */
      CryptoPP::PolynomialMod2::PolynomialMod2((PolynomialMod2 *)(puVar2 + 5));
      puVar1 = puVar2 + 10;
      *(undefined *)(puVar2 + 9) = 1;
      puVar2 = puVar1;
    } while (puVar1 != puVar3);
    *(undefined8 **)(this + 8) = puVar3;
  }
  return;
}


