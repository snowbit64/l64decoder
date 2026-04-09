// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: exist
// Entry Point: 00b30660
// Size: 48 bytes
// Signature: undefined __thiscall exist(ArchiveFileLoader * this, char * param_1, bool param_2)


/* ArchiveFileLoader::exist(char const*, bool) */

bool __thiscall ArchiveFileLoader::exist(ArchiveFileLoader *this,char *param_1,bool param_2)

{
  long lVar1;
  
  lVar1 = getArchiveForFile(this,param_1,0,param_2,(File **)0x0,(basic_string *)0x0,false);
  return lVar1 != 0;
}


