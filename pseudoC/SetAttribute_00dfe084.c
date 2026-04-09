// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SetAttribute
// Entry Point: 00dfe084
// Size: 228 bytes
// Signature: undefined __thiscall SetAttribute(XMLAttribute * this, bool param_1)


/* tinyxml2::XMLAttribute::SetAttribute(bool) */

void __thiscall tinyxml2::XMLAttribute::SetAttribute(XMLAttribute *this,bool param_1)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  void *__dest;
  undefined auStack_110 [200];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  ppuVar1 = &XMLUtil::writeBoolTrue;
  if (!param_1) {
    ppuVar1 = &XMLUtil::writeBoolFalse;
  }
  FUN_00dfa4ec(auStack_110,200,200,&DAT_004d33bb,*ppuVar1);
  if ((((byte)this[0x21] >> 1 & 1) != 0) && (*(void **)(this + 0x28) != (void *)0x0)) {
    operator_delete__(*(void **)(this + 0x28));
  }
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  lVar3 = __strlen_chk(auStack_110,200);
  __dest = operator_new__(lVar3 + 1U);
  *(void **)(this + 0x28) = __dest;
  memcpy(__dest,auStack_110,lVar3 + 1U);
  *(long *)(this + 0x30) = (long)__dest + lVar3;
  *(undefined4 *)(this + 0x20) = 0x200;
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


