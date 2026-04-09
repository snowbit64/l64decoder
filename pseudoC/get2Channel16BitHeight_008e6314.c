// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: get2Channel16BitHeight
// Entry Point: 008e6314
// Size: 20 bytes
// Signature: undefined __thiscall get2Channel16BitHeight(BaseTerrain * this, uchar * param_1, uint param_2)


/* BaseTerrain::get2Channel16BitHeight(unsigned char*, unsigned int) const */

undefined2 __thiscall
BaseTerrain::get2Channel16BitHeight(BaseTerrain *this,uchar *param_1,uint param_2)

{
  return CONCAT11(param_1[param_2],param_1[param_2 + 1]);
}


