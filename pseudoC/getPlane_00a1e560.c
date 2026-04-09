// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getPlane
// Entry Point: 00a1e560
// Size: 16 bytes
// Signature: undefined __thiscall getPlane(NPlaneFrustum * this, uint param_1, Plane * param_2)


/* NPlaneFrustum::getPlane(unsigned int, Plane&) const */

void __thiscall NPlaneFrustum::getPlane(NPlaneFrustum *this,uint param_1,Plane *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)(*(long *)(this + 8) + (ulong)param_1 * 0x10);
  uVar2 = *puVar1;
  *(undefined8 *)(param_2 + 8) = puVar1[1];
  *(undefined8 *)param_2 = uVar2;
  return;
}


