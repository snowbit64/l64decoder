// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetCH
// Entry Point: 00d4bbac
// Size: 76 bytes
// Signature: undefined __thiscall GetCH(HACD * this, ulong param_1, Vec3 * param_2, Vec3 * param_3)


/* HACD::HACD::GetCH(unsigned long, HACD::Vec3<double>*, HACD::Vec3<long>*) */

bool __thiscall HACD::HACD::GetCH(HACD *this,ulong param_1,Vec3 *param_2,Vec3 *param_3)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(this + 0x68);
  if (param_1 < uVar1) {
    TMMesh::GetIFS((TMMesh *)(*(long *)(this + 0xf8) + param_1 * 0x110 + 8),param_2,param_3);
  }
  return param_1 < uVar1;
}


