// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getLastImeStringUtf8
// Entry Point: 00b232e0
// Size: 28 bytes
// Signature: undefined getLastImeStringUtf8(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AndroidImeUtil::getLastImeStringUtf8() */

undefined8 AndroidImeUtil::getLastImeStringUtf8(void)

{
  undefined8 uVar1;
  
  uVar1 = DAT_02118650;
  if (((byte)m_lastImeString & 1) == 0) {
    uVar1 = 0x2118641;
  }
  return uVar1;
}


