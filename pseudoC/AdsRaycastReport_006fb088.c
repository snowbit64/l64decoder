// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AdsRaycastReport
// Entry Point: 006fb088
// Size: 28 bytes
// Signature: undefined __thiscall AdsRaycastReport(AdsRaycastReport * this, BillboardShape * param_1)


/* BillboardShape::AdsRaycastReport::AdsRaycastReport(BillboardShape*) */

void __thiscall
BillboardShape::AdsRaycastReport::AdsRaycastReport(AdsRaycastReport *this,BillboardShape *param_1)

{
  this[0x10] = (AdsRaycastReport)0x0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined ***)this = &PTR__IRaycastReport_00fd9928;
  *(BillboardShape **)(this + 8) = param_1;
  return;
}


