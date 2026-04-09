// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: size
// Entry Point: 00b08188
// Size: 64 bytes
// Signature: undefined __cdecl size(OggVorbis_File * param_1, uint param_2, uint param_3)


/* AudioLoaderOGG::size(OggVorbis_File*, unsigned int, unsigned int) */

int AudioLoaderOGG::size(OggVorbis_File *param_1,uint param_2,uint param_3)

{
  double dVar1;
  
  dVar1 = (double)ov_time_total(param_1,0xffffffff);
  return param_2 * param_3 * (int)(dVar1 + 1.0) * 2;
}


