// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: paramQualifierErrorCheck
// Entry Point: 00c1bcd0
// Size: 328 bytes
// Signature: undefined __thiscall paramQualifierErrorCheck(GISLParserContext * this, GsTSourceLoc * param_1, SHC_Type * param_2, IR_QualFlags * param_3)


/* GISLParserContext::paramQualifierErrorCheck(GsTSourceLoc const&, SHC_Type&, IR_QualFlags&) */

bool __thiscall
GISLParserContext::paramQualifierErrorCheck
          (GISLParserContext *this,GsTSourceLoc *param_1,SHC_Type *param_2,IR_QualFlags *param_3)

{
  uint uVar1;
  void *pvVar2;
  char *pcVar3;
  char *pcVar4;
  long lVar5;
  bool bVar6;
  uint uVar7;
  uint local_78 [2];
  byte local_70 [16];
  void *local_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  uVar7 = *param_3;
  uVar1 = uVar7 & 0xfffff3f5;
  bVar6 = uVar1 != 0;
  if (uVar1 != 0) {
    pcVar3 = *(char **)param_1;
    pcVar4 = *(char **)(param_1 + 2);
    local_78[0] = uVar1;
    IR_QualFlags::getAsString(SUB81(local_78,0));
    pvVar2 = (void *)((ulong)local_70 | 1);
    if ((local_70[0] & 1) != 0) {
      pvVar2 = local_60;
    }
                    /* try { // try from 00c1bd48 to 00c1bd67 has its CatchHandler @ 00c1be18 */
    error((GsTSourceLoc)this,pcVar3,pcVar4,"qualifier not allowed on function parameter",pvVar2,
          &DAT_0050a39f);
    if ((local_70[0] & 1) != 0) {
      operator_delete(local_60);
    }
    uVar7 = *param_3 & 0xc0a;
    *param_3 = uVar7;
  }
  if ((uVar7 & 0xc00) == 0) {
    uVar7 = 0x400;
  }
  else {
    if (((uVar7 >> 1 & 1) == 0) || ((uVar7 & 0xc00) == 0x400)) goto LAB_00c1bde4;
    error((GsTSourceLoc)this,*(char **)param_1,*(char **)(param_1 + 2),
          "const qualifier not allowed with ",
          *(undefined8 *)(IR_QualFlags::getInOutSpecifier()::pSpecifiers + (ulong)(uVar7 >> 10) * 8)
          ,&DAT_0050a39f);
    bVar6 = true;
    uVar7 = *param_3 & 0xfffffffd;
  }
  *param_3 = uVar7;
LAB_00c1bde4:
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return bVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


