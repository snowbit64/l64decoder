// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: convertToHssa
// Entry Point: 00c29714
// Size: 304 bytes
// Signature: undefined convertToHssa(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IR_Function::convertToHssa() */

void IR_Function::convertToHssa(void)

{
  undefined4 *puVar1;
  long lVar2;
  RegisterInfo *pRVar3;
  RegisterInfo *pRVar4;
  long in_x0;
  long lVar5;
  ulong uVar6;
  undefined4 local_58 [2];
  RegisterInfo *local_50;
  RegisterInfo *local_48;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  IR_Section::determineRegisterAccesses();
  IR_Section::insertRegisters();
  IR_RegisterSet::IR_RegisterSet((IR_RegisterSet *)local_58);
  puVar1 = (undefined4 *)(in_x0 + 0x98);
                    /* try { // try from 00c29768 to 00c2978f has its CatchHandler @ 00c29844 */
  IR_Section::renumberRegs
            (**(IR_Section ***)(in_x0 + 0xb8),(IR_RegisterSet *)puVar1,(IR_RegisterSet *)local_58);
  *puVar1 = local_58[0];
  if (puVar1 != local_58) {
    std::__ndk1::
    vector<IR_RegisterSet::RegisterInfo,std::__ndk1::allocator<IR_RegisterSet::RegisterInfo>>::
    assign<IR_RegisterSet::RegisterInfo*>
              ((vector<IR_RegisterSet::RegisterInfo,std::__ndk1::allocator<IR_RegisterSet::RegisterInfo>>
                *)(in_x0 + 0xa0),local_50,local_48);
  }
  lVar5 = *(long *)(in_x0 + 0xb8);
  if (*(long *)(in_x0 + 0xc0) != lVar5) {
    uVar6 = 0;
    do {
                    /* try { // try from 00c297ac to 00c297b3 has its CatchHandler @ 00c29848 */
      IR_Section::checkHssaCorrectness(*(char **)(lVar5 + uVar6 * 8));
      lVar5 = *(long *)(in_x0 + 0xb8);
      uVar6 = (ulong)((int)uVar6 + 1);
    } while (uVar6 < (ulong)(*(long *)(in_x0 + 0xc0) - lVar5 >> 3));
  }
  pRVar4 = local_50;
  *(undefined4 *)(in_x0 + 100) = 3;
  if (local_50 != (RegisterInfo *)0x0) {
    while (pRVar3 = local_48, pRVar3 != pRVar4) {
      local_48 = pRVar3 + -0x28;
      if (((byte)pRVar3[-0x20] & 1) != 0) {
        operator_delete(*(void **)(pRVar3 + -0x10));
      }
    }
    local_48 = pRVar4;
    operator_delete(local_50);
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


