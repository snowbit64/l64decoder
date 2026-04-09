// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MultiplyElements
// Entry Point: 00c9e9c8
// Size: 108 bytes
// Signature: undefined __cdecl MultiplyElements(ECPPoint * param_1, ECPPoint * param_2)


/* CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>::MultiplyElements(CryptoPP::ECPPoint const&,
   CryptoPP::ECPPoint const&) const */

void CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>::MultiplyElements
               (ECPPoint *param_1,ECPPoint *param_2)

{
  long lVar1;
  undefined8 *in_x8;
  
  lVar1 = (**(code **)(**(long **)(param_1 + 0x20) + 0x20))();
  *in_x8 = &PTR__ECPPoint_00fe9fd8;
  Integer::Integer((Integer *)(in_x8 + 1),(Integer *)(lVar1 + 8));
                    /* try { // try from 00c9ea14 to 00c9ea1b has its CatchHandler @ 00c9ea34 */
  Integer::Integer((Integer *)(in_x8 + 7),(Integer *)(lVar1 + 0x38));
  *(undefined *)(in_x8 + 0xd) = *(undefined *)(lVar1 + 0x68);
  return;
}


