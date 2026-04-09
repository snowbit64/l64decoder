// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSystemVariableInfo
// Entry Point: 00c2a8ac
// Size: 148 bytes
// Signature: undefined __cdecl getSystemVariableInfo(ShaderLanguage * param_1, SystemVariableIndex param_2)


/* IR_HllConvertUtil::getSystemVariableInfo(ShaderLanguage const&,
   IR_HllConvertUtil::SystemVariableIndex) */

undefined **
IR_HllConvertUtil::getSystemVariableInfo(ShaderLanguage *param_1,SystemVariableIndex param_2)

{
  uint uVar1;
  
  uVar1 = *param_1;
  if (uVar1 < 7 && (1 << (ulong)(uVar1 & 0x1f) & 0x46U) != 0) {
    return &PTR_s_SV_POSITION_01046328 + (ulong)param_2 * 4;
  }
  if (uVar1 - 3 < 2) {
    return &PTR_s_S_POSITION_01046468 + (ulong)param_2 * 4;
  }
  if (uVar1 == 6) {
    return &PTR_s_gl_FragCoord_010465a8 + (ulong)param_2 * 4;
  }
  if (uVar1 == 5) {
    return &PTR_s_position_010466e8 + (ulong)param_2 * 4;
  }
  return (undefined **)0x0;
}


