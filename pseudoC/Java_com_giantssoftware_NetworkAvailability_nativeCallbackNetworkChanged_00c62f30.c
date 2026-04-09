// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Java_com_giantssoftware_NetworkAvailability_nativeCallbackNetworkChanged
// Entry Point: 00c62f30
// Size: 12 bytes
// Signature: undefined Java_com_giantssoftware_NetworkAvailability_nativeCallbackNetworkChanged(void)


void Java_com_giantssoftware_NetworkAvailability_nativeCallbackNetworkChanged
               (undefined8 param_1,undefined8 param_2,CONNECTION_STATUS param_3,
               NetworkAvailability *param_4)

{
  NetworkAvailability::onNetworkStatusChanged(param_4,param_3);
  return;
}


