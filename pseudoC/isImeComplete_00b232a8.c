// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isImeComplete
// Entry Point: 00b232a8
// Size: 56 bytes
// Signature: undefined __cdecl isImeComplete(bool * param_1)


/* AndroidImeUtil::isImeComplete(bool&) */

bool AndroidImeUtil::isImeComplete(bool *param_1)

{
  *param_1 = (bool)(m_isImeOpen == '\0' & m_userDidCancel);
  return m_isImeOpen == '\0';
}


