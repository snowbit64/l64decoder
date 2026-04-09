// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: passFilter
// Entry Point: 00dd2dc0
// Size: 44 bytes
// Signature: undefined __thiscall passFilter(dtQueryFilter * this, uint param_1, dtMeshTile * param_2, dtPoly * param_3)


/* dtQueryFilter::passFilter(unsigned int, dtMeshTile const*, dtPoly const*) const */

undefined  [16] __thiscall
dtQueryFilter::passFilter(dtQueryFilter *this,uint param_1,dtMeshTile *param_2,dtPoly *param_3)

{
  undefined auVar1 [16];
  
  auVar1._1_7_ = 0;
  auVar1[0] = (*(ushort *)(this + 0x108) & *(ushort *)(param_3 + 0x1c)) != 0 &&
              (*(ushort *)(this + 0x10a) & *(ushort *)(param_3 + 0x1c)) == 0;
  auVar1._8_4_ = param_1;
  auVar1._12_4_ = 0;
  return auVar1;
}


