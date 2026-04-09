// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: gs_open_memfile_func
// Entry Point: 00b36018
// Size: 80 bytes
// Signature: undefined __cdecl gs_open_memfile_func(void * param_1, char * param_2, int param_3)


/* ZipArchiveWriter::gs_open_memfile_func(void*, char const*, int) */

MemoryBufferedFile * ZipArchiveWriter::gs_open_memfile_func(void *param_1,char *param_2,int param_3)

{
  MemoryBufferedFile *this;
  
  this = (MemoryBufferedFile *)operator_new(0x20);
                    /* try { // try from 00b36034 to 00b36047 has its CatchHandler @ 00b36068 */
  MemoryBufferedFile::MemoryBufferedFile(this,(uchar *)0x0,0,0,false);
  MemoryBufferedFile::reserve(this,1);
  *(MemoryBufferedFile **)((long)param_1 + 0x20) = this;
  return this;
}


