// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~btSoftBodyWorldInfo
// Entry Point: 00bb2804
// Size: 64 bytes
// Signature: undefined __thiscall ~btSoftBodyWorldInfo(btSoftBodyWorldInfo * this)


/* btSoftBodyWorldInfo::~btSoftBodyWorldInfo() */

void __thiscall btSoftBodyWorldInfo::~btSoftBodyWorldInfo(btSoftBodyWorldInfo *this)

{
  if ((*(void **)(this + 0x50) != (void *)0x0) && (this[0x58] != (btSoftBodyWorldInfo)0x0)) {
                    /* try { // try from 00bb2824 to 00bb2827 has its CatchHandler @ 00bb2844 */
    btAlignedFreeInternal(*(void **)(this + 0x50));
  }
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  this[0x58] = (btSoftBodyWorldInfo)0x1;
  return;
}


