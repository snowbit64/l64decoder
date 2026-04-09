// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initCloud
// Entry Point: 006c9de8
// Size: 40 bytes
// Signature: undefined __thiscall initCloud(Application * this, bool param_1, char * param_2, CLOUD_DEVICE_TYPE param_3)


/* Application::initCloud(bool, char const*, CloudDeviceManager::CLOUD_DEVICE_TYPE) */

void __thiscall
Application::initCloud(Application *this,bool param_1,char *param_2,CLOUD_DEVICE_TYPE param_3)

{
  if (param_1) {
    CloudDeviceManager::createCloudDevice(param_3,param_2,*(NetworkAvailability **)(this + 400));
  }
  return;
}


