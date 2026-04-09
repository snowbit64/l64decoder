// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AdPlacementContentChangedCallback
// Entry Point: 006fafe4
// Size: 20 bytes
// Signature: undefined __thiscall AdPlacementContentChangedCallback(AdPlacementContentChangedCallback * this, BillboardShape * param_1)


/* BillboardShape::AdPlacementContentChangedCallback::AdPlacementContentChangedCallback(BillboardShape*)
    */

void __thiscall
BillboardShape::AdPlacementContentChangedCallback::AdPlacementContentChangedCallback
          (AdPlacementContentChangedCallback *this,BillboardShape *param_1)

{
  *(undefined ***)this = &PTR_onContentChanged_00fd9910;
  *(BillboardShape **)(this + 8) = param_1;
  return;
}


