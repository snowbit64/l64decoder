// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: checkBackend
// Entry Point: 00b1e0ec
// Size: 60 bytes
// Signature: undefined __thiscall checkBackend(DeviceMappingManager * this, NamedDeviceMapping * param_1, char * param_2)


/* DeviceMappingManager::checkBackend(DeviceMappingManager::NamedDeviceMapping const&, char const*)
    */

bool __thiscall
DeviceMappingManager::checkBackend
          (DeviceMappingManager *this,NamedDeviceMapping *param_1,char *param_2)

{
  long lVar1;
  NamedDeviceMapping *pNVar2;
  
  if (param_2 != (char *)0x0) {
    pNVar2 = *(NamedDeviceMapping **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pNVar2 = param_1 + 1;
    }
    lVar1 = StringUtil::stristr((char *)pNVar2,param_2);
    return lVar1 != 0;
  }
  return true;
}


