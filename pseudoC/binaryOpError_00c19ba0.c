// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: binaryOpError
// Entry Point: 00c19ba0
// Size: 240 bytes
// Signature: undefined __cdecl binaryOpError(GsTSourceLoc * param_1, char * param_2, SHC_Type * param_3, SHC_Type * param_4)


/* GISLParserContext::binaryOpError(GsTSourceLoc const&, char const*, SHC_Type const&, SHC_Type
   const&) */

void GISLParserContext::binaryOpError
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
                    /* try { // try from 00c19be4 to 00c19bf3 has its CatchHandler @ 00c19cc0 */
  SHC_Type::getUserString();
  pvVar1 = (void *)((ulong)local_60 | 1);
  if ((local_60[0] & 1) != 0) {
    pvVar1 = local_50;
  }
  pvVar2 = (void *)((ulong)local_78 | 1);
  if ((local_78[0] & 1) != 0) {
    pvVar2 = local_68;
  }
                    /* try { // try from 00c19c20 to 00c19c43 has its CatchHandler @ 00c19c90 */
  error((GsTSourceLoc)param_1,*(char **)param_2,*(char **)(param_2 + 8)," wrong operand types ",
        param_3,
        "no operation \'%s\' exists that takes a left-hand operand of type \'%s\' and a right operand of type \'%s\' (or there is no acceptable conversion)"
        ,param_3,pvVar1,pvVar2);
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


