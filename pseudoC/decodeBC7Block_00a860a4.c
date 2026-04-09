// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: decodeBC7Block
// Entry Point: 00a860a4
// Size: 8 bytes
// Signature: undefined __cdecl decodeBC7Block(uchar * param_1, uchar * param_2)


/* BC6BC7Util::decodeBC7Block(unsigned char const*, unsigned char*) */

void BC6BC7Util::decodeBC7Block(uchar *param_1,uchar *param_2)

{
  D3DX_BC7::Decode((D3DX_BC7 *)param_1,(LDRColorA *)param_2,false);
  return;
}


