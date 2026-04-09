// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setContentChangedCallback
// Entry Point: 00af1bd0
// Size: 8 bytes
// Signature: undefined __thiscall setContentChangedCallback(GiantsAdPlacement * this, ContentChangedCallback * param_1)


/* GiantsAdPlacement::setContentChangedCallback(GiantsAdPlacement::ContentChangedCallback*) */

void __thiscall
GiantsAdPlacement::setContentChangedCallback
          (GiantsAdPlacement *this,ContentChangedCallback *param_1)

{
  *(ContentChangedCallback **)(this + 0x40) = param_1;
  return;
}


