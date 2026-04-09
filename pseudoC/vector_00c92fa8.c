// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: vector
// Entry Point: 00c92fa8
// Size: 188 bytes
// Signature: undefined __thiscall vector(vector<CryptoPP::ECPPoint,std::__ndk1::allocator<CryptoPP::ECPPoint>> * this, ulong param_1)


/* std::__ndk1::vector<CryptoPP::ECPPoint, std::__ndk1::allocator<CryptoPP::ECPPoint>
   >::vector(unsigned long) */

void __thiscall
std::__ndk1::vector<CryptoPP::ECPPoint,std::__ndk1::allocator<CryptoPP::ECPPoint>>::vector
          (vector<CryptoPP::ECPPoint,std::__ndk1::allocator<CryptoPP::ECPPoint>> *this,ulong param_1
          )

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  if (param_1 != 0) {
    if (0x249249249249249 < param_1) {
                    /* try { // try from 00c9305c to 00c93063 has its CatchHandler @ 00c93064 */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
                    /* try { // try from 00c92ff0 to 00c92ff3 has its CatchHandler @ 00c93064 */
    puVar2 = (undefined8 *)operator_new(param_1 * 0x70);
    puVar3 = puVar2 + param_1 * 0xe;
    *(undefined8 **)this = puVar2;
    *(undefined8 **)(this + 8) = puVar2;
    *(undefined8 **)(this + 0x10) = puVar3;
    do {
      *puVar2 = &PTR__ECPPoint_00fe9fd8;
                    /* try { // try from 00c93020 to 00c93027 has its CatchHandler @ 00c9306c */
      CryptoPP::Integer::Integer((Integer *)(puVar2 + 1));
                    /* try { // try from 00c9302c to 00c93033 has its CatchHandler @ 00c93074 */
      CryptoPP::Integer::Integer((Integer *)(puVar2 + 7));
      puVar1 = puVar2 + 0xe;
      *(undefined *)(puVar2 + 0xd) = 1;
      puVar2 = puVar1;
    } while (puVar1 != puVar3);
    *(undefined8 **)(this + 8) = puVar3;
  }
  return;
}


