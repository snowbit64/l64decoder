// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unaryOpError
// Entry Point: 00c1a890
// Size: 180 bytes
// Signature: undefined __cdecl unaryOpError(GsTSourceLoc * param_1, char * param_2, SHC_Type * param_3)


/* GISLParserContext::unaryOpError(GsTSourceLoc const&, char const*, SHC_Type const&) */

void GISLParserContext::unaryOpError(GsTSourceLoc *param_1,char *param_2,SHC_Type *param_3)

{
  void *pvVar1;
  long lVar2;
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  SHC_Type::getUserString();
  pvVar1 = (void *)((ulong)local_60 | 1);
  if ((local_60[0] & 1) != 0) {
    pvVar1 = local_50;
  }
                    /* try { // try from 00c1a8e8 to 00c1a907 has its CatchHandler @ 00c1a944 */
  error((GsTSourceLoc)param_1,*(char **)param_2,*(char **)(param_2 + 8)," wrong operand type",
        param_3,
        "no operation \'%s\' exists that takes an operand of type %s (or there is no acceptable conversion)"
        ,param_3,pvVar1);
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


