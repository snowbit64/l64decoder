// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: btBoxBoxDetector
// Entry Point: 00f95740
// Size: 24 bytes
// Signature: undefined __thiscall btBoxBoxDetector(btBoxBoxDetector * this, btBoxShape * param_1, btBoxShape * param_2)


/* btBoxBoxDetector::btBoxBoxDetector(btBoxShape const*, btBoxShape const*) */

void __thiscall
btBoxBoxDetector::btBoxBoxDetector(btBoxBoxDetector *this,btBoxShape *param_1,btBoxShape *param_2)

{
  *(btBoxShape **)(this + 0x10) = param_2;
  *(undefined ***)this = &PTR__btDiscreteCollisionDetectorInterface_0101c368;
  *(btBoxShape **)(this + 8) = param_1;
  return;
}


