// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getProductData
// Entry Point: 00b30690
// Size: 108 bytes
// Signature: undefined __thiscall getProductData(ArchiveFileLoader * this, char * param_1, bool param_2, uint * param_3, KEY_TYPE * param_4, ulonglong * param_5)


/* ArchiveFileLoader::getProductData(char const*, bool, unsigned int&, IFileLoader::KEY_TYPE&,
   unsigned long long&) */

void __thiscall
ArchiveFileLoader::getProductData
          (ArchiveFileLoader *this,char *param_1,bool param_2,uint *param_3,KEY_TYPE *param_4,
          ulonglong *param_5)

{
  long *plVar1;
  
  plVar1 = (long *)getArchiveForFile(this,param_1,0,param_2,(File **)0x0,(basic_string *)0x0,false);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00b306e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x28))(plVar1,param_3,param_4,param_5);
    return;
  }
  return;
}


