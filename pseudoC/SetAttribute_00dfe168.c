// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SetAttribute
// Entry Point: 00dfe168
// Size: 200 bytes
// Signature: undefined __cdecl SetAttribute(double param_1)


/* tinyxml2::XMLAttribute::SetAttribute(double) */

void tinyxml2::XMLAttribute::SetAttribute(double param_1)

{
  long lVar1;
  long in_x0;
  long lVar2;
  void *__dest;
  undefined auStack_110 [200];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00dfa4ec(auStack_110,200,200,"%.17g");
  if (((*(byte *)(in_x0 + 0x21) >> 1 & 1) != 0) && (*(void **)(in_x0 + 0x28) != (void *)0x0)) {
    operator_delete__(*(void **)(in_x0 + 0x28));
  }
  *(undefined4 *)(in_x0 + 0x20) = 0;
  *(undefined8 *)(in_x0 + 0x28) = 0;
  *(undefined8 *)(in_x0 + 0x30) = 0;
  lVar2 = __strlen_chk(auStack_110,200);
  __dest = operator_new__(lVar2 + 1U);
  *(void **)(in_x0 + 0x28) = __dest;
  memcpy(__dest,auStack_110,lVar2 + 1U);
  *(long *)(in_x0 + 0x30) = (long)__dest + lVar2;
  *(undefined4 *)(in_x0 + 0x20) = 0x200;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


