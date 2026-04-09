// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: intersects
// Entry Point: 00b61688
// Size: 28 bytes
// Signature: undefined __thiscall intersects(BoundingSphere * this, CullingBody * param_1)


/* BoundingSphere::intersects(CullingBody const*) const */

void __thiscall BoundingSphere::intersects(BoundingSphere *this,CullingBody *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00b616a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x18))(*(undefined4 *)(this + 0x18),param_1,this + 0xc);
  return;
}


