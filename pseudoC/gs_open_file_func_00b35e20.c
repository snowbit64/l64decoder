// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: gs_open_file_func
// Entry Point: 00b35e20
// Size: 104 bytes
// Signature: undefined __cdecl gs_open_file_func(void * param_1, char * param_2, int param_3)


/* ZipArchiveWriter::gs_open_file_func(void*, char const*, int) */

NativeFile * ZipArchiveWriter::gs_open_file_func(void *param_1,char *param_2,int param_3)

{
  NativeFile *this;
  bool bVar1;
  
  this = (NativeFile *)operator_new(0x28);
                    /* try { // try from 00b35e44 to 00b35e47 has its CatchHandler @ 00b35e88 */
  NativeFile::NativeFile(this);
  bVar1 = false;
  if (((param_3 & 3U) != 1) && (((uint)param_3 >> 2 & 1) == 0)) {
    if (((uint)param_3 >> 3 & 1) == 0) {
      return this;
    }
    bVar1 = true;
  }
  NativeFile::open((char *)this,(ACCESS_MODE)param_2,bVar1);
  return this;
}


