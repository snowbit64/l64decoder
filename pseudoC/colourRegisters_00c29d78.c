// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: colourRegisters
// Entry Point: 00c29d78
// Size: 420 bytes
// Signature: undefined colourRegisters(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IR_Function::colourRegisters() */

void IR_Function::colourRegisters(void)

{
  void *pvVar1;
  long lVar2;
  RegisterInfo *pRVar3;
  RegisterInfo *pRVar4;
  long in_x0;
  long lVar5;
  ulong uVar6;
  uint *puVar7;
  uint local_80 [2];
  RegisterInfo *local_78;
  RegisterInfo *local_70;
  void *local_60;
  void *local_58;
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (*(int *)(in_x0 + 100) != 4) {
    if (*(long *)(in_x0 + 0xc0) != *(long *)(in_x0 + 0xb8)) {
      uVar6 = 0;
      do {
        IR_Section::colourRegisters();
        uVar6 = (ulong)((int)uVar6 + 1);
      } while (uVar6 < (ulong)(*(long *)(in_x0 + 0xc0) - *(long *)(in_x0 + 0xb8) >> 3));
    }
    IR_Section::matchRegisters();
    local_58 = (void *)0x0;
    local_50 = (void *)0x0;
    local_60 = (void *)0x0;
    puVar7 = (uint *)(in_x0 + 0x98);
    if (*puVar7 != 0) {
      uVar6 = (ulong)*puVar7 * 4;
      local_60 = operator_new(uVar6);
      pvVar1 = (void *)((long)local_60 + uVar6);
      local_50 = pvVar1;
      memset(local_60,0xff,uVar6);
      local_58 = pvVar1;
    }
                    /* try { // try from 00c29e2c to 00c29e33 has its CatchHandler @ 00c29f20 */
    IR_RegisterSet::IR_RegisterSet((IR_RegisterSet *)local_80);
    lVar5 = *(long *)(in_x0 + 0xb8);
    if (*(long *)(in_x0 + 0xc0) != lVar5) {
      uVar6 = 0;
      do {
                    /* try { // try from 00c29e48 to 00c29e57 has its CatchHandler @ 00c29f28 */
        IR_Section::remapRegs
                  (*(IR_Section **)(lVar5 + uVar6 * 8),(vector *)&local_60,(IR_RegisterSet *)puVar7,
                   (IR_RegisterSet *)local_80);
        lVar5 = *(long *)(in_x0 + 0xb8);
        uVar6 = (ulong)((int)uVar6 + 1);
      } while (uVar6 < (ulong)(*(long *)(in_x0 + 0xc0) - lVar5 >> 3));
    }
    *puVar7 = local_80[0];
    if (puVar7 != local_80) {
                    /* try { // try from 00c29e88 to 00c29e8b has its CatchHandler @ 00c29f1c */
      std::__ndk1::
      vector<IR_RegisterSet::RegisterInfo,std::__ndk1::allocator<IR_RegisterSet::RegisterInfo>>::
      assign<IR_RegisterSet::RegisterInfo*>
                ((vector<IR_RegisterSet::RegisterInfo,std::__ndk1::allocator<IR_RegisterSet::RegisterInfo>>
                  *)(in_x0 + 0xa0),local_78,local_70);
    }
    pRVar4 = local_78;
    *(undefined4 *)(in_x0 + 100) = 4;
    if (local_78 != (RegisterInfo *)0x0) {
      while (pRVar3 = local_70, pRVar3 != pRVar4) {
        local_70 = pRVar3 + -0x28;
        if (((byte)pRVar3[-0x20] & 1) != 0) {
          operator_delete(*(void **)(pRVar3 + -0x10));
        }
      }
      local_70 = pRVar4;
      operator_delete(local_78);
    }
    if (local_60 != (void *)0x0) {
      local_58 = local_60;
      operator_delete(local_60);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


