// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeChildAt
// Entry Point: 00a594e8
// Size: 84 bytes
// Signature: undefined __cdecl removeChildAt(uint param_1, bool param_2)


/* Node::removeChildAt(unsigned int, bool) */

void Node::removeChildAt(uint param_1,bool param_2)

{
  long *__dest;
  size_t __n;
  ulong uVar1;
  
  uVar1 = (ulong)param_1;
  __dest = (long *)(*(long *)(uVar1 + 0x28) + (ulong)param_2 * 8);
  __n = *(long *)(uVar1 + 0x30) - (long)(__dest + 1);
  *(undefined8 *)(*__dest + 0x20) = 0;
  if (__n != 0) {
    memmove(__dest,__dest + 1,__n);
  }
  *(size_t *)(uVar1 + 0x30) = (long)__dest + __n;
  return;
}


