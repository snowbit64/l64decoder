// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator<<
// Entry Point: 00915890
// Size: 116 bytes
// Signature: undefined __thiscall operator<<(FileOutputStream * this, uint param_1)


/* FileOutputStream::TEMPNAMEPLACEHOLDERVALUE(unsigned int) */

FileOutputStream * __thiscall FileOutputStream::operator<<(FileOutputStream *this,uint param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_0091faa0(auStack_48,param_1,&DAT_004cf2ba,param_1);
  (**(code **)(**(long **)(this + 8) + 0x30))(*(long **)(this + 8),auStack_48,uVar2);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


