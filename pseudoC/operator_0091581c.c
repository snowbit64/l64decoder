// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator<<
// Entry Point: 0091581c
// Size: 116 bytes
// Signature: undefined __thiscall operator<<(FileOutputStream * this, float param_1)


/* FileOutputStream::TEMPNAMEPLACEHOLDERVALUE(float) */

FileOutputStream * __thiscall FileOutputStream::operator<<(FileOutputStream *this,float param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 in_x1;
  undefined auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_0091faa0((double)param_1,auStack_48,in_x1,&DAT_0050d9a5);
  (**(code **)(**(long **)(this + 8) + 0x30))(*(long **)(this + 8),auStack_48,uVar2);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


