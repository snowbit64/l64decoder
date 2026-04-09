// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeNullAssignCode
// Entry Point: 00c33e6c
// Size: 472 bytes
// Signature: undefined __cdecl writeNullAssignCode(char * param_1, IR_Type * param_2, CodeStringStream * param_3, IR_LANGUAGE param_4)


/* IR_HllConvertUtil::writeNullAssignCode(char const*, IR_Type*, CodeStringStream&, IR_LANGUAGE) */

void IR_HllConvertUtil::writeNullAssignCode
               (char *param_1,IR_Type *param_2,CodeStringStream *param_3,IR_LANGUAGE param_4)

{
  void *pvVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  uint uVar5;
  byte local_1058 [16];
  void *local_1048;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  iVar2 = *(int *)param_2;
  if (iVar2 - 1U < 2) {
    if (*(int *)(param_2 + 8) - 5U < 5) {
      puVar4 = (&PTR_DAT_00fee528)[(int)(*(int *)(param_2 + 8) - 5U)];
    }
    else {
      puVar4 = &DAT_004d4386;
    }
    if ((param_4 & 0xfffffffd) == 0) {
      IR_Type::getTypeString((IR_LANGUAGE)param_2);
      pvVar1 = (void *)((ulong)local_1058 | 1);
      if ((local_1058[0] & 1) != 0) {
        pvVar1 = local_1048;
      }
                    /* try { // try from 00c33fc8 to 00c33fdf has its CatchHandler @ 00c34044 */
      CodeStringStream::writeLine((char *)param_3,"%s = ((%s)%s);\n",param_1,pvVar1,puVar4);
    }
    else {
      IR_Type::getTypeString((IR_LANGUAGE)param_2);
      pvVar1 = (void *)((ulong)local_1058 | 1);
      if ((local_1058[0] & 1) != 0) {
        pvVar1 = local_1048;
      }
                    /* try { // try from 00c33f90 to 00c33fa7 has its CatchHandler @ 00c34048 */
      CodeStringStream::writeLine((char *)param_3,"%s = %s(%s);\n",param_1,pvVar1,puVar4);
    }
    if ((local_1058[0] & 1) != 0) {
      operator_delete(local_1048);
    }
  }
  else if (iVar2 == 0) {
    if (*(int *)(param_2 + 8) - 5U < 5) {
      puVar4 = (&PTR_DAT_00fee528)[(int)(*(int *)(param_2 + 8) - 5U)];
    }
    else {
      puVar4 = &DAT_004d4386;
    }
    CodeStringStream::writeLine((char *)param_3,"%s = %s;\n",param_1,puVar4);
  }
  else if ((iVar2 == 4) && (*(int *)(param_2 + 0x10) != 0)) {
    uVar5 = 0;
    do {
      FUN_00c2f578(local_1058,0x1000,"%s[%u]",param_1,uVar5);
      writeNullAssignCode((char *)local_1058,*(IR_Type **)(param_2 + 8),param_3,param_4);
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_2 + 0x10));
  }
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


