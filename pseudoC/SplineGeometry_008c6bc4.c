// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SplineGeometry
// Entry Point: 008c6bc4
// Size: 148 bytes
// Signature: undefined __thiscall SplineGeometry(SplineGeometry * this, char * param_1, Spline * param_2)


/* SplineGeometry::SplineGeometry(char const*, Spline*) */

void __thiscall SplineGeometry::SplineGeometry(SplineGeometry *this,char *param_1,Spline *param_2)

{
  VertexBufferGeometry::VertexBufferGeometry((VertexBufferGeometry *)this,param_1,true);
                    /* try { // try from 008c6be8 to 008c6bef has its CatchHandler @ 008c6c68 */
  Streamable::Streamable((Streamable *)(this + 200));
  *(Spline **)(this + 0xd8) = param_2;
  *(undefined ***)this = &PTR__SplineGeometry_00fdded8;
  *(ulong *)(this + 0x20) = *(ulong *)(this + 0x20) | 0x400000;
  *(undefined ***)(this + 0x10) = &PTR__SplineGeometry_00fddf30;
  *(undefined ***)(this + 200) = &PTR__SplineGeometry_00fddf50;
  *(ulong *)(this + 0x30) = *(ulong *)(this + 0x30) & 0xffffffe3ffffffff | 0x10;
  *(undefined4 *)(this + 0x38) = 0x2d;
                    /* try { // try from 008c6c40 to 008c6c47 has its CatchHandler @ 008c6c58 */
  init();
  return;
}


