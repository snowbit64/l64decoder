// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: construct<CryptoPP::ProjectivePoint,CryptoPP::ProjectivePoint_const&>
// Entry Point: 00cd5e50
// Size: 68 bytes
// Signature: void __thiscall construct<CryptoPP::ProjectivePoint,CryptoPP::ProjectivePoint_const&>(allocator<CryptoPP::ProjectivePoint> * this, ProjectivePoint * param_1, ProjectivePoint * param_2)


/* void std::__ndk1::allocator<CryptoPP::ProjectivePoint>::construct<CryptoPP::ProjectivePoint,
   CryptoPP::ProjectivePoint const&>(CryptoPP::ProjectivePoint*, CryptoPP::ProjectivePoint const&)
    */

void __thiscall
std::__ndk1::allocator<CryptoPP::ProjectivePoint>::
construct<CryptoPP::ProjectivePoint,CryptoPP::ProjectivePoint_const&>
          (allocator<CryptoPP::ProjectivePoint> *this,ProjectivePoint *param_1,
          ProjectivePoint *param_2)

{
  CryptoPP::Integer::Integer((Integer *)param_1,(Integer *)param_2);
                    /* try { // try from 00cd5e78 to 00cd5e7b has its CatchHandler @ 00cd5edc */
  CryptoPP::Integer::Integer((Integer *)(param_1 + 0x30),(Integer *)(param_2 + 0x30));
                    /* try { // try from 00cd5e84 to 00cd5e87 has its CatchHandler @ 00cd5e94 */
  CryptoPP::Integer::Integer((Integer *)(param_1 + 0x60),(Integer *)(param_2 + 0x60));
  return;
}


