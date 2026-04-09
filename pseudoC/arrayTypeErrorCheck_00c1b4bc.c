// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: arrayTypeErrorCheck
// Entry Point: 00c1b4bc
// Size: 264 bytes
// Signature: undefined __thiscall arrayTypeErrorCheck(GISLParserContext * this, GsTSourceLoc * param_1, SHC_Type * param_2)


/* GISLParserContext::arrayTypeErrorCheck(GsTSourceLoc const&, SHC_Type const&) */

void __thiscall
GISLParserContext::arrayTypeErrorCheck
          (GISLParserContext *this,GsTSourceLoc *param_1,SHC_Type *param_2)

{
  void *pvVar1;
  long lVar2;
  undefined8 uVar3;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (**(int **)(param_2 + 8) == 6) {
    SHC_Type::getUserString();
    pvVar1 = (void *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      pvVar1 = local_40;
    }
                    /* try { // try from 00c1b568 to 00c1b57f has its CatchHandler @ 00c1b5c4 */
    error((GsTSourceLoc)this,*(char **)param_1,*(char **)(param_1 + 2),
          "arrays of pointers are not supported",pvVar1,&DAT_0050a39f);
  }
  else {
    if (**(int **)(param_2 + 8) != 4) {
      uVar3 = 0;
      goto LAB_00c1b59c;
    }
    SHC_Type::getUserString();
    pvVar1 = (void *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      pvVar1 = local_40;
    }
                    /* try { // try from 00c1b524 to 00c1b53b has its CatchHandler @ 00c1b5c8 */
    error((GsTSourceLoc)this,*(char **)param_1,*(char **)(param_1 + 2),
          "multidimentional arrays are not supported",pvVar1,&DAT_0050a39f);
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  uVar3 = 1;
LAB_00c1b59c:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


