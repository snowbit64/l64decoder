// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_008addac
// Entry Point: 008addac
// Size: 152 bytes
// Signature: undefined FUN_008addac(void)


void FUN_008addac(void)

{
  byte bVar1;
  
  if ((DAT_0107dad0 & 1) == 0) {
    bVar1 = DAT_0107dab8 & 1;
  }
  else {
    operator_delete(DAT_0107dae0);
    bVar1 = DAT_0107dab8 & 1;
  }
  if (bVar1 != 0) {
    operator_delete(DAT_0107dac8);
  }
  if ((DAT_0107daa0 & 1) != 0) {
    operator_delete(DAT_0107dab0);
  }
  if ((DAT_0107da88 & 1) != 0) {
    operator_delete(DAT_0107da98);
  }
  if ((LFOSettings::s_waveNames & 1) != 0) {
    operator_delete(DAT_0107da80);
    return;
  }
  return;
}


