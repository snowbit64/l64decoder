// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Reduce
// Entry Point: 00c92380
// Size: 80 bytes
// Signature: undefined __cdecl Reduce(ECPPoint * param_1, ECPPoint * param_2)


/* CryptoPP::AbstractGroup<CryptoPP::ECPPoint>::Reduce(CryptoPP::ECPPoint&, CryptoPP::ECPPoint
   const&) const */

ECPPoint * CryptoPP::AbstractGroup<CryptoPP::ECPPoint>::Reduce(ECPPoint *param_1,ECPPoint *param_2)

{
  long lVar1;
  
  lVar1 = (**(code **)(*(long *)param_1 + 0x40))();
  Integer::operator=((Integer *)(param_2 + 8),(Integer *)(lVar1 + 8));
  Integer::operator=((Integer *)(param_2 + 0x38),(Integer *)(lVar1 + 0x38));
  param_2[0x68] = *(ECPPoint *)(lVar1 + 0x68);
  return param_2;
}


