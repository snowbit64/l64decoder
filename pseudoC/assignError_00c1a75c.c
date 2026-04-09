// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: assignError
// Entry Point: 00c1a75c
// Size: 232 bytes
// Signature: undefined __cdecl assignError(GsTSourceLoc * param_1, char * param_2, SHC_Type * param_3, SHC_Type * param_4)


/* GISLParserContext::assignError(GsTSourceLoc const&, char const*, SHC_Type const&, SHC_Type
   const&) */

void GISLParserContext::assignError
               (GsTSourceLoc *param_1,char *param_2,SHC_Type *param_3,SHC_Type *param_4)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  byte local_78 [16];
  void *local_68;
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  SHC_Type::getUserString();
                    /* try { // try from 00c1a7a0 to 00c1a7af has its CatchHandler @ 00c1a874 */
  SHC_Type::getUserString();
  pvVar1 = (void *)((ulong)local_78 | 1);
  if ((local_78[0] & 1) != 0) {
    pvVar1 = local_68;
  }
  pvVar2 = (void *)((ulong)local_60 | 1);
  if ((local_60[0] & 1) != 0) {
    pvVar2 = local_50;
  }
                    /* try { // try from 00c1a7dc to 00c1a7f7 has its CatchHandler @ 00c1a844 */
  error((GsTSourceLoc)param_1,*(char **)param_2,*(char **)(param_2 + 8),"",param_3,
        "cannot convert from \'%s\' to \'%s\'",pvVar1,pvVar2);
  if ((local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


