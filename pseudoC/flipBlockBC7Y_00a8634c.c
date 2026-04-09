// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: flipBlockBC7Y
// Entry Point: 00a8634c
// Size: 4 bytes
// Signature: undefined __cdecl flipBlockBC7Y(uchar * param_1, bool * param_2)


/* BC6BC7Util::flipBlockBC7Y(unsigned char*, bool&) */

void BC6BC7Util::flipBlockBC7Y(uchar *param_1,bool *param_2)

{
  D3DX_BC7::FlipY((D3DX_BC7 *)param_1,param_2);
  return;
}


