// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~SpirvCompilerDxc
// Entry Point: 00ac4718
// Size: 152 bytes
// Signature: undefined __thiscall ~SpirvCompilerDxc(SpirvCompilerDxc * this)


/* SpirvCompilerDxc::~SpirvCompilerDxc() */

void __thiscall SpirvCompilerDxc::~SpirvCompilerDxc(SpirvCompilerDxc *this)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  
                    /* try { // try from 00ac472c to 00ac4733 has its CatchHandler @ 00ac47b0 */
  DxcManager::getInstance();
  DxcManager::unload();
  pbVar2 = *(byte **)(this + 0x28);
  if (pbVar2 != (byte *)0x0) {
    pbVar1 = *(byte **)(this + 0x30);
    pbVar3 = pbVar2;
    if (pbVar1 != pbVar2) {
      do {
        pbVar3 = pbVar1 + -0x18;
        if ((*pbVar3 & 1) != 0) {
          operator_delete(*(void **)(pbVar1 + -8));
        }
        pbVar1 = pbVar3;
      } while (pbVar3 != pbVar2);
      pbVar3 = *(byte **)(this + 0x28);
    }
    *(byte **)(this + 0x30) = pbVar2;
    operator_delete(pbVar3);
  }
  if (((byte)this[8] & 1) != 0) {
    operator_delete(*(void **)(this + 0x18));
    return;
  }
  return;
}


