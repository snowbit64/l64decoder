// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DxcCompiler3
// Entry Point: 00ac53dc
// Size: 148 bytes
// Signature: undefined __thiscall ~DxcCompiler3(DxcCompiler3 * this)


/* DxcCompiler3::~DxcCompiler3() */

void __thiscall DxcCompiler3::~DxcCompiler3(DxcCompiler3 *this)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  if (*(long **)this != (long *)0x0) {
                    /* try { // try from 00ac5400 to 00ac5403 has its CatchHandler @ 00ac5470 */
    (**(code **)(**(long **)this + 0x10))();
  }
  pbVar2 = *(byte **)(this + 8);
  if (pbVar2 == (byte *)0x0) {
    return;
  }
  pbVar1 = *(byte **)(this + 0x10);
  pbVar3 = pbVar2;
  if (pbVar1 != pbVar2) {
    do {
      pbVar3 = pbVar1 + -0x18;
      if ((*pbVar3 & 1) != 0) {
        operator_delete(*(void **)(pbVar1 + -8));
      }
      pbVar1 = pbVar3;
    } while (pbVar3 != pbVar2);
    pbVar3 = *(byte **)(this + 8);
  }
  *(byte **)(this + 0x10) = pbVar2;
  operator_delete(pbVar3);
  return;
}


