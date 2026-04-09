// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: killDeadRegisters
// Entry Point: 00c46600
// Size: 412 bytes
// Signature: undefined killDeadRegisters(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IR_Section::killDeadRegisters() */

undefined4 IR_Section::killDeadRegisters(void)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  IR_Function **in_x0;
  ulong uVar4;
  IR_Function *pIVar5;
  uint *puVar6;
  ulong uVar7;
  undefined4 uVar8;
  ulong uVar9;
  long lVar10;
  void *local_90;
  undefined8 uStack_88;
  long local_80;
  undefined4 local_78 [4];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_90 = (void *)0x0;
  uStack_88 = 0;
  local_80 = 0;
  uVar1 = *(uint *)(*in_x0 + 0x98);
  if (uVar1 != 0) {
    lVar10 = ((ulong)uVar1 - 1 >> 6) + 1;
    local_90 = operator_new(lVar10 * 8);
    uStack_88 = 0;
    local_80 = lVar10;
    FUN_00af6bb0(&local_90,(ulong)uVar1,0);
  }
  pIVar5 = in_x0[4];
  uVar8 = 0;
  if ((int)((ulong)((long)in_x0[5] - (long)pIVar5) >> 3) != 0) {
    uVar9 = (ulong)((long)in_x0[5] - (long)pIVar5) >> 3 & 0xffffffff;
    while( true ) {
      uVar9 = uVar9 - 1;
      lVar10 = *(long *)(pIVar5 + uVar9 * 8);
      uVar1 = *(uint *)(lVar10 + 4);
      if (0xffff < uVar1) {
        uVar4 = (ulong)(uVar1 >> 0x10);
        puVar6 = (uint *)(lVar10 + 8);
        do {
          uVar3 = *puVar6;
          if ((-1 < (int)uVar3) &&
             ((*(ulong *)((long)local_90 + ((ulong)(uVar3 >> 3) & 0x1ffffff8)) >>
               ((ulong)uVar3 & 0x3f) & 1) == 0)) {
            local_78[0] = 0;
                    /* try { // try from 00c4674c to 00c46753 has its CatchHandler @ 00c4679c */
            uVar3 = IR_Function::storeConst(*in_x0,(IR_Const *)local_78);
            uVar8 = 1;
            *puVar6 = uVar3 | 0x80000000;
          }
          puVar6 = puVar6 + 1;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      uVar4 = (ulong)uVar1 & 0xffff;
      if ((int)uVar4 != 0) {
        puVar6 = (uint *)(lVar10 + ((ulong)(*(uint *)(lVar10 + 4) >> 0xe) & 0x3fffc) + 8);
        do {
          uVar1 = *puVar6;
          if (-1 < (int)uVar1) {
            uVar7 = (ulong)(uVar1 >> 3) & 0x1ffffff8;
            *(ulong *)((long)local_90 + uVar7) =
                 *(ulong *)((long)local_90 + uVar7) | 1L << ((ulong)uVar1 & 0x3f);
          }
          puVar6 = puVar6 + 1;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      if (uVar9 == 0) break;
      pIVar5 = in_x0[4];
    }
  }
  if (local_90 != (void *)0x0) {
    operator_delete(local_90);
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}


