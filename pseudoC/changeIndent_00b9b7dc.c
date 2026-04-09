// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: changeIndent
// Entry Point: 00b9b7dc
// Size: 224 bytes
// Signature: undefined __thiscall changeIndent(CodeStringStream * this, int param_1)


/* CodeStringStream::changeIndent(int) */

void __thiscall CodeStringStream::changeIndent(CodeStringStream *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong __n;
  void *__s;
  ulong uVar4;
  undefined8 local_60;
  ulong uStack_58;
  void *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar1 = *(int *)(this + 0x10) + param_1;
  uVar2 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
  __n = (ulong)uVar2;
  *(uint *)(this + 0x10) = uVar2;
  if (uVar2 < 0x17) {
    __s = (void *)((ulong)&local_60 | 1);
    local_60 = CONCAT71(local_60._1_7_,(char)(uVar2 << 1));
    if ((int)uVar1 < 1) goto LAB_00b9b868;
  }
  else {
    uVar4 = (ulong)(uVar2 + 0x10) & 0xfffffff0;
    __s = operator_new(uVar4);
    local_60 = uVar4 | 1;
    uStack_58 = __n;
    local_50 = __s;
  }
  memset(__s,0x20,__n);
LAB_00b9b868:
  *(undefined *)((long)__s + __n) = 0;
  if (((byte)this[0x18] & 1) != 0) {
    operator_delete(*(void **)(this + 0x28));
  }
  *(ulong *)(this + 0x20) = uStack_58;
  *(ulong *)(this + 0x18) = local_60;
  *(void **)(this + 0x28) = local_50;
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


